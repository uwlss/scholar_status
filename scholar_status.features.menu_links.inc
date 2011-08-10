<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function scholar_status_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:status
  $menu_links['features:status'] = array(
    'menu_name' => 'features',
    'link_path' => 'status',
    'router_path' => 'status',
    'link_title' => 'Status',
    'options' => array(
      'attributes' => array(
        'title' => 'List of status in my site',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Status');


  return $menu_links;
}
