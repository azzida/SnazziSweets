<?php
/**
 * @file
 * snazzisweets_base.slick_default_preset.inc
 */

/**
 * Implements hook_slick_default_presets().
 */
function snazzisweets_base_slick_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'snazzi_homepage_carousel';
  $preset->label = 'Homepage Carousel';
  $preset->breakpoints = 0;
  $preset->skin = '';
  $preset->options = array(
    'general' => array(
      'normal' => 'snazzi_slick_expanded',
      'thumbnail' => 'snazzi_slick_small',
      'template_class' => '',
      'goodies' => array(
        'arrow-down' => 0,
        'pattern' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'mobileFirst' => FALSE,
      'asNavFor' => '',
      'accessibility' => TRUE,
      'adaptiveHeight' => FALSE,
      'autoplay' => TRUE,
      'autoplaySpeed' => 3000,
      'pauseOnHover' => FALSE,
      'pauseOnDotsHover' => FALSE,
      'arrows' => FALSE,
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="previous">Previous</button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="next">Next</button>',
      'centerMode' => TRUE,
      'centerPadding' => '30px',
      'dots' => FALSE,
      'dotsClass' => 'slick-dots',
      'appendDots' => '$(element)',
      'draggable' => TRUE,
      'fade' => FALSE,
      'focusOnSelect' => TRUE,
      'infinite' => TRUE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'respondTo' => 'window',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 1,
      'slide' => '',
      'slidesToShow' => 5,
      'slidesToScroll' => 1,
      'speed' => 500,
      'swipe' => TRUE,
      'swipeToSlide' => TRUE,
      'edgeFriction' => 0.34999999999999997779553950749686919152736663818359375,
      'touchMove' => TRUE,
      'touchThreshold' => 5,
      'useCSS' => TRUE,
      'cssEase' => 'ease',
      'cssEaseBezier' => '',
      'cssEaseOverride' => '',
      'useTransform' => FALSE,
      'easing' => 'linear',
      'variableWidth' => FALSE,
      'vertical' => FALSE,
      'verticalSwiping' => FALSE,
      'waitForAnimate' => TRUE,
    ),
  );
  $export['snazzi_homepage_carousel'] = $preset;

  return $export;
}
