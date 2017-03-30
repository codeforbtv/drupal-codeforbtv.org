<?php
/**
 * @file
 * feature_site_blocks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_site_blocks_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Project Synopsis */
  $handler->display->display_options['fields']['field_synopsis']['id'] = 'field_synopsis';
  $handler->display->display_options['fields']['field_synopsis']['table'] = 'field_data_field_synopsis';
  $handler->display->display_options['fields']['field_synopsis']['field'] = 'field_synopsis';
  $handler->display->display_options['fields']['field_synopsis']['label'] = '';
  $handler->display->display_options['fields']['field_synopsis']['element_label_colon'] = FALSE;
  /* Field: Content: Life Cycle */
  $handler->display->display_options['fields']['field_life_cycle']['id'] = 'field_life_cycle';
  $handler->display->display_options['fields']['field_life_cycle']['table'] = 'field_data_field_life_cycle';
  $handler->display->display_options['fields']['field_life_cycle']['field'] = 'field_life_cycle';
  $handler->display->display_options['fields']['field_life_cycle']['label'] = 'Status';
  $handler->display->display_options['fields']['field_life_cycle']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['featured_projects'] = $view;

  return $export;
}
