<?php
/**
 * @file
 * feature_site_redirects.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_site_redirects_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'redirect',
  );

  return $permissions;
}
