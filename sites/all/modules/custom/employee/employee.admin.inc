<?php

/**
 * @file
 * Administrative forms for Employee module.
 */

/**
 * Form constructor for the employee settings form.
 */
function employee_settings_form($form, $form_state) {
  $form['employee_user'] = array(
    '#type'        => 'fieldset',
    '#title'       => t('Employee User Settings'),
    '#description' => t('Settings for the user associated to an employee.'),
    '#collapsible' => FALSE,
    '#collapsed'   => FALSE,
  );

  $form['employee_user']['employee_mail_domain'] = array(
    '#type'          => 'textfield',
    '#title'         => t('User mail domain'),
    '#description'   => t('The mail domain for the user mail.'),
    '#default_value' => variable_get('employee_mail_domain', 'site.com'),
  );

  return system_settings_form($form);
}
