<?php
/**
 * @file
 * snazzisweets_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function snazzisweets_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function snazzisweets_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function snazzisweets_base_fontyourface_features_default_font() {
  return array(
    'Marcellus SC regular (latin)' => array(
      'name' => 'Marcellus SC regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Marcellus SC&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => 'header, footer, .container',
      'css_family' => 'Marcellus SC',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:20:"Marcellus SC:regular";s:6:"subset";s:5:"latin";}',
    ),
    'Mountains of Christmas 700 (latin)' => array(
      'name' => 'Mountains of Christmas 700 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Mountains of Christmas&subset=latin#700',
      'provider' => 'google_fonts_api',
      'css_selector' => '.snazzi-brand',
      'css_family' => 'Mountains of Christmas',
      'css_style' => 'normal',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:26:"Mountains of Christmas:700";s:6:"subset";s:5:"latin";}',
    ),
  );
}

/**
 * Implements hook_node_info().
 */
function snazzisweets_base_node_info() {
  $items = array(
    'snazzi_cake' => array(
      'name' => t('Cake'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'snazzi_cookie' => array(
      'name' => t('Cookie'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'snazzi_cupcake' => array(
      'name' => t('Cupcake'),
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
