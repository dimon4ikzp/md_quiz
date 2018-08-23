<?php
/**
 * @file
 * md_quiz.features.inc
 */

/**
 * Implements hook_node_info().
 */
function md_quiz_node_info() {
  $items = array(
    'md_quiz' => array(
      'name' => t('md Quiz'),
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
