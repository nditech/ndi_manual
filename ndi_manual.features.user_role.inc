<?php
/**
 * @file
 * ndi_manual.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ndi_manual_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  // Exported role: content manager.
  $roles['content manager'] = array(
    'name' => 'content manager',
    'weight' => 2,
  );

  // Exported role: content manager with user permissions.
  $roles['content manager with user permissions'] = array(
    'name' => 'content manager with user permissions',
    'weight' => 3,
  );

  return $roles;
}
