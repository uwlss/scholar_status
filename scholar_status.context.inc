<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function scholar_status_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openscholar-feature-status';
  $context->description = 'Status';
  $context->tag = 'Feature';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'status' => 'status',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'status' => 'status',
        'status/*' => 'status/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'scholar_status:page_1' => 'scholar_status:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-scholar_status_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'scholar_status_comments-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'vsite_taxonomy-0' => array(
          'module' => 'vsite_taxonomy',
          'delta' => 0,
          'region' => 'right',
          'weight' => 1,
        ),
        'vsite_widgets-2' => array(
          'module' => 'vsite_widgets',
          'delta' => 2,
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
    'menu' => 'status',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature');
  t('Status');

  $export['openscholar-feature-status'] = $context;
  return $export;
}
