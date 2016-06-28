<?php
/**
 * @file
 * ndi_manual.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function ndi_manual_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'chapter_order_for_print';
  $queue->label = 'Chapter order for print';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'chapter' => 'chapter',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['chapter_order_for_print'] = $queue;

  return $export;
}
