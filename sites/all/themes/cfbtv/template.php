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
    
    // suggest themes like page__contentType.tpl.php
    __theme_page_suggestion($variables);
}

/**
 * By default Drupal does not look for a template of type "page__[contentType].tpl.php"
 * This hook suggests exactly that.  This is what allows me to set a special layout
 * for the projects page and put some project links/info in the right sidebar.
 * @param string $variables
 */
function __theme_page_suggestion(&$variables) {
    if (isset($variables['node']->type)) {
        $nodetype = $variables['node']->type;
        $variables['theme_hook_suggestions'][] = 'page__' . $nodetype;
    }
}