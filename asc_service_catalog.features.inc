<?php
/**
 * @file
 * asc_service_catalog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_service_catalog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function asc_service_catalog_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function asc_service_catalog_node_info() {
  $items = array(
    'service_description' => array(
      'name' => t('Service Description'),
      'base' => 'node_content',
      'description' => t('College of Arts and Sciences Service Description'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
