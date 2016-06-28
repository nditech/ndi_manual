<?php
/**
 * @file
 * ndi_manual.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function ndi_manual_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Manual breakpoints, full width';
  $picture_mapping->machine_name = 'manual_breakpoints';
  $picture_mapping->breakpoint_group = 'manual_breakpoints';
  $picture_mapping->mapping = array(
    'breakpoints.theme.footheme.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'desktop',
      ),
    ),
    'breakpoints.theme.footheme.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'tablet_full_width',
      ),
    ),
    'breakpoints.theme.footheme.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'mobile',
      ),
    ),
  );
  $export['manual_breakpoints'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Manual breakpoints, half width';
  $picture_mapping->machine_name = 'manual_breakpoints_half_width';
  $picture_mapping->breakpoint_group = 'columns_breakpoints';
  $picture_mapping->mapping = array(
    'custom.user.desktop_columns' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'desktop_half_width',
      ),
    ),
    'custom.user.tablet_columns' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'tablet__half_and_third_width',
      ),
    ),
    'breakpoints.theme.footheme.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'mobile',
      ),
    ),
  );
  $export['manual_breakpoints_half_width'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Manual breakpoints, original image';
  $picture_mapping->machine_name = 'manual_breakpoints_original_image';
  $picture_mapping->breakpoint_group = 'manual_breakpoints';
  $picture_mapping->mapping = array(
    'breakpoints.theme.footheme.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'desktop__original_image',
      ),
    ),
    'breakpoints.theme.footheme.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'tablet__original_image',
      ),
    ),
    'breakpoints.theme.footheme.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'mobile__original_image',
      ),
    ),
  );
  $export['manual_breakpoints_original_image'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Manual breakpoints, third width';
  $picture_mapping->machine_name = 'manual_breakpoints_third_width';
  $picture_mapping->breakpoint_group = 'columns_breakpoints';
  $picture_mapping->mapping = array(
    'custom.user.desktop_columns' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'desktop__third_width',
      ),
    ),
    'custom.user.tablet_columns' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'tablet__half_and_third_width',
      ),
    ),
    'breakpoints.theme.footheme.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'mobile',
      ),
    ),
  );
  $export['manual_breakpoints_third_width'] = $picture_mapping;

  return $export;
}
