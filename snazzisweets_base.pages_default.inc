<?php
/**
 * @file
 * snazzisweets_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function snazzisweets_base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_page';
  $page->task = 'page';
  $page->admin_title = 'About Page';
  $page->admin_description = '';
  $page->path = 'about';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'user-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'about_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'About Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About SnazziSweets';
  $display->uuid = '8e54b8fe-9aa5-4f6d-8f98-afc33f008496';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_about_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6af8399b-d2b4-4011-b217-9bd764fed57d';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '101',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6af8399b-d2b4-4011-b217-9bd764fed57d';
  $display->content['new-6af8399b-d2b4-4011-b217-9bd764fed57d'] = $pane;
  $display->panels['center'][0] = 'new-6af8399b-d2b4-4011-b217-9bd764fed57d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6af8399b-d2b4-4011-b217-9bd764fed57d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cakes';
  $page->task = 'page';
  $page->admin_title = 'Cakes';
  $page->admin_description = '';
  $page->path = 'cakes';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Cakes',
    'name' => 'main-menu',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cakes__panel';
  $handler->task = 'page';
  $handler->subtask = 'cakes';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Piece of Cake';
  $display->uuid = '4778c6f5-92f0-4094-bb3e-50bbf60f0e2c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_cakes__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-34c192d7-3b6e-4adb-af98-6e7ead124b69';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-snazzi_cake_carousel-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '34c192d7-3b6e-4adb-af98-6e7ead124b69';
  $display->content['new-34c192d7-3b6e-4adb-af98-6e7ead124b69'] = $pane;
  $display->panels['center'][0] = 'new-34c192d7-3b6e-4adb-af98-6e7ead124b69';
  $pane = new stdClass();
  $pane->pid = 'new-bbf4bf35-b1d1-423e-92d7-57539bbe209d';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '106',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bbf4bf35-b1d1-423e-92d7-57539bbe209d';
  $display->content['new-bbf4bf35-b1d1-423e-92d7-57539bbe209d'] = $pane;
  $display->panels['center'][1] = 'new-bbf4bf35-b1d1-423e-92d7-57539bbe209d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-34c192d7-3b6e-4adb-af98-6e7ead124b69';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cakes'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cookie_menu';
  $page->task = 'page';
  $page->admin_title = 'Cookie Menu';
  $page->admin_description = '';
  $page->path = 'cookies';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Cookies',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cookie_menu__panel';
  $handler->task = 'page';
  $handler->subtask = 'cookie_menu';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'description' => array(
        'corner_location' => 'pane',
      ),
      'desc' => NULL,
      'center' => NULL,
      'prices' => NULL,
    ),
    'description' => array(
      'style' => 'rounded_corners',
    ),
    'prices' => array(
      'style' => '-1',
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'The Cookie Jar';
  $display->uuid = '64275bfc-e2e2-4d73-b05e-bf944780f36d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_cookie_menu__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2583aacc-7760-4b6a-a7d9-235cc56624d5';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'cookie_jar_banner';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'cookie_jar_fancybox',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2583aacc-7760-4b6a-a7d9-235cc56624d5';
  $display->content['new-2583aacc-7760-4b6a-a7d9-235cc56624d5'] = $pane;
  $display->panels['center'][0] = 'new-2583aacc-7760-4b6a-a7d9-235cc56624d5';
  $pane = new stdClass();
  $pane->pid = 'new-e61df112-b837-4eae-995d-bfd13e800675';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'cookie_jar_banner';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'cookie_jar_cart_contents',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e61df112-b837-4eae-995d-bfd13e800675';
  $display->content['new-e61df112-b837-4eae-995d-bfd13e800675'] = $pane;
  $display->panels['center'][1] = 'new-e61df112-b837-4eae-995d-bfd13e800675';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cookie_menu'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'snazzi_big_comfy_cupcake';
  $page->task = 'page';
  $page->admin_title = 'Big Comfy Cupcake';
  $page->admin_description = '';
  $page->path = 'cupcakes';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Cupcakes',
    'name' => 'main-menu',
    'weight' => '5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_snazzi_big_comfy_cupcake__panel_context_cc52e8e7-b288-4e3e-81fc-e7cbeeac4352';
  $handler->task = 'page';
  $handler->subtask = 'snazzi_big_comfy_cupcake';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'description' => array(
        'corner_location' => 'pane',
      ),
      'desc' => NULL,
      'center' => NULL,
      'prices' => NULL,
    ),
    'description' => array(
      'style' => 'rounded_corners',
    ),
    'prices' => array(
      'style' => '-1',
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Big Comfy Cupcake';
  $display->uuid = '64275bfc-e2e2-4d73-b05e-bf944780f36d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_snazzi_big_comfy_cupcake__panel_context_cc52e8e7-b288-4e3e-81fc-e7cbeeac4352';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2fed445e-fc2a-4e54-a9f5-923b7fdcae5e';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'snazzi_comfy_cupcake';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'comfy_cupcake_fancybox',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2fed445e-fc2a-4e54-a9f5-923b7fdcae5e';
  $display->content['new-2fed445e-fc2a-4e54-a9f5-923b7fdcae5e'] = $pane;
  $display->panels['center'][0] = 'new-2fed445e-fc2a-4e54-a9f5-923b7fdcae5e';
  $pane = new stdClass();
  $pane->pid = 'new-96e820b2-e8b4-4fe2-946f-f4fbba76664e';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'snazzi_comfy_cupcake';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'comfy_cupcake_contents',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '96e820b2-e8b4-4fe2-946f-f4fbba76664e';
  $display->content['new-96e820b2-e8b4-4fe2-946f-f4fbba76664e'] = $pane;
  $display->panels['center'][1] = 'new-96e820b2-e8b4-4fe2-946f-f4fbba76664e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['snazzi_big_comfy_cupcake'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'snazzi_homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = '#';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_snazzi_homepage__panel';
  $handler->task = 'page';
  $handler->subtask = 'snazzi_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Welcome to SnazziSweets';
  $display->uuid = 'ceebab02-bd7b-4ce3-9701-1dcb63b5f784';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_snazzi_homepage__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-06ba1bd1-8a92-47fd-b5fa-a4967b63dae6';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-homepage-snazzi_homepage';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '06ba1bd1-8a92-47fd-b5fa-a4967b63dae6';
  $display->content['new-06ba1bd1-8a92-47fd-b5fa-a4967b63dae6'] = $pane;
  $display->panels['center'][0] = 'new-06ba1bd1-8a92-47fd-b5fa-a4967b63dae6';
  $pane = new stdClass();
  $pane->pid = 'new-2cc114e6-6037-4dfe-8d76-43b023ccda8a';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '105',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2cc114e6-6037-4dfe-8d76-43b023ccda8a';
  $display->content['new-2cc114e6-6037-4dfe-8d76-43b023ccda8a'] = $pane;
  $display->panels['center'][1] = 'new-2cc114e6-6037-4dfe-8d76-43b023ccda8a';
  $pane = new stdClass();
  $pane->pid = 'new-c4e6d363-2068-4af7-be82-c397c2ec1923';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '109',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c4e6d363-2068-4af7-be82-c397c2ec1923';
  $display->content['new-c4e6d363-2068-4af7-be82-c397c2ec1923'] = $pane;
  $display->panels['center'][2] = 'new-c4e6d363-2068-4af7-be82-c397c2ec1923';
  $pane = new stdClass();
  $pane->pid = 'new-66544074-1aa4-4a53-a042-378095e70219';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '108',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '66544074-1aa4-4a53-a042-378095e70219';
  $display->content['new-66544074-1aa4-4a53-a042-378095e70219'] = $pane;
  $display->panels['center'][3] = 'new-66544074-1aa4-4a53-a042-378095e70219';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['snazzi_homepage'] = $page;

  return $pages;

}
