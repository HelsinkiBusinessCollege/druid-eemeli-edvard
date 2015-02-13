<?php
/**
 * @file
 * ensiviikon_ruokalista.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ensiviikon_ruokalista_node_info() {
  $items = array(
    'testi' => array(
      'name' => t('testi'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
