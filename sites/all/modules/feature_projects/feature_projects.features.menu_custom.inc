<?php
/**
 * @file
 * feature_projects.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_projects_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> is displayed at the top of the site, but does not include user-specific links like "Log Out".',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('The <em>Main</em> is displayed at the top of the site, but does not include user-specific links like "Log Out".');

  return $menus;
}
