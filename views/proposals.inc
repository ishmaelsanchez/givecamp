<?php
$view = new view();
$view->name = 'proposal';
$view->description = 'Listing related to Proposal';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Proposal';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Proposal Notification';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
/* Field: Content: Contact Email */
$handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
$handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
$handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
/* Field: Content: Contact Name */
$handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
$handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
$handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'proposal' => 'proposal',
);

/* Display: Proposal Review */
$handler = $view->new_display('page', 'Proposal Review', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Proposal Review';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  4 => '4',
  5 => '5',
);
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_contact_name' => 'field_contact_name',
  'field_organization_background' => 'field_organization_background',
  'field_work_request' => 'field_work_request',
  'field_project_approved_' => 'field_project_approved_',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_contact_name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_organization_background' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_work_request' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_project_approved_' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Contact Name */
$handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
$handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
$handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
$handler->display->display_options['fields']['field_contact_name']['element_type'] = '0';
$handler->display->display_options['fields']['field_contact_name']['element_default_classes'] = FALSE;
/* Field: Content: Organization Background */
$handler->display->display_options['fields']['field_organization_background']['id'] = 'field_organization_background';
$handler->display->display_options['fields']['field_organization_background']['table'] = 'field_data_field_organization_background';
$handler->display->display_options['fields']['field_organization_background']['field'] = 'field_organization_background';
$handler->display->display_options['fields']['field_organization_background']['alter']['max_length'] = '200';
$handler->display->display_options['fields']['field_organization_background']['alter']['more_link'] = TRUE;
$handler->display->display_options['fields']['field_organization_background']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['field_organization_background']['element_type'] = '0';
$handler->display->display_options['fields']['field_organization_background']['element_default_classes'] = FALSE;
/* Field: Content: Work Request */
$handler->display->display_options['fields']['field_work_request']['id'] = 'field_work_request';
$handler->display->display_options['fields']['field_work_request']['table'] = 'field_data_field_work_request';
$handler->display->display_options['fields']['field_work_request']['field'] = 'field_work_request';
$handler->display->display_options['fields']['field_work_request']['alter']['max_length'] = '200';
$handler->display->display_options['fields']['field_work_request']['alter']['more_link'] = TRUE;
$handler->display->display_options['fields']['field_work_request']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['field_work_request']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['field_work_request']['element_type'] = '0';
$handler->display->display_options['fields']['field_work_request']['element_default_classes'] = FALSE;
/* Field: Content: Status */
$handler->display->display_options['fields']['field_project_approved_']['id'] = 'field_project_approved_';
$handler->display->display_options['fields']['field_project_approved_']['table'] = 'field_data_field_project_approved_';
$handler->display->display_options['fields']['field_project_approved_']['field'] = 'field_project_approved_';
$handler->display->display_options['fields']['field_project_approved_']['element_type'] = '0';
$handler->display->display_options['fields']['field_project_approved_']['element_default_classes'] = FALSE;
$handler->display->display_options['path'] = 'admin/content/proposal-review';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Proposal Review';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Proposal Notification */
$handler = $view->new_display('page', 'Proposal Notification', 'page_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  4 => '4',
  5 => '5',
);
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'views_bulk_operations' => 'views_bulk_operations',
  'field_contact_email' => 'field_contact_email',
  'field_contact_name' => 'field_contact_name',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_contact_email' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_contact_name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['element_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_assign_owner_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_make_sticky_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_make_unsticky_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
  ),
  'action::views_bulk_operations_argument_selector_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'url' => '',
    ),
  ),
  'action::node_promote_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_publish_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpromote_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_save_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::system_send_email_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpublish_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpublish_by_keyword_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::pathauto_node_update_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Contact Email */
$handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
$handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
$handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
/* Field: Content: Contact Name */
$handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
$handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
$handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
$handler->display->display_options['fields']['field_contact_name']['element_type'] = '0';
$handler->display->display_options['fields']['field_contact_name']['element_default_classes'] = FALSE;
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
  'proposal' => 'proposal',
);
/* Filter criterion: Content: Status (field_project_approved_) */
$handler->display->display_options['filters']['field_project_approved__value']['id'] = 'field_project_approved__value';
$handler->display->display_options['filters']['field_project_approved__value']['table'] = 'field_data_field_project_approved_';
$handler->display->display_options['filters']['field_project_approved__value']['field'] = 'field_project_approved__value';
$handler->display->display_options['filters']['field_project_approved__value']['value'] = array(
  1 => '1',
);
$handler->display->display_options['filters']['field_project_approved__value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_project_approved__value']['expose']['operator_id'] = 'field_project_approved__value_op';
$handler->display->display_options['filters']['field_project_approved__value']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['field_project_approved__value']['expose']['operator'] = 'field_project_approved__value_op';
$handler->display->display_options['filters']['field_project_approved__value']['expose']['identifier'] = 'field_project_approved__value';
$handler->display->display_options['filters']['field_project_approved__value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
);
$handler->display->display_options['path'] = 'admin/content/proposal-notification';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Proposal Notification';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
