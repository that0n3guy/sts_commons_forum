<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _sts_commons_forum_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _sts_commons_forum_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_style';
  $strongarm->value = 'drupal_commons_af';

  $export['advanced_forum_style'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_styled_node_types';
  $strongarm->value = array();

  $export['advanced_forum_styled_node_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_forum';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_forum'] = $strongarm;
  return $export;
}
