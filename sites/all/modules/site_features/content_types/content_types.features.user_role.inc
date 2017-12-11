<?php
/**
 * @file
 * content_types.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function content_types_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 10,
  );

  return $roles;
}
