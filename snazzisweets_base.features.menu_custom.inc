<?php
/**
 * @file
 * snazzisweets_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function snazzisweets_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-snazzi-navbar.
  $menus['menu-snazzi-navbar'] = array(
    'menu_name' => 'menu-snazzi-navbar',
    'title' => 'Snazzi NavBar',
    'description' => 'NavBar containing site-wide controls.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('NavBar containing site-wide controls.');
  t('Snazzi NavBar');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
