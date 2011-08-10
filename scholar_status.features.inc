<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function scholar_status_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function scholar_status_node_info() {
  $items = array(
    'status' => array(
      'name' => t('Status'),
      'module' => 'features',
      'description' => t('Manage status in your web site'),
      'has_title' => '1',
      'title_label' => t('Status'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function scholar_status_views_api() {
  return array(
    'api' => '2',
  );
}
