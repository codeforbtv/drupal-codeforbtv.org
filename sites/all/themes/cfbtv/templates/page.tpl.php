
<?php 
/*
 * Sets the page banner.  Defaults to the homepage image, but can be overridden 
 * with an image specified by the node.
 */
if(isset($node->field_banner_image) && !empty($node->field_banner_image['und'][0]['uri'])) {
    $banner_image_url = image_style_url('banner_image', $node->field_banner_image['und'][0]['uri']);
    drupal_add_css("header.header .jumbotron { background-image: url('$banner_image_url')}",$option['type'] = 'inline');
} elseif(drupal_is_front_page()) {
    $homepage_hero_img = variable_get('hero_image_url');
    $homepage_hero_relative_url = substr($homepage_hero_img, strpos($homepage_hero_img, '.org/')+5);
    drupal_add_css("header.header .jumbotron { background: url('$homepage_hero_relative_url')}",$option['type'] = 'inline');
}
?>

<?php print render($page['body_top']) ?>

<div class="<?php print $navbar_classes ?>">
    <div class="container">
        <div class="navbar-header">
            <?php if (!empty($logo) || !empty($site_name)): ?>
                <a class="navbar-brand" href="<?php print $front_page ?>" title="<?php print t('Home') ?>">
                    <?php if (!empty($logo)): ?>
                        <img src="<?php print $logo ?>" alt="<?php print t('Home') ?>" />
                    <?php endif ?>
                    <?php if (!empty($site_name)): ?>
                        <span><?php print $site_name ?></span>
                    <?php endif ?>
                </a>
            <?php endif ?>
            <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
            </button>
        </div>
        <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
            <div class="navbar-collapse collapse">
                <nav role="navigation">
                    <?php print render($primary_nav) ?>
                    <?php print render($secondary_nav) ?>
                    <?php print render($page['navigation']) ?>
                </nav>
            </div>
        <?php endif ?>
    </div>
</div>

<header class="header" <?php print $header_attributes ?>>
    <div class="header-top">
        <div class="container">
            <?php print $breadcrumb ?>
            <?php print render($title_prefix) ?>
            <?php print render($title_suffix) ?>
        </div>
    </div>
    <?php if ($page['header']): ?>
        <?php print render($page['header']) ?>
    <?php else: ?>
        <div class="jumbotron">
            <div class="container">
                <h1><?php print $title ?></h1>
            </div>
        </div>
    <?php endif ?>
    <div class="header-bottom">
        <div class="container">
            <?php if ($action_links): ?>
                <ul class="action-links pull-right">
                    <?php print render($action_links) ?>
                </ul>
            <?php endif ?>
            <?php print render($tabs) ?>
        </div>
    </div>
</header>

<section class="main">
    <div class="container">
        <div class="row">
            <?php $_content_cols = 12 - 3 * !empty($page['sidebar_first']) - 4 * !empty($page['sidebar_second']) ?>
            <section class="main-col col-md-<?php print $_content_cols ?><?php print !empty($page['sidebar_first']) ? ' col-md-push-3' : ''  ?>">
                <?php print $messages ?>
                <?php print render($page['help']) ?>
                <?php print render($page['highlighted']) ?>
                <?php print render($page['content']) ?>
            </section>
            <?php if (!empty($page['sidebar_first'])): ?>
                <aside class="sidebar sidebar__first main-col col-md-3 col-md-pull-<?php print $_content_cols ?>">
                    <?php print render($page['sidebar_first']) ?>
                </aside>
            <?php endif ?>
            <?php if (!empty($page['sidebar_second'])): ?>
                <aside class="sidebar sidebar__second main-col col-md-4">
                    <?php print render($page['sidebar_second']) ?>
                </aside>
            <?php endif ?>
        </div>
    </div>
</section>

<?php print render($page['share']) ?>

<?php if ($page['bottom']): ?>
    <section class="bottom">
        <div class="container">
            <?php print render($page['bottom']) ?>
        </div>
    </section>
<?php endif ?>

<footer class="footer">
    <div class="container">
        <?php print render($page['footer']) ?>
    </div>
</footer>

<?php print render($page['body_bottom']) ?>
