<?php
/**
 * @file
 * stanford_drupalcamp_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_drupalcamp_sponsors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_drupalcamp_sponsors_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stanford_drupalcamp_sponsors_node_info() {
  $items = array(
    'stanford_sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Drupal Camp sponsor'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}