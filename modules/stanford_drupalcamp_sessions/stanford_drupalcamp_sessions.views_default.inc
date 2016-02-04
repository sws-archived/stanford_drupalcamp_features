<?php
/**
 * @file
 * stanford_drupalcamp_sessions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_drupalcamp_sessions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'drupalcamp_my_schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Schedule and Flagged Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_s_audience' => 'field_s_audience',
    'field_s_speakers' => 'field_s_speakers',
    'field_s_track' => 'field_s_track',
    'field_s_session_status' => 'field_s_session_status',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_audience' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_speakers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_track' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_session_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_s_audience']['id'] = 'field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['table'] = 'field_data_field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['field'] = 'field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_audience']['delta_offset'] = '0';
  /* Field: Content: Speaker/Moderator(s) */
  $handler->display->display_options['fields']['field_s_speakers']['id'] = 'field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['table'] = 'field_data_field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['field'] = 'field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['label'] = 'Registered Speaker(s)';
  $handler->display->display_options['fields']['field_s_speakers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_s_speakers']['delta_offset'] = '0';
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_s_track']['id'] = 'field_s_track';
  $handler->display->display_options['fields']['field_s_track']['table'] = 'field_data_field_s_track';
  $handler->display->display_options['fields']['field_s_track']['field'] = 'field_s_track';
  $handler->display->display_options['fields']['field_s_track']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_track']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_session' => 'stanford_session',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: My Schedule */
  $handler = $view->new_display('page', 'My Schedule', 'my_schedule');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Schedule';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_s_speakers' => 'field_s_speakers',
    'field_s_day' => 'field_s_day',
    'field_location' => 'field_location',
    'field_s_time' => 'field_s_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_speakers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_day' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_time' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'time';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'time' => 'time',
    'audience' => 0,
    'stanford_slide_category' => 0,
    'sponsorship_level' => 0,
    'tags' => 0,
    'track' => 0,
  );
  /* Relationship: Flags: add_session_to_my_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'add_session_to_my_schedule';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_speakers_target_id']['id'] = 'field_s_speakers_target_id';
  $handler->display->display_options['relationships']['field_s_speakers_target_id']['table'] = 'field_data_field_s_speakers';
  $handler->display->display_options['relationships']['field_s_speakers_target_id']['field'] = 'field_s_speakers_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_s_speakers_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['delta_offset'] = '0';
  /* Field: Content: Session Day */
  $handler->display->display_options['fields']['field_session_day']['id'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day']['table'] = 'field_data_field_session_day';
  $handler->display->display_options['fields']['field_session_day']['field'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day']['settings'] = array(
    'format_type' => 'stanford_date_year_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Time Slot */
  $handler->display->display_options['fields']['field_session_time_slot']['id'] = 'field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['table'] = 'field_data_field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['field'] = 'field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_s_track']['id'] = 'field_s_track';
  $handler->display->display_options['fields']['field_s_track']['table'] = 'field_data_field_s_track';
  $handler->display->display_options['fields']['field_s_track']['field'] = 'field_s_track';
  $handler->display->display_options['fields']['field_s_track']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_track']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Session Day (field_session_day) */
  $handler->display->display_options['sorts']['field_session_day_value']['id'] = 'field_session_day_value';
  $handler->display->display_options['sorts']['field_session_day_value']['table'] = 'field_data_field_session_day';
  $handler->display->display_options['sorts']['field_session_day_value']['field'] = 'field_session_day_value';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Location (field_location) */
  $handler->display->display_options['sorts']['field_location_value']['id'] = 'field_location_value';
  $handler->display->display_options['sorts']['field_location_value']['table'] = 'field_data_field_location';
  $handler->display->display_options['sorts']['field_location_value']['field'] = 'field_location_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'schedule/mine';
  $handler->display->display_options['menu']['title'] = 'My Schedule';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Flagged Sessions */
  $handler = $view->new_display('page', 'Flagged Sessions', 'flags');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Flagged Sessions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: add_session_to_my_schedule counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'add_session_to_my_schedule';
  /* Relationship: Flags: add_session_to_my_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Content Flagged by Users';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'add_session_to_my_schedule';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'User Who Flagged';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Flags: Flag counter */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'flag_counts';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['sorts']['count']['order'] = 'DESC';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_session' => 'stanford_session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Session Status (field_s_session_status) */
  $handler->display->display_options['filters']['field_s_session_status_value']['id'] = 'field_s_session_status_value';
  $handler->display->display_options['filters']['field_s_session_status_value']['table'] = 'field_data_field_s_session_status';
  $handler->display->display_options['filters']['field_s_session_status_value']['field'] = 'field_s_session_status_value';
  $handler->display->display_options['filters']['field_s_session_status_value']['value'] = array(
    'scheduled' => 'scheduled',
  );
  $handler->display->display_options['path'] = 'admin/sessions/flags';
  $handler->display->display_options['menu']['title'] = 'Manage Sessions';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  $export["drupalcamp_my_schedule"] = $view;

  $view = new view();
  $view->name = 'drupalcamp_schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Schedule';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Schedule';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Coming soon';
  $handler->display->display_options['empty']['area']['format'] = 'content_editor_text_format';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_speakers_target_id']['id'] = 'field_s_speakers_target_id';
  $handler->display->display_options['relationships']['field_s_speakers_target_id']['table'] = 'field_data_field_s_speakers';
  $handler->display->display_options['relationships']['field_s_speakers_target_id']['field'] = 'field_s_speakers_target_id';
  /* Relationship: Flags: add_session_to_my_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'add_session_to_my_schedule';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Speaker/Moderator(s) */
  $handler->display->display_options['fields']['field_s_speakers']['id'] = 'field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['table'] = 'field_data_field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['field'] = 'field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['label'] = 'Speaker(s) or Moderator(s)';
  $handler->display->display_options['fields']['field_s_speakers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_s_speakers']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_s_location']['id'] = 'field_s_location';
  $handler->display->display_options['fields']['field_s_location']['table'] = 'field_data_field_s_location';
  $handler->display->display_options['fields']['field_s_location']['field'] = 'field_s_location';
  $handler->display->display_options['fields']['field_s_location']['label'] = 'Time and Location';
  $handler->display->display_options['fields']['field_s_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_location']['alter']['text'] = '[field_s_time], [field_s_location]';
  $handler->display->display_options['fields']['field_s_location']['delta_offset'] = '0';
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_s_audience']['id'] = 'field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['table'] = 'field_data_field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['field'] = 'field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_audience']['delta_offset'] = '0';
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_s_track']['id'] = 'field_s_track';
  $handler->display->display_options['fields']['field_s_track']['table'] = 'field_data_field_s_track';
  $handler->display->display_options['fields']['field_s_track']['field'] = 'field_s_track';
  $handler->display->display_options['fields']['field_s_track']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_track']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['date_argument']['title'] = 'Session Schedule For %1';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['date_argument']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['date_argument']['use_fromto'] = 'no';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_s_session_day.field_s_session_day_value' => 'field_data_field_s_session_day.field_s_session_day_value',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_session' => 'stanford_session',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Schedule */
  $handler = $view->new_display('page', 'Schedule', 'all_sessions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Session Schedule';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-row-lines';
  $handler->display->display_options['display_description'] = 'Schedule Grouped By Time Slot';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_s_session_time_slot',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_speakers_target_id']['id'] = 'field_s_speakers_target_id';
  $handler->display->display_options['relationships']['field_s_speakers_target_id']['table'] = 'field_data_field_s_speakers';
  $handler->display->display_options['relationships']['field_s_speakers_target_id']['field'] = 'field_s_speakers_target_id';
  /* Relationship: Flags: add_session_to_my_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'add_session_to_my_schedule';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'time' => 'time',
    'audience' => 0,
    'stanford_slide_category' => 0,
    'sponsorship_level' => 0,
    'tags' => 0,
    'track' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Speaker/Moderator(s) */
  $handler->display->display_options['fields']['field_s_speakers']['id'] = 'field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['table'] = 'field_data_field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['field'] = 'field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['label'] = 'Speaker(s) or Moderator(s)';
  $handler->display->display_options['fields']['field_s_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_speakers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_s_speakers']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_s_location']['id'] = 'field_s_location';
  $handler->display->display_options['fields']['field_s_location']['table'] = 'field_data_field_s_location';
  $handler->display->display_options['fields']['field_s_location']['field'] = 'field_s_location';
  $handler->display->display_options['fields']['field_s_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_location']['delta_offset'] = '0';
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_s_audience']['id'] = 'field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['table'] = 'field_data_field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['field'] = 'field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['label'] = '';
  $handler->display->display_options['fields']['field_s_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_audience']['delta_offset'] = '0';
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_s_track']['id'] = 'field_s_track';
  $handler->display->display_options['fields']['field_s_track']['table'] = 'field_data_field_s_track';
  $handler->display->display_options['fields']['field_s_track']['field'] = 'field_s_track';
  $handler->display->display_options['fields']['field_s_track']['label'] = '';
  $handler->display->display_options['fields']['field_s_track']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_track']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_track']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_track']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>[title]</div>
<div class="indent">
  <div><strong> Location:</strong> [field_s_location]</div>
  <div><strong>Audience</strong> [field_s_audience]</div>
  <div><strong>Track(s):</strong> [field_s_track]</div>
  <div><strong>Speaker/Moderator(s):</strong> [field_s_speakers]</div>
  <div>[edit_node]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Content: Time Slot */
  $handler->display->display_options['fields']['field_s_session_time_slot']['id'] = 'field_s_session_time_slot';
  $handler->display->display_options['fields']['field_s_session_time_slot']['table'] = 'field_data_field_s_session_time_slot';
  $handler->display->display_options['fields']['field_s_session_time_slot']['field'] = 'field_s_session_time_slot';
  $handler->display->display_options['fields']['field_s_session_time_slot']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_session_time_slot']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_session' => 'stanford_session',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'schedule/%';
  $handler->display->display_options['menu']['title'] = 'Friday Schedule';
  $handler->display->display_options['menu']['description'] = 'Schedule for Friday, April 10th';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['drupalcamp_schedule'] = $view;

  $view = new view();
  $view->name = 'drupalcamp_sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_s_audience' => 'field_s_audience',
    'field_s_speakers' => 'field_s_speakers',
    'field_s_track' => 'field_s_track',
    'field_s_session_status' => 'field_s_session_status',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_audience' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_speakers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_track' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_session_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_s_audience']['id'] = 'field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['table'] = 'field_data_field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['field'] = 'field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_audience']['delta_offset'] = '0';
  /* Field: Content: Speaker/Moderator(s) */
  $handler->display->display_options['fields']['field_s_speakers']['id'] = 'field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['table'] = 'field_data_field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['field'] = 'field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['label'] = 'Registered Speaker(s)';
  $handler->display->display_options['fields']['field_s_speakers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_s_speakers']['delta_offset'] = '0';
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_s_track']['id'] = 'field_s_track';
  $handler->display->display_options['fields']['field_s_track']['table'] = 'field_data_field_s_track';
  $handler->display->display_options['fields']['field_s_track']['field'] = 'field_s_track';
  $handler->display->display_options['fields']['field_s_track']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_track']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_session' => 'stanford_session',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: All Sessions */
  $handler = $view->new_display('page', 'All Sessions', 'all_sessions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_session' => 'stanford_session',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'sessions';
  $handler->display->display_options['menu']['title'] = 'Sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Proposed Sessions */
  $handler = $view->new_display('page', 'Proposed Sessions', 'proposed_sessions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Proposed Sessions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_session' => 'stanford_session',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Session Status (field_s_session_status) */
  $handler->display->display_options['filters']['field_s_session_status_value']['id'] = 'field_s_session_status_value';
  $handler->display->display_options['filters']['field_s_session_status_value']['table'] = 'field_data_field_s_session_status';
  $handler->display->display_options['filters']['field_s_session_status_value']['field'] = 'field_s_session_status_value';
  $handler->display->display_options['filters']['field_s_session_status_value']['value'] = array(
    'Submitted' => 'Submitted',
    'Accepted' => 'Accepted',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['nid']['value']['value'] = '[^173,175]';
  $handler->display->display_options['path'] = 'sessions/proposed';
  $handler->display->display_options['menu']['title'] = 'Proposed Sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Accepted Sessions */
  $handler = $view->new_display('page', 'Accepted Sessions', 'accepted_sessions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Accepted Sessions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_session' => 'stanford_session',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Session Status (field_s_session_status) */
  $handler->display->display_options['filters']['field_s_session_status_value']['id'] = 'field_s_session_status_value';
  $handler->display->display_options['filters']['field_s_session_status_value']['table'] = 'field_data_field_s_session_status';
  $handler->display->display_options['filters']['field_s_session_status_value']['field'] = 'field_s_session_status_value';
  $handler->display->display_options['filters']['field_s_session_status_value']['value'] = array(
    'Accepted' => 'Accepted',
  );
  $handler->display->display_options['path'] = 'sessions/accepted';
  $handler->display->display_options['menu']['title'] = 'Accepted Sessions';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My Proposed Sessions */
  $handler = $view->new_display('block', 'My Proposed Sessions', 'my_proposed_sessions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Proposed Sessions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_session' => 'stanford_session',
  );

  /* Display: Manage Sessions */
  $handler = $view->new_display('page', 'Manage Sessions', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Sessions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_s_audience' => 'field_s_audience',
    'field_s_speakers' => 'field_s_speakers',
    'count' => 'count',
    'field_s_day' => 'field_s_day',
    'field_s_time' => 'field_s_time',
    'field_s_location' => 'field_s_location',
    'name' => 'name',
    'field_s_track' => 'field_s_track',
    'field_s_session_status' => 'field_s_session_status',
    'status' => 'status',
    'created' => 'created',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_audience' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_speakers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_day' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_time' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_location' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_track' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_session_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: add_session_to_my_schedule counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'add_session_to_my_schedule';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mollom_action_unpublish_node' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_s_audience']['id'] = 'field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['table'] = 'field_data_field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['field'] = 'field_s_audience';
  $handler->display->display_options['fields']['field_s_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_audience']['delta_offset'] = '0';
  /* Field: Content: Speaker/Moderator(s) */
  $handler->display->display_options['fields']['field_s_speakers']['id'] = 'field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['table'] = 'field_data_field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['field'] = 'field_s_speakers';
  $handler->display->display_options['fields']['field_s_speakers']['label'] = 'Registered Speaker(s)';
  $handler->display->display_options['fields']['field_s_speakers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_speakers']['delta_offset'] = '0';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Flags';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_s_day']['id'] = 'field_s_day';
  $handler->display->display_options['fields']['field_s_day']['table'] = 'field_data_field_s_day';
  $handler->display->display_options['fields']['field_s_day']['field'] = 'field_s_day';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_s_time']['id'] = 'field_s_time';
  $handler->display->display_options['fields']['field_s_time']['table'] = 'field_data_field_s_time';
  $handler->display->display_options['fields']['field_s_time']['field'] = 'field_s_time';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_s_location']['id'] = 'field_s_location';
  $handler->display->display_options['fields']['field_s_location']['table'] = 'field_data_field_s_location';
  $handler->display->display_options['fields']['field_s_location']['field'] = 'field_s_location';
  $handler->display->display_options['fields']['field_s_location']['delta_offset'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Node Author';
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_s_track']['id'] = 'field_s_track';
  $handler->display->display_options['fields']['field_s_track']['table'] = 'field_data_field_s_track';
  $handler->display->display_options['fields']['field_s_track']['field'] = 'field_s_track';
  $handler->display->display_options['fields']['field_s_track']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_track']['delta_offset'] = '0';
  /* Field: Content: Session Status */
  $handler->display->display_options['fields']['field_s_session_status']['id'] = 'field_s_session_status';
  $handler->display->display_options['fields']['field_s_session_status']['table'] = 'field_data_field_s_session_status';
  $handler->display->display_options['fields']['field_s_session_status']['field'] = 'field_s_session_status';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_session' => 'stanford_session',
  );
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Session Status (field_s_session_status) */
  $handler->display->display_options['filters']['field_s_session_status_value']['id'] = 'field_s_session_status_value';
  $handler->display->display_options['filters']['field_s_session_status_value']['table'] = 'field_data_field_s_session_status';
  $handler->display->display_options['filters']['field_s_session_status_value']['field'] = 'field_s_session_status_value';
  $handler->display->display_options['filters']['field_s_session_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_session_status_value']['expose']['operator_id'] = 'field_s_session_status_value_op';
  $handler->display->display_options['filters']['field_s_session_status_value']['expose']['label'] = 'Session Status';
  $handler->display->display_options['filters']['field_s_session_status_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_s_session_status_value']['expose']['operator'] = 'field_s_session_status_value_op';
  $handler->display->display_options['filters']['field_s_session_status_value']['expose']['identifier'] = 'field_s_session_status_value';
  $handler->display->display_options['filters']['field_s_session_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_s_session_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_s_day_value']['id'] = 'field_s_day_value';
  $handler->display->display_options['filters']['field_s_day_value']['table'] = 'field_data_field_s_day';
  $handler->display->display_options['filters']['field_s_day_value']['field'] = 'field_s_day_value';
  $handler->display->display_options['filters']['field_s_day_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_day_value']['expose']['operator_id'] = 'field_s_day_value_op';
  $handler->display->display_options['filters']['field_s_day_value']['expose']['label'] = 'Day';
  $handler->display->display_options['filters']['field_s_day_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_s_day_value']['expose']['operator'] = 'field_s_day_value_op';
  $handler->display->display_options['filters']['field_s_day_value']['expose']['identifier'] = 'field_s_day_value';
  $handler->display->display_options['filters']['field_s_day_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_s_day_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Location (field_s_location) */
  $handler->display->display_options['filters']['field_s_location_value']['id'] = 'field_s_location_value';
  $handler->display->display_options['filters']['field_s_location_value']['table'] = 'field_data_field_s_location';
  $handler->display->display_options['filters']['field_s_location_value']['field'] = 'field_s_location_value';
  $handler->display->display_options['filters']['field_s_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_location_value']['expose']['operator_id'] = 'field_s_location_value_op';
  $handler->display->display_options['filters']['field_s_location_value']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_s_location_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_s_location_value']['expose']['operator'] = 'field_s_location_value_op';
  $handler->display->display_options['filters']['field_s_location_value']['expose']['identifier'] = 'field_s_location_value';
  $handler->display->display_options['filters']['field_s_location_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_s_location_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_s_time_tid']['id'] = 'field_s_time_tid';
  $handler->display->display_options['filters']['field_s_time_tid']['table'] = 'field_data_field_s_time';
  $handler->display->display_options['filters']['field_s_time_tid']['field'] = 'field_s_time_tid';
  $handler->display->display_options['filters']['field_s_time_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_time_tid']['expose']['operator_id'] = 'field_s_time_tid_op';
  $handler->display->display_options['filters']['field_s_time_tid']['expose']['label'] = 'Time';
  $handler->display->display_options['filters']['field_s_time_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_s_time_tid']['expose']['operator'] = 'field_s_time_tid_op';
  $handler->display->display_options['filters']['field_s_time_tid']['expose']['identifier'] = 'field_s_time_tid';
  $handler->display->display_options['filters']['field_s_time_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_s_time_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['path'] = 'admin/sessions/manage';
  $handler->display->display_options['menu']['title'] = 'Manage Sessions';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My Schedule */
  $handler = $view->new_display('page', 'My Schedule', 'my_schedule');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Schedule';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_s_speakers' => 'field_s_speakers',
    'field_s_day' => 'field_s_day',
    'field_s_location' => 'field_s_location',
    'field_s_time' => 'field_s_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_speakers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_day' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_location' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_time' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'time';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'time' => 'time',
    'audience' => 0,
    'stanford_slide_category' => 0,
    'sponsorship_level' => 0,
    'tags' => 0,
    'track' => 0,
  );
  /* Relationship: Flags: add_session_to_my_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'add_session_to_my_schedule';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_speakers_target_id']['id'] = 'field_s_speakers_target_id';
  $handler->display->display_options['relationships']['field_s_speakers_target_id']['table'] = 'field_data_field_s_speakers';
  $handler->display->display_options['relationships']['field_s_speakers_target_id']['field'] = 'field_s_speakers_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_s_speakers_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_s_location']['id'] = 'field_s_location';
  $handler->display->display_options['fields']['field_s_location']['table'] = 'field_data_field_s_location';
  $handler->display->display_options['fields']['field_s_location']['field'] = 'field_s_location';
  $handler->display->display_options['fields']['field_s_location']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Location (field_s_location) */
  $handler->display->display_options['sorts']['field_s_location_value']['id'] = 'field_s_location_value';
  $handler->display->display_options['sorts']['field_s_location_value']['table'] = 'field_data_field_s_location';
  $handler->display->display_options['sorts']['field_s_location_value']['field'] = 'field_s_location_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'schedule/mine';
  $handler->display->display_options['menu']['title'] = 'My Schedule';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Flagged Sessions */
  $handler = $view->new_display('page', 'Flagged Sessions', 'flags');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Flagged Sessions';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: add_session_to_my_schedule counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'add_session_to_my_schedule';
  /* Relationship: Flags: add_session_to_my_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Content Flagged by Users';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'add_session_to_my_schedule';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'User Who Flagged';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Flags: Flag counter */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'flag_counts';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['sorts']['count']['order'] = 'DESC';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_session' => 'stanford_session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Session Status (field_s_session_status) */
  $handler->display->display_options['filters']['field_s_session_status_value']['id'] = 'field_s_session_status_value';
  $handler->display->display_options['filters']['field_s_session_status_value']['table'] = 'field_data_field_s_session_status';
  $handler->display->display_options['filters']['field_s_session_status_value']['field'] = 'field_s_session_status_value';
  $handler->display->display_options['filters']['field_s_session_status_value']['value'] = array(
    'scheduled' => 'scheduled',
  );
  $handler->display->display_options['path'] = 'admin/sessions/flags';
  $handler->display->display_options['menu']['title'] = 'Manage Sessions';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['drupalcamp_sessions'] = $view;

  return $export;
}
