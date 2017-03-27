<?php
/**
 * @file
 * feature_projects.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_projects_taxonomy_default_vocabularies() {
  return array(
    'project_life_cycle' => array(
      'name' => 'Project Life Cycle',
      'machine_name' => 'project_life_cycle',
      'description' => 'The different stages in a project\'s life cycle',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'skills' => array(
      'name' => 'Skills',
      'machine_name' => 'skills',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
