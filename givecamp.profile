<?php

/**
 * Set default install profile.
 *
 */
function system_form_install_select_profile_form_alter(&$form, $form_state) {
  // Hide default Drupal profiles
  unset($form['profile']['Standard']);
  unset($form['profile']['Minimal']);
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function givecamp_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name and email address.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['site_information']['site_mail']['#default_value'] = 'no-reply@example.com';

  // Account information defaults
  $form['admin_account']['account']['name']['#default_value'] = 'Givecamp-admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'no-reply@example.com';
  
  // Date/time settings
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  
  // Many modules set messages during installation we reset them
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // Opt out of e-mail notifications 
  $form['update_notifications']['update_status_module']["#default_value"]['1'] = '0';
  
  // Clean up after install
  node_access_rebuild();
  drupal_cron_run();
  drupal_flush_all_caches();
}
