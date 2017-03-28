<?php
/**
 * @file
 * feature_user_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_user_profiles_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|user|user|form';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'My Profile',
    'weight' => '0',
    'children' => array(
      0 => 'field_skills',
      1 => 'field_github_link',
      2 => 'field_linkedin_profile',
      3 => 'field_interests',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'My Profile',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-profile field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('My Profile');

  return $field_groups;
}
