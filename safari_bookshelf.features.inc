<?php

/**
 * Implementation of hook_node_info().
 */
function safari_bookshelf_node_info() {
  $items = array(
    'bookshelf_item' => array(
      'name' => t('Bookshelf item'),
      'module' => 'features',
      'description' => t('An item on the bookshelf'),
      'has_title' => '1',
      'title_label' => t('Book'),
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
function safari_bookshelf_views_api() {
  return array(
    'api' => '2',
  );
}
