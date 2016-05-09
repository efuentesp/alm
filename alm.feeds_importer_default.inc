<?php
/**
 * @file
 * alm.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function alm_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'bulk_import_customer_requirements_';
  $feeds_importer->config = array(
    'name' => 'Bulk import (Customer Requirements)',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'name',
            'target' => 'field_customer_req_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'extref',
            'target' => 'field_customer_req_ext_ref',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'tags',
            'target' => 'field_customer_req_tags',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'description',
            'target' => 'field_customer_req_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'modulevb6',
            'target' => 'field_customer_req_module_vb6:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'moduleweb',
            'target' => 'field_customer_req_module:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'project',
            'target' => 'field_customer_req_project:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'status',
            'target' => 'field_customer_req_status',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'baseline',
            'target' => 'field_customer_req_baseline:etid',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'customer_requirement',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['bulk_import_customer_requirements_'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'bulk_import_requirements_';
  $feeds_importer->config = array(
    'name' => 'Bulk import (Requirements)',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'name',
            'target' => 'field_requirement_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'description',
            'target' => 'field_requirement_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'size',
            'target' => 'field_requirement_size',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'project',
            'target' => 'field_requirement_project_refere:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'custreq',
            'target' => 'field_customer_req_relationship:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'status',
            'target' => 'field_requirement_status',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'baseline',
            'target' => 'field_requirement_baseline:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'related_to',
            'target' => 'field_requirement_related_to:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'requirement',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['bulk_import_requirements_'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'update_requirement_sizes';
  $feeds_importer->config = array(
    'name' => 'Update Requirement sizes',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'size',
            'target' => 'field_requirement_size',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '0',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'requirement',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['update_requirement_sizes'] = $feeds_importer;

  return $export;
}
