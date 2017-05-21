<?php
/**
 * @file
 * snazzisweets_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function snazzisweets_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_cakes:cakes.
  $menu_links['main-menu_cakes:cakes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'cakes',
    'router_path' => 'cakes',
    'link_title' => 'Cakes',
    'options' => array(
      'identifier' => 'main-menu_cakes:cakes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: main-menu_cookies:cookies.
  $menu_links['main-menu_cookies:cookies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'cookies',
    'router_path' => 'cookies',
    'link_title' => 'Cookies',
    'options' => array(
      'identifier' => 'main-menu_cookies:cookies',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Exported menu link: main-menu_cupcakes:cupcakes.
  $menu_links['main-menu_cupcakes:cupcakes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'cupcakes',
    'router_path' => 'cupcakes',
    'link_title' => 'Cupcakes',
    'options' => array(
      'identifier' => 'main-menu_cupcakes:cupcakes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cakes');
  t('Cookies');
  t('Cupcakes');

  return $menu_links;
}
