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
  $pane->pid = 'new-17d0c23c-71f5-4918-93e5-560b1fefb04e';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '66',
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
  $pane->uuid = '17d0c23c-71f5-4918-93e5-560b1fefb04e';
  $display->content['new-17d0c23c-71f5-4918-93e5-560b1fefb04e'] = $pane;
  $display->panels['center'][1] = 'new-17d0c23c-71f5-4918-93e5-560b1fefb04e';
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
          1 => 1,
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
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'desc',
          1 => 'prices',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'prices' => array(
        'type' => 'region',
        'title' => 'Prices',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-5',
        'hide_empty' => 0,
      ),
      'desc' => array(
        'type' => 'region',
        'title' => 'Desc',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-7',
        'hide_empty' => 0,
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
  $pane->pid = 'new-fbf97718-8da1-4424-bbf1-511b9ab4c089';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-a8ccdf8450af57d5d37735eb7b69ee14';
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
  $pane->uuid = 'fbf97718-8da1-4424-bbf1-511b9ab4c089';
  $display->content['new-fbf97718-8da1-4424-bbf1-511b9ab4c089'] = $pane;
  $display->panels['center'][0] = 'new-fbf97718-8da1-4424-bbf1-511b9ab4c089';
  $pane = new stdClass();
  $pane->pid = 'new-23a67a04-5107-42ae-817e-e1ba7fc72c96';
  $pane->panel = 'desc';
  $pane->type = 'block';
  $pane->subtype = 'views-ccc8785e03632f91a6ab126639ad5c01';
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
  $pane->uuid = '23a67a04-5107-42ae-817e-e1ba7fc72c96';
  $display->content['new-23a67a04-5107-42ae-817e-e1ba7fc72c96'] = $pane;
  $display->panels['desc'][0] = 'new-23a67a04-5107-42ae-817e-e1ba7fc72c96';
  $pane = new stdClass();
  $pane->pid = 'new-252ff3ad-bbe5-4192-9d00-f76833fcebcc';
  $pane->panel = 'prices';
  $pane->type = 'block';
  $pane->subtype = 'views-6fb41bf08c837145c017ca0b0b0d5237';
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
  $pane->uuid = '252ff3ad-bbe5-4192-9d00-f76833fcebcc';
  $display->content['new-252ff3ad-bbe5-4192-9d00-f76833fcebcc'] = $pane;
  $display->panels['prices'][0] = 'new-252ff3ad-bbe5-4192-9d00-f76833fcebcc';
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
          1 => 1,
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
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'desc',
          1 => 'prices',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'prices' => array(
        'type' => 'region',
        'title' => 'Prices',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-5',
        'hide_empty' => 0,
      ),
      'desc' => array(
        'type' => 'region',
        'title' => 'Desc',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-7',
        'hide_empty' => 0,
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
  $pane->pid = 'new-152bdd4d-141b-469b-879e-03b79ef30c50';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-01be14d11f1a19ce531e9506d249ba5f';
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
  $pane->uuid = '152bdd4d-141b-469b-879e-03b79ef30c50';
  $display->content['new-152bdd4d-141b-469b-879e-03b79ef30c50'] = $pane;
  $display->panels['center'][0] = 'new-152bdd4d-141b-469b-879e-03b79ef30c50';
  $pane = new stdClass();
  $pane->pid = 'new-ecf92d91-0384-4dac-b3cd-c473010eb7f8';
  $pane->panel = 'desc';
  $pane->type = 'block';
  $pane->subtype = 'views-d089b2dec9c830bd0c08e064808e96cd';
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
  $pane->uuid = 'ecf92d91-0384-4dac-b3cd-c473010eb7f8';
  $display->content['new-ecf92d91-0384-4dac-b3cd-c473010eb7f8'] = $pane;
  $display->panels['desc'][0] = 'new-ecf92d91-0384-4dac-b3cd-c473010eb7f8';
  $pane = new stdClass();
  $pane->pid = 'new-c7c28183-b81a-4d13-bc01-adb6cd590fac';
  $pane->panel = 'prices';
  $pane->type = 'block';
  $pane->subtype = 'views-3dce74bdc470a82d47c47bb81863a14c';
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
  $pane->uuid = 'c7c28183-b81a-4d13-bc01-adb6cd590fac';
  $display->content['new-c7c28183-b81a-4d13-bc01-adb6cd590fac'] = $pane;
  $display->panels['prices'][0] = 'new-c7c28183-b81a-4d13-bc01-adb6cd590fac';
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
  $display->title = '';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['snazzi_homepage'] = $page;

  return $pages;

}
