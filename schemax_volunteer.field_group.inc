<?php
/**
 * @file
 * schemax_volunteer.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function schemax_volunteer_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal_tabs|user|user|form';
  $field_group->group_name = 'group_horizontal_tabs';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal_Tab',
    'weight' => '11',
    'children' => array(
      0 => 'group_volunteer_hours',
      1 => 'group_settings',
      2 => 'group_profile',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal_tabs|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_volunteer_hours|user|user|form';
  $field_group->group_name = 'group_volunteer_hours';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Volunteer Hours',
    'weight' => '13',
    'children' => array(
      0 => 'field_schemax_volunteer_hours',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-volunteer-hours field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_volunteer_hours|user|user|form'] = $field_group;

  return $export;
}
