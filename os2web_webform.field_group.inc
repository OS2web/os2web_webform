<?php
/**
 * @file
 * os2web_webform.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_webform_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_webform_tax|node|webform|form';
  $field_group->group_name = 'group_os2web_webform_tax';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taksonomier',
    'weight' => '4',
    'children' => array(
      0 => 'field_editortags',
      1 => 'field_organization',
      2 => 'field_site_structure',
      3 => 'field_termref_kle',
      4 => 'field_termref_sofd',
      5 => 'field_termref_sted',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_os2web_webform_tax|node|webform|form'] = $field_group;

  return $export;
}
