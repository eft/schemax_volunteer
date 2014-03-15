<?php
/**
 * @file
 * schemax_volunteer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schemax_volunteer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function schemax_volunteer_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function schemax_volunteer_node_info() {
  $items = array(
    'schemax_volunteer_hours' => array(
      'name' => t('Volunteer Hours'),
      'base' => 'node_content',
      'description' => t('Time spent volunteering.'),
      'has_title' => '1',
      'title_label' => t('Task'),
      'help' => '',
    ),
  );
  return $items;
}
