<?php
/**
 * @file
 * ct_employee.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ct_employee_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create employee content'.
  $permissions['create employee content'] = array(
    'name' => 'create employee content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any employee content'.
  $permissions['delete any employee content'] = array(
    'name' => 'delete any employee content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own employee content'.
  $permissions['delete own employee content'] = array(
    'name' => 'delete own employee content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any employee content'.
  $permissions['edit any employee content'] = array(
    'name' => 'edit any employee content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own employee content'.
  $permissions['edit own employee content'] = array(
    'name' => 'edit own employee content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
