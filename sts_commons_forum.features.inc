<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function sts_commons_forum_ctools_plugin_api() {
  module_load_include('inc', 'sts_commons_forum', 'sts_commons_forum.defaults');
  $args = func_get_args();
  return call_user_func_array('_sts_commons_forum_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function sts_commons_forum_strongarm() {
  module_load_include('inc', 'sts_commons_forum', 'sts_commons_forum.defaults');
  $args = func_get_args();
  return call_user_func_array('_sts_commons_forum_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function sts_commons_forum_views_default_views() {
  module_load_include('inc', 'sts_commons_forum', 'sts_commons_forum.features.views');
  $args = func_get_args();
  return call_user_func_array('_sts_commons_forum_views_default_views', $args);
}
