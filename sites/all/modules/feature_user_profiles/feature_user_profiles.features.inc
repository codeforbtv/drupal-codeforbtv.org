<?php
/**
 * @file
 * feature_user_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_user_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
