<?php
/**
 * @file
 * feature_help_wanted.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_help_wanted_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'create help_wanted content'.
  $permissions['create help_wanted content'] = array(
    'name' => 'create help_wanted content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any help_wanted content'.
  $permissions['delete any help_wanted content'] = array(
    'name' => 'delete any help_wanted content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own help_wanted content'.
  $permissions['delete own help_wanted content'] = array(
    'name' => 'delete own help_wanted content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any help_wanted content'.
  $permissions['edit any help_wanted content'] = array(
    'name' => 'edit any help_wanted content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own help_wanted content'.
  $permissions['edit own help_wanted content'] = array(
    'name' => 'edit own help_wanted content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
