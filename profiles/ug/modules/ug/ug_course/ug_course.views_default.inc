<?php
/**
 * @file
 * ug_course.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ug_course_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'co1';
  $view->description = 'Provides a pages listing of published course outlines.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CO1 - Listing page for Multiple Course Outlines';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_course_code' => 'field_course_code',
    'title' => 'title',
    'field_course_instructor' => 'field_course_instructor',
    'field_course_section' => 'field_course_section',
    'field_course_semester' => 'field_course_semester',
  );
  $handler->display->display_options['style_options']['default'] = 'field_course_code';
  $handler->display->display_options['style_options']['info'] = array(
    'field_course_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
    'field_course_instructor' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_section' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_semester' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Attachments */
  $handler->display->display_options['fields']['field_course_attachments']['id'] = 'field_course_attachments';
  $handler->display->display_options['fields']['field_course_attachments']['table'] = 'field_data_field_course_attachments';
  $handler->display->display_options['fields']['field_course_attachments']['field'] = 'field_course_attachments';
  $handler->display->display_options['fields']['field_course_attachments']['label'] = '';
  $handler->display->display_options['fields']['field_course_attachments']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_attachments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_course_attachments']['type'] = 'file_url_plain';
  /* Field: Content: Course code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_course_attachments]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Course instructor */
  $handler->display->display_options['fields']['field_course_instructor']['id'] = 'field_course_instructor';
  $handler->display->display_options['fields']['field_course_instructor']['table'] = 'field_data_field_course_instructor';
  $handler->display->display_options['fields']['field_course_instructor']['field'] = 'field_course_instructor';
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_course_section']['id'] = 'field_course_section';
  $handler->display->display_options['fields']['field_course_section']['table'] = 'field_data_field_course_section';
  $handler->display->display_options['fields']['field_course_section']['field'] = 'field_course_section';
  /* Field: Content: Semester */
  $handler->display->display_options['fields']['field_course_semester']['id'] = 'field_course_semester';
  $handler->display->display_options['fields']['field_course_semester']['table'] = 'field_data_field_course_semester';
  $handler->display->display_options['fields']['field_course_semester']['field'] = 'field_course_semester';
  /* Sort criterion: Content: Course code (field_course_code) */
  $handler->display->display_options['sorts']['field_course_code_value']['id'] = 'field_course_code_value';
  $handler->display->display_options['sorts']['field_course_code_value']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['sorts']['field_course_code_value']['field'] = 'field_course_code_value';
  /* Contextual filter: Content: Category (field_course_category) */
  $handler->display->display_options['arguments']['field_course_category_tid']['id'] = 'field_course_category_tid';
  $handler->display->display_options['arguments']['field_course_category_tid']['table'] = 'field_data_field_course_category';
  $handler->display->display_options['arguments']['field_course_category_tid']['field'] = 'field_course_category_tid';
  $handler->display->display_options['arguments']['field_course_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_course_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_course_category_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_course_category_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_course_category_tid']['validate_options']['vocabularies'] = array(
    'course_outline_category' => 'course_outline_category',
  );
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
    'course_outline' => 'course_outline',
  );
  /* Filter criterion: Content: Course level (field_course_level) */
  $handler->display->display_options['filters']['field_course_level_value']['id'] = 'field_course_level_value';
  $handler->display->display_options['filters']['field_course_level_value']['table'] = 'field_data_field_course_level';
  $handler->display->display_options['filters']['field_course_level_value']['field'] = 'field_course_level_value';
  $handler->display->display_options['filters']['field_course_level_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_level_value']['expose']['operator_id'] = 'field_course_level_value_op';
  $handler->display->display_options['filters']['field_course_level_value']['expose']['label'] = 'Course level';
  $handler->display->display_options['filters']['field_course_level_value']['expose']['operator'] = 'field_course_level_value_op';
  $handler->display->display_options['filters']['field_course_level_value']['expose']['identifier'] = 'field_course_level_value';
  $handler->display->display_options['filters']['field_course_level_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Semester (field_course_semester) */
  $handler->display->display_options['filters']['field_course_semester_value']['id'] = 'field_course_semester_value';
  $handler->display->display_options['filters']['field_course_semester_value']['table'] = 'field_data_field_course_semester';
  $handler->display->display_options['filters']['field_course_semester_value']['field'] = 'field_course_semester_value';
  $handler->display->display_options['filters']['field_course_semester_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_semester_value']['expose']['operator_id'] = 'field_course_semester_value_op';
  $handler->display->display_options['filters']['field_course_semester_value']['expose']['label'] = 'Semester';
  $handler->display->display_options['filters']['field_course_semester_value']['expose']['operator'] = 'field_course_semester_value_op';
  $handler->display->display_options['filters']['field_course_semester_value']['expose']['identifier'] = 'field_course_semester_value';
  $handler->display->display_options['filters']['field_course_semester_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Year (field_course_year) */
  $handler->display->display_options['filters']['field_course_year_value']['id'] = 'field_course_year_value';
  $handler->display->display_options['filters']['field_course_year_value']['table'] = 'field_data_field_course_year';
  $handler->display->display_options['filters']['field_course_year_value']['field'] = 'field_course_year_value';
  $handler->display->display_options['filters']['field_course_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_year_value']['expose']['operator_id'] = 'field_course_year_value_op';
  $handler->display->display_options['filters']['field_course_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_course_year_value']['expose']['operator'] = 'field_course_year_value_op';
  $handler->display->display_options['filters']['field_course_year_value']['expose']['identifier'] = 'field_course_year_value';
  $handler->display->display_options['filters']['field_course_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_course_year_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_course_year_value']['year_range'] = '-4:+6';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['more_text'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_course_category_tid' => array(
      'type' => 'user',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Category',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['co1'] = $view;

  return $export;
}
