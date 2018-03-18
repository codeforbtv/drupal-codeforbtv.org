<?php
/**
 * @file
 * feature_projects.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_projects_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|project|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'project';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|project|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_projects_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_problem_statement',
        1 => 'body',
        2 => 'field_attached_files',
        3 => 'comments',
      ),
    ),
    'fields' => array(
      'field_problem_statement' => 'ds_content',
      'body' => 'ds_content',
      'field_attached_files' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|project|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_featured_image',
      ),
      'right' => array(
        0 => 'title',
        1 => 'field_summary',
        2 => 'field_life_cycle',
      ),
    ),
    'fields' => array(
      'field_featured_image' => 'left',
      'title' => 'right',
      'field_summary' => 'right',
      'field_life_cycle' => 'right',
    ),
  );
  $export['node|project|teaser'] = $ds_layout;

  return $export;
}
