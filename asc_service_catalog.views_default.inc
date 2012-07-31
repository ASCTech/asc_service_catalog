<?php
/**
 * @file
 * asc_service_catalog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function asc_service_catalog_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'asc_service_catalog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ASC Service Catalog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ASC Service Catalog';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_asc_service_portfolio',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
    1 => array(
      'field' => 'field_asc_service_category',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_asc_service_portfolio' => 'field_asc_service_portfolio',
    'field_asc_service_category' => 'field_asc_service_category',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asc_service_portfolio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asc_service_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Service Portfolio */
  $handler->display->display_options['fields']['field_asc_service_portfolio']['id'] = 'field_asc_service_portfolio';
  $handler->display->display_options['fields']['field_asc_service_portfolio']['table'] = 'field_data_field_asc_service_portfolio';
  $handler->display->display_options['fields']['field_asc_service_portfolio']['field'] = 'field_asc_service_portfolio';
  $handler->display->display_options['fields']['field_asc_service_portfolio']['label'] = '';
  $handler->display->display_options['fields']['field_asc_service_portfolio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asc_service_portfolio']['field_api_classes'] = 0;
  /* Field: Content: Service Category */
  $handler->display->display_options['fields']['field_asc_service_category']['id'] = 'field_asc_service_category';
  $handler->display->display_options['fields']['field_asc_service_category']['table'] = 'field_data_field_asc_service_category';
  $handler->display->display_options['fields']['field_asc_service_category']['field'] = 'field_asc_service_category';
  $handler->display->display_options['fields']['field_asc_service_category']['label'] = '';
  $handler->display->display_options['fields']['field_asc_service_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_service_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asc_service_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asc_service_category']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asc_service_category']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'service_description' => 'service_description',
  );
  /* Filter criterion: Content: Service Audience (field_asc_service_audience) */
  $handler->display->display_options['filters']['field_asc_service_audience_tid']['id'] = 'field_asc_service_audience_tid';
  $handler->display->display_options['filters']['field_asc_service_audience_tid']['table'] = 'field_data_field_asc_service_audience';
  $handler->display->display_options['filters']['field_asc_service_audience_tid']['field'] = 'field_asc_service_audience_tid';
  $handler->display->display_options['filters']['field_asc_service_audience_tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['field_asc_service_audience_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_asc_service_audience_tid']['vocabulary'] = 'asc_service_audience';

  /* Display: End User Services */
  $handler = $view->new_display('page', 'End User Services', 'page');
  $handler->display->display_options['path'] = 'services';
  $export['asc_service_catalog'] = $view;

  return $export;
}
