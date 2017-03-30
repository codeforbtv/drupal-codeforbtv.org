<?php
/**
 * @file
 * feature_site_blocks.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_site_blocks_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'block',
  );

  return $permissions;
}
