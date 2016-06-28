<?php
/**
 * @file
 * ndi_manual.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ndi_manual_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_choose_one|node|resource|form';
  $field_group->group_name = 'group_choose_one';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Choose One Type of Media to Upload',
    'weight' => '4',
    'children' => array(
      0 => 'group_pdf',
      1 => 'group_document',
      2 => 'group_image',
      3 => 'group_video',
      4 => 'group_slideshow',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_choose_one|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document|node|resource|form';
  $field_group->group_name = 'group_document';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_choose_one';
  $field_group->data = array(
    'label' => 'Document',
    'weight' => '14',
    'children' => array(
      0 => 'field_document',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-document field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_document|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|resource|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_choose_one';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '15',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-image field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_image|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overlay|fieldable_panels_pane|full_width_image_with_text_overlay|default';
  $field_group->group_name = 'group_overlay';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'full_width_image_with_text_overlay';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Overlay',
    'weight' => '1',
    'children' => array(
      0 => 'field_description',
      1 => 'field_heading',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Overlay',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-overlay field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_overlay|fieldable_panels_pane|full_width_image_with_text_overlay|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pdf|node|resource|form';
  $field_group->group_name = 'group_pdf';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_choose_one';
  $field_group->data = array(
    'label' => 'PDF',
    'weight' => '13',
    'children' => array(
      0 => 'field_pdf',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'PDF',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pdf|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slideshow|node|resource|form';
  $field_group->group_name = 'group_slideshow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_choose_one';
  $field_group->data = array(
    'label' => 'Slideshow',
    'weight' => '17',
    'children' => array(
      0 => 'field_slideshow',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-slideshow field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_slideshow|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|resource|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_choose_one';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '16',
    'children' => array(
      0 => 'field_video',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_video|node|resource|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Choose One Type of Media to Upload');
  t('Document');
  t('Image');
  t('Overlay');
  t('PDF');
  t('Slideshow');
  t('Video');

  return $field_groups;
}
