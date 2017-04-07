<?php

/**
 * Add external stylesheets
 */
function cfbtv_preprocess_html(&$variables) {
  drupal_add_css('//openfontlibrary.org/face/alegreya', array('type' => 'external'));
}

/**
 * Make settings variables available to templates
 * @param array $variables
 * @param type $hook
 */
function cfbtv_preprocess_page(&$variables, $hook) {
    $fid = theme_get_setting('hero_image_file', "cfbtv");
    if(isset($fid) && file_load($fid) && !variable_get('hero_image_url')) {
        variable_set('hero_image_url', file_create_url(file_load($fid)->uri)); 
    }
}