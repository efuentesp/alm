<?php
/**
 * @file
 * alm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alm_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function alm_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function alm_node_info() {
  $items = array(
    'baseline' => array(
      'name' => t('Baseline'),
      'base' => 'node_content',
      'description' => t('An agreed description of the attributes of a product, at a point in time, which serves as a basis for defining change.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'customer_requirement' => array(
      'name' => t('Customer Requirement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('ID'),
      'help' => '',
    ),
    'module' => array(
      'name' => t('Module'),
      'base' => 'node_content',
      'description' => t('Project\'s Module Structure.'),
      'has_title' => '1',
      'title_label' => t('ID'),
      'help' => '',
    ),
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Project information.'),
      'has_title' => '1',
      'title_label' => t('ID'),
      'help' => '',
    ),
    'requirement' => array(
      'name' => t('Requirement'),
      'base' => 'node_content',
      'description' => t('Requirements within a Module.'),
      'has_title' => '1',
      'title_label' => t('ID'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
