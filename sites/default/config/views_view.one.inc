<?php
/**
 * @file
 * views_view.one.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'one';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Onepage';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'One';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Field: Global: Contextual Links */
$handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
$handler->display->display_options['fields']['contextual_links']['table'] = 'views';
$handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
$handler->display->display_options['fields']['contextual_links']['label'] = '';
$handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['contextual_links']['fields'] = array(
  'edit_node' => 'edit_node',
  'delete_node' => 'delete_node',
  'body' => 0,
  'field_image' => 0,
);
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
  'page' => 'page',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'one');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Home';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'bg_image_formatter';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'css_settings' => array(
    'bg_image_selector' => '#block-views-one-one',
    'bg_image_color' => '#FFFFFF',
    'bg_image_x' => 'left',
    'bg_image_y' => 'top',
    'bg_image_attachment' => 'fixed',
    'bg_image_repeat' => 'no-repeat',
    'bg_image_background_size' => '',
    'bg_image_background_size_ie8' => 0,
    'bg_image_media_query' => 'all',
    'bg_image_important' => 0,
  ),
);
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Field: Global: Contextual Links */
$handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
$handler->display->display_options['fields']['contextual_links']['table'] = 'views';
$handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
$handler->display->display_options['fields']['contextual_links']['label'] = '';
$handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['contextual_links']['fields'] = array(
  'edit_node' => 'edit_node',
  'delete_node' => 'delete_node',
  'body' => 0,
  'field_image' => 0,
);
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
  'page' => 'page',
);
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['value']['value'] = '1';
$handler->display->display_options['block_description'] = 'One';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'two');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'About Us';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'bg_image_formatter';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'css_settings' => array(
    'bg_image_selector' => '#block-views-one-two',
    'bg_image_color' => '#FFFFFF',
    'bg_image_x' => 'middle',
    'bg_image_y' => 'top',
    'bg_image_attachment' => 'fixed',
    'bg_image_repeat' => 'no-repeat',
    'bg_image_background_size' => '',
    'bg_image_background_size_ie8' => 0,
    'bg_image_media_query' => 'all',
    'bg_image_important' => 1,
  ),
);
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Field: Global: Contextual Links */
$handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
$handler->display->display_options['fields']['contextual_links']['table'] = 'views';
$handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
$handler->display->display_options['fields']['contextual_links']['label'] = '';
$handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['contextual_links']['fields'] = array(
  'edit_node' => 'edit_node',
  'delete_node' => 'delete_node',
  'body' => 0,
  'field_image' => 0,
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['value']['value'] = '2';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'page' => 'page',
);
$handler->display->display_options['block_description'] = 'Two';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'three');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Our Team';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'bg_image_formatter';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'css_settings' => array(
    'bg_image_selector' => '#block-views-one-three',
    'bg_image_color' => '#FFFFFF',
    'bg_image_x' => 'left',
    'bg_image_y' => 'top',
    'bg_image_attachment' => 'fixed',
    'bg_image_repeat' => 'no-repeat',
    'bg_image_background_size' => '',
    'bg_image_background_size_ie8' => 0,
    'bg_image_media_query' => 'all',
    'bg_image_important' => 1,
  ),
);
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Field: Global: Contextual Links */
$handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
$handler->display->display_options['fields']['contextual_links']['table'] = 'views';
$handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
$handler->display->display_options['fields']['contextual_links']['label'] = '';
$handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['contextual_links']['fields'] = array(
  'edit_node' => 'edit_node',
  'delete_node' => 'delete_node',
  'body' => 0,
  'field_image' => 0,
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['value']['value'] = '3';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'page' => 'page',
);
$handler->display->display_options['block_description'] = 'Three';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'galeri');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Galeri';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '8';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'galeri',
  'image_link' => '',
);
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Field: Global: Contextual Links */
$handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
$handler->display->display_options['fields']['contextual_links']['table'] = 'views';
$handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
$handler->display->display_options['fields']['contextual_links']['label'] = '';
$handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['contextual_links']['fields'] = array(
  'edit_node' => 'edit_node',
  'delete_node' => 'delete_node',
  'body' => 0,
  'field_image' => 0,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'article' => 'article',
);
/* Filter criterion: Content: Tags (field_tags) */
$handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
$handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['value'] = '';
$handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
$handler->display->display_options['block_description'] = 'Galeri';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'contact');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Contact Us';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'bg_image_formatter';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'css_settings' => array(
    'bg_image_selector' => '#block-views-one-contact',
    'bg_image_color' => '#FFFFFF',
    'bg_image_x' => 'left',
    'bg_image_y' => 'top',
    'bg_image_attachment' => 'fixed',
    'bg_image_repeat' => 'no-repeat',
    'bg_image_background_size' => '',
    'bg_image_background_size_ie8' => 0,
    'bg_image_media_query' => 'all',
    'bg_image_important' => 1,
  ),
);
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Field: Global: Contextual Links */
$handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
$handler->display->display_options['fields']['contextual_links']['table'] = 'views';
$handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
$handler->display->display_options['fields']['contextual_links']['label'] = '';
$handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['contextual_links']['fields'] = array(
  'edit_node' => 'edit_node',
  'delete_node' => 'delete_node',
  'body' => 0,
  'field_image' => 0,
);
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
  'page' => 'page',
);
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['value']['value'] = '18';
$handler->display->display_options['block_description'] = 'contact';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'footer');
$handler->display->display_options['defaults']['title'] = FALSE;
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
  'page' => 'page',
);
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['value']['value'] = '19';
$handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
$handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
$handler->display->display_options['block_description'] = 'footer';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'text',
  3 => 'image',
);
