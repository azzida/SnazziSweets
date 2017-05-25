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
 * Implements hook_image_default_styles().
 */
function snazzisweets_base_image_default_styles() {
  $styles = array();

  // Exported image style: snazzi_fancybox_banner_item.
  $styles['snazzi_fancybox_banner_item'] = array(
    'label' => 'Fancybox Banner Item',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: snazzi_homepage_banner_image.
  $styles['snazzi_homepage_banner_image'] = array(
    'label' => 'Homepage Banner Image',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: snazzi_slick_small.
  $styles['snazzi_slick_small'] = array(
    'label' => 'Slick Small Image',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_uc_product_default_classes().
 */
function snazzisweets_base_uc_product_default_classes() {
  $items = array(
    'snazzi_cake' => array(
      'name' => t('Cake'),
      'base' => 'uc_product',
      'description' => t('Cake product.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'snazzi_cookie' => array(
      'name' => t('Cookie'),
      'base' => 'uc_product',
      'description' => t('Cookies for the cookie jar.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'snazzi_cupcake' => array(
      'name' => t('Cupcake'),
      'base' => 'uc_product',
      'description' => t('A gourmet cupcake.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
