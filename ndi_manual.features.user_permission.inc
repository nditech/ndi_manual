<?php
/**
 * @file
 * ndi_manual.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ndi_manual_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access PDF version'.
  $permissions['access PDF version'] = array(
    'name' => 'access PDF version',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'print_pdf',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access fieldable panels panes master list'.
  $permissions['access fieldable panels panes master list'] = array(
    'name' => 'access fieldable panels panes master list',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'navbar',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(),
    'module' => 'overlay',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer blockify'.
  $permissions['administer blockify'] = array(
    'name' => 'administer blockify',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'blockify',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer breakpoints'.
  $permissions['administer breakpoints'] = array(
    'name' => 'administer breakpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'breakpoints',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer ctools access ruleset'.
  $permissions['administer ctools access ruleset'] = array(
    'name' => 'administer ctools access ruleset',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools_access_ruleset',
  );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: 'administer entityqueue'.
  $permissions['administer entityqueue'] = array(
    'name' => 'administer entityqueue',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityqueue',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer features menu items'.
  $permissions['administer features menu items'] = array(
    'name' => 'administer features menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldable panels panes'.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer management menu items'.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer navigation menu items'.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panel-nodes'.
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane fieldable_panels_pane defaults'.
  $permissions['administer panelizer fieldable_panels_pane fieldable_panels_pane defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane fieldable_panels_pane defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article defaults'.
  $permissions['administer panelizer node article defaults'] = array(
    'name' => 'administer panelizer node article defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node chapter defaults'.
  $permissions['administer panelizer node chapter defaults'] = array(
    'name' => 'administer panelizer node chapter defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page defaults'.
  $permissions['administer panelizer node page defaults'] = array(
    'name' => 'administer panelizer node page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node panel defaults'.
  $permissions['administer panelizer node panel defaults'] = array(
    'name' => 'administer panelizer node panel defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource defaults'.
  $permissions['administer panelizer node resource defaults'] = array(
    'name' => 'administer panelizer node resource defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer paragraphs_item media_full_width defaults'.
  $permissions['administer panelizer paragraphs_item media_full_width defaults'] = array(
    'name' => 'administer panelizer paragraphs_item media_full_width defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer paragraphs_item media_half_width defaults'.
  $permissions['administer panelizer paragraphs_item media_half_width defaults'] = array(
    'name' => 'administer panelizer paragraphs_item media_half_width defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer paragraphs_item media_half_width_float_left defaults'.
  $permissions['administer panelizer paragraphs_item media_half_width_float_left defaults'] = array(
    'name' => 'administer panelizer paragraphs_item media_half_width_float_left defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer paragraphs_item resource defaults'.
  $permissions['administer panelizer paragraphs_item resource defaults'] = array(
    'name' => 'administer panelizer paragraphs_item resource defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer paragraphs_item text defaults'.
  $permissions['administer panelizer paragraphs_item text defaults'] = array(
    'name' => 'administer panelizer paragraphs_item text defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term tags defaults'.
  $permissions['administer panelizer taxonomy_term tags defaults'] = array(
    'name' => 'administer panelizer taxonomy_term tags defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user defaults'.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer paragraphs bundles'.
  $permissions['administer paragraphs bundles'] = array(
    'name' => 'administer paragraphs bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer pictures'.
  $permissions['administer pictures'] = array(
    'name' => 'administer pictures',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'picture',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer stylizer'.
  $permissions['administer stylizer'] = array(
    'name' => 'administer stylizer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'stylizer',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer user-menu menu items'.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer userprotect'.
  $permissions['administer userprotect'] = array(
    'name' => 'administer userprotect',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer video styles'.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'assign roles'.
  $permissions['assign roles'] = array(
    'name' => 'assign roles',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'roleassign',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass advanced aggregation'.
  $permissions['bypass advanced aggregation'] = array(
    'name' => 'bypass advanced aggregation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advagg',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass paragraphs bundle content access'.
  $permissions['bypass paragraphs bundle content access'] = array(
    'name' => 'bypass paragraphs bundle content access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own e-mail'.
  $permissions['change own e-mail'] = array(
    'name' => 'change own e-mail',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own openid'.
  $permissions['change own openid'] = array(
    'name' => 'change own openid',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own password'.
  $permissions['change own password'] = array(
    'name' => 'change own password',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create chapter content'.
  $permissions['create chapter content'] = array(
    'name' => 'create chapter content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create fieldable fieldable_panels_pane'.
  $permissions['create fieldable fieldable_panels_pane'] = array(
    'name' => 'create fieldable fieldable_panels_pane',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable full_width_image_with_text_overlay'.
  $permissions['create fieldable full_width_image_with_text_overlay'] = array(
    'name' => 'create fieldable full_width_image_with_text_overlay',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable full_width_video'.
  $permissions['create fieldable full_width_video'] = array(
    'name' => 'create fieldable full_width_video',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable one_column'.
  $permissions['create fieldable one_column'] = array(
    'name' => 'create fieldable one_column',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable slideshow'.
  $permissions['create fieldable slideshow'] = array(
    'name' => 'create fieldable slideshow',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable three_columns'.
  $permissions['create fieldable three_columns'] = array(
    'name' => 'create fieldable three_columns',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable two_columns'.
  $permissions['create fieldable two_columns'] = array(
    'name' => 'create fieldable two_columns',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel content'.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel-nodes'.
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'create paragraph content media_full_width'.
  $permissions['create paragraph content media_full_width'] = array(
    'name' => 'create paragraph content media_full_width',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content media_half_width'.
  $permissions['create paragraph content media_half_width'] = array(
    'name' => 'create paragraph content media_half_width',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content media_half_width_float_left'.
  $permissions['create paragraph content media_half_width_float_left'] = array(
    'name' => 'create paragraph content media_half_width_float_left',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content resource'.
  $permissions['create paragraph content resource'] = array(
    'name' => 'create paragraph content resource',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content text'.
  $permissions['create paragraph content text'] = array(
    'name' => 'create paragraph content text',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create resource content'.
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any chapter content'.
  $permissions['delete any chapter content'] = array(
    'name' => 'delete any chapter content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel content'.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel-nodes'.
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'delete any resource content'.
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete fieldable fieldable_panels_pane'.
  $permissions['delete fieldable fieldable_panels_pane'] = array(
    'name' => 'delete fieldable fieldable_panels_pane',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable full_width_image_with_text_overlay'.
  $permissions['delete fieldable full_width_image_with_text_overlay'] = array(
    'name' => 'delete fieldable full_width_image_with_text_overlay',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable full_width_video'.
  $permissions['delete fieldable full_width_video'] = array(
    'name' => 'delete fieldable full_width_video',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable one_column'.
  $permissions['delete fieldable one_column'] = array(
    'name' => 'delete fieldable one_column',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable slideshow'.
  $permissions['delete fieldable slideshow'] = array(
    'name' => 'delete fieldable slideshow',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable three_columns'.
  $permissions['delete fieldable three_columns'] = array(
    'name' => 'delete fieldable three_columns',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable two_columns'.
  $permissions['delete fieldable two_columns'] = array(
    'name' => 'delete fieldable two_columns',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own chapter content'.
  $permissions['delete own chapter content'] = array(
    'name' => 'delete own chapter content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel content'.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel-nodes'.
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'delete own resource content'.
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete paragraph content media_full_width'.
  $permissions['delete paragraph content media_full_width'] = array(
    'name' => 'delete paragraph content media_full_width',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content media_half_width'.
  $permissions['delete paragraph content media_half_width'] = array(
    'name' => 'delete paragraph content media_half_width',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content media_half_width_float_left'.
  $permissions['delete paragraph content media_half_width_float_left'] = array(
    'name' => 'delete paragraph content media_half_width_float_left',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content resource'.
  $permissions['delete paragraph content resource'] = array(
    'name' => 'delete paragraph content resource',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content text'.
  $permissions['delete paragraph content text'] = array(
    'name' => 'delete paragraph content text',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any chapter content'.
  $permissions['edit any chapter content'] = array(
    'name' => 'edit any chapter content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panel content'.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panel-nodes'.
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'edit any resource content'.
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit fieldable fieldable_panels_pane'.
  $permissions['edit fieldable fieldable_panels_pane'] = array(
    'name' => 'edit fieldable fieldable_panels_pane',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable full_width_image_with_text_overlay'.
  $permissions['edit fieldable full_width_image_with_text_overlay'] = array(
    'name' => 'edit fieldable full_width_image_with_text_overlay',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable full_width_video'.
  $permissions['edit fieldable full_width_video'] = array(
    'name' => 'edit fieldable full_width_video',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable one_column'.
  $permissions['edit fieldable one_column'] = array(
    'name' => 'edit fieldable one_column',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable slideshow'.
  $permissions['edit fieldable slideshow'] = array(
    'name' => 'edit fieldable slideshow',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable three_columns'.
  $permissions['edit fieldable three_columns'] = array(
    'name' => 'edit fieldable three_columns',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable two_columns'.
  $permissions['edit fieldable two_columns'] = array(
    'name' => 'edit fieldable two_columns',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own account'.
  $permissions['edit own account'] = array(
    'name' => 'edit own account',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own chapter content'.
  $permissions['edit own chapter content'] = array(
    'name' => 'edit own chapter content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel content'.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel-nodes'.
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'edit own resource content'.
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'enter article revision log entry'.
  $permissions['enter article revision log entry'] = array(
    'name' => 'enter article revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter chapter revision log entry'.
  $permissions['enter chapter revision log entry'] = array(
    'name' => 'enter chapter revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter page revision log entry'.
  $permissions['enter page revision log entry'] = array(
    'name' => 'enter page revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter panel revision log entry'.
  $permissions['enter panel revision log entry'] = array(
    'name' => 'enter panel revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter resource revision log entry'.
  $permissions['enter resource revision log entry'] = array(
    'name' => 'enter resource revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all entityqueues'.
  $permissions['manipulate all entityqueues'] = array(
    'name' => 'manipulate all entityqueues',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityqueue',
  );

  // Exported permission: 'manipulate entityqueues'.
  $permissions['manipulate entityqueues'] = array(
    'name' => 'manipulate entityqueues',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'entityqueue',
  );

  // Exported permission: 'node-specific print configuration'.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print_ui',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'override article authored by option'.
  $permissions['override article authored by option'] = array(
    'name' => 'override article authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article authored on option'.
  $permissions['override article authored on option'] = array(
    'name' => 'override article authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article promote to front page option'.
  $permissions['override article promote to front page option'] = array(
    'name' => 'override article promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article published option'.
  $permissions['override article published option'] = array(
    'name' => 'override article published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article revision option'.
  $permissions['override article revision option'] = array(
    'name' => 'override article revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article sticky option'.
  $permissions['override article sticky option'] = array(
    'name' => 'override article sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override chapter authored by option'.
  $permissions['override chapter authored by option'] = array(
    'name' => 'override chapter authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override chapter authored on option'.
  $permissions['override chapter authored on option'] = array(
    'name' => 'override chapter authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override chapter promote to front page option'.
  $permissions['override chapter promote to front page option'] = array(
    'name' => 'override chapter promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override chapter published option'.
  $permissions['override chapter published option'] = array(
    'name' => 'override chapter published option',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override chapter revision option'.
  $permissions['override chapter revision option'] = array(
    'name' => 'override chapter revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override chapter sticky option'.
  $permissions['override chapter sticky option'] = array(
    'name' => 'override chapter sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page authored by option'.
  $permissions['override page authored by option'] = array(
    'name' => 'override page authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page authored on option'.
  $permissions['override page authored on option'] = array(
    'name' => 'override page authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page promote to front page option'.
  $permissions['override page promote to front page option'] = array(
    'name' => 'override page promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page published option'.
  $permissions['override page published option'] = array(
    'name' => 'override page published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page revision option'.
  $permissions['override page revision option'] = array(
    'name' => 'override page revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page sticky option'.
  $permissions['override page sticky option'] = array(
    'name' => 'override page sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override panel authored by option'.
  $permissions['override panel authored by option'] = array(
    'name' => 'override panel authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override panel authored on option'.
  $permissions['override panel authored on option'] = array(
    'name' => 'override panel authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override panel promote to front page option'.
  $permissions['override panel promote to front page option'] = array(
    'name' => 'override panel promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override panel published option'.
  $permissions['override panel published option'] = array(
    'name' => 'override panel published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override panel revision option'.
  $permissions['override panel revision option'] = array(
    'name' => 'override panel revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override panel sticky option'.
  $permissions['override panel sticky option'] = array(
    'name' => 'override panel sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource authored by option'.
  $permissions['override resource authored by option'] = array(
    'name' => 'override resource authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource authored on option'.
  $permissions['override resource authored on option'] = array(
    'name' => 'override resource authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource promote to front page option'.
  $permissions['override resource promote to front page option'] = array(
    'name' => 'override resource promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource published option'.
  $permissions['override resource published option'] = array(
    'name' => 'override resource published option',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource revision option'.
  $permissions['override resource revision option'] = array(
    'name' => 'override resource revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource sticky option'.
  $permissions['override resource sticky option'] = array(
    'name' => 'override resource sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'update chapter_order_for_print entityqueue'.
  $permissions['update chapter_order_for_print entityqueue'] = array(
    'name' => 'update chapter_order_for_print entityqueue',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'entityqueue',
  );

  // Exported permission: 'update paragraph content media_full_width'.
  $permissions['update paragraph content media_full_width'] = array(
    'name' => 'update paragraph content media_full_width',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content media_half_width'.
  $permissions['update paragraph content media_half_width'] = array(
    'name' => 'update paragraph content media_half_width',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content media_half_width_float_left'.
  $permissions['update paragraph content media_half_width_float_left'] = array(
    'name' => 'update paragraph content media_half_width_float_left',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content resource'.
  $permissions['update paragraph content resource'] = array(
    'name' => 'update paragraph content resource',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content text'.
  $permissions['update paragraph content text'] = array(
    'name' => 'update paragraph content text',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view paragraph content media_full_width'.
  $permissions['view paragraph content media_full_width'] = array(
    'name' => 'view paragraph content media_full_width',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content media_half_width'.
  $permissions['view paragraph content media_half_width'] = array(
    'name' => 'view paragraph content media_half_width',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content media_half_width_float_left'.
  $permissions['view paragraph content media_half_width_float_left'] = array(
    'name' => 'view paragraph content media_half_width_float_left',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content resource'.
  $permissions['view paragraph content resource'] = array(
    'name' => 'view paragraph content resource',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content text'.
  $permissions['view paragraph content text'] = array(
    'name' => 'view paragraph content text',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'content manager with user permissions' => 'content manager with user permissions',
    ),
    'module' => 'system',
  );

  return $permissions;
}
