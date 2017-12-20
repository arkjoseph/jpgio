<?php

/**
 * @file
 */
?>
<article class="inline-box <?php print $classes; ?>" data-nid="<?php print $node->nid; ?>" >

  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
     <header>
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($display_submitted): ?>
        <div class="submitted">
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
        </div>
      <?php endif; ?>

      <?php if ($unpublished): ?>
        <p class="unpublished"><?php print t('Unpublished'); ?></p>
      <?php endif; ?>
    </header>
  <?php endif; ?>

  <div class="content inline-box">
    <div class="hero-outer">
      <div class="hero-inner">
        <div class="page-hero">
            <div class="noise"></div>
          <?php if ($title): ?>
            <h1 class="title"><?php print $title; ?></h1>
          <?php endif; ?>

          <?php
          // We hide the comments to render below.
          hide($content['comments']);
          hide($content['links']);

          print render($content);
          dsm($node);
          ?>
        </div>
      </div>
    </div>
  </div><!-- /content -->

  <?php if (!empty($content['links']['terms'])): ?>
    <div class="terms">
      <?php print render($content['links']['terms']); ?>
    </div><!-- /terms -->
  <?php endif;?>

  <?php if (!empty($content['links'])): ?>
    <div class="links">
      <?php print render($content['links']); ?>
    </div><!-- /links -->
  <?php endif; ?>

  <?php print render($content['comments']); ?>
</article><!-- /node -->
