<?php
/**
 * @file
 * md_quiz.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function md_quiz_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'.
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_quiz_1'.
  $field_bases['field_quiz_1'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_1',
    'indexes' => array(
      'answer' => array(
        0 => array(
          0 => 'answer',
          1 => 255,
        ),
      ),
      'correct' => array(
        0 => 'correct',
      ),
    ),
    'locked' => 0,
    'module' => 'field_quiz',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_quiz',
  );

  // Exported field_base: 'field_quiz_1_answer_correct'.
  $field_bases['field_quiz_1_answer_correct'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_1_answer_correct',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_quiz_2'.
  $field_bases['field_quiz_2'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_2',
    'indexes' => array(
      'answer' => array(
        0 => array(
          0 => 'answer',
          1 => 255,
        ),
      ),
      'correct' => array(
        0 => 'correct',
      ),
    ),
    'locked' => 0,
    'module' => 'field_quiz',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_quiz',
  );

  // Exported field_base: 'field_quiz_2_answer_correct'.
  $field_bases['field_quiz_2_answer_correct'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_2_answer_correct',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_quiz_3'.
  $field_bases['field_quiz_3'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_3',
    'indexes' => array(
      'answer' => array(
        0 => array(
          0 => 'answer',
          1 => 255,
        ),
      ),
      'correct' => array(
        0 => 'correct',
      ),
    ),
    'locked' => 0,
    'module' => 'field_quiz',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_quiz',
  );

  // Exported field_base: 'field_quiz_3_answer_correct'.
  $field_bases['field_quiz_3_answer_correct'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_3_answer_correct',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_quiz_4'.
  $field_bases['field_quiz_4'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_4',
    'indexes' => array(
      'answer' => array(
        0 => array(
          0 => 'answer',
          1 => 255,
        ),
      ),
      'correct' => array(
        0 => 'correct',
      ),
    ),
    'locked' => 0,
    'module' => 'field_quiz',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_quiz',
  );

  // Exported field_base: 'field_quiz_4_answer_correct'.
  $field_bases['field_quiz_4_answer_correct'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_4_answer_correct',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_quiz_5'.
  $field_bases['field_quiz_5'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_5',
    'indexes' => array(
      'answer' => array(
        0 => array(
          0 => 'answer',
          1 => 255,
        ),
      ),
      'correct' => array(
        0 => 'correct',
      ),
    ),
    'locked' => 0,
    'module' => 'field_quiz',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_quiz',
  );

  // Exported field_base: 'field_quiz_5_answer_correct'.
  $field_bases['field_quiz_5_answer_correct'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_5_answer_correct',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_quiz_6'.
  $field_bases['field_quiz_6'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quiz_6',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
