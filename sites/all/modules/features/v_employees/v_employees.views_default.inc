<?php
/**
 * @file
 * v_employees.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function v_employees_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'employees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Employees';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Employees';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'employee' => 'employee',
  );

  /* Display: Employees List */
  $handler = $view->new_display('block', 'Employees List', 'block');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No employees available.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_employee_last_name']['id'] = 'field_employee_last_name';
  $handler->display->display_options['fields']['field_employee_last_name']['table'] = 'field_data_field_employee_last_name';
  $handler->display->display_options['fields']['field_employee_last_name']['field'] = 'field_employee_last_name';
  $handler->display->display_options['fields']['field_employee_last_name']['label'] = 'Last Name - hidden';
  $handler->display->display_options['fields']['field_employee_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_employee_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_employee_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_employee_last_name']['type'] = 'text_plain';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_employee_first_name']['id'] = 'field_employee_first_name';
  $handler->display->display_options['fields']['field_employee_first_name']['table'] = 'field_data_field_employee_first_name';
  $handler->display->display_options['fields']['field_employee_first_name']['field'] = 'field_employee_first_name';
  $handler->display->display_options['fields']['field_employee_first_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_employee_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_employee_first_name']['alter']['text'] = '[field_employee_last_name], [field_employee_first_name]';
  $handler->display->display_options['fields']['field_employee_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_employee_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_employee_first_name']['type'] = 'text_plain';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_department']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last Name (field_employee_last_name) */
  $handler->display->display_options['sorts']['field_employee_last_name_value']['id'] = 'field_employee_last_name_value';
  $handler->display->display_options['sorts']['field_employee_last_name_value']['table'] = 'field_data_field_employee_last_name';
  $handler->display->display_options['sorts']['field_employee_last_name_value']['field'] = 'field_employee_last_name_value';
  /* Sort criterion: Content: First Name (field_employee_first_name) */
  $handler->display->display_options['sorts']['field_employee_first_name_value']['id'] = 'field_employee_first_name_value';
  $handler->display->display_options['sorts']['field_employee_first_name_value']['table'] = 'field_data_field_employee_first_name';
  $handler->display->display_options['sorts']['field_employee_first_name_value']['field'] = 'field_employee_first_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'employee' => 'employee',
  );
  /* Filter criterion: Content: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = '';
  $handler->display->display_options['filters']['field_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'department';
  $handler->display->display_options['filters']['field_department_tid']['error_message'] = FALSE;
  $export['employees'] = $view;

  return $export;
}
