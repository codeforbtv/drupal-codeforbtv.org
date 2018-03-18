<?php
/**
 * @file
 * feature_projects.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_projects_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_new-proposal:node/add/project.
  $menu_links['main-menu_new-proposal:node/add/project'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/project',
    'router_path' => 'node/add/project',
    'link_title' => 'New Proposal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_new-proposal:node/add/project',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:projects',
  );
  // Exported menu link: main-menu_projects:node/11.
  $menu_links['main-menu_projects:node/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_projects:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('New Proposal');
  t('Projects');

  return $menu_links;
}
