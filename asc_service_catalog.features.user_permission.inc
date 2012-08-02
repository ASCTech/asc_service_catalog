<?php
/**
 * @file
 * asc_service_catalog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asc_service_catalog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create service_description content.
  $permissions['create service_description content'] = array(
    'name' => 'create service_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any service_description content.
  $permissions['delete any service_description content'] = array(
    'name' => 'delete any service_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own service_description content.
  $permissions['delete own service_description content'] = array(
    'name' => 'delete own service_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any service_description content.
  $permissions['edit any service_description content'] = array(
    'name' => 'edit any service_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own service_description content.
  $permissions['edit own service_description content'] = array(
    'name' => 'edit own service_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
