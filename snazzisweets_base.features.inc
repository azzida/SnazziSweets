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
}

/**
 * Implements hook_views_api().
 */
function snazzisweets_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function snazzisweets_base_image_default_styles() {
  $styles = array();

  // Exported image style: snazzi_cookie_jar_banner_item.
  $styles['snazzi_cookie_jar_banner_item'] = array(
    'label' => 'Cookie Jar Banner Item',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: snazzi_cupcake_carousel_banner_item.
  $styles['snazzi_cupcake_carousel_banner_item'] = array(
    'label' => 'Cupcake Carousel Banner Item',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
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
function snazzisweets_base_node_info() {
  $items = array(
    'snazzi_cake' => array(
      'name' => t('Cake'),
      'base' => 'node_content',
      'description' => t('A fancy layered cake!'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'snazzi_cookie' => array(
      'name' => t('Cookie'),
      'base' => 'node_content',
      'description' => t('A delicious cookie!'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'snazzi_cupcake' => array(
      'name' => t('Cupcake'),
      'base' => 'node_content',
      'description' => t('A gourmet muffin!'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
