<?php
/**
 * @file
 * configuration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function configuration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_custom-access-rulesets:admin/structure/ctools-rulesets.
  $menu_links['management_custom-access-rulesets:admin/structure/ctools-rulesets'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ctools-rulesets',
    'router_path' => 'admin/structure/ctools-rulesets',
    'link_title' => 'Custom access rulesets',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete custom access rulesets for use with Panels and other systems that utilize CTools content plugins.',
      ),
      'identifier' => 'management_custom-access-rulesets:admin/structure/ctools-rulesets',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_rules:admin/config/workflow/rules.
  $menu_links['management_rules:admin/config/workflow/rules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow/rules',
    'router_path' => 'admin/config/workflow/rules',
    'link_title' => 'Rules',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage reaction rules and rule components.',
      ),
      'identifier' => 'management_rules:admin/config/workflow/rules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_workflow:admin/config/workflow',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom access rulesets');
  t('Rules');

  return $menu_links;
}
