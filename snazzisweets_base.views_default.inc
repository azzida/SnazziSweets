<?php
/**
 * @file
 * snazzisweets_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function snazzisweets_base_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cookie_jar_banner';
  $view->description = '';
  $view->tag = 'snazzisweets';
  $view->base_table = 'node';
  $view->human_name = 'Cookie Jar Banner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Weight (field_snazzi_weight) */
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['id'] = 'field_snazzi_weight_value';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['table'] = 'field_data_field_snazzi_weight';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['field'] = 'field_snazzi_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'snazzi_cookie' => 'snazzi_cookie',
  );

  /* Display: Cookie Jar Fancybox Banner */
  $handler = $view->new_display('block', 'Cookie Jar Fancybox Banner', 'cookie_jar_fancybox');
  $handler->display->display_options['display_description'] = 'Banner that is first visible on the /cookies page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_snazzi_photo' => 'field_snazzi_photo',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: NID Token (Hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'NID Token (Hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uc_product_image']['alter']['text'] = '<a href="#snazzi-[nid]">[uc_product_image]</a>';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'snazzi_fancybox_banner_item',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Weight (field_snazzi_weight) */
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['id'] = 'field_snazzi_weight_value';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['table'] = 'field_data_field_snazzi_weight';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['field'] = 'field_snazzi_weight_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'snazzi_cookie' => 'snazzi_cookie',
  );

  /* Display: Cookie Jar Cart Contents */
  $handler = $view->new_display('block', 'Cookie Jar Cart Contents', 'cookie_jar_cart_contents');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Contents for each cookie when views';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'snazzi_ubercart_cart_view';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: NID Token (Hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'NID Token (Hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Title Token (Hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title Token (Hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_snazzi_photo']['id'] = 'field_snazzi_photo';
  $handler->display->display_options['fields']['field_snazzi_photo']['table'] = 'field_data_field_snazzi_photo';
  $handler->display->display_options['fields']['field_snazzi_photo']['field'] = 'field_snazzi_photo';
  $handler->display->display_options['fields']['field_snazzi_photo']['ui_name'] = 'Photo link, activates Fancybox';
  $handler->display->display_options['fields']['field_snazzi_photo']['label'] = '';
  $handler->display->display_options['fields']['field_snazzi_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_snazzi_photo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_snazzi_photo']['alter']['text'] = '<a href="#snazzi-view-[nid]">[field_snazzi_photo]</a>';
  $handler->display->display_options['fields']['field_snazzi_photo']['alter']['path'] = '#view-snazzi-[nid]';
  $handler->display->display_options['fields']['field_snazzi_photo']['alter']['rel'] = 'nofollow';
  $handler->display->display_options['fields']['field_snazzi_photo']['element_label_colon'] = FALSE;
  /* Field: Price Token (Hidden) */
  $handler->display->display_options['fields']['field_snazzi_price']['id'] = 'field_snazzi_price';
  $handler->display->display_options['fields']['field_snazzi_price']['table'] = 'field_data_field_snazzi_price';
  $handler->display->display_options['fields']['field_snazzi_price']['field'] = 'field_snazzi_price';
  $handler->display->display_options['fields']['field_snazzi_price']['ui_name'] = 'Price Token (Hidden)';
  $handler->display->display_options['fields']['field_snazzi_price']['label'] = '';
  $handler->display->display_options['fields']['field_snazzi_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_snazzi_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_snazzi_price']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_snazzi_price']['multi_type'] = 'ul';
  /* Field: Product: Sell price */
  $handler->display->display_options['fields']['sell_price']['id'] = 'sell_price';
  $handler->display->display_options['fields']['sell_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['sell_price']['field'] = 'sell_price';
  $handler->display->display_options['fields']['sell_price']['label'] = '';
  $handler->display->display_options['fields']['sell_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sell_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sell_price']['precision'] = '0';
  /* Field: Product: Add to cart form */
  $handler->display->display_options['fields']['addtocartlink']['id'] = 'addtocartlink';
  $handler->display->display_options['fields']['addtocartlink']['table'] = 'uc_products';
  $handler->display->display_options['fields']['addtocartlink']['field'] = 'addtocartlink';
  $handler->display->display_options['fields']['addtocartlink']['label'] = '';
  $handler->display->display_options['fields']['addtocartlink']['exclude'] = TRUE;
  $handler->display->display_options['fields']['addtocartlink']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uc_product_image']['alter']['text'] = '<a href="#snazzi-view-[nid]">[uc_product_image]</a>';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'snazzi_fancybox_banner_item',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  /* Field: Fancybox Popup Contents */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Fancybox Popup Contents';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="row vertical-align">
	<div id="snazzi-view-[nid]">
	<div class="row">
		<div class="snazzi-title col-xs-12">[title]</div>
	</div>
	<div class="row vertical-align">
		<div class="snazzi-photo col-xs-2">[uc_product_image]</div>
		<div class="snazzi-body col-xs-6">[body]</div>
		<div class="snazzi-price col-xs-4">[sell_price]</div>
	</div>
	<div class="row">
		<div class="snazzi-cart col-xs-12">[addtocartlink]</div>
	</div>

	</div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Weight (field_snazzi_weight) */
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['id'] = 'field_snazzi_weight_value';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['table'] = 'field_data_field_snazzi_weight';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['field'] = 'field_snazzi_weight_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'snazzi_cookie' => 'snazzi_cookie',
  );
  $export['cookie_jar_banner'] = $view;

  $view = new view();
  $view->name = 'homepage';
  $view->description = '';
  $view->tag = 'snazzisweets';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['asnavfor_auto'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'snazzi_homepage_carousel';
  $handler->display->display_options['style_options']['skin'] = 'default';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'uc_product_image' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_snazzi_photo' => 'field_snazzi_photo',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'snazzi_fancybox_banner_item',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'snazzi_cake' => 'snazzi_cake',
    'snazzi_cookie' => 'snazzi_cookie',
    'snazzi_cupcake' => 'snazzi_cupcake',
  );

  /* Display: Homepage Block */
  $handler = $view->new_display('block', 'Homepage Block', 'snazzi_homepage');
  $export['homepage'] = $view;

  $view = new view();
  $view->name = 'snazzi_cake_carousel';
  $view->description = '';
  $view->tag = 'snazzisweets';
  $view->base_table = 'node';
  $view->human_name = 'Cake Carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cake Carousel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'snazzi_cake' => 'snazzi_cake',
  );

  /* Display: Carousel of Cakes */
  $handler = $view->new_display('block', 'Carousel of Cakes', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '5000';
  $handler->display->display_options['style_options']['navigation'] = 0;
  $handler->display->display_options['style_options']['indicators'] = 0;
  $handler->display->display_options['style_options']['pause'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Weight (field_snazzi_weight) */
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['id'] = 'field_snazzi_weight_value';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['table'] = 'field_data_field_snazzi_weight';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['field'] = 'field_snazzi_weight_value';
  $export['snazzi_cake_carousel'] = $view;

  $view = new view();
  $view->name = 'snazzi_comfy_cupcake';
  $view->description = '';
  $view->tag = 'snazzisweets';
  $view->base_table = 'node';
  $view->human_name = 'Comfy Cupcake';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Weight (field_snazzi_weight) */
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['id'] = 'field_snazzi_weight_value';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['table'] = 'field_data_field_snazzi_weight';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['field'] = 'field_snazzi_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'snazzi_cookie' => 'snazzi_cookie',
  );

  /* Display: Comfy Cupcake Banner */
  $handler = $view->new_display('block', 'Comfy Cupcake Banner', 'comfy_cupcake_fancybox');
  $handler->display->display_options['display_description'] = 'Banner that is first visible on the /cupcakes page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_snazzi_photo' => 'field_snazzi_photo',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: NID Token (Hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'NID Token (Hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uc_product_image']['alter']['text'] = '<a href="#snazzi-[nid]">[uc_product_image]</a>';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'snazzi_fancybox_banner_item',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Weight (field_snazzi_weight) */
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['id'] = 'field_snazzi_weight_value';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['table'] = 'field_data_field_snazzi_weight';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['field'] = 'field_snazzi_weight_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'snazzi_cupcake' => 'snazzi_cupcake',
  );

  /* Display: Comfy Cupcake Contents */
  $handler = $view->new_display('block', 'Comfy Cupcake Contents', 'comfy_cupcake_contents');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Contents for each cupcake when viewed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'snazzi_ubercart_cart_view';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: NID Token (Hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'NID Token (Hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Title Token (Hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title Token (Hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Price Token (Hidden) */
  $handler->display->display_options['fields']['field_snazzi_price']['id'] = 'field_snazzi_price';
  $handler->display->display_options['fields']['field_snazzi_price']['table'] = 'field_data_field_snazzi_price';
  $handler->display->display_options['fields']['field_snazzi_price']['field'] = 'field_snazzi_price';
  $handler->display->display_options['fields']['field_snazzi_price']['ui_name'] = 'Price Token (Hidden)';
  $handler->display->display_options['fields']['field_snazzi_price']['label'] = '';
  $handler->display->display_options['fields']['field_snazzi_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_snazzi_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_snazzi_price']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_snazzi_price']['multi_type'] = 'ul';
  /* Field: Product: Sell price */
  $handler->display->display_options['fields']['sell_price']['id'] = 'sell_price';
  $handler->display->display_options['fields']['sell_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['sell_price']['field'] = 'sell_price';
  $handler->display->display_options['fields']['sell_price']['label'] = '';
  $handler->display->display_options['fields']['sell_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sell_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sell_price']['precision'] = '0';
  /* Field: Product: Add to cart form */
  $handler->display->display_options['fields']['addtocartlink']['id'] = 'addtocartlink';
  $handler->display->display_options['fields']['addtocartlink']['table'] = 'uc_products';
  $handler->display->display_options['fields']['addtocartlink']['field'] = 'addtocartlink';
  $handler->display->display_options['fields']['addtocartlink']['label'] = '';
  $handler->display->display_options['fields']['addtocartlink']['exclude'] = TRUE;
  $handler->display->display_options['fields']['addtocartlink']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uc_product_image']['alter']['text'] = '<a href="#snazzi-view-[nid]">[uc_product_image]</a>';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'snazzi_fancybox_banner_item',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  /* Field: Fancybox Popup Contents */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Fancybox Popup Contents';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="row vertical-align">
	<div id="snazzi-view-[nid]">
	<div class="row">
		<div class="snazzi-title col-xs-12">[title]</div>
	</div>
	<div class="row vertical-align">
		<div class="snazzi-photo col-xs-2">[uc_product_image]</div>
		<div class="snazzi-body col-xs-6">[body]</div>
		<div class="snazzi-price col-xs-4">[sell_price]</div>
	</div>
	<div class="row">
		<div class="snazzi-cart col-xs-12">[addtocartlink]</div>
	</div>

	</div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Weight (field_snazzi_weight) */
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['id'] = 'field_snazzi_weight_value';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['table'] = 'field_data_field_snazzi_weight';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['field'] = 'field_snazzi_weight_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'snazzi_cupcake' => 'snazzi_cupcake',
  );
  $export['snazzi_comfy_cupcake'] = $view;

  $view = new view();
  $view->name = 'snazzi_comfy_cupcake_banner';
  $view->description = '';
  $view->tag = 'snazzisweets';
  $view->base_table = 'node';
  $view->human_name = 'Comfy Cupcake Banner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Weight (field_snazzi_weight) */
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['id'] = 'field_snazzi_weight_value';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['table'] = 'field_data_field_snazzi_weight';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['field'] = 'field_snazzi_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'snazzi_cookie' => 'snazzi_cookie',
  );

  /* Display: Comfy Cupcake Fancybox */
  $handler = $view->new_display('block', 'Comfy Cupcake Fancybox', 'comfy_cupcake_fancybox');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_snazzi_photo' => 'field_snazzi_photo',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: NID Token (Hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'NID Token (Hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Title Token (Hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title Token (Hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_snazzi_photo']['id'] = 'field_snazzi_photo';
  $handler->display->display_options['fields']['field_snazzi_photo']['table'] = 'field_data_field_snazzi_photo';
  $handler->display->display_options['fields']['field_snazzi_photo']['field'] = 'field_snazzi_photo';
  $handler->display->display_options['fields']['field_snazzi_photo']['ui_name'] = 'Photo link, activates Fancybox';
  $handler->display->display_options['fields']['field_snazzi_photo']['label'] = '';
  $handler->display->display_options['fields']['field_snazzi_photo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_snazzi_photo']['alter']['text'] = '<a href="#snazzi-view-[nid]">[field_snazzi_photo]</a>';
  $handler->display->display_options['fields']['field_snazzi_photo']['alter']['path'] = '#view-snazzi-[nid]';
  $handler->display->display_options['fields']['field_snazzi_photo']['alter']['rel'] = 'nofollow';
  $handler->display->display_options['fields']['field_snazzi_photo']['element_label_colon'] = FALSE;
  /* Field: Price Token (Hidden) */
  $handler->display->display_options['fields']['field_snazzi_price']['id'] = 'field_snazzi_price';
  $handler->display->display_options['fields']['field_snazzi_price']['table'] = 'field_data_field_snazzi_price';
  $handler->display->display_options['fields']['field_snazzi_price']['field'] = 'field_snazzi_price';
  $handler->display->display_options['fields']['field_snazzi_price']['ui_name'] = 'Price Token (Hidden)';
  $handler->display->display_options['fields']['field_snazzi_price']['label'] = '';
  $handler->display->display_options['fields']['field_snazzi_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_snazzi_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_snazzi_price']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_snazzi_price']['multi_type'] = 'ul';
  /* Field: Fancybox Popup Contents */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Fancybox Popup Contents';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="row vertical-align">
	<div id="snazzi-view-[nid]">
	<div class="row">
		<div class="snazzi-title col-xs-12">[title]</div>
	</div>
	<div class="row vertical-align">
		<div class="snazzi-photo col-xs-2">[field_snazzi_photo]</div>
		<div class="snazzi-body col-xs-6">[body]</div>
		<div class="snazzi-price col-xs-4">[field_snazzi_price]</div>
	</div>
	</div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Weight (field_snazzi_weight) */
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['id'] = 'field_snazzi_weight_value';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['table'] = 'field_data_field_snazzi_weight';
  $handler->display->display_options['sorts']['field_snazzi_weight_value']['field'] = 'field_snazzi_weight_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'snazzi_cupcake' => 'snazzi_cupcake',
  );
  $export['snazzi_comfy_cupcake_banner'] = $view;

  return $export;
}
