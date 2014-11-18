<?php
/**
 * @file
 * entity_slideshow.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function entity_slideshow_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|one_column_widget|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'one_column_widget';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_slide_content',
      ),
    ),
    'fields' => array(
      'field_slide_content' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|one_column_widget|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|picture|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'picture';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_picture',
      ),
    ),
    'fields' => array(
      'field_picture' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|picture|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|picture|one_column';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'picture';
  $ds_layout->view_mode = 'one_column';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_picture',
      ),
    ),
    'fields' => array(
      'field_picture' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|picture|one_column'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|picture|two_column';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'picture';
  $ds_layout->view_mode = 'two_column';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_picture',
      ),
    ),
    'fields' => array(
      'field_picture' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|picture|two_column'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|two_column_widget|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'two_column_widget';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_slide_content',
      ),
      'right' => array(
        1 => 'field_slide_content_r',
      ),
    ),
    'fields' => array(
      'field_slide_content' => 'left',
      'field_slide_content_r' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|two_column_widget|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function entity_slideshow_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'one_column';
  $ds_view_mode->label = 'One column';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['one_column'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'two_column';
  $ds_view_mode->label = 'Two column';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['two_column'] = $ds_view_mode;

  return $export;
}
