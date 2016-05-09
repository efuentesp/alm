<?php
/**
 * @file
 * alm.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function alm_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'customer_requirement_view';
  $path_breadcrumb->name = 'Customer Requirement (View)';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Projects',
      1 => '%node:field-customer-req-project:title',
      2 => 'Customer Requirements',
      3 => 'View',
    ),
    'paths' => array(
      0 => 'projects',
      1 => 'node/%node:field-customer-req-project:nid',
      2 => 'node/%node:field-customer-req-project:nid/customer-requirements',
      3 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'customer_requirement' => 'customer_requirement',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -98;
  $export['customer_requirement_view'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'customer_requirement_view_clone';
  $path_breadcrumb->name = 'Customer Requirement (Requirements assigned)';
  $path_breadcrumb->path = 'node/%node/req_custreq';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Projects',
      1 => '%node:field-customer-req-project:title',
      2 => 'Customer Requirements',
      3 => '%node:title',
      4 => 'Requerimientos assignados',
    ),
    'paths' => array(
      0 => 'projects',
      1 => 'node/%node:field-customer-req-project:nid',
      2 => 'node/%node:field-customer-req-project:nid/customer-requirements',
      3 => 'node/%node:nid',
      4 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'customer_requirement' => 'customer_requirement',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -100;
  $export['customer_requirement_view_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'module_edit';
  $path_breadcrumb->name = 'Module (Edit)';
  $path_breadcrumb->path = 'node/%node/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Projects',
      1 => '%node:field-module-project-reference:title',
      2 => '%node:field-module-name',
      3 => 'Edit',
    ),
    'paths' => array(
      0 => 'projects',
      1 => 'node/%node:field-module-project-reference:nid',
      2 => 'node/%node:nid',
      3 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'module' => 'module',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -94;
  $export['module_edit'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'module_view_';
  $path_breadcrumb->name = 'Module (View)';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Projects',
      1 => '%node:field-module-project-reference:title',
      2 => '%node:field-module-name',
      3 => 'View',
    ),
    'paths' => array(
      0 => 'projects',
      1 => 'node/%node:field-module-project-reference:nid',
      2 => 'node/%node:nid',
      3 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'module' => 'module',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -95;
  $export['module_view_'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'project_admin_';
  $path_breadcrumb->name = 'Project (Admin)';
  $path_breadcrumb->path = 'projects';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Projects',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -89;
  $export['project_admin_'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'project_edit';
  $path_breadcrumb->name = 'Project (Edit)';
  $path_breadcrumb->path = 'node/%node/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Projects',
      1 => '%node:field-project-name',
      2 => 'Edit',
    ),
    'paths' => array(
      0 => 'node/%node:nid',
      1 => 'node/%node:nid',
      2 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -90;
  $export['project_edit'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'project_edit_clone';
  $path_breadcrumb->name = 'Project (Modules)';
  $path_breadcrumb->path = 'node/%node/modules';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Projects',
      1 => '%node:field-project-name',
      2 => 'Modules',
    ),
    'paths' => array(
      0 => 'projects',
      1 => 'node/%node:nid',
      2 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -92;
  $export['project_edit_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'project_edit_clone_clone';
  $path_breadcrumb->name = 'Project (Requirements)';
  $path_breadcrumb->path = 'node/%node/requirements';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Projects',
      1 => '%node:field-project-name',
      2 => 'Requirements',
    ),
    'paths' => array(
      0 => 'projects',
      1 => 'node/%node:nid',
      2 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -93;
  $export['project_edit_clone_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'project_view_';
  $path_breadcrumb->name = 'Project (View)';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Projects',
      1 => '%node:field-project-name',
      2 => 'View',
    ),
    'paths' => array(
      0 => 'node/%node:nid',
      1 => 'node/%node:nid',
      2 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -91;
  $export['project_view_'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'requirement_edit';
  $path_breadcrumb->name = 'Requirement (Edit)';
  $path_breadcrumb->path = 'node/%node/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Projects',
      1 => '%node:field-requirement-project-refere:title',
      2 => 'Requirements',
      3 => 'Edit',
    ),
    'paths' => array(
      0 => 'projects',
      1 => 'node/%node:field-requirement-project-refere:nid',
      2 => 'node/%node:field-requirement-project-refere:nid/requirements',
      3 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'requirement' => 'requirement',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -96;
  $export['requirement_edit'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'requirement_edit_clone';
  $path_breadcrumb->name = 'Customer Requirement (Edit)';
  $path_breadcrumb->path = 'node/%node/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Projects',
      1 => '%node:field-customer-req-project:title',
      2 => 'Customer Requirements',
      3 => 'Edit',
    ),
    'paths' => array(
      0 => 'projects',
      1 => 'node/%node:field-customer-req-project:nid',
      2 => 'node/%node:field-customer-req-project:nid/customer-requirements',
      3 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'customer_requirement' => 'customer_requirement',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -99;
  $export['requirement_edit_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'requirement_view';
  $path_breadcrumb->name = 'Requirement (View)';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Projects',
      1 => '%node:field-requirement-project-refere:title',
      2 => 'Requirements',
      3 => 'View',
    ),
    'paths' => array(
      0 => 'projects',
      1 => 'node/%node:field-requirement-project-refere:nid',
      2 => 'node/%node:field-requirement-project-refere:nid/requirements',
      3 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'requirement' => 'requirement',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -97;
  $export['requirement_view'] = $path_breadcrumb;

  return $export;
}
