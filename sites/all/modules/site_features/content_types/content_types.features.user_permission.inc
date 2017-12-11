<?php
/**
 * @file
 * content_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format editor'.
  $permissions['use text format editor'] = array(
    'name' => 'use text format editor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
