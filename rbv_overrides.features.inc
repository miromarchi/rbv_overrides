<?php
/**
 * @file
 * rbv_overrides.features.inc
 */

/**
 * Implements hook_field_default_field_bases_alter().
 */
function rbv_overrides_field_default_field_bases_alter(&$data) {
  if (isset($data['field_featured_categories'])) {
    unset($data['field_featured_categories']);
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function rbv_overrides_field_default_field_instances_alter(&$data) {
  if (isset($data['node-panopoly_page-field_featured_categories'])) {
    unset($data['node-panopoly_page-field_featured_categories']);
  }
  if (isset($data['node-panopoly_page-field_featured_status'])) {
    $data['node-panopoly_page-field_featured_status']['settings'] = array(
      'user_register_form' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['user-user-field_user_about'])) {
    $data['user-user-field_user_about']['description'] = 'Descrivi il tuo profilo.'; /* WAS: '' */
    $data['user-user-field_user_about']['display']['full'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 0,
    ); /* WAS: '' */
    $data['user-user-field_user_about']['label'] = 'Profilo'; /* WAS: 'About' */
    $data['user-user-field_user_about']['widget']['settings']['rows'] = 16; /* WAS: 20 */
  }
  if (isset($data['user-user-field_user_picture'])) {
    $data['user-user-field_user_picture']['display']['full'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 1,
    ); /* WAS: '' */
    $data['user-user-field_user_picture']['label'] = 'Immagine'; /* WAS: 'Picture' */
    $data['user-user-field_user_picture']['widget']['settings']['preview_image_style'] = 'panopoly_image_square'; /* WAS: 'panopoly_image_featured' */
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function rbv_overrides_filter_default_formats_alter(&$data) {
  if (isset($data['panopoly_html_text'])) {
    unset($data['panopoly_html_text']['filters']['wysiwyg']);
  }
}

/**
 * Implements hook_node_info_alter().
 */
function rbv_overrides_node_info_alter(&$data) {
  if (isset($data['forum'])) {
    $data['forum']['description'] = 'Inizia una nuova discussione nel forum.'; /* WAS: 'A <em>forum topic</em> starts a new discussion thread within a forum.' */
    $data['forum']['has_title'] = 1; /* WAS: '' */
    $data['forum']['help'] = ''; /* WAS: '' */
    $data['forum']['name'] = 'Discussione'; /* WAS: 'Forum topic' */
    $data['forum']['title_label'] = 'Oggetto'; /* WAS: 'Subject' */
  }
}

/**
 * Implements hook_default_og_membership_type_alter().
 */
function rbv_overrides_default_og_membership_type_alter(&$data) {
  if (isset($data['og_membership_type_default'])) {
    $data['og_membership_type_default']->language = ''; /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function rbv_overrides_default_page_manager_pages_alter(&$data) {
  if (isset($data['panopoly_search'])) {
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-10'] = (object) array(
          'pid' => 'new-10',
          'panel' => 'sidebar',
          'type' => 'block',
          'subtype' => 'facetapi-KUKFiOe98uMHIF2e3Oyo9v926b5amSgB',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_string_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-11'] = (object) array(
          'pid' => 'new-11',
          'panel' => 'sidebar',
          'type' => 'block',
          'subtype' => 'facetapi-kBU6J3tXZOY8yqp1a2L8A1GbaLdZZx1Y',
          'shown' => TRUE,
          'access' => array(),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['fields_override']['field_com_categories'] = 1; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['fields_override']['field_com_description'] = 1; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['fields_override']['field_com_logo'] = 1; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['fields_override']['field_com_tags'] = 1; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['header_type'] = 'none'; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-9'] = (object) array(
          'pid' => 'new-9',
          'panel' => 'sidebar',
          'type' => 'block',
          'subtype' => 'facetapi-PamWyuiBiAw1C711BwU1sH8cz1eeAFQh',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_string_1',
            'override_title' => 1,
            'override_title_text' => '%title (solo organizzazioni)',
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['sidebar']['1'] = 'new-9'; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['sidebar']['2'] = 'new-10'; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['sidebar']['3'] = 'new-11'; /* WAS: '' */
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['fields_override']['field_featured_image']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function rbv_overrides_panelizer_defaults_override_alter(&$data) {
  if (isset($data['user:user:default'])) {
    $data['user:user:default']->extra['panels_breadcrumbs_home'] = 1; /* WAS: '' */
    $data['user:user:default']->extra['panels_breadcrumbs_paths'] = 'persone'; /* WAS: '' */
    $data['user:user:default']->extra['panels_breadcrumbs_state'] = 1; /* WAS: '' */
    $data['user:user:default']->extra['panels_breadcrumbs_titles'] = 'persone
    %user:name'; /* WAS: '' */
  }
}

/**
 * Implements hook_default_search_api_index_alter().
 */
function rbv_overrides_default_search_api_index_alter(&$data) {
  if (isset($data['database_node_index'])) {
    $data['database_node_index']->options['fields']['field_com_categories'] = array(
      'type' => 'list<integer>',
      'entity_type' => 'taxonomy_term',
    ); /* WAS: '' */
    $data['database_node_index']->options['fields']['field_com_description:value'] = array(
      'type' => 'text',
      'boost' => '5.0',
    ); /* WAS: '' */
    $data['database_node_index']->options['fields']['field_com_tagline'] = array(
      'type' => 'text',
      'boost' => '3.0',
    ); /* WAS: '' */
    $data['database_node_index']->options['fields']['field_org_type'] = array(
      'type' => 'integer',
      'entity_type' => 'taxonomy_term',
    ); /* WAS: '' */
    $data['database_node_index']->rdf_mapping = array(); /* WAS: '' */
  }
  if (isset($data['node_index'])) {
    $data['node_index']->rdf_mapping = array(); /* WAS: '' */
  }
}

/**
 * Implements hook_default_search_api_server_alter().
 */
function rbv_overrides_default_search_api_server_alter(&$data) {
  if (isset($data['database_server'])) {
    $data['database_server']->options['indexes']['database_node_index']['field_com_categories'] = array(
      'table' => 'search_api_db_database_node_index_field_com_categories',
      'type' => 'list<integer>',
      'boost' => '1.0',
    ); /* WAS: '' */
    $data['database_server']->options['indexes']['database_node_index']['field_com_description:summary'] = array(
      'table' => 'search_api_db_database_node_index_field_com_description_summar',
      'type' => 'text',
      'boost' => '1.0',
    ); /* WAS: '' */
    $data['database_server']->options['indexes']['database_node_index']['field_com_description:value'] = array(
      'table' => 'search_api_db_database_node_index_field_com_description_value',
      'type' => 'text',
      'boost' => '5.0',
    ); /* WAS: '' */
    $data['database_server']->options['indexes']['database_node_index']['field_com_history:summary'] = array(
      'table' => 'search_api_db_database_node_index_field_com_history_summary',
      'type' => 'text',
      'boost' => '1.0',
    ); /* WAS: '' */
    $data['database_server']->options['indexes']['database_node_index']['field_com_history:value'] = array(
      'table' => 'search_api_db_database_node_index_field_com_history_value',
      'type' => 'text',
      'boost' => '3.0',
    ); /* WAS: '' */
    $data['database_server']->options['indexes']['database_node_index']['field_com_mission:summary'] = array(
      'table' => 'search_api_db_database_node_index_field_com_mission_summary',
      'type' => 'text',
      'boost' => '1.0',
    ); /* WAS: '' */
    $data['database_server']->options['indexes']['database_node_index']['field_com_mission:value'] = array(
      'table' => 'search_api_db_database_node_index_field_com_mission_value',
      'type' => 'text',
      'boost' => '3.0',
    ); /* WAS: '' */
    $data['database_server']->options['indexes']['database_node_index']['field_com_tagline'] = array(
      'table' => 'search_api_db_database_node_index_field_com_tagline',
      'type' => 'text',
      'boost' => '3.0',
    ); /* WAS: '' */
    $data['database_server']->options['indexes']['database_node_index']['field_com_tags'] = array(
      'table' => 'search_api_db_database_node_index_field_com_tags',
      'type' => 'list<integer>',
      'boost' => '1.0',
    ); /* WAS: '' */
    $data['database_server']->options['indexes']['database_node_index']['field_org_type'] = array(
      'table' => 'search_api_db_database_node_index_field_org_type',
      'type' => 'integer',
      'boost' => '1.0',
    ); /* WAS: '' */
    $data['database_server']->rdf_mapping = array(); /* WAS: '' */
  }
  if (isset($data['solr_server'])) {
    $data['solr_server']->rdf_mapping = array(); /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function rbv_overrides_strongarm_alter(&$data) {
  if (isset($data['panelizer_defaults_node_panopoly_page'])) {
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['search_result'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['panelizer_user:user_allowed_layouts_default'])) {
    $data['panelizer_user:user_allowed_layouts_default']->value = 0; /* WAS: 1 */
  }
  if (isset($data['panelizer_user:user_allowed_types_default'])) {
    $data['panelizer_user:user_allowed_types_default']->value = 0; /* WAS: 1 */
  }
  if (isset($data['search_active_modules'])) {
    $data['search_active_modules']->value['advanced_help'] = 0; /* WAS: '' */
    $data['search_active_modules']->value['file_entity'] = 0; /* WAS: '' */
  }
  if (isset($data['search_api_facets_search_ids'])) {
    $data['search_api_facets_search_ids']->value['database_node_index']['search_api_views:rbv_view_search:default'] = 'search_api_views:rbv_view_search:default'; /* WAS: '' */
    $data['search_api_facets_search_ids']->value['database_node_index']['search_api_views:rbv_view_search:panel_pane_1'] = 'search_api_views:rbv_view_search:panel_pane_1'; /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function rbv_overrides_views_default_views_alter(&$data) {
  if (isset($data['panopoly_database_search'])) {
    $data['panopoly_database_search']->display['default']->display_options['fields']['field_com_categories'] = array(
      'id' => 'field_com_categories',
      'table' => 'search_api_index_database_node_index',
      'field' => 'field_com_categories',
      'label' => '',
      'element_label_colon' => FALSE,
      'link_to_entity' => 1,
      'view_mode' => 'full',
      'bypass_access' => 0,
    ); /* WAS: '' */
    $data['panopoly_database_search']->display['default']->display_options['fields']['field_com_description'] = array(
      'id' => 'field_com_description',
      'table' => 'search_api_index_database_node_index',
      'field' => 'field_com_description',
      'label' => '',
      'element_label_colon' => FALSE,
      'type' => 'text_trimmed',
      'settings' => array(
        'trim_length' => 500,
      ),
    ); /* WAS: '' */
    $data['panopoly_database_search']->display['default']->display_options['fields']['field_com_logo'] = array(
      'id' => 'field_com_logo',
      'table' => 'search_api_index_database_node_index',
      'field' => 'field_com_logo',
      'label' => '',
      'element_label_colon' => FALSE,
      'click_sort_column' => 'fid',
      'settings' => array(
        'image_style' => 'rbv_image_teaser',
        'image_link' => 'content',
      ),
    ); /* WAS: '' */
    $data['panopoly_database_search']->display['default']->display_options['fields']['field_com_tags'] = array(
      'id' => 'field_com_tags',
      'table' => 'search_api_index_database_node_index',
      'field' => 'field_com_tags',
      'label' => '',
      'element_label_colon' => FALSE,
      'link_to_entity' => 1,
      'view_mode' => 'full',
      'bypass_access' => 0,
    ); /* WAS: '' */
    unset($data['panopoly_database_search']->display['default']->display_options['fields']['field_featured_image']);
  }
  if (isset($data['panopoly_search'])) {
    $data['panopoly_search']->display['default']->display_options['fields']['field_featured_image']['settings'] = array(
      'image_style' => 'panopoly_image_quarter',
      'image_link' => 'content',
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function rbv_overrides_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['panopoly_html_text'])) {
    $data['panopoly_html_text']['rdf_mapping'] = array(); /* WAS: '' */
  }
}
