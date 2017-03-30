<?php
/**
 * @file
 * feature_user_profiles.features.uuid_user.inc
 */

/**
 * Implements hook_uuid_features_default_users().
 */
function feature_user_profiles_uuid_features_default_users() {
  $users = array();

  $users[] = array(
  'name' => 'doub1ejack',
  'mail' => 'mmutrux.ew@gmail.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'basic_formatting',
  'created' => 1490657946,
  'status' => 1,
  'timezone' => 'America/New_York',
  'language' => '',
  'picture' => 0,
  'init' => 'mmutrux.ew@gmail.com',
  'data' => array(
    'ckeditor_default' => 't',
    'ckeditor_show_toggle' => 't',
    'ckeditor_width' => '100%',
    'ckeditor_lang' => 'en',
    'ckeditor_auto_lang' => 't',
  ),
  'uuid' => 'fcad2675-9901-41ee-adcd-c9ecd8f21b07',
  'roles' => array(
    2 => 'authenticated user',
    6 => 'test user',
  ),
  'field_skills' => array(
    'und' => array(
      0 => array(
        'tid' => '03da21ab-b780-4fb3-8742-43a4466d9de1',
        'uuid' => '03da21ab-b780-4fb3-8742-43a4466d9de1',
      ),
      1 => array(
        'tid' => '9e4b5310-32a9-409f-a789-3f85649bc912',
        'uuid' => '9e4b5310-32a9-409f-a789-3f85649bc912',
      ),
      2 => array(
        'tid' => '984921b3-d859-456a-b131-6fb867433cd5',
        'uuid' => '984921b3-d859-456a-b131-6fb867433cd5',
      ),
      3 => array(
        'tid' => '09971ff9-2708-43d7-b22c-03120b7d02f5',
        'uuid' => '09971ff9-2708-43d7-b22c-03120b7d02f5',
      ),
    ),
  ),
  'field_github_link' => array(
    'und' => array(
      0 => array(
        'url' => 'https://github.com/doub1ejack',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_linkedin_profile' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.linkedin.com/in/micahmutrux/',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_interests' => array(
    'und' => array(
      0 => array(
        'tid' => '2b0df55a-8fa2-4b8d-baef-5a1f92f4bce7',
        'uuid' => '2b0df55a-8fa2-4b8d-baef-5a1f92f4bce7',
      ),
      1 => array(
        'tid' => '37c28f86-768d-4e34-b86b-da3fe2129790',
        'uuid' => '37c28f86-768d-4e34-b86b-da3fe2129790',
      ),
      2 => array(
        'tid' => '0e09dd6d-e5d3-4e6a-b334-afc2ba5e525a',
        'uuid' => '0e09dd6d-e5d3-4e6a-b334-afc2ba5e525a',
      ),
    ),
  ),
  'date' => '2017-03-27 19:39:06 -0400',
);
  return $users;
}
