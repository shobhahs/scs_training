<?php
$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'anonymous_user_view';
$page->task = 'page';
$page->admin_title = 'Anonymous user view';
$page->admin_description = 'Anonymous user can see it';
$page->path = 'shobha';
$page->access = array();
$page->menu = array(
  'type' => 'normal',
  'title' => 'Anonymous user page',
  'name' => 'navigation',
  'weight' => '0',
  'parent' => array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
  ),
);
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_anonymous_user_view__panel';
$handler->task = 'page';
$handler->subtask = 'anonymous_user_view';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => 'panel',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'onecol';
$display->layout_settings = array(
  'items' => array(
    'canvas' => array(
      'type' => 'row',
      'contains' => 'column',
      'children' => array(
        0 => 1,
        1 => 'main',
      ),
      'parent' => NULL,
    ),
    'main' => array(
      'type' => 'column',
      'width' => 50,
      'width_type' => '%',
      'children' => array(
        0 => 'main-row',
      ),
      'parent' => 'canvas',
    ),
    'main-row' => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'center',
      ),
      'parent' => 'main',
    ),
    'center' => array(
      'type' => 'region',
      'title' => 'Center',
      'width' => 100,
      'width_type' => '%',
      'parent' => 'main-row',
    ),
    1 => array(
      'type' => 'column',
      'width' => 50,
      'width_type' => '%',
      'parent' => 'canvas',
      'children' => array(),
      'class' => '',
      'hide_empty' => 0,
    ),
  ),
);
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'center' => NULL,
    'middle' => NULL,
  ),
);
$display->cache = array();
$display->title = 'Anonymous user view';
$display->uuid = '1e08f8ad-3cd7-4225-947f-36ee495f0e49';
$display->storage_type = 'page_manager';
$display->storage_id = 'page_anonymous_user_view__panel';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-22cd571f-4e48-44f0-853b-820a6d4b6feb';
$pane->panel = 'middle';
$pane->type = 'custom';
$pane->subtype = 'custom';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'admin_title' => 'about xampp',
  'title' => 'xampp',
  'title_heading' => 'h2',
  'body' => 'XAMPP (/ˈzæmp/ or /ˈɛks.æmp/) is a free and open source cross-platform web server solution stack package developed by Apache Friends, consisting mainly of the Apache HTTP Server, MariaDB database, and interpreters for scripts written in the PHP and Perl programming languages.
',
  'format' => 'filtered_html',
  'substitute' => TRUE,
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '22cd571f-4e48-44f0-853b-820a6d4b6feb';
$display->content['new-22cd571f-4e48-44f0-853b-820a6d4b6feb'] = $pane;
$display->panels['middle'][0] = 'new-22cd571f-4e48-44f0-853b-820a6d4b6feb';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;

