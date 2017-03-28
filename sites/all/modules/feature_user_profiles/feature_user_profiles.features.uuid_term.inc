<?php
/**
 * @file
 * feature_user_profiles.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function feature_user_profiles_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Poverty',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '0e09dd6d-e5d3-4e6a-b334-afc2ba5e525a',
    'vocabulary_machine_name' => 'interests',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'interests/poverty',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Visual Art',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '18d4206d-0d33-47f8-8377-d8a356e5716d',
    'vocabulary_machine_name' => 'interests',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'interests/visual-art',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data Science',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '1ae5c7c4-517a-469d-8617-2e3310c900cf',
    'vocabulary_machine_name' => 'interests',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'interests/data-science',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Government',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '2b0df55a-8fa2-4b8d-baef-5a1f92f4bce7',
    'vocabulary_machine_name' => 'interests',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'interests/government',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Music',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '35d7d91b-5c0a-4f31-8e29-f6acdc979d60',
    'vocabulary_machine_name' => 'interests',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'interests/music',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Law Enforcement',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '37c28f86-768d-4e34-b86b-da3fe2129790',
    'vocabulary_machine_name' => 'interests',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'interests/law-enforcement',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Social Services',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '7463adb9-588a-4809-9db0-000f1016859f',
    'vocabulary_machine_name' => 'interests',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'interests/social-services',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Migrant Justice',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => 'a6da16b9-bc84-498f-91d2-60a1992254e4',
    'vocabulary_machine_name' => 'interests',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'interests/migrant-justice',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
