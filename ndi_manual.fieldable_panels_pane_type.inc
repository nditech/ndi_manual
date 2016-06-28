<?php
/**
 * @file
 * ndi_manual.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function ndi_manual_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'fieldable_panels_pane';
  $fieldable_panels_pane_type->title = 'Panels Pane';
  $fieldable_panels_pane_type->description = '';
  $export['fieldable_panels_pane'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'full_width_image_with_text_overlay';
  $fieldable_panels_pane_type->title = 'Full width image with text overlay';
  $fieldable_panels_pane_type->description = '';
  $export['full_width_image_with_text_overlay'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'full_width_video';
  $fieldable_panels_pane_type->title = 'Full width video';
  $fieldable_panels_pane_type->description = '';
  $export['full_width_video'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'one_column';
  $fieldable_panels_pane_type->title = 'Full width one column';
  $fieldable_panels_pane_type->description = '';
  $export['one_column'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'slideshow';
  $fieldable_panels_pane_type->title = 'Full width slideshow';
  $fieldable_panels_pane_type->description = '';
  $export['slideshow'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'three_columns';
  $fieldable_panels_pane_type->title = 'Three columns';
  $fieldable_panels_pane_type->description = '';
  $export['three_columns'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'two_columns';
  $fieldable_panels_pane_type->title = 'Two columns';
  $fieldable_panels_pane_type->description = '';
  $export['two_columns'] = $fieldable_panels_pane_type;

  return $export;
}
