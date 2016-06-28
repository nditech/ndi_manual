<?php
/**
 * @file
 * ndi_manual.flexslider_picture_optionset.inc
 */

/**
 * Implements hook_default_flexslider_picture_optionset().
 */
function ndi_manual_default_flexslider_picture_optionset() {
  $export = array();

  $flexslider_picture_optionset = new stdClass();
  $flexslider_picture_optionset->disabled = FALSE; /* Edit this to true to make a default flexslider_picture_optionset disabled initially */
  $flexslider_picture_optionset->api_version = 1;
  $flexslider_picture_optionset->flexslider_optionset = 'full_width_slideshow';
  $flexslider_picture_optionset->imagestyle_type = 'picture_mapping';
  $flexslider_picture_optionset->mapping = 'manual_breakpoints';
  $flexslider_picture_optionset->fallback = '';
  $export['full_width_slideshow'] = $flexslider_picture_optionset;

  $flexslider_picture_optionset = new stdClass();
  $flexslider_picture_optionset->disabled = FALSE; /* Edit this to true to make a default flexslider_picture_optionset disabled initially */
  $flexslider_picture_optionset->api_version = 1;
  $flexslider_picture_optionset->flexslider_optionset = 'half_width_slideshow';
  $flexslider_picture_optionset->imagestyle_type = 'picture_mapping';
  $flexslider_picture_optionset->mapping = 'manual_breakpoints_half_width';
  $flexslider_picture_optionset->fallback = '';
  $export['half_width_slideshow'] = $flexslider_picture_optionset;

  $flexslider_picture_optionset = new stdClass();
  $flexslider_picture_optionset->disabled = FALSE; /* Edit this to true to make a default flexslider_picture_optionset disabled initially */
  $flexslider_picture_optionset->api_version = 1;
  $flexslider_picture_optionset->flexslider_optionset = 'responsive';
  $flexslider_picture_optionset->imagestyle_type = 'picture_mapping';
  $flexslider_picture_optionset->mapping = 'manual_breakpoints';
  $flexslider_picture_optionset->fallback = '';
  $export['responsive'] = $flexslider_picture_optionset;

  return $export;
}
