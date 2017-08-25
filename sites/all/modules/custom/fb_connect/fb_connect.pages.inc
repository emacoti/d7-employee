<?php

/**
 * @file
 * Page callbacks for Facebook Connect module.
 */

/**
 * Page callback to redirect to Facebook login page.
 */
function fb_connect_redirect_to_fb() {
  fb_connect_set_default_app();

  // FacebookRedirectLoginHelper requires session to be started.
  drupal_session_start();

  if (isset($_GET['destination'])) {
    $_SESSION['fb_connect']['destination'] = $_GET['destination'];
    unset($_GET['destination']);
  }

  $login_helper = fb_connect_get_login_helper();

  // Gets the Facebook login url.
  $scope = array(
    'public_profile',
    'email',
  );
  $api_version = 'v2.10';
  $login_url = $login_helper->getLoginUrl($scope, $api_version);

  // Redirect the user to Facebook for login.
  drupal_goto($login_url);
}

/**
 * Page callback to handle Facebook login return and redirect to destination.
 */
function fb_connect_return_from_fb() {
  fb_connect_set_default_app();

  $login_helper = fb_connect_get_login_helper();
  try {
    $fb_session = $login_helper->getSessionFromRedirect();
    if ($fb_session) {
      // Store user access token to $_SESSION.
      $_SESSION['fb_connect']['user_token'] = $fb_session->getToken();
    }
  }
  catch (Exception $ex) {
  }

  // Redirects user to where it was before login. Defaults to user page.
  $destination = 'user';
  if (isset($_SESSION['fb_connect']['destination'])) {
    $destination = $_SESSION['fb_connect']['destination'];
  }
  drupal_goto($destination, array('fragment' => 'facebook-user-matches'));
}
