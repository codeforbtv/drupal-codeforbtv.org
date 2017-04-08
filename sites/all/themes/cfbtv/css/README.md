# CSS Strategy

This theme doesn't use a css compiler, but I'm going to take a rough approximation of the [seven-one pattern](http://cloudspace.com/blog/2015/11/17/seven-one-pattern#.WOkz2hIrJE4) using the following files.  If I was using less I'd have a directory for each of these and separate each component into it's own file (eg css/components/callToAction.css).  This is a little problematic because drupal expects the .info file for the theme to specify each file being included.  I don't want to have to touch .info each time I add a new batch of css, so each of these files will be segmented as if they were separate files.

You'll also notice that the defintions below refer to sass and haven't been adapted for the css files in this theme.  I'm just being lazy and telling you now that the rules below apply to our css - there's no sass, don't be mislead.  Also if you follow the links you'll see that I left out 4 of the 7-1 pattern types - that's because they apply more to sass than css.

## Base.css
The `base/` folder holds what we might call the boilerplate code for the project. In there, you might find some typographic rules, and probably a stylesheet (that I’m used to calling `_base.scss`), defining some standard styles for commonly used HTML elements.

Reference: [Sass Guidelines](http://sass-guidelin.es/) > [Architecture](http://sass-guidelin.es/#architecture) > [Base folder](http://sass-guidelin.es/#base-folder)

## Layout.css
The `layout/` folder contains everything that takes part in laying out the site or application. This folder could have stylesheets for the main parts of the site (header, footer, navigation, sidebar…), the grid system or even CSS styles for all the forms.

Reference: [Sass Guidelines](http://sass-guidelin.es/) > [Architecture](http://sass-guidelin.es/#architecture) > [Layout folder](http://sass-guidelin.es/#layout-folder)

## Pages
If you have page-specific styles, it is better to put them in a pages/ folder, in a file named after the page. For instance, it’s not uncommon to have very specific styles for the home page hence the need for a `_home.scss` file in pages/.page

Reference: [Sass Guidelines](http://sass-guidelin.es/) > [Architecture](http://sass-guidelin.es/#architecture) > [Pages folder](http://sass-guidelin.es/#pages-folder)

## Components

For small components, there is the `components/` folder. While `layout/` is macro (defining the global wireframe), `components/` is more focused on widgets. It contains all kind of specific modules like a slider, a loader, a widget, and basically anything along those lines. There are usually a lot of files in components/ since the whole site/application should be mostly composed of tiny modules.

Reference: [Sass Guidelines](http://sass-guidelin.es/) > [Architecture](http://sass-guidelin.es/#architecture) > [Components folder](http://sass-guidelin.es/#components-folder)


