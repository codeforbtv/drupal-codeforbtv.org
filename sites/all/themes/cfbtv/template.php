<?php

/**
 * Add external stylesheets
 */
function cfbtv_preprocess_html(&$variables) {
  drupal_add_css('//openfontlibrary.org/face/alegreya', array('type' => 'external'));
}
