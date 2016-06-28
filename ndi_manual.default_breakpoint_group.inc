<?php
/**
 * @file
 * ndi_manual.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function ndi_manual_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'columns_breakpoints';
  $breakpoint_group->name = 'columns_breakpoints';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.desktop_columns',
    1 => 'custom.user.tablet_columns',
    2 => 'breakpoints.theme.footheme.mobile',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['columns_breakpoints'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'footheme';
  $breakpoint_group->name = 'Footheme';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.footheme.desktop',
    1 => 'breakpoints.theme.footheme.tablet',
    2 => 'breakpoints.theme.footheme.mobile',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['footheme'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'manual_breakpoints';
  $breakpoint_group->name = 'manual_breakpoints';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.footheme.desktop',
    1 => 'breakpoints.theme.footheme.tablet',
    2 => 'breakpoints.theme.footheme.mobile',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['manual_breakpoints'] = $breakpoint_group;

  return $export;
}
