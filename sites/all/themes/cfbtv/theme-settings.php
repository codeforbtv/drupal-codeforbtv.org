<?php

/**
 * @file
 * theme-settings.php
 *
 * Provides additional  theme settings for CfBTV
 *
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function cfbtv_form_system_theme_settings_alter(&$form, $form_state, $form_id = NULL) {

    // Create vertical tabs for all Bootstrap related settings.
    $form['cfbtv'] = array(
        '#type' => 'vertical_tabs',
        '#attached' => array(
            'js' => array(drupal_get_path('theme', 'bootstrap') . '/js/bootstrap.admin.js'),
        ),
        '#prefix' => '<h2><small>' . t('Additional CfBTV Settings') . '</small></h2>',
        '#weight' => -10,
    );

    // Homepage.
    $form['homepage'] = array(
        '#type' => 'fieldset',
        '#title' => t('Homepage'),
        '#group' => 'cfbtv',
    );
    
    // force image to save & show upload form
    $hero_image_file = theme_get_setting('hero_image_file');
    if (!empty($hero_image_file)) { _permanently_save_image('hero_image_file', $form_state['build_info']['args'][0]); }
    $form['homepage']['hero_image_file'] = array(
        '#type' => 'managed_file',
        '#title' => t('Hero Background Image'),
        '#required' => FALSE,
        '#upload_location' => file_default_scheme() . '://theme/images/backgrounds/',
        '#default_value' => theme_get_setting('hero_image_file'),
        '#upload_validators' => array(
            'file_validate_extensions' => array('gif png jpg jpeg'),
        ),
    );
}

/**
 * This is necessary because images are handled (or possibly mis-handled) strangely
 * in themes.  Because they do not automatically trigger a row in the "file_usage"
 * table, Drupal will remove them the next time cron runs.
 * 
 * I pulled this solution from http://drupal.stackexchange.com/questions/124373#136911
 * 
 * @param type $image
 * @param type $theme
 */
function _permanently_save_image($image, $theme) {
  $fid = theme_get_setting($image, $theme);
  if ($fid > 0) {
    $file = file_load($fid);
    if (is_object($file) && $file->status == 0) {
      $file->status = FILE_STATUS_PERMANENT;
      file_save($file);
      file_usage_add($file, $theme, 'theme', 1);
      drupal_set_message($image . ' set as homepage hero image.', 'status');
    }
  }
}