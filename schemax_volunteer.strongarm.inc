<?php
/**
 * @file
 * schemax_volunteer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function schemax_volunteer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_schemax_volunteer_hours';
  $strongarm->value = 0;
  $export['comment_anonymous_schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_schemax_volunteer_hours';
  $strongarm->value = 1;
  $export['comment_default_mode_schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_schemax_volunteer_hours';
  $strongarm->value = '50';
  $export['comment_default_per_page_schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_schemax_volunteer_hours';
  $strongarm->value = 1;
  $export['comment_form_location_schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_schemax_volunteer_hours';
  $strongarm->value = '1';
  $export['comment_preview_schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_schemax_volunteer_hours';
  $strongarm->value = '1';
  $export['comment_schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_schemax_volunteer_hours';
  $strongarm->value = 1;
  $export['comment_subject_field_schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__schemax_volunteer_hours';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_schemax_volunteer_hours';
  $strongarm->value = '0';
  $export['language_content_type_schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_schemax_volunteer_hours';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_schemax_volunteer_hours';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_schemax_volunteer_hours';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_schemax_volunteer_hours';
  $strongarm->value = '1';
  $export['node_preview_schemax_volunteer_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_schemax_volunteer_hours';
  $strongarm->value = 0;
  $export['node_submitted_schemax_volunteer_hours'] = $strongarm;

  return $export;
}
