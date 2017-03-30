<?php
/**
 * @file
 * feature_articles.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function feature_articles_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Here\'s an article...',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'und',
  'created' => 1490790391,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '98710703-c64f-486e-ac97-6d77ad001bb7',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>It\'s short.</p>
',
        'summary' => '',
        'format' => 'basic_formatting',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_primary_image' => array(
    'und' => array(
      0 => array(
        'fid' => 7,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2017-03-29 08:26:31 -0400',
  'user_uuid' => '6cbd2bc7-e164-449d-b622-e8c8cf5fc2e1',
);
  return $nodes;
}
