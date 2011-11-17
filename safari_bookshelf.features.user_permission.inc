<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function safari_bookshelf_user_default_permissions() {
  $permissions = array();

  // Exported permission: create bookshelf_item content
  $permissions['create bookshelf_item content'] = array(
    'name' => 'create bookshelf_item content',
    'roles' => array(),
  );

  // Exported permission: delete any bookshelf_item content
  $permissions['delete any bookshelf_item content'] = array(
    'name' => 'delete any bookshelf_item content',
    'roles' => array(),
  );

  // Exported permission: delete own bookshelf_item content
  $permissions['delete own bookshelf_item content'] = array(
    'name' => 'delete own bookshelf_item content',
    'roles' => array(),
  );

  // Exported permission: edit any bookshelf_item content
  $permissions['edit any bookshelf_item content'] = array(
    'name' => 'edit any bookshelf_item content',
    'roles' => array(),
  );

  // Exported permission: edit field_book_image
  $permissions['edit field_book_image'] = array(
    'name' => 'edit field_book_image',
    'roles' => array(),
  );

  // Exported permission: edit field_book_link
  $permissions['edit field_book_link'] = array(
    'name' => 'edit field_book_link',
    'roles' => array(),
  );

  // Exported permission: edit own bookshelf_item content
  $permissions['edit own bookshelf_item content'] = array(
    'name' => 'edit own bookshelf_item content',
    'roles' => array(),
  );

  // Exported permission: view field_book_image
  $permissions['view field_book_image'] = array(
    'name' => 'view field_book_image',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_book_link
  $permissions['view field_book_link'] = array(
    'name' => 'view field_book_link',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
