<?php
/**
 * @file
 * stanford_drupalcamp_sessions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_drupalcamp_sessions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_drupalcamp_sessions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function stanford_drupalcamp_sessions_flag_default_flags() {
  $flags = array();
  // Exported flag: "Add Session to My Schedule".
  $flags['add_session_to_my_schedule'] = array(
    'entity_type' => 'node',
    'title' => 'Add Session to My Schedule',
    'global' => 0,
    'types' => array(
      0 => 'stanford_session',
    ),
    'flag_short' => 'Add this session to my schedule',
    'flag_long' => '',
    'flag_message' => '"[node:title]" has been added to your schedule',
    'unflag_short' => 'Remove this session from my schedule',
    'unflag_long' => '',
    'unflag_message' => '"[node:title]" has been removed from your schedule',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
      'stanford_8_col_banner' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'stanford_drupalcamp_sessions',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function stanford_drupalcamp_sessions_node_info() {
  $items = array(
    'stanford_session' => array(
      'name' => t('DrupalCamp Session'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name of the Session'),
      'help' => '',
    ),
    'time_slot' => array(
      'name' => t('Time slot'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
