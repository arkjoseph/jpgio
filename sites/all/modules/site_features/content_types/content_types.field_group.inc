<?php
/**
 * @file
 * content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hero_wrapper|node|page|default';
  $field_group->group_name = 'group_hero_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hero Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_hero_page_image',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Hero Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'wrapper' => 'header',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_hero_wrapper|node|page|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hero Wrapper');

  return $field_groups;
}
