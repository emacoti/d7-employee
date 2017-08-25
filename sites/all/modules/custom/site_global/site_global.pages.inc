<?php

/**
 * @file
 * Page callbacks for Global Site Config module.
 */

/**
 * Page callback to render the site homepage.
 */
function site_global_homepage() {
  // Get the markup for the employees block view.
  $view_block   = block_load('views', 'employees-block');
  $render_array = _block_get_renderable_array(_block_render_blocks(array($view_block)));
  $output       = render($render_array);

  return $output;
}
