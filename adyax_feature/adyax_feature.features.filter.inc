<?php
/**
 * @file
 * adyax_feature.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function adyax_feature_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'filter_footnotes' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'footnotes_collapse' => 1,
        ),
      ),
      'filter_url' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
