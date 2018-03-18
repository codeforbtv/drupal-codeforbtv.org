<?php
/**
 * @file
 * feature_projects.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_projects_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in project_life_cycle'.
  $permissions['delete terms in project_life_cycle'] = array(
    'name' => 'delete terms in project_life_cycle',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in skills'.
  $permissions['delete terms in skills'] = array(
    'name' => 'delete terms in skills',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in project_life_cycle'.
  $permissions['edit terms in project_life_cycle'] = array(
    'name' => 'edit terms in project_life_cycle',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in skills'.
  $permissions['edit terms in skills'] = array(
    'name' => 'edit terms in skills',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
