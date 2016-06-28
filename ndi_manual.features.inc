<?php
/**
 * @file
 * ndi_manual.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ndi_manual_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "flexslider_picture" && $api == "flexslider_picture_optionset") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_entityqueue_api().
 */
function ndi_manual_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ndi_manual_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ndi_manual_image_default_styles() {
  $styles = array();

  // Exported image style: desktop.
  $styles['desktop'] = array(
    'label' => 'Desktop, full width',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 880,
          'height' => 495,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: desktop__original_image.
  $styles['desktop__original_image'] = array(
    'label' => 'Desktop, original image',
    'effects' => array(
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 880,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: desktop__third_width.
  $styles['desktop__third_width'] = array(
    'label' => 'Desktop, third width',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 152,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: desktop_half_width.
  $styles['desktop_half_width'] = array(
    'label' => 'Desktop, half width',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 420,
          'height' => 235,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mobile.
  $styles['mobile'] = array(
    'label' => 'Mobile',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 383,
          'height' => 215,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mobile__original_image.
  $styles['mobile__original_image'] = array(
    'label' => 'Mobile, original image',
    'effects' => array(
      17 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 383,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tablet__half_and_third_width.
  $styles['tablet__half_and_third_width'] = array(
    'label' => 'Tablet, half and third width',
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 490,
          'height' => 275,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tablet__original_image.
  $styles['tablet__original_image'] = array(
    'label' => 'Tablet, original image',
    'effects' => array(
      16 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 670,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tablet_full_width.
  $styles['tablet_full_width'] = array(
    'label' => 'Tablet, full width',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 670,
          'height' => 376,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ndi_manual_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'chapter' => array(
      'name' => t('Chapter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource' => array(
      'name' => t('Resource'),
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

/**
 * Implements hook_paragraphs_info().
 */
function ndi_manual_paragraphs_info() {
  $items = array(
    'media_full_width' => array(
      'name' => 'Media full width',
      'bundle' => 'media_full_width',
      'locked' => '1',
    ),
    'media_half_width' => array(
      'name' => 'Media half width float right',
      'bundle' => 'media_half_width',
      'locked' => '1',
    ),
    'media_half_width_float_left' => array(
      'name' => 'Media half width float left',
      'bundle' => 'media_half_width_float_left',
      'locked' => '1',
    ),
    'resource' => array(
      'name' => 'Resource',
      'bundle' => 'resource',
      'locked' => '1',
    ),
    'text' => array(
      'name' => 'Text',
      'bundle' => 'text',
      'locked' => '1',
    ),
  );
  return $items;
}
