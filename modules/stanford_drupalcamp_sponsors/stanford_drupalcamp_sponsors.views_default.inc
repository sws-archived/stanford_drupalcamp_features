<?php
/**
 * @file
 * stanford_drupalcamp_sponsors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_drupalcamp_sponsors_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_s_sponsor_logo']['id'] = 'field_s_sponsor_logo';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['table'] = 'field_data_field_s_sponsor_logo';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['field'] = 'field_s_sponsor_logo';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['settings'] = array(
    'image_style' => 'large-scaled',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Sponsorship Level */
  $handler->display->display_options['fields']['field_s_sponsorship_level']['id'] = 'field_s_sponsorship_level';
  $handler->display->display_options['fields']['field_s_sponsorship_level']['table'] = 'field_data_field_s_sponsorship_level';
  $handler->display->display_options['fields']['field_s_sponsorship_level']['field'] = 'field_s_sponsorship_level';
  $handler->display->display_options['fields']['field_s_sponsorship_level']['label'] = '';
  $handler->display->display_options['fields']['field_s_sponsorship_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_sponsorship_level']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_sponsorship_level']['alter']['text'] = '[field_s_sponsorship_level] Sponsors';
  $handler->display->display_options['fields']['field_s_sponsorship_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_sponsorship_level']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_sponsor' => 'stanford_sponsor',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_s_sponsorship_level',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p class="summary">Stanford Drupal Camp would like to thank our sponsors for making this event possible.</p>
<p>If you are interested in being a sponsor, please contact <a href="mailto:drupalcamp@lists.stanford.edu">drupalcamp@lists.stanford.edu</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'content_editor_text_format';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_s_sponsor_logo']['id'] = 'field_s_sponsor_logo';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['table'] = 'field_data_field_s_sponsor_logo';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['field'] = 'field_s_sponsor_logo';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['settings'] = array(
    'image_style' => 'large-scaled',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Sponsorship Level */
  $handler->display->display_options['fields']['field_s_sponsorship_level']['id'] = 'field_s_sponsorship_level';
  $handler->display->display_options['fields']['field_s_sponsorship_level']['table'] = 'field_data_field_s_sponsorship_level';
  $handler->display->display_options['fields']['field_s_sponsorship_level']['field'] = 'field_s_sponsorship_level';
  $handler->display->display_options['fields']['field_s_sponsorship_level']['label'] = '';
  $handler->display->display_options['fields']['field_s_sponsorship_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_sponsorship_level']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_sponsorship_level']['alter']['text'] = '[field_s_sponsorship_level] Sponsors';
  $handler->display->display_options['fields']['field_s_sponsorship_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_sponsorship_level']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['path'] = 'sponsors';
  $handler->display->display_options['menu']['title'] = 'Sponsors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Gold Sponsors Block */
  $handler = $view->new_display('block', 'Gold Sponsors Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gold Sponsors';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_s_sponsor_logo']['id'] = 'field_s_sponsor_logo';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['table'] = 'field_data_field_s_sponsor_logo';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['field'] = 'field_s_sponsor_logo';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_sponsor_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_sponsor' => 'stanford_sponsor',
  );
  /* Filter criterion: Content: Sponsorship Level (field_s_sponsorship_level) */
  $handler->display->display_options['filters']['field_s_sponsorship_level_tid']['id'] = 'field_s_sponsorship_level_tid';
  $handler->display->display_options['filters']['field_s_sponsorship_level_tid']['table'] = 'field_data_field_s_sponsorship_level';
  $handler->display->display_options['filters']['field_s_sponsorship_level_tid']['field'] = 'field_s_sponsorship_level_tid';
  $handler->display->display_options['filters']['field_s_sponsorship_level_tid']['value'] = array(
    0 => '233',
  );
  $handler->display->display_options['filters']['field_s_sponsorship_level_tid']['vocabulary'] = 'sponsorship_level';
  $handler->display->display_options['block_caching'] = '8';
  $export['sponsors'] = $view;

  return $export;
}
