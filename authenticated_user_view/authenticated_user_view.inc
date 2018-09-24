<?php
$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'authenticated_user_view';
$page->task = 'page';
$page->admin_title = 'Authenticated user view';
$page->admin_description = 'only authenticated users can see this';
$page->path = 'home';
$page->access = array();
$page->menu = array(
  'type' => 'normal',
  'title' => 'authenticated page',
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
$handler->name = 'page_authenticated_user_view__panel_context_337961c2-6957-4a6f-b480-e5e26081f57d';
$handler->task = 'page';
$handler->subtask = 'authenticated_user_view';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Landing page',
  'no_blocks' => FALSE,
  'pipeline' => 'ipe',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => '',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
            1 => 3,
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
$display->layout = 'twocol';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'center' => NULL,
    'left' => NULL,
    'right' => NULL,
  ),
);
$display->cache = array();
$display->title = 'Authenticated user view';
$display->uuid = 'f499c125-ed2c-43b4-ac83-9328b76ae74f';
$display->storage_type = 'page_manager';
$display->storage_id = 'page_authenticated_user_view__panel_context_337961c2-6957-4a6f-b480-e5e26081f57d';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-50161581-979a-479c-9f14-5fe8bf83f2b8';
$pane->panel = 'left';
$pane->type = 'block';
$pane->subtype = 'user-new';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'override_title' => 0,
  'override_title_text' => '',
  'override_title_heading' => 'h2',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '50161581-979a-479c-9f14-5fe8bf83f2b8';
$display->content['new-50161581-979a-479c-9f14-5fe8bf83f2b8'] = $pane;
$display->panels['left'][0] = 'new-50161581-979a-479c-9f14-5fe8bf83f2b8';
$pane = new stdClass();
$pane->pid = 'new-e1e1a8ad-8882-48e9-8f9c-12a02359a12a';
$pane->panel = 'right';
$pane->type = 'block';
$pane->subtype = 'node-recent';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'override_title' => 0,
  'override_title_text' => '',
  'override_title_heading' => 'h2',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = 'e1e1a8ad-8882-48e9-8f9c-12a02359a12a';
$display->content['new-e1e1a8ad-8882-48e9-8f9c-12a02359a12a'] = $pane;
$display->panels['right'][0] = 'new-e1e1a8ad-8882-48e9-8f9c-12a02359a12a';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
