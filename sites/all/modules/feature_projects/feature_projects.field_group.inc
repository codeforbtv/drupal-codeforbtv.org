<?php
/**
 * @file
 * feature_projects.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_projects_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_image|node|project|form';
  $field_group->group_name = 'group_banner_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '4',
    'children' => array(
      0 => 'field_banner_image',
      1 => 'field_featured_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Images',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-banner-image field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_banner_image|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|project|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '3',
    'children' => array(
      0 => 'field_github_link',
      1 => 'field_website_link',
      2 => 'field_trello_link',
      3 => 'field_press_links',
      4 => 'group_redeployment',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_links|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_details|node|project|form';
  $field_group->group_name = 'group_page_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page';
  $field_group->data = array(
    'label' => 'Project Details',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_life_cycle',
      2 => 'field_synopsis',
      3 => 'field_skills',
      4 => 'field_attached_files',
      5 => 'field_project_tags',
      6 => 'field_summary',
      7 => 'field_slack_channel',
      8 => 'field_problem_statement',
      9 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Project Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-page-details field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_page_details|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page|node|project|form';
  $field_group->group_name = 'group_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Details',
    'weight' => '0',
    'children' => array(
      0 => 'group_banner_image',
      1 => 'group_page_details',
      2 => 'group_links',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-page field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_page|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_redeployment|node|project|form';
  $field_group->group_name = 'group_redeployment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_links';
  $field_group->data = array(
    'label' => 'Redeployment',
    'weight' => '12',
    'children' => array(
      0 => 'field_redeployment_github_link',
      1 => 'field_redeployment_website_link',
      2 => 'field_redeployment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Redeployment',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-redeployment field-group-fieldset',
        'description' => 'If this project is being redeployed from a project from another brigade, please provide links to the source.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_redeployment|node|project|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');
  t('Links');
  t('Page Details');
  t('Project Details');
  t('Redeployment');

  return $field_groups;
}
