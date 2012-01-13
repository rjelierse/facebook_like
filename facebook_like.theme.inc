<?php
/**
 * Facebook: Social Plugins - Theme functions
 */

 /**
  * Theme the Facebook Like button
  *
  * @param array $attributes
  *     The attributes to set on the Like button.
  *
  * @return string
  *     The renderded Like button.
  */
 function theme_like_button($attributes = array()) {
     $allowed_attributes = array(
         'href',
         'show_faces',
         'colorscheme',
         'font',
         'width',
         'layout',
         'action',
         'send'
     );

     $attributes = facebook_prepare_attributes($attributes, $allowed_attributes);

     return "<fb:like".drupal_attributes($attributes)."></fb:like>";
 }

 /**
  * Theme the Facebook Like box
  *
  * @param array $attributes
  *     The attributes to set on the Like box.
  *
  * @return string
  *     The renderded Like box.
  */
 function theme_like_box($attributes = array()) {
     $allowed_attributes = array(
         'href',
         'show_faces',
         'colorscheme',
         'border_color',
         'width',
         'height',
         'stream',
         'header',
         'force_wall'
     );

     $attributes = facebook_prepare_attributes($attributes, $allowed_attributes);

     return "<fb:like-box".drupal_attributes($attributes)."></fb:like-box>";
 }

 /**
  * Theme the Facebook Subscribe button
  *
  * @param array $attributes
  *     The attributes to set on the Subscribe button.
  *
  * @return string
  *     The renderded Subscribe button.
  */
 function theme_subscribe_button($attributes = array()) {
     $allowed_attributes = array(
         'href',
         'show_faces',
         'colorscheme',
         'font',
         'width',
         'layout'
     );

     $attributes = facebook_prepare_attributes($attributes, $allowed_attributes);

     return "<fb:subscribe".drupal_attributes($attributes)."></fb:subscribe>";
 }