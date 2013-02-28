<?php

/**
 * Implements hook_install_tasks_alter().
 */
function givecamp_install_tasks_alter(&$tasks, $install_state) {
  global $install_state;
 
  // Skip profile selection step 
  $tasks['install_select_profile']['display'] = FALSE;

  // Skip language selection and default to English.
//  $tasks['install_select_locale']['display'] = FALSE;
//  $tasks['install_select_locale']['run'] = INSTALL_TASK_SKIP;
//  $install_state['parameters']['locale'] = 'en';

  // Override "install_finished" task to redirect 
  //$tasks['install_finished']['function'] = 'givecamp_install_finished';
}
/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function givecamp_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];

  // Account information defaults
  $form['admin_account']['account']['name']['#default_value'] = 'Givecamp-admin';
  
  // Date/time settings
  $form['server_settings']['site_default_country']['#default_value'] = 'US';

  // Get rid of messages and extra notifications
  givecamp_clean_up();
}

/**
 * Flush cache, run cron, and other clean up
 */
function givecamp_clean_up() {
  // Rebuild perms
  node_access_rebuild();
  
  // Many modules set messages during installation we reset them
  drupal_get_messages('status', TRUE);
  drupal_get_messages('completed', TRUE);
  drupal_get_messages('warning');
  
  // Disable Bartik theme
  db_update('system')
    ->fields(array('status' => 0))
    ->condition('type', 'theme')
    ->condition('name', 'bartik')
    ->execute();
  
  // Run cron and flush cache for good measure
  drupal_cron_run();
  drupal_flush_all_caches();
}

/**
 * Implements hook_install_tasks().
 *
 * 
 */
function givecamp_install_tasks() {

  // Increase memory if not more than 128M.
  if (ini_get('memory_limit') != '-1' && ini_get('memory_limit') <= '128M') {
    ini_set('memory_limit', '128M');
  }
//  
//  return array(
//    'givecamp_set_theme' => array(
//      'display_name' => st('Pick a theme'),
//      'display' => TRUE,
//      'type' => 'form',
//      'function' => 'givecamp_set_theme',
//    ),
// @TODO maybe allow users to decide if they want the prepopulated demo content
//    ),
//    'givecamp_demo_content' => array(
//      'display' => FALSE,
//      'type' => '',
//      'run' => $demo_content ? INSTALL_TASK_RUN_IF_NOT_COMPLETED : INSTALL_TASK_SKIP,
//    ),
//  );
}

//function givecamp_set_theme() {
//  return;
//}