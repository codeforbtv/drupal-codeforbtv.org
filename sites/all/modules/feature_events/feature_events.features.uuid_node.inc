<?php
/**
 * @file
 * feature_events.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function feature_events_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Eating a sandwich',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'event',
  'language' => 'und',
  'created' => 1490567305,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '34506a23-3775-4f61-84ae-4e2facba7a3a',
  'field_date' => array(
    'und' => array(
      0 => array(
        'value' => '2017-03-31 22:30:00',
        'value2' => '2017-03-31 23:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_map' => array(
    'und' => array(
      0 => array(
        'lat' => 44.4679073,
        'lon' => -73.2148532,
        'map_width' => NULL,
        'map_height' => NULL,
        'zoom' => 18,
        'name' => '',
      ),
    ),
  ),
  'field_address' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'VT',
        'sub_administrative_area' => NULL,
        'locality' => 'Burlington',
        'dependent_locality' => '',
        'postal_code' => '05401',
        'thoroughfare' => '404 Pine St',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => 'South End Arts & Business Assoc (SEABA)',
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_event_body' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2017-03-26 18:28:25 -0400',
  'user_uuid' => '6cbd2bc7-e164-449d-b622-e8c8cf5fc2e1',
);
  return $nodes;
}
