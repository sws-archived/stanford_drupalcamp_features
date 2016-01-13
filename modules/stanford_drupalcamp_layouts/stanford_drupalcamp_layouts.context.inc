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
  $context->name = 'drupalcamp_sitewide';
  $context->description = 'DrupalCamp Home Page';
  $context->tag = 'sitewide';
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
        'user-online' => array(
          'module' => 'user',
          'delta' => 'online',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
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
  t('DrupalCamp Home Page');
  t('sitewide');
  $export['drupalcamp_sitewide'] = $context;

  return $export;
}
