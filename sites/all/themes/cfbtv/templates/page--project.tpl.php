<?php
/**
 * Note: normally content is modified in the node--xxx.tpl.php templates.  However
 * in order to modify the sidebar to display node information I have to use a page
 * template.  
 * 
 * Any theme changes to the way the main content is displayed should be done in a 
 * cooresponding node--project.tpl.php template.
 */

// prepping data for use below
$github_link = isset($node->field_github_link['und'][0]['url']) ? $node->field_github_link['und'][0]['url'] : false;
$website_link = isset($node->field_website_link['und'][0]['url']) ? $node->field_website_link['und'][0]['url'] : false;
$website_title = isset($node->field_website_link['und'][0]['title']) ? $node->field_website_link['und'][0]['title'] : 'Visit the Website';
$redeployment_github_link = isset($node->field_redeployment_github_link['und'][0]['url']) ? $node->field_redeployment_github_link['und'][0]['url'] : false;
$redeployment_website_link = isset($node->field_redeployment_website_link['und'][0]['url']) ? $node->field_redeployment_website_link['und'][0]['url'] : false;
$redeployment_website_title = isset($node->field_redeployment_website_link['und'][0]['title']) ? $node->field_redeployment_website_link['und'][0]['title'] : 'Visit Original Project';
$slack_channel = isset($node->field_slack_channel['und']) ? $node->field_slack_channel['und'][0]['value'] : false;
$slack_link = ($slack_channel) ? "https://codeforbtv.slack.com/messages/$slack_channel/" : false;

$is_redeployment = isset($node->field_redeployment['und'][0]['value']) ? $node->field_redeployment['und'][0]['value'] : false;
$has_project_links = ($website_link || $github_link);
$has_press_links = (isset($node->field_press_links['und']) && count($node->field_press_links['und']) > 0);
$has_second_sidebar_content = (!empty($page['sidebar_second'])||$has_project_links||$is_redeployment||$has_press_links);


/*
 * Sets the page banner.  Defaults to the homepage image, but can be overridden 
 * with an image specified by the node.
 */
if(isset($node->field_banner_image) && !empty($node->field_banner_image['und'][0]['uri'])) {
    $banner_image_url = image_style_url('banner_image', $node->field_banner_image['und'][0]['uri']);
    drupal_add_css("header.header .jumbotron { background-image: url('$banner_image_url')}",$option['type'] = 'inline');
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
            <?php $_content_cols = 12 - 3 * !empty($page['sidebar_first']) - 4 * $has_second_sidebar_content ?>
            <section class="main-col col-md-<?php print $_content_cols ?><?php print !empty($page['sidebar_first']) ? ' col-md-push-3' : ''  ?>">
                <?php print $messages ?>
                <?php print render($page['help']) ?>
                <?php print render($page['highlighted']) ?>
                
                <?php print render($page['content']) ?>
            </section>
            
            <!-- LEFT SIDEBAR -->
            <?php if (!empty($page['sidebar_first'])): ?>
                <aside class="sidebar sidebar__first main-col col-md-3 col-md-pull-<?php print $_content_cols ?>">
                    <?php print render($page['sidebar_first']) ?>
                </aside>
            <?php endif ?>
            

            <!-- RIGHT SIDEBAR -->
            <?php if ($has_second_sidebar_content): ?>
                <aside class="sidebar sidebar__second main-col col-md-4">

                    <!-- SLACK CHANNEL -->
                    <?php if($slack_channel): ?>
                        <p>
                            <span class="btn btn-default">
                                <a target="_blank" href="<?php echo $slack_link; ?>">
                                    <img src="/sites/all/themes/cfbtv/images/slack_icon.png" data-pin-nopin="true" style="width: 20px;"> <?php echo $slack_channel; ?>
                                </a>
                            </span>
                            <span class="help-link">
                              <a href="https://cfbtv-slackin.herokuapp.com/" target="_blank">join our slack</a>
                            </span>
                        </p>
                    <?php endif; ?>


                    <!-- PROJECT LINKS -->
                    <?php if($has_project_links): ?>
                        <aside class="well">
                            <p><strong>Project Details</strong></p>
                            <div>
                                <?php if($website_link) : ?>
                                    <a href="<?php echo $website_link; ?>">
                                        <i class="fa fa-external-link"></i> <?php echo $website_title; ?>
                                    </a><br/>
                                <?php endif; ?>
                                <?php if($github_link) : ?>
                                    <a href="<?php echo $github_link; ?>">
                                        <i class="fa fa-github"></i> Github Repository
                                    </a><br/>
                                <?php endif; ?>
                                    
                            </div>
                        </aside>
                    <?php endif; ?>

                    <!-- REDEPLOYMENT LINKS -->
                    <?php if($is_redeployment): ?>
                        <aside class="well">
                            <p><strong>Redeployment Details</strong></p>
                            <p>
                                This project is a redeployment of an existing project.
                                Brigade projects are opensource and intended to be reused 
                                wherever possible. Follow these links for more information.
                            </p>
                            <p>
                                <?php if($redeployment_website_link) : ?>
                                    <a href="<?php echo $redeployment_website_link; ?>">
                                        <i class="fa fa-external-link"></i> <?php echo $redeployment_website_title; ?>
                                    </a><br/>
                                <?php endif; ?>
                                <?php if($redeployment_github_link) : ?>
                                    <a href="<?php echo $redeployment_github_link; ?>">
                                        <i class="fa fa-github"></i> Github Repository
                                    </a><br/>
                                <?php endif; ?>
                            </p>
                        </aside>
                    <?php endif; ?>

                    <!-- PRESS LINKS -->
                    <?php if($has_press_links) : ?>
                        <aside class="well">
                            <p><strong>Related Links</strong></p>
                            <div>
                                <?php foreach ($node->field_press_links['und'] as $data) : ?>
                                    <p>
                                        <a class="related-links__link" href="<?php echo $data['url']; ?>">
                                            <?php echo $data['title']; ?> <i class="fa fa-external-link"></i>
                                        </a>
                                        <span class="related-links__url"><?php echo substr($data['url'], 0, 40)."..."; ?></span>
                                    </p>
                                <?php endforeach; ?>
                            </div>
                        </aside>
                    <?php endif; ?>

                    <!-- other sidebar blocks -->
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
