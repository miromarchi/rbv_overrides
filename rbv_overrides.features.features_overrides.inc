<?php
/**
 * @file
 * rbv_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function rbv_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_featured_categories.field_featured_categories"]["DELETED"] = TRUE;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-panopoly_page-field_featured_categories.node-panopoly_page-field_featured_categories"]["DELETED"] = TRUE;
  $overrides["field_instance.node-panopoly_page-field_featured_status.settings"] = array(
    'user_register_form' => FALSE,
  );
  $overrides["field_instance.user-user-field_user_about.description"] = 'Descrivi il tuo profilo.';
  $overrides["field_instance.user-user-field_user_about.display|full"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 0,
  );
  $overrides["field_instance.user-user-field_user_about.label"] = 'Profilo';
  $overrides["field_instance.user-user-field_user_about.widget|settings|rows"] = 16;
  $overrides["field_instance.user-user-field_user_picture.display|full"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 1,
  );
  $overrides["field_instance.user-user-field_user_picture.label"] = 'Immagine';
  $overrides["field_instance.user-user-field_user_picture.widget|settings|preview_image_style"] = 'panopoly_image_square';

  // Exported overrides for: filter
  $overrides["filter.panopoly_html_text.filters|wysiwyg"]["DELETED"] = TRUE;

  // Exported overrides for: node
  $overrides["node.forum.description"] = 'Inizia una nuova discussione nel forum.';
  $overrides["node.forum.has_title"] = 1;
  $overrides["node.forum.help"] = '';
  $overrides["node.forum.name"] = 'Discussione';
  $overrides["node.forum.title_label"] = 'Oggetto';

  // Exported overrides for: og_membership_type
  $overrides["og_membership_type.og_membership_type_default.language"] = '';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-10"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-11"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|fields_override|field_com_categories"] = 1;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|fields_override|field_com_description"] = 1;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|fields_override|field_com_logo"] = 1;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|fields_override|field_com_tags"] = 1;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|fields_override|field_featured_image"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|header_type"] = 'none';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-9"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|sidebar|1"] = 'new-9';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|sidebar|2"] = 'new-10';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|sidebar|3"] = 'new-11';

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.user:user:default.extra|panels_breadcrumbs_home"] = 1;
  $overrides["panelizer_defaults.user:user:default.extra|panels_breadcrumbs_paths"] = 'persone';
  $overrides["panelizer_defaults.user:user:default.extra|panels_breadcrumbs_state"] = 1;
  $overrides["panelizer_defaults.user:user:default.extra|panels_breadcrumbs_titles"] = 'persone
  %user:name';

  // Exported overrides for: search_api_index
  $overrides["search_api_index.database_node_index.options|fields|field_com_categories"] = array(
    'type' => 'list<integer>',
    'entity_type' => 'taxonomy_term',
  );
  $overrides["search_api_index.database_node_index.options|fields|field_com_description:value"] = array(
    'type' => 'text',
    'boost' => '5.0',
  );
  $overrides["search_api_index.database_node_index.options|fields|field_com_tagline"] = array(
    'type' => 'text',
    'boost' => '3.0',
  );
  $overrides["search_api_index.database_node_index.options|fields|field_org_type"] = array(
    'type' => 'integer',
    'entity_type' => 'taxonomy_term',
  );
  $overrides["search_api_index.database_node_index.rdf_mapping"] = array();
  $overrides["search_api_index.node_index.rdf_mapping"] = array();

  // Exported overrides for: search_api_server
  $overrides["search_api_server.database_server.options|indexes|database_node_index|field_com_categories"] = array(
    'table' => 'search_api_db_database_node_index_field_com_categories',
    'type' => 'list<integer>',
    'boost' => '1.0',
  );
  $overrides["search_api_server.database_server.options|indexes|database_node_index|field_com_description:summary"] = array(
    'table' => 'search_api_db_database_node_index_field_com_description_summar',
    'type' => 'text',
    'boost' => '1.0',
  );
  $overrides["search_api_server.database_server.options|indexes|database_node_index|field_com_description:value"] = array(
    'table' => 'search_api_db_database_node_index_field_com_description_value',
    'type' => 'text',
    'boost' => '5.0',
  );
  $overrides["search_api_server.database_server.options|indexes|database_node_index|field_com_history:summary"] = array(
    'table' => 'search_api_db_database_node_index_field_com_history_summary',
    'type' => 'text',
    'boost' => '1.0',
  );
  $overrides["search_api_server.database_server.options|indexes|database_node_index|field_com_history:value"] = array(
    'table' => 'search_api_db_database_node_index_field_com_history_value',
    'type' => 'text',
    'boost' => '3.0',
  );
  $overrides["search_api_server.database_server.options|indexes|database_node_index|field_com_mission:summary"] = array(
    'table' => 'search_api_db_database_node_index_field_com_mission_summary',
    'type' => 'text',
    'boost' => '1.0',
  );
  $overrides["search_api_server.database_server.options|indexes|database_node_index|field_com_mission:value"] = array(
    'table' => 'search_api_db_database_node_index_field_com_mission_value',
    'type' => 'text',
    'boost' => '3.0',
  );
  $overrides["search_api_server.database_server.options|indexes|database_node_index|field_com_tagline"] = array(
    'table' => 'search_api_db_database_node_index_field_com_tagline',
    'type' => 'text',
    'boost' => '3.0',
  );
  $overrides["search_api_server.database_server.options|indexes|database_node_index|field_com_tags"] = array(
    'table' => 'search_api_db_database_node_index_field_com_tags',
    'type' => 'list<integer>',
    'boost' => '1.0',
  );
  $overrides["search_api_server.database_server.options|indexes|database_node_index|field_org_type"] = array(
    'table' => 'search_api_db_database_node_index_field_org_type',
    'type' => 'integer',
    'boost' => '1.0',
  );
  $overrides["search_api_server.database_server.rdf_mapping"] = array();
  $overrides["search_api_server.solr_server.rdf_mapping"] = array();

  // Exported overrides for: variable
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|search_result"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );
  $overrides["variable.panelizer_user:user_allowed_layouts_default.value"] = 0;
  $overrides["variable.panelizer_user:user_allowed_types_default.value"] = 0;
  $overrides["variable.search_active_modules.value|advanced_help"] = 0;
  $overrides["variable.search_active_modules.value|file_entity"] = 0;
  $overrides["variable.search_api_facets_search_ids.value|database_node_index|search_api_views:rbv_view_search:default"] = 'search_api_views:rbv_view_search:default';
  $overrides["variable.search_api_facets_search_ids.value|database_node_index|search_api_views:rbv_view_search:panel_pane_1"] = 'search_api_views:rbv_view_search:panel_pane_1';

  // Exported overrides for: views_view
  $overrides["views_view.panopoly_database_search.display|default|display_options|fields|field_com_categories"] = array(
    'id' => 'field_com_categories',
    'table' => 'search_api_index_database_node_index',
    'field' => 'field_com_categories',
    'label' => '',
    'element_label_colon' => FALSE,
    'link_to_entity' => 1,
    'view_mode' => 'full',
    'bypass_access' => 0,
  );
  $overrides["views_view.panopoly_database_search.display|default|display_options|fields|field_com_description"] = array(
    'id' => 'field_com_description',
    'table' => 'search_api_index_database_node_index',
    'field' => 'field_com_description',
    'label' => '',
    'element_label_colon' => FALSE,
    'type' => 'text_trimmed',
    'settings' => array(
      'trim_length' => 500,
    ),
  );
  $overrides["views_view.panopoly_database_search.display|default|display_options|fields|field_com_logo"] = array(
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
  );
  $overrides["views_view.panopoly_database_search.display|default|display_options|fields|field_com_tags"] = array(
    'id' => 'field_com_tags',
    'table' => 'search_api_index_database_node_index',
    'field' => 'field_com_tags',
    'label' => '',
    'element_label_colon' => FALSE,
    'link_to_entity' => 1,
    'view_mode' => 'full',
    'bypass_access' => 0,
  );
  $overrides["views_view.panopoly_database_search.display|default|display_options|fields|field_featured_image"]["DELETED"] = TRUE;
  $overrides["views_view.panopoly_search.display|default|display_options|fields|field_featured_image|settings"] = array(
    'image_style' => 'panopoly_image_quarter',
    'image_link' => 'content',
  );

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.panopoly_html_text.rdf_mapping"] = array();

 return $overrides;
}
