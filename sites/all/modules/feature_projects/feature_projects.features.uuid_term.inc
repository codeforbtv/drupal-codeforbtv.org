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
    'name' => 'Gamification',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0247d7cf-62dd-4341-9783-3c8d1a2d75e3',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/gamification',
        'language' => 'und',
      ),
    ),
  );
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
    'name' => 'css',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '05d94118-144d-4977-ba42-0fda0e9f1298',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/css',
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
  );
  $terms[] = array(
    'name' => 'GIS',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0d9c3458-c0f7-4563-87cb-f96b9c71c70d',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/gis',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'react',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '156b017a-5c37-4e48-ab01-01f5da0819e3',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/react',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'child care',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1679f7c6-d571-4afe-92a4-c274f9b7e028',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/child-care',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'data',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1da4e44b-f620-40af-99dc-84fab4f85d9e',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/data',
        'language' => 'und',
      ),
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
    'name' => 'firebase',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2f2384c5-021d-4c02-90d6-738a3dd9546f',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/firebase',
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
    'name' => 'software design',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3fb1d9e5-9012-44f6-a6d1-cfdf44036bab',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/software-design',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'fund raising',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '407fe910-e7b3-4dd4-8585-d4567c24d29f',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/fund-raising',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IT',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '45224364-5242-486e-9e2a-5d154a5fd7b2',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/it-0',
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
    'name' => 'Municipal Support',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4b386c80-a501-43c1-835b-733a662538db',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/municipal-support',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Teachers',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6177cc46-c330-428e-8d97-64a09341acf5',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/teachers',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'environment',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6c341ef2-aa15-413d-b445-c55165ee6b62',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/environment',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'human centered design',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7e7706f5-76ce-4994-8950-a3090d447dc6',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/human-centered-design',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'web hosting',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7fa93350-b081-424c-9a2c-41ce227c4495',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/web-hosting',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Production',
    'description' => '<p>A project in production is actively being used by it\'s audience. &nbsp;Maintence at this stage is minimal since most work occurs during Development.</p>
',
    'format' => 'basic_formatting',
    'weight' => 4,
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
  );
  $terms[] = array(
    'name' => 'Community Support',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '85b2c5d3-6407-41ee-9fcc-4b818c3226b2',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/community-support',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => '3D Modeling',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '87af90e9-dcbf-4a33-a2e8-9c4661e8ebd0',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/3d-modeling',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Inactive',
    'description' => '<p>A project that has received attention in the past, but is not currently being persued. &nbsp;An inactive project is likely to be revived.</p>
',
    'format' => 'basic_formatting',
    'weight' => 5,
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
  );
  $terms[] = array(
    'name' => 'mapping',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a3bd2238-eb2f-430e-ae48-b0910c2cd024',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/mapping',
        'language' => 'und',
      ),
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
    'name' => 'Prototype',
    'description' => '',
    'format' => 'basic_formatting',
    'weight' => 3,
    'uuid' => 'b1cadfda-6851-4f32-9adb-0e727ea40c62',
    'vocabulary_machine_name' => 'project_life_cycle',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'project-life-cycle/prototype',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'food systems',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b4328e78-eb91-4a81-82cc-10022a3fe08f',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/food-systems',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'react js',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b98f4850-31aa-4fdf-bf5f-6d1bdd5322f0',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/react-js',
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
  );
  $terms[] = array(
    'name' => 'data management',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c3355268-9120-4824-b50b-edabe0160b7a',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/data-management',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'project owner',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c38df5d2-e8ad-4dab-aba9-f5cf1605b146',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/project-owner',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'project steward',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c4c76052-f436-4f06-a297-d0e31402e27a',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/project-steward',
        'language' => 'und',
      ),
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
  );
  $terms[] = array(
    'name' => 'mobile app',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cc6fdb6b-3ba9-46df-ad59-8f8c6aa40e87',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/mobile-app',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Retired',
    'description' => '<p>A project that had previously been in Production, but is no longer needed or usable. &nbsp;Retired projects are rarely revived.</p>
',
    'format' => 'basic_formatting',
    'weight' => 6,
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
    'name' => 'gigabit',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cda097f2-ed60-4a02-8229-64378c242efb',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/gigabit',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Educators',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cec11a6a-060d-46f2-af25-a8b39a96f521',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/educators',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IT',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd01a3a73-faf5-415f-b020-b145cb3780ce',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/it',
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
    'name' => 'Project Management',
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
        'alias' => 'skills/project-management',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd8234693-e679-4fa8-9241-4466d1e9f1cf',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/education',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'harassing data hoarders',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e9ea19ad-6547-4fbb-bdeb-e989a37343e7',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/harassing-data-hoarders',
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
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fb13cb97-e69c-49b2-ab4d-0896f6c4f25f',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/research',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geography',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fce7163f-d087-410b-abe7-e00035a9cea0',
    'vocabulary_machine_name' => 'skills',
    'url_alias' => array(
      0 => array(
        'alias' => 'skills/geography',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
