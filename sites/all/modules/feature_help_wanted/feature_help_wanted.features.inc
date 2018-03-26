<?php
/**
 * @file
 * feature_help_wanted.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_help_wanted_node_info() {
  $items = array(
    'help_wanted' => array(
      'name' => t('Help Wanted'),
      'base' => 'node_content',
      'description' => t('Skills and responsibilities needed for a project.'),
      'has_title' => '1',
      'title_label' => t('Type'),
      'help' => t('Try not to recreate existing Help Wanted postings - look at the available list first.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
