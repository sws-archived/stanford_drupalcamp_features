<?php
/**
 * @file
 * stanford_drupalcamp_layouts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_drupalcamp_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcamp_all_minus_front';
  $context->description = 'All pages except front and admin';
  $context->tag = 'DrupalCamp';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~admin*' => '~admin*',
        '~batch*' => '~batch*',
        '~node/*/edit' => '~node/*/edit',
        '~user/*/edit' => '~user/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'search_box',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages except front and admin');
  t('DrupalCamp');
  $export['drupalcamp_all_minus_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcamp_anonymous';
  $context->description = 'Things that should happen for anonymous users';
  $context->tag = 'DrupalCamp';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~/user' => '~/user',
        '~/user/*' => '~/user/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-drupalcamp-sign-up-for-drupal-ca' => array(
          'module' => 'bean',
          'delta' => 'drupalcamp-sign-up-for-drupal-ca',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCamp');
  t('Things that should happen for anonymous users');
  $export['drupalcamp_anonymous'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcamp_authenicated';
  $context->description = 'Things that should happen for authenicated users';
  $context->tag = 'DrupalCamp';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~/user' => '~/user',
        '~/user/*' => '~/user/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-drupalcamp-propose-a-session-but' => array(
          'module' => 'bean',
          'delta' => 'drupalcamp-propose-a-session-but',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCamp');
  t('Things that should happen for authenicated users');
  $export['drupalcamp_authenicated'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcamp_homepage';
  $context->description = 'DrupalCamp Home page only context.';
  $context->tag = 'DrupalCamp';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
        'bean-drupalcamp-banner' => array(
          'module' => 'bean',
          'delta' => 'drupalcamp-banner',
          'region' => 'header',
          'weight' => '-9',
        ),
        'views-4a233d1b95b1144eafc656b222b2e489' => array(
          'module' => 'views',
          'delta' => '4a233d1b95b1144eafc656b222b2e489',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCamp');
  t('DrupalCamp Home page only context.');
  $export['drupalcamp_homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcamp_sitewide';
  $context->description = 'DrupalCamp Sitewide';
  $context->tag = 'DrupalCamp';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin*' => '~admin*',
        '~*/*/edit' => '~*/*/edit',
        '~batch*' => '~batch*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-drupalcamp-twitter-block' => array(
          'module' => 'bean',
          'delta' => 'drupalcamp-twitter-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCamp');
  t('DrupalCamp Sitewide  ');
  $export['drupalcamp_sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcamp_userpage';
  $context->description = 'blocks for User page';
  $context->tag = 'DrupalCamp';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'form' => 'form',
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-drupalcamp-propose-a-session-but' => array(
          'module' => 'bean',
          'delta' => 'drupalcamp-propose-a-session-but',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCamp');
  t('blocks for User page');
  $export['drupalcamp_userpage'] = $context;

  return $export;
}
