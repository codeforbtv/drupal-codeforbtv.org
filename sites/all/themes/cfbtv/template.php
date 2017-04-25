<?php

/**
 * Add external stylesheets & assets
 */
function cfbtv_preprocess_html(&$variables) {
    
    // add primary CfBTV font
    drupal_add_css('//openfontlibrary.org/face/alegreya', array('type' => 'external'));
    
    // add font-awesome fonts (but remember the perfomance hit :/ )
    $filepath = path_to_theme() . '/assets/font-awesome-4.7.0/css/font-awesome.min.css';
    drupal_add_css($filepath, array('group' => CSS_THEME));
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
 * Prevent query strings from being added to css files in dev environments.  The
 * query string makes it hard from chrome tools to persist changes to disk.  Note
 * that this requires you to have set the 'environment' variable in your local 
 * settings.php file.
 * 
 * @see http://drupal.stackexchange.com/questions/33603/prevent-css-js-query-hash-when-preformance-is-disabled
 * @param type $vars
 */
function cfbtv_process_html(&$vars) {
  if (variable_get('environment') == 'development' && !stristr($_GET['q'],'flush-cache')) {
    $vars['styles'] = preg_replace('/\.css\?.*"/','.css"', $vars['styles']);
  }
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