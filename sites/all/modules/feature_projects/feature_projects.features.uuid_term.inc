<?php
/**
 * @file
 * feature_projects.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function feature_projects_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'AWS',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '03da21ab-b780-4fb3-8742-43a4466d9de1',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/aws',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '47d1631b-06d3-47bd-8839-01692ddde91b',
    ),
  );
  $terms[] = array(
    'name' => 'Development',
    'description' => '<p>This is the stage during which plans are implemented, tested and refined.</p>
',
    'format' => 'basic_formatting',
    'weight' => 2,
    'uuid' => '0518d157-f437-47a4-bc36-9468be949b4a',
    'vocabulary_machine_name' => 'project_life_cycle',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'project-life-cycle/development',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Scala',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '09971ff9-2708-43d7-b22c-03120b7d02f5',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/scala',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '9291b2c4-0b8f-4ee1-bf10-d4044c6aa262',
    ),
  );
  $terms[] = array(
    'name' => 'Continuous Integration',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '1f441e69-2370-442a-bc8d-de8cc398c9e6',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/continuous-integration',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '47d1631b-06d3-47bd-8839-01692ddde91b',
    ),
  );
  $terms[] = array(
    'name' => 'Java',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '28398d9f-59ff-48c2-906a-159811b9c81c',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/java',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Proposal',
    'description' => '<p>The first stage of a project where the problem is defined and solutions are offered &amp; considered.</p>
',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '365582cd-b91a-4cec-8bb5-0cd683ba600a',
    'vocabulary_machine_name' => 'project_life_cycle',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'project-life-cycle/proposal',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'DevOps',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '47d1631b-06d3-47bd-8839-01692ddde91b',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/devops',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Production',
    'description' => '<p>A project in production is actively being used by it\'s audience. &nbsp;Maintence at this stage is minimal since most work occurs during Development.</p>
',
    'format' => 'basic_formatting',
    'weight' => 3,
    'uuid' => '814b6a0e-4179-4024-8830-700ce2e38def',
    'vocabulary_machine_name' => 'project_life_cycle',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'project-life-cycle/production',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'UX',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '83f2c128-5e95-482b-91c7-6f7b1abd9830',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/ux',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'd4fe9327-754b-4ff3-ae3e-0b30a486444c',
    ),
  );
  $terms[] = array(
    'name' => 'Programming Languages',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '9291b2c4-0b8f-4ee1-bf10-d4044c6aa262',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/programming-languages',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Inactive',
    'description' => '<p>A project that has received attention in the past, but is not currently being persued. &nbsp;An inactive project is likely to be revived.</p>
',
    'format' => 'basic_formatting',
    'weight' => 4,
    'uuid' => '94b6548b-86ec-40a1-aa05-a9de23eb74db',
    'vocabulary_machine_name' => 'project_life_cycle',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'project-life-cycle/inactive',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ruby',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '984921b3-d859-456a-b131-6fb867433cd5',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/ruby',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '9291b2c4-0b8f-4ee1-bf10-d4044c6aa262',
    ),
  );
  $terms[] = array(
    'name' => 'PHP',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => '9e4b5310-32a9-409f-a789-3f85649bc912',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/php',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '9291b2c4-0b8f-4ee1-bf10-d4044c6aa262',
    ),
  );
  $terms[] = array(
    'name' => 'Planning',
    'description' => '<p>After a proposal has been selected, planning begins. &nbsp;A successful plan will include discussions with domain experts, target users, project sponsors and technology experts.</p>
',
    'format' => 'basic_formatting',
    'weight' => 1,
    'uuid' => 'a66ae324-009e-41d3-961a-fd125bee5fb7',
    'vocabulary_machine_name' => 'project_life_cycle',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'project-life-cycle/planning',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Javascript',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => 'c1fd5627-0a61-4e72-91ab-37e54e44b4f9',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/javascript',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '9291b2c4-0b8f-4ee1-bf10-d4044c6aa262',
    ),
  );
  $terms[] = array(
    'name' => 'Graphic Design',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => 'c843cad2-1de1-4261-9c37-c64033199953',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/graphic-design',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'd4fe9327-754b-4ff3-ae3e-0b30a486444c',
    ),
  );
  $terms[] = array(
    'name' => 'Retired',
    'description' => '<p>A project that had previously been in Production, but is no longer needed or usable. &nbsp;Retired projects are rarely revived.</p>
',
    'format' => 'basic_formatting',
    'weight' => 5,
    'uuid' => 'cd339a3e-af76-45d8-825c-8baf818fb324',
    'vocabulary_machine_name' => 'project_life_cycle',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'project-life-cycle/retired',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Design',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => 'd4fe9327-754b-4ff3-ae3e-0b30a486444c',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/design',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Management',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => 'd5704f11-24a0-4e8d-9244-4684ba72bb5b',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/management',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'UI',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 0,
    'uuid' => 'f0f9ec4d-fea4-4441-91c0-e3e135687abf',
    'vocabulary_machine_name' => 'skills',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/ui',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'd4fe9327-754b-4ff3-ae3e-0b30a486444c',
    ),
  );
  return $terms;
}
