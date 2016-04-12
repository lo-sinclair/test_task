<?php
/**
 * @file
 * test_task.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function test_task_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
