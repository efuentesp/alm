<?php
/**
 * @file
 * alm.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function alm_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'customer_requirements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Customer Requirements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Customer Requirements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'node_types';
  $handler->display->display_options['access']['node_types'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_customer_req_name' => 'field_customer_req_name',
    'field_requirement_computed_size' => 'field_requirement_computed_size',
    'field_customer_req_module_vb6' => 'field_customer_req_module_vb6',
    'field_customer_req_module' => 'field_customer_req_module',
    'field_customer_req_req' => 'field_customer_req_req',
    'field_customer_req_tags' => 'field_customer_req_tags',
    'field_customer_req_status' => 'field_customer_req_status',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_customer_req_baseline' => 'field_customer_req_name',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_customer_req_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requirement_computed_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_customer_req_module_vb6' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_customer_req_module' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_customer_req_req' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_customer_req_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_customer_req_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'edit_node' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'views_bulk_operations' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_customer_req_baseline' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '0';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'Add Customer Requirement';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = 'Add Customer Requirement';
  $handler->display->display_options['header']['link']['path'] = 'node/add/customer-requirement';
  $handler->display->display_options['header']['link']['querystring'] = 'field_customer_req_project=%1';
  $handler->display->display_options['header']['link']['class'] = 'btn btn-primary';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_req_project_target_id']['id'] = 'field_customer_req_project_target_id';
  $handler->display->display_options['relationships']['field_customer_req_project_target_id']['table'] = 'field_data_field_customer_req_project';
  $handler->display->display_options['relationships']['field_customer_req_project_target_id']['field'] = 'field_customer_req_project_target_id';
  $handler->display->display_options['relationships']['field_customer_req_project_target_id']['label'] = 'Project';
  $handler->display->display_options['relationships']['field_customer_req_project_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_req_module_target_id']['id'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['relationships']['field_customer_req_module_target_id']['table'] = 'field_data_field_customer_req_module';
  $handler->display->display_options['relationships']['field_customer_req_module_target_id']['field'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['relationships']['field_customer_req_module_target_id']['label'] = 'Module';
  $handler->display->display_options['relationships']['field_customer_req_module_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['id'] = 'reverse_field_customer_req_relationship_node';
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['field'] = 'reverse_field_customer_req_relationship_node';
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['label'] = 'Requirement';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'customer_requirement::field_customer_req_status' => 'customer_requirement::field_customer_req_status',
        ),
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'ID';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_customer_req_name']['id'] = 'field_customer_req_name';
  $handler->display->display_options['fields']['field_customer_req_name']['table'] = 'field_data_field_customer_req_name';
  $handler->display->display_options['fields']['field_customer_req_name']['field'] = 'field_customer_req_name';
  /* Field: SUM(Content: Computed Size) */
  $handler->display->display_options['fields']['field_requirement_computed_size']['id'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['table'] = 'field_data_field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['field'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['relationship'] = 'reverse_field_customer_req_relationship_node';
  $handler->display->display_options['fields']['field_requirement_computed_size']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_requirement_computed_size']['label'] = 'Size';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_customer_req_status']['id'] = 'field_customer_req_status';
  $handler->display->display_options['fields']['field_customer_req_status']['table'] = 'field_data_field_customer_req_status';
  $handler->display->display_options['fields']['field_customer_req_status']['field'] = 'field_customer_req_status';
  $handler->display->display_options['fields']['field_customer_req_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: VB6 Module */
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['id'] = 'field_customer_req_module_vb6';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['table'] = 'field_data_field_customer_req_module_vb6';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['field'] = 'field_customer_req_module_vb6';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Web Module */
  $handler->display->display_options['fields']['field_customer_req_module']['id'] = 'field_customer_req_module';
  $handler->display->display_options['fields']['field_customer_req_module']['table'] = 'field_data_field_customer_req_module';
  $handler->display->display_options['fields']['field_customer_req_module']['field'] = 'field_customer_req_module';
  $handler->display->display_options['fields']['field_customer_req_module']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Customer Requirement related to */
  $handler->display->display_options['fields']['field_customer_req_req']['id'] = 'field_customer_req_req';
  $handler->display->display_options['fields']['field_customer_req_req']['table'] = 'field_data_field_customer_req_req';
  $handler->display->display_options['fields']['field_customer_req_req']['field'] = 'field_customer_req_req';
  $handler->display->display_options['fields']['field_customer_req_req']['label'] = 'Related to';
  $handler->display->display_options['fields']['field_customer_req_req']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_customer_req_tags']['id'] = 'field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['table'] = 'field_data_field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['field'] = 'field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_customer_req_tags']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'btn btn-info btn-xs';
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil"></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['link_class'] = 'btn btn-danger btn-xs';
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash"></i>';
  /* Field: Content: Baseline */
  $handler->display->display_options['fields']['field_customer_req_baseline']['id'] = 'field_customer_req_baseline';
  $handler->display->display_options['fields']['field_customer_req_baseline']['table'] = 'field_data_field_customer_req_baseline';
  $handler->display->display_options['fields']['field_customer_req_baseline']['field'] = 'field_customer_req_baseline';
  $handler->display->display_options['fields']['field_customer_req_baseline']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_customer_req_baseline']['alter']['text'] = '<span class="label label-default">[field_customer_req_baseline]</span>';
  $handler->display->display_options['fields']['field_customer_req_baseline']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Project Reference (field_customer_req_project) */
  $handler->display->display_options['arguments']['field_customer_req_project_target_id']['id'] = 'field_customer_req_project_target_id';
  $handler->display->display_options['arguments']['field_customer_req_project_target_id']['table'] = 'field_data_field_customer_req_project';
  $handler->display->display_options['arguments']['field_customer_req_project_target_id']['field'] = 'field_customer_req_project_target_id';
  $handler->display->display_options['arguments']['field_customer_req_project_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_customer_req_project_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_customer_req_project_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_customer_req_project_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_customer_req_project_target_id']['summary_options']['items_per_page'] = '25';
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
    'customer_requirement' => 'customer_requirement',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Baseline (field_customer_req_baseline) */
  $handler->display->display_options['filters']['field_customer_req_baseline_target_id']['id'] = 'field_customer_req_baseline_target_id';
  $handler->display->display_options['filters']['field_customer_req_baseline_target_id']['table'] = 'field_data_field_customer_req_baseline';
  $handler->display->display_options['filters']['field_customer_req_baseline_target_id']['field'] = 'field_customer_req_baseline_target_id';
  $handler->display->display_options['filters']['field_customer_req_baseline_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_req_baseline_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_req_baseline_target_id']['expose']['operator_id'] = 'field_customer_req_baseline_target_id_op';
  $handler->display->display_options['filters']['field_customer_req_baseline_target_id']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['field_customer_req_baseline_target_id']['expose']['operator'] = 'field_customer_req_baseline_target_id_op';
  $handler->display->display_options['filters']['field_customer_req_baseline_target_id']['expose']['identifier'] = 'field_customer_req_baseline_target_id';
  $handler->display->display_options['filters']['field_customer_req_baseline_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'ID';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Name (field_customer_req_name) */
  $handler->display->display_options['filters']['field_customer_req_name_value']['id'] = 'field_customer_req_name_value';
  $handler->display->display_options['filters']['field_customer_req_name_value']['table'] = 'field_data_field_customer_req_name';
  $handler->display->display_options['filters']['field_customer_req_name_value']['field'] = 'field_customer_req_name_value';
  $handler->display->display_options['filters']['field_customer_req_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_customer_req_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_req_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_req_name_value']['expose']['operator_id'] = 'field_customer_req_name_value_op';
  $handler->display->display_options['filters']['field_customer_req_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_customer_req_name_value']['expose']['operator'] = 'field_customer_req_name_value_op';
  $handler->display->display_options['filters']['field_customer_req_name_value']['expose']['identifier'] = 'field_customer_req_name_value';
  $handler->display->display_options['filters']['field_customer_req_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: VB6 Module (field_customer_req_module_vb6) */
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['id'] = 'field_customer_req_module_vb6_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['table'] = 'field_data_field_customer_req_module_vb6';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['field'] = 'field_customer_req_module_vb6_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['expose']['operator_id'] = 'field_customer_req_module_vb6_target_id_op';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['expose']['label'] = 'VB6 Module';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['expose']['operator'] = 'field_customer_req_module_vb6_target_id_op';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['expose']['identifier'] = 'field_customer_req_module_vb6_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Web Module (field_customer_req_module) */
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['id'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['table'] = 'field_data_field_customer_req_module';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['field'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['operator_id'] = 'field_customer_req_module_target_id_op';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['label'] = 'Web Module';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['operator'] = 'field_customer_req_module_target_id_op';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['identifier'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Tags (field_customer_req_tags) */
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['id'] = 'field_customer_req_tags_tid';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['table'] = 'field_data_field_customer_req_tags';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['field'] = 'field_customer_req_tags_tid';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['expose']['operator_id'] = 'field_customer_req_tags_tid_op';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['expose']['operator'] = 'field_customer_req_tags_tid_op';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['expose']['identifier'] = 'field_customer_req_tags_tid';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Status (field_customer_req_status) */
  $handler->display->display_options['filters']['field_customer_req_status_tid']['id'] = 'field_customer_req_status_tid';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['table'] = 'field_data_field_customer_req_status';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['field'] = 'field_customer_req_status_tid';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_req_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_req_status_tid']['expose']['operator_id'] = 'field_customer_req_status_tid_op';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['expose']['operator'] = 'field_customer_req_status_tid_op';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['expose']['identifier'] = 'field_customer_req_status_tid';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_customer_req_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['vocabulary'] = 'requirement_status';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/customer-requirements';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Customer Requirements';
  $handler->display->display_options['menu']['description'] = 'Customer Requirements';
  $handler->display->display_options['menu']['weight'] = '30';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Export Customer Requirements */
  $handler = $view->new_display('views_data_export', 'Export Customer Requirements', 'views_export_customer_requirements');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Baseline */
  $handler->display->display_options['fields']['field_customer_req_baseline']['id'] = 'field_customer_req_baseline';
  $handler->display->display_options['fields']['field_customer_req_baseline']['table'] = 'field_data_field_customer_req_baseline';
  $handler->display->display_options['fields']['field_customer_req_baseline']['field'] = 'field_customer_req_baseline';
  $handler->display->display_options['fields']['field_customer_req_baseline']['label'] = 'Version';
  $handler->display->display_options['fields']['field_customer_req_baseline']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'ID';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_customer_req_name']['id'] = 'field_customer_req_name';
  $handler->display->display_options['fields']['field_customer_req_name']['table'] = 'field_data_field_customer_req_name';
  $handler->display->display_options['fields']['field_customer_req_name']['field'] = 'field_customer_req_name';
  /* Field: SUM(Content: Computed Size) */
  $handler->display->display_options['fields']['field_requirement_computed_size']['id'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['table'] = 'field_data_field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['field'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['relationship'] = 'reverse_field_customer_req_relationship_node';
  $handler->display->display_options['fields']['field_requirement_computed_size']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_requirement_computed_size']['label'] = 'Size';
  /* Field: Content: VB6 Module */
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['id'] = 'field_customer_req_module_vb6';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['table'] = 'field_data_field_customer_req_module_vb6';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['field'] = 'field_customer_req_module_vb6';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Web Module */
  $handler->display->display_options['fields']['field_customer_req_module']['id'] = 'field_customer_req_module';
  $handler->display->display_options['fields']['field_customer_req_module']['table'] = 'field_data_field_customer_req_module';
  $handler->display->display_options['fields']['field_customer_req_module']['field'] = 'field_customer_req_module';
  $handler->display->display_options['fields']['field_customer_req_module']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Customer Requirement related to */
  $handler->display->display_options['fields']['field_customer_req_req']['id'] = 'field_customer_req_req';
  $handler->display->display_options['fields']['field_customer_req_req']['table'] = 'field_data_field_customer_req_req';
  $handler->display->display_options['fields']['field_customer_req_req']['field'] = 'field_customer_req_req';
  $handler->display->display_options['fields']['field_customer_req_req']['label'] = 'Related to';
  $handler->display->display_options['fields']['field_customer_req_req']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: customer req ext ref */
  $handler->display->display_options['fields']['field_customer_req_ext_ref']['id'] = 'field_customer_req_ext_ref';
  $handler->display->display_options['fields']['field_customer_req_ext_ref']['table'] = 'field_data_field_customer_req_ext_ref';
  $handler->display->display_options['fields']['field_customer_req_ext_ref']['field'] = 'field_customer_req_ext_ref';
  $handler->display->display_options['fields']['field_customer_req_ext_ref']['label'] = 'External ID';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_customer_req_tags']['id'] = 'field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['table'] = 'field_data_field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['field'] = 'field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_customer_req_tags']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_customer_req_status']['id'] = 'field_customer_req_status';
  $handler->display->display_options['fields']['field_customer_req_status']['table'] = 'field_data_field_customer_req_status';
  $handler->display->display_options['fields']['field_customer_req_status']['field'] = 'field_customer_req_status';
  $handler->display->display_options['fields']['field_customer_req_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_customer_req_description']['id'] = 'field_customer_req_description';
  $handler->display->display_options['fields']['field_customer_req_description']['table'] = 'field_data_field_customer_req_description';
  $handler->display->display_options['fields']['field_customer_req_description']['field'] = 'field_customer_req_description';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'export_customer_requierements';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['customer_requirements'] = $view;

  $view = new view();
  $view->name = 'customer_requirements_size';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Customer Requirements Size';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Customer Requirements Size';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['id'] = 'reverse_field_customer_req_relationship_node';
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['field'] = 'reverse_field_customer_req_relationship_node';
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_customer_req_name']['id'] = 'field_customer_req_name';
  $handler->display->display_options['fields']['field_customer_req_name']['table'] = 'field_data_field_customer_req_name';
  $handler->display->display_options['fields']['field_customer_req_name']['field'] = 'field_customer_req_name';
  /* Field: SUM(Content: Computed Size) */
  $handler->display->display_options['fields']['field_requirement_computed_size']['id'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['table'] = 'field_data_field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['field'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['relationship'] = 'reverse_field_customer_req_relationship_node';
  $handler->display->display_options['fields']['field_requirement_computed_size']['group_type'] = 'sum';
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
    'customer_requirement' => 'customer_requirement',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'customer-requirements-size';
  $export['customer_requirements_size'] = $view;

  $view = new view();
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project_name' => 'field_project_name',
    'timestamp' => 'field_project_name',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
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
    'field_project_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'Add Project';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = 'Add Project';
  $handler->display->display_options['header']['link']['path'] = 'node/add/project';
  $handler->display->display_options['header']['link']['class'] = 'btn btn-primary';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'ID';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Project name */
  $handler->display->display_options['fields']['field_project_name']['id'] = 'field_project_name';
  $handler->display->display_options['fields']['field_project_name']['table'] = 'field_data_field_project_name';
  $handler->display->display_options['fields']['field_project_name']['field'] = 'field_project_name';
  $handler->display->display_options['fields']['field_project_name']['label'] = 'Name';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'btn btn-info';
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil"></i> Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['link_class'] = 'btn btn-danger';
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash"></i> Delete';
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
    'project' => 'project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'projects';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['description'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['projects'] = $view;

  $view = new view();
  $view->name = 'requirements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Requirements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Requirements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'node_types';
  $handler->display->display_options['access']['node_types'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_requirement_name' => 'field_requirement_name',
    'field_requirement_related_to' => 'field_requirement_related_to',
    'field_requirement_size' => 'field_requirement_size',
    'field_requirement_computed_size' => 'field_requirement_computed_size',
    'field_requirement_status' => 'field_requirement_status',
    'field_customer_req_relationship' => 'field_customer_req_relationship',
    'field_customer_req_module_vb6' => 'field_customer_req_module_vb6',
    'field_customer_req_module' => 'field_customer_req_module',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
    'field_requirement_baseline' => 'field_requirement_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requirement_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requirement_related_to' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requirement_size' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requirement_computed_size' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requirement_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_customer_req_relationship' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_customer_req_module_vb6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_customer_req_module' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'edit_node' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requirement_baseline' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '0';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'Add Requirement';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = 'Add Requirement';
  $handler->display->display_options['header']['link']['path'] = 'node/add/requirement';
  $handler->display->display_options['header']['link']['querystring'] = 'field_requirement_project_refere=%1';
  $handler->display->display_options['header']['link']['class'] = 'btn btn-primary';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_requirement_project_refere_target_id']['id'] = 'field_requirement_project_refere_target_id';
  $handler->display->display_options['relationships']['field_requirement_project_refere_target_id']['table'] = 'field_data_field_requirement_project_refere';
  $handler->display->display_options['relationships']['field_requirement_project_refere_target_id']['field'] = 'field_requirement_project_refere_target_id';
  $handler->display->display_options['relationships']['field_requirement_project_refere_target_id']['label'] = 'Project';
  $handler->display->display_options['relationships']['field_requirement_project_refere_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_req_relationship_target_id']['id'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['relationships']['field_customer_req_relationship_target_id']['table'] = 'field_data_field_customer_req_relationship';
  $handler->display->display_options['relationships']['field_customer_req_relationship_target_id']['field'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['relationships']['field_customer_req_relationship_target_id']['label'] = 'Customer Requirement';
  $handler->display->display_options['relationships']['field_customer_req_relationship_target_id']['required'] = TRUE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'requirement::field_requirement_status' => 'requirement::field_requirement_status',
        ),
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'ID';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_requirement_name']['id'] = 'field_requirement_name';
  $handler->display->display_options['fields']['field_requirement_name']['table'] = 'field_data_field_requirement_name';
  $handler->display->display_options['fields']['field_requirement_name']['field'] = 'field_requirement_name';
  /* Field: Content: Related to */
  $handler->display->display_options['fields']['field_requirement_related_to']['id'] = 'field_requirement_related_to';
  $handler->display->display_options['fields']['field_requirement_related_to']['table'] = 'field_data_field_requirement_related_to';
  $handler->display->display_options['fields']['field_requirement_related_to']['field'] = 'field_requirement_related_to';
  $handler->display->display_options['fields']['field_requirement_related_to']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_requirement_related_to']['delta_offset'] = '0';
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_requirement_size']['id'] = 'field_requirement_size';
  $handler->display->display_options['fields']['field_requirement_size']['table'] = 'field_data_field_requirement_size';
  $handler->display->display_options['fields']['field_requirement_size']['field'] = 'field_requirement_size';
  $handler->display->display_options['fields']['field_requirement_size']['label'] = 'Complexity';
  /* Field: Content: Computed Size */
  $handler->display->display_options['fields']['field_requirement_computed_size']['id'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['table'] = 'field_data_field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['field'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['label'] = 'Size';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_requirement_status']['id'] = 'field_requirement_status';
  $handler->display->display_options['fields']['field_requirement_status']['table'] = 'field_data_field_requirement_status';
  $handler->display->display_options['fields']['field_requirement_status']['field'] = 'field_requirement_status';
  $handler->display->display_options['fields']['field_requirement_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Customer Requirement */
  $handler->display->display_options['fields']['field_customer_req_relationship']['id'] = 'field_customer_req_relationship';
  $handler->display->display_options['fields']['field_customer_req_relationship']['table'] = 'field_data_field_customer_req_relationship';
  $handler->display->display_options['fields']['field_customer_req_relationship']['field'] = 'field_customer_req_relationship';
  $handler->display->display_options['fields']['field_customer_req_relationship']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: VB6 Module */
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['id'] = 'field_customer_req_module_vb6';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['table'] = 'field_data_field_customer_req_module_vb6';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['field'] = 'field_customer_req_module_vb6';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Web Module */
  $handler->display->display_options['fields']['field_customer_req_module']['id'] = 'field_customer_req_module';
  $handler->display->display_options['fields']['field_customer_req_module']['table'] = 'field_data_field_customer_req_module';
  $handler->display->display_options['fields']['field_customer_req_module']['field'] = 'field_customer_req_module';
  $handler->display->display_options['fields']['field_customer_req_module']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['fields']['field_customer_req_module']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'btn btn-info btn-xs';
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil"></i> ';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['link_class'] = 'btn btn-danger btn-xs';
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash"></i> ';
  /* Field: Content: Baseline */
  $handler->display->display_options['fields']['field_requirement_baseline']['id'] = 'field_requirement_baseline';
  $handler->display->display_options['fields']['field_requirement_baseline']['table'] = 'field_data_field_requirement_baseline';
  $handler->display->display_options['fields']['field_requirement_baseline']['field'] = 'field_requirement_baseline';
  $handler->display->display_options['fields']['field_requirement_baseline']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_requirement_baseline']['alter']['text'] = '<span class="label label-default">[field_requirement_baseline]</span>';
  $handler->display->display_options['fields']['field_requirement_baseline']['settings'] = array(
    'link' => 0,
  );
  /* Contextual filter: Content: Project (field_requirement_project_refere) */
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['id'] = 'field_requirement_project_refere_target_id';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['table'] = 'field_data_field_requirement_project_refere';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['field'] = 'field_requirement_project_refere_target_id';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['summary_options']['items_per_page'] = '25';
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
    'requirement' => 'requirement',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Baseline (field_requirement_baseline) */
  $handler->display->display_options['filters']['field_requirement_baseline_target_id']['id'] = 'field_requirement_baseline_target_id';
  $handler->display->display_options['filters']['field_requirement_baseline_target_id']['table'] = 'field_data_field_requirement_baseline';
  $handler->display->display_options['filters']['field_requirement_baseline_target_id']['field'] = 'field_requirement_baseline_target_id';
  $handler->display->display_options['filters']['field_requirement_baseline_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_requirement_baseline_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_requirement_baseline_target_id']['expose']['operator_id'] = 'field_requirement_baseline_target_id_op';
  $handler->display->display_options['filters']['field_requirement_baseline_target_id']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['field_requirement_baseline_target_id']['expose']['operator'] = 'field_requirement_baseline_target_id_op';
  $handler->display->display_options['filters']['field_requirement_baseline_target_id']['expose']['identifier'] = 'field_requirement_baseline_target_id';
  $handler->display->display_options['filters']['field_requirement_baseline_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'ID';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Name (field_requirement_name) */
  $handler->display->display_options['filters']['field_requirement_name_value']['id'] = 'field_requirement_name_value';
  $handler->display->display_options['filters']['field_requirement_name_value']['table'] = 'field_data_field_requirement_name';
  $handler->display->display_options['filters']['field_requirement_name_value']['field'] = 'field_requirement_name_value';
  $handler->display->display_options['filters']['field_requirement_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_requirement_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_requirement_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_requirement_name_value']['expose']['operator_id'] = 'field_requirement_name_value_op';
  $handler->display->display_options['filters']['field_requirement_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_requirement_name_value']['expose']['operator'] = 'field_requirement_name_value_op';
  $handler->display->display_options['filters']['field_requirement_name_value']['expose']['identifier'] = 'field_requirement_name_value';
  $handler->display->display_options['filters']['field_requirement_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Size (field_requirement_size) */
  $handler->display->display_options['filters']['field_requirement_size_value']['id'] = 'field_requirement_size_value';
  $handler->display->display_options['filters']['field_requirement_size_value']['table'] = 'field_data_field_requirement_size';
  $handler->display->display_options['filters']['field_requirement_size_value']['field'] = 'field_requirement_size_value';
  $handler->display->display_options['filters']['field_requirement_size_value']['group'] = 1;
  $handler->display->display_options['filters']['field_requirement_size_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_requirement_size_value']['expose']['operator_id'] = 'field_requirement_size_value_op';
  $handler->display->display_options['filters']['field_requirement_size_value']['expose']['label'] = 'Complexity';
  $handler->display->display_options['filters']['field_requirement_size_value']['expose']['operator'] = 'field_requirement_size_value_op';
  $handler->display->display_options['filters']['field_requirement_size_value']['expose']['identifier'] = 'field_requirement_size_value';
  $handler->display->display_options['filters']['field_requirement_size_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Status (field_requirement_status) */
  $handler->display->display_options['filters']['field_requirement_status_tid']['id'] = 'field_requirement_status_tid';
  $handler->display->display_options['filters']['field_requirement_status_tid']['table'] = 'field_data_field_requirement_status';
  $handler->display->display_options['filters']['field_requirement_status_tid']['field'] = 'field_requirement_status_tid';
  $handler->display->display_options['filters']['field_requirement_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_requirement_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_requirement_status_tid']['expose']['operator_id'] = 'field_requirement_status_tid_op';
  $handler->display->display_options['filters']['field_requirement_status_tid']['expose']['label'] = 'Status (Requirement)';
  $handler->display->display_options['filters']['field_requirement_status_tid']['expose']['operator'] = 'field_requirement_status_tid_op';
  $handler->display->display_options['filters']['field_requirement_status_tid']['expose']['identifier'] = 'field_requirement_status_tid';
  $handler->display->display_options['filters']['field_requirement_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_requirement_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_requirement_status_tid']['vocabulary'] = 'requirement_status';
  $handler->display->display_options['filters']['field_requirement_status_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Description (field_requirement_description) */
  $handler->display->display_options['filters']['field_requirement_description_value']['id'] = 'field_requirement_description_value';
  $handler->display->display_options['filters']['field_requirement_description_value']['table'] = 'field_data_field_requirement_description';
  $handler->display->display_options['filters']['field_requirement_description_value']['field'] = 'field_requirement_description_value';
  $handler->display->display_options['filters']['field_requirement_description_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_requirement_description_value']['group'] = 1;
  $handler->display->display_options['filters']['field_requirement_description_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_requirement_description_value']['expose']['operator_id'] = 'field_requirement_description_value_op';
  $handler->display->display_options['filters']['field_requirement_description_value']['expose']['label'] = 'Description';
  $handler->display->display_options['filters']['field_requirement_description_value']['expose']['operator'] = 'field_requirement_description_value_op';
  $handler->display->display_options['filters']['field_requirement_description_value']['expose']['identifier'] = 'field_requirement_description_value';
  $handler->display->display_options['filters']['field_requirement_description_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: VB6 Module (field_customer_req_module_vb6) */
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['id'] = 'field_customer_req_module_vb6_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['table'] = 'field_data_field_customer_req_module_vb6';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['field'] = 'field_customer_req_module_vb6_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['expose']['operator_id'] = 'field_customer_req_module_vb6_target_id_op';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['expose']['label'] = 'VB6 Module';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['expose']['operator'] = 'field_customer_req_module_vb6_target_id_op';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['expose']['identifier'] = 'field_customer_req_module_vb6_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_vb6_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Web Module (field_customer_req_module) */
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['id'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['table'] = 'field_data_field_customer_req_module';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['field'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['operator_id'] = 'field_customer_req_module_target_id_op';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['label'] = 'Web Module';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['operator'] = 'field_customer_req_module_target_id_op';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['identifier'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Status (field_customer_req_status) */
  $handler->display->display_options['filters']['field_customer_req_status_tid']['id'] = 'field_customer_req_status_tid';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['table'] = 'field_data_field_customer_req_status';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['field'] = 'field_customer_req_status_tid';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_req_status_tid']['expose']['operator_id'] = 'field_customer_req_status_tid_op';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['expose']['label'] = 'Status (Customer Req)';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['expose']['operator'] = 'field_customer_req_status_tid_op';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['expose']['identifier'] = 'field_customer_req_status_tid';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_customer_req_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['vocabulary'] = 'requirement_status';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Tags (field_customer_req_tags) */
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['id'] = 'field_customer_req_tags_tid';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['table'] = 'field_data_field_customer_req_tags';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['field'] = 'field_customer_req_tags_tid';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['expose']['operator_id'] = 'field_customer_req_tags_tid_op';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['expose']['label'] = 'Priority (Cust Req)';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['expose']['operator'] = 'field_customer_req_tags_tid_op';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['expose']['identifier'] = 'field_customer_req_tags_tid';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_customer_req_tags_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/requirements';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Requirements';
  $handler->display->display_options['menu']['description'] = 'Requirements';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Export Requirements */
  $handler = $view->new_display('views_data_export', 'Export Requirements', 'data_export_requirements');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Baseline */
  $handler->display->display_options['fields']['field_requirement_baseline']['id'] = 'field_requirement_baseline';
  $handler->display->display_options['fields']['field_requirement_baseline']['table'] = 'field_data_field_requirement_baseline';
  $handler->display->display_options['fields']['field_requirement_baseline']['field'] = 'field_requirement_baseline';
  $handler->display->display_options['fields']['field_requirement_baseline']['label'] = 'Version';
  $handler->display->display_options['fields']['field_requirement_baseline']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Customer Requirement */
  $handler->display->display_options['fields']['field_customer_req_relationship']['id'] = 'field_customer_req_relationship';
  $handler->display->display_options['fields']['field_customer_req_relationship']['table'] = 'field_data_field_customer_req_relationship';
  $handler->display->display_options['fields']['field_customer_req_relationship']['field'] = 'field_customer_req_relationship';
  $handler->display->display_options['fields']['field_customer_req_relationship']['label'] = 'Customer Requirement ID';
  $handler->display->display_options['fields']['field_customer_req_relationship']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_customer_req_name']['id'] = 'field_customer_req_name';
  $handler->display->display_options['fields']['field_customer_req_name']['table'] = 'field_data_field_customer_req_name';
  $handler->display->display_options['fields']['field_customer_req_name']['field'] = 'field_customer_req_name';
  $handler->display->display_options['fields']['field_customer_req_name']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['fields']['field_customer_req_name']['label'] = 'Customer Requirement name';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_customer_req_tags']['id'] = 'field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['table'] = 'field_data_field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['field'] = 'field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['fields']['field_customer_req_tags']['label'] = 'Priority';
  $handler->display->display_options['fields']['field_customer_req_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_customer_req_tags']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'ID';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_requirement_name']['id'] = 'field_requirement_name';
  $handler->display->display_options['fields']['field_requirement_name']['table'] = 'field_data_field_requirement_name';
  $handler->display->display_options['fields']['field_requirement_name']['field'] = 'field_requirement_name';
  /* Field: Content: Related to */
  $handler->display->display_options['fields']['field_requirement_related_to']['id'] = 'field_requirement_related_to';
  $handler->display->display_options['fields']['field_requirement_related_to']['table'] = 'field_data_field_requirement_related_to';
  $handler->display->display_options['fields']['field_requirement_related_to']['field'] = 'field_requirement_related_to';
  $handler->display->display_options['fields']['field_requirement_related_to']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_requirement_related_to']['delta_offset'] = '0';
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_requirement_size']['id'] = 'field_requirement_size';
  $handler->display->display_options['fields']['field_requirement_size']['table'] = 'field_data_field_requirement_size';
  $handler->display->display_options['fields']['field_requirement_size']['field'] = 'field_requirement_size';
  $handler->display->display_options['fields']['field_requirement_size']['label'] = 'Complexity';
  /* Field: Content: Computed Size */
  $handler->display->display_options['fields']['field_requirement_computed_size']['id'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['table'] = 'field_data_field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['field'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['label'] = 'Size';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_requirement_status']['id'] = 'field_requirement_status';
  $handler->display->display_options['fields']['field_requirement_status']['table'] = 'field_data_field_requirement_status';
  $handler->display->display_options['fields']['field_requirement_status']['field'] = 'field_requirement_status';
  $handler->display->display_options['fields']['field_requirement_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_requirement_description']['id'] = 'field_requirement_description';
  $handler->display->display_options['fields']['field_requirement_description']['table'] = 'field_data_field_requirement_description';
  $handler->display->display_options['fields']['field_requirement_description']['field'] = 'field_requirement_description';
  $handler->display->display_options['path'] = 'export_requierements';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['requirements'] = $view;

  $view = new view();
  $view->name = 'requirements_within_a_customer_requirement';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Requirements within a Customer Requirement';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Requirements assigned';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'node_types';
  $handler->display->display_options['access']['node_types'] = array(
    'customer_requirement' => 'customer_requirement',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_requirement_name' => 'field_requirement_name',
    'field_requirement_size' => 'field_requirement_size',
    'field_requirement_computed_size' => 'field_requirement_computed_size',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_requirement_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_requirement_size' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_requirement_computed_size' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['id'] = 'reverse_field_customer_req_relationship_node';
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['field'] = 'reverse_field_customer_req_relationship_node';
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['label'] = 'Customer Requirement';
  $handler->display->display_options['relationships']['reverse_field_customer_req_relationship_node']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_customer_req_relationship_node';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_requirement_name']['id'] = 'field_requirement_name';
  $handler->display->display_options['fields']['field_requirement_name']['table'] = 'field_data_field_requirement_name';
  $handler->display->display_options['fields']['field_requirement_name']['field'] = 'field_requirement_name';
  $handler->display->display_options['fields']['field_requirement_name']['relationship'] = 'reverse_field_customer_req_relationship_node';
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_requirement_size']['id'] = 'field_requirement_size';
  $handler->display->display_options['fields']['field_requirement_size']['table'] = 'field_data_field_requirement_size';
  $handler->display->display_options['fields']['field_requirement_size']['field'] = 'field_requirement_size';
  $handler->display->display_options['fields']['field_requirement_size']['relationship'] = 'reverse_field_customer_req_relationship_node';
  $handler->display->display_options['fields']['field_requirement_size']['label'] = 'Complexity';
  /* Field: Content: Computed Size */
  $handler->display->display_options['fields']['field_requirement_computed_size']['id'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['table'] = 'field_data_field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['field'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['relationship'] = 'reverse_field_customer_req_relationship_node';
  $handler->display->display_options['fields']['field_requirement_computed_size']['label'] = 'Size';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_requirement_status']['id'] = 'field_requirement_status';
  $handler->display->display_options['fields']['field_requirement_status']['table'] = 'field_data_field_requirement_status';
  $handler->display->display_options['fields']['field_requirement_status']['field'] = 'field_requirement_status';
  $handler->display->display_options['fields']['field_requirement_status']['relationship'] = 'reverse_field_customer_req_relationship_node';
  $handler->display->display_options['fields']['field_requirement_status']['type'] = 'taxonomy_term_reference_plain';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'customer_requirement' => 'customer_requirement',
  );

  /* Display: Detail */
  $handler = $view->new_display('page', 'Detail', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_requirement_name' => 'field_requirement_name',
    'field_requirement_size' => 'field_requirement_size',
    'field_requirement_computed_size' => 'field_requirement_computed_size',
    'field_requirement_status' => 'field_requirement_status',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requirement_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requirement_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requirement_computed_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requirement_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/req_custreq';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Requirements assigned';
  $handler->display->display_options['menu']['description'] = 'Requirements assigned';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Master */
  $handler = $view->new_display('attachment', 'Master', 'attachment_1');
  $handler->display->display_options['display_description'] = 'Customer Requirement detail.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_customer_req_name']['id'] = 'field_customer_req_name';
  $handler->display->display_options['fields']['field_customer_req_name']['table'] = 'field_data_field_customer_req_name';
  $handler->display->display_options['fields']['field_customer_req_name']['field'] = 'field_customer_req_name';
  /* Field: Content: VB6 Module */
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['id'] = 'field_customer_req_module_vb6';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['table'] = 'field_data_field_customer_req_module_vb6';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['field'] = 'field_customer_req_module_vb6';
  $handler->display->display_options['fields']['field_customer_req_module_vb6']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Web Module */
  $handler->display->display_options['fields']['field_customer_req_module']['id'] = 'field_customer_req_module';
  $handler->display->display_options['fields']['field_customer_req_module']['table'] = 'field_data_field_customer_req_module';
  $handler->display->display_options['fields']['field_customer_req_module']['field'] = 'field_customer_req_module';
  $handler->display->display_options['fields']['field_customer_req_module']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Customer Requirement related to */
  $handler->display->display_options['fields']['field_customer_req_req']['id'] = 'field_customer_req_req';
  $handler->display->display_options['fields']['field_customer_req_req']['table'] = 'field_data_field_customer_req_req';
  $handler->display->display_options['fields']['field_customer_req_req']['field'] = 'field_customer_req_req';
  $handler->display->display_options['fields']['field_customer_req_req']['label'] = 'Related to';
  $handler->display->display_options['fields']['field_customer_req_req']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_customer_req_tags']['id'] = 'field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['table'] = 'field_data_field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['field'] = 'field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_customer_req_tags']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_customer_req_status']['id'] = 'field_customer_req_status';
  $handler->display->display_options['fields']['field_customer_req_status']['table'] = 'field_data_field_customer_req_status';
  $handler->display->display_options['fields']['field_customer_req_status']['field'] = 'field_customer_req_status';
  $handler->display->display_options['fields']['field_customer_req_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['requirements_within_a_customer_requirement'] = $view;

  $view = new view();
  $view->name = 'summary_functional_size';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Summary Functional Size';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Functional Size Summary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'node_types';
  $handler->display->display_options['access']['node_types'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_module_name' => 'field_module_name',
    'field_customer_req_tags' => 'field_customer_req_tags',
    'field_requirement_computed_size' => 'field_requirement_computed_size',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_module_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_customer_req_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requirement_computed_size' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_req_relationship_target_id']['id'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['relationships']['field_customer_req_relationship_target_id']['table'] = 'field_data_field_customer_req_relationship';
  $handler->display->display_options['relationships']['field_customer_req_relationship_target_id']['field'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['relationships']['field_customer_req_relationship_target_id']['label'] = 'Customer Requirement';
  $handler->display->display_options['relationships']['field_customer_req_relationship_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_req_module_target_id']['id'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['relationships']['field_customer_req_module_target_id']['table'] = 'field_data_field_customer_req_module';
  $handler->display->display_options['relationships']['field_customer_req_module_target_id']['field'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['relationships']['field_customer_req_module_target_id']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['relationships']['field_customer_req_module_target_id']['label'] = 'Web Module';
  $handler->display->display_options['relationships']['field_customer_req_module_target_id']['required'] = TRUE;
  /* Relationship: Content: Tags (field_customer_req_tags) */
  $handler->display->display_options['relationships']['field_customer_req_tags_tid']['id'] = 'field_customer_req_tags_tid';
  $handler->display->display_options['relationships']['field_customer_req_tags_tid']['table'] = 'field_data_field_customer_req_tags';
  $handler->display->display_options['relationships']['field_customer_req_tags_tid']['field'] = 'field_customer_req_tags_tid';
  $handler->display->display_options['relationships']['field_customer_req_tags_tid']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['relationships']['field_customer_req_tags_tid']['label'] = 'Tags';
  $handler->display->display_options['relationships']['field_customer_req_tags_tid']['required'] = TRUE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_module_name']['id'] = 'field_module_name';
  $handler->display->display_options['fields']['field_module_name']['table'] = 'field_data_field_module_name';
  $handler->display->display_options['fields']['field_module_name']['field'] = 'field_module_name';
  $handler->display->display_options['fields']['field_module_name']['relationship'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['fields']['field_module_name']['label'] = 'Web Module';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_customer_req_tags']['id'] = 'field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['table'] = 'field_data_field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['field'] = 'field_customer_req_tags';
  $handler->display->display_options['fields']['field_customer_req_tags']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['fields']['field_customer_req_tags']['label'] = 'Priority';
  $handler->display->display_options['fields']['field_customer_req_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_customer_req_tags']['delta_offset'] = '0';
  /* Field: SUM(Content: Computed Size) */
  $handler->display->display_options['fields']['field_requirement_computed_size']['id'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['table'] = 'field_data_field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['field'] = 'field_requirement_computed_size';
  $handler->display->display_options['fields']['field_requirement_computed_size']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_requirement_computed_size']['label'] = 'Size';
  /* Sort criterion: Content: Web Module (field_customer_req_module) */
  $handler->display->display_options['sorts']['field_customer_req_module_target_id']['id'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['sorts']['field_customer_req_module_target_id']['table'] = 'field_data_field_customer_req_module';
  $handler->display->display_options['sorts']['field_customer_req_module_target_id']['field'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['sorts']['field_customer_req_module_target_id']['relationship'] = 'field_customer_req_relationship_target_id';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Contextual filter: Content: Project (field_requirement_project_refere) */
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['id'] = 'field_requirement_project_refere_target_id';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['table'] = 'field_data_field_requirement_project_refere';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['field'] = 'field_requirement_project_refere_target_id';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_requirement_project_refere_target_id']['summary_options']['items_per_page'] = '25';
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
    'requirement' => 'requirement',
  );
  /* Filter criterion: Content: Status (field_requirement_status) */
  $handler->display->display_options['filters']['field_requirement_status_tid']['id'] = 'field_requirement_status_tid';
  $handler->display->display_options['filters']['field_requirement_status_tid']['table'] = 'field_data_field_requirement_status';
  $handler->display->display_options['filters']['field_requirement_status_tid']['field'] = 'field_requirement_status_tid';
  $handler->display->display_options['filters']['field_requirement_status_tid']['value'] = array(
    13 => '13',
    14 => '14',
    15 => '15',
    16 => '16',
  );
  $handler->display->display_options['filters']['field_requirement_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_requirement_status_tid']['vocabulary'] = 'requirement_status';
  $handler->display->display_options['filters']['field_requirement_status_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Status (field_customer_req_status) */
  $handler->display->display_options['filters']['field_customer_req_status_tid']['id'] = 'field_customer_req_status_tid';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['table'] = 'field_data_field_customer_req_status';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['field'] = 'field_customer_req_status_tid';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['value'] = array(
    13 => '13',
    14 => '14',
    15 => '15',
    16 => '16',
  );
  $handler->display->display_options['filters']['field_customer_req_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['vocabulary'] = 'requirement_status';
  $handler->display->display_options['filters']['field_customer_req_status_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Web Module (field_customer_req_module) */
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['id'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['table'] = 'field_data_field_customer_req_module';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['field'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['relationship'] = 'field_customer_req_relationship_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['operator_id'] = 'field_customer_req_module_target_id_op';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['label'] = 'Web Module';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['operator'] = 'field_customer_req_module_target_id_op';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['identifier'] = 'field_customer_req_module_target_id';
  $handler->display->display_options['filters']['field_customer_req_module_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/summary-functional-size';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '30';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['summary_functional_size'] = $view;

  return $export;
}
