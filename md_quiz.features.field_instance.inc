<?php
/**
 * @file
 * md_quiz.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function md_quiz_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-md_quiz-body'.
  $field_instances['node-md_quiz-body'] = array(
    'bundle' => 'md_quiz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-md_quiz-field_quiz_1'.
  $field_instances['node-md_quiz-field_quiz_1'] = array(
    'bundle' => 'md_quiz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_quiz',
        'settings' => array(),
        'type' => 'field_quiz_formatter_quiz',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quiz_1',
    'label' => 'VARICOSE VEINS ARE NOT THE SAME AS SPIDER VEINS?',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_quiz',
      'settings' => array(),
      'type' => 'field_quiz_widget_quiz',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-md_quiz-field_quiz_1_answer_correct'.
  $field_instances['node-md_quiz-field_quiz_1_answer_correct'] = array(
    'bundle' => 'md_quiz',
    'default_value' => array(
      0 => array(
        'value' => '<p>TRUE: Though often thought of as a cosmetic nuisance, varicose veins are the result of a medical condition called venous reflux disease.<br>
Varicose veins are a sign of venous disease and should be diagnosed and treated by a vein specialist to avoid progression to a more advanced disease state.</p>
<p>Unlike varicose veins, spider veins are typically thin clusters of veins that sit close to the skin’s surface. &nbsp;Spider veins are generally regarded as a cosmetic issue<sup>1</sup>.</p>
<p><a href="http://mdendovenous.com/content/uploads/2017/03/Varicose-Veins-vs.-Spider-Veins.png"><img class="size-full wp-image-6843 alignleft" src="http://mdendovenous.com/content/uploads/2017/03/Varicose-Veins-vs.-Spider-Veins.png" alt="" width="294" height="265"></a></p>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quiz_1_answer_correct',
    'label' => 'quiz_1_answer_correct',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-md_quiz-field_quiz_2'.
  $field_instances['node-md_quiz-field_quiz_2'] = array(
    'bundle' => 'md_quiz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_quiz',
        'settings' => array(),
        'type' => 'field_quiz_formatter_quiz',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quiz_2',
    'label' => 'GENETICS DO NOT CONTRIBUTE TO VARICOSE VEINS OR CHRONIC VENOUS INSUFFICIENCY?',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_quiz',
      'settings' => array(),
      'type' => 'field_quiz_widget_quiz',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-md_quiz-field_quiz_2_answer_correct'.
  $field_instances['node-md_quiz-field_quiz_2_answer_correct'] = array(
    'bundle' => 'md_quiz',
    'default_value' => array(
      0 => array(
        'value' => '<p>FALSE: Possible genetic risk factors include:</p>
<ul>
<li>Age 40+</li>
<li>Gender – women are more likely to develop the disease</li>
<li>Family history</li>
</ul>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quiz_2_answer_correct',
    'label' => 'quiz_2_answer_correct',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-md_quiz-field_quiz_3'.
  $field_instances['node-md_quiz-field_quiz_3'] = array(
    'bundle' => 'md_quiz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_quiz',
        'settings' => array(),
        'type' => 'field_quiz_formatter_quiz',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quiz_3',
    'label' => 'VENOUS REFLUX DISEASE IS NOT CAUSED BY MY DAILY LIFESTYLE?',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_quiz',
      'settings' => array(),
      'type' => 'field_quiz_widget_quiz',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-md_quiz-field_quiz_3_answer_correct'.
  $field_instances['node-md_quiz-field_quiz_3_answer_correct'] = array(
    'bundle' => 'md_quiz',
    'default_value' => array(
      0 => array(
        'value' => '<div class="layoutArea">
<div class="column">
<p>FALSE: Venous Reflux Disease affects ALL people, regardless of age, gender or race. &nbsp;Possible lifestyle risk factors include:</p>
<ul>
<li>Prolonged periods of standing or sitting</li>
<li>Obesity or excessive weight</li>
<li>Multiple pregnancies</li>
<li>Heavy lifting</li>
<li>Smoking</li>
</ul>
</div>
</div>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quiz_3_answer_correct',
    'label' => 'quiz_3_answer_correct',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-md_quiz-field_quiz_4'.
  $field_instances['node-md_quiz-field_quiz_4'] = array(
    'bundle' => 'md_quiz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_quiz',
        'settings' => array(),
        'type' => 'field_quiz_formatter_quiz',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quiz_4',
    'label' => 'COMPRESSION STOCKINGS AND ELEVATION OF THE FEET ARE CURES FOR VARICOSE VEINS?',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_quiz',
      'settings' => array(),
      'type' => 'field_quiz_widget_quiz',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-md_quiz-field_quiz_4_answer_correct'.
  $field_instances['node-md_quiz-field_quiz_4_answer_correct'] = array(
    'bundle' => 'md_quiz',
    'default_value' => array(
      0 => array(
        'value' => '<p>FALSE: Compression stockings and elevation have been shown to help reduce pain and swelling. &nbsp;These conservative measures are NOT a cure and do not resolve the underlying cause. &nbsp;However, many insurance companies require documentation of conservative measures before proceeding with further diagnosis and treatment.</p>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quiz_4_answer_correct',
    'label' => 'quiz_4_answer_correct',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-md_quiz-field_quiz_5'.
  $field_instances['node-md_quiz-field_quiz_5'] = array(
    'bundle' => 'md_quiz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'VENOUS LEG ULCERS (OPEN SORES, WOUNDS OR LESIONS) ON THE LOWER LEGS (BELOW THE KNEE) ARE NOT ASSOCIATED WITH CHRONIC VENOUS INSUFFICIENCY?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_quiz',
        'settings' => array(),
        'type' => 'field_quiz_formatter_quiz',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quiz_5',
    'label' => 'VENOUS LEG ULCERS (OPEN SORES, WOUNDS OR LESIONS) ON THE LOWER LEGS (BELOW THE KNEE) ARE NOT ASSOCIATED WITH CHRONIC VENOUS INSUFFICIENCY?',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_quiz',
      'settings' => array(),
      'type' => 'field_quiz_widget_quiz',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-md_quiz-field_quiz_5_answer_correct'.
  $field_instances['node-md_quiz-field_quiz_5_answer_correct'] = array(
    'bundle' => 'md_quiz',
    'default_value' => array(
      0 => array(
        'value' => '<p>FALSE: 70% – 90% of lower extremity ulcers are actually venous ulcers<sup>2,3</sup>. &nbsp;Moreover, 21% of all wounds seen in wound clinics are characterized as venous ulcers<sup>4</sup>. &nbsp;To get tested for chronic venous insufficiency or to speak with a licensed professional, visit our&nbsp;<em><strong>Find a Doctor Physician Locator</strong></em>.</p>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quiz_5_answer_correct',
    'label' => 'quiz_5_answer_correct',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-md_quiz-field_quiz_6'.
  $field_instances['node-md_quiz-field_quiz_6'] = array(
    'bundle' => 'md_quiz',
    'default_value' => array(
      0 => array(
        'value' => '<div class="quiz-bad-result" style="display: none;">
  <p>Based on your answers, you may need to better understand the signs and symptoms of venous reflux disease. To learn more please visit our <a href="/patients/2-0-about-varicose-veins/">Venous Disease</a> page or to locate a vein specialist near you, please visit our Find a Doctor Physician Locator by clicking <a href="/patients/6-0-find-a-doctor/">here</a>.</p>
  <p>The ClosureFast™ procedure and VenaSeal™ closure system are performed when medically necessary as diagnosed by a trained vein specialist.<br>
    As with any medical procedure, you should consult your vein specialist and review all safety information prior to receiving treatment.</p>
  <p>Click <a href="/important-safety-information/">here</a> to access the VenaSealTM Brief Statement.</p>
  <p>Click <a href="/patients/7-2-venaseal-closure-procedure/">here</a> to access the VenaSealTM Risk Information.</p>
</div>
<div class="quiz-good-result"  style="display: none;">
  <p>Based on your answers, you have a great understanding of the signs and symptoms of venous reflux disease. &nbsp;To learn more please visit our <a href="/patients/2-0-about-varicose-veins/">Venous Disease</a> page or to locate a vein specialist near you, please visit our <em><strong>Find a Doctor Physician Locator</strong></em> by clicking <a href="/patients/6-0-find-a-doctor/">here</a>.</p>
  <p>The ClosureFast™ procedure and VenaSeal™ closure system are performed when medically necessary as diagnosed by a trained vein specialist.<br>
    As with any medical procedure, you should consult your vein specialist and review all safety information prior to receiving treatment.</p>
  <p>Click <a href="/important-safety-information/">here</a> to access the VenaSeal™&nbsp;Brief Statement.</p>
  <p>Click <a href="/patients/7-2-venaseal-closure-procedure/">here</a> to access the VenaSeal™&nbsp;Risk Information.</p>
</div>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quiz_6',
    'label' => 'Results',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('COMPRESSION STOCKINGS AND ELEVATION OF THE FEET ARE CURES FOR VARICOSE VEINS?');
  t('GENETICS DO NOT CONTRIBUTE TO VARICOSE VEINS OR CHRONIC VENOUS INSUFFICIENCY?');
  t('Results');
  t('VARICOSE VEINS ARE NOT THE SAME AS SPIDER VEINS?');
  t('VENOUS LEG ULCERS (OPEN SORES, WOUNDS OR LESIONS) ON THE LOWER LEGS (BELOW THE KNEE) ARE NOT ASSOCIATED WITH CHRONIC VENOUS INSUFFICIENCY?');
  t('VENOUS REFLUX DISEASE IS NOT CAUSED BY MY DAILY LIFESTYLE?');
  t('quiz_1_answer_correct');
  t('quiz_2_answer_correct');
  t('quiz_3_answer_correct');
  t('quiz_4_answer_correct');
  t('quiz_5_answer_correct');

  return $field_instances;
}
