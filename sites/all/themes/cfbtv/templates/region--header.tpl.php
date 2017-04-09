<?php
    // This is how I make the image that is set in admin/appearance/settings/cfbtv
    // available in the css.
    $homepage_hero_img = variable_get('hero_image_url');
    drupal_add_css(".region.region-header { background: url('$homepage_hero_img') no-repeat fixed }",$option['type'] = 'inline');
?>

<?php 
/** Note that unlike the parent Tweme theme, this has been modified to only
 *  expect a single block.  The Tweme region--header.tpl.php template is a nice
 *  example of using a carousel, but I'm not going to bother with that.
 */ ?>
<?php if ($content): ?>
<div class="<?php print $classes ?>">
  <?php print $content ?>
</div>

<?php endif ?>
