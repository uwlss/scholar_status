<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function scholar_status_user_default_permissions() {
  $permissions = array();

  // Exported permission: create status content
  $permissions['create status content'] = array(
    'name' => 'create status content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'scholar admin',
      '3' => 'scholar user',
    ),
  );

  // Exported permission: delete own status content
  $permissions['delete own status content'] = array(
    'name' => 'delete own status content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own status content
  $permissions['edit own status content'] = array(
    'name' => 'edit own status content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'scholar user',
    ),
  );

  // Exported permission: override status promote to front page option
  $permissions['override status promote to front page option'] = array(
    'name' => 'override status promote to front page option',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: override status published option
  $permissions['override status published option'] = array(
    'name' => 'override status published option',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: override status revision option
  $permissions['override status revision option'] = array(
    'name' => 'override status revision option',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: override status sticky option
  $permissions['override status sticky option'] = array(
    'name' => 'override status sticky option',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
