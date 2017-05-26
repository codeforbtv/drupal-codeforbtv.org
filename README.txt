# Code For BTV Website

### Site Development
The deployment strategy for this site assumes that you will have a working LAMP stack and will be running the site locally to make changes.  Your changes will then be committed to git, and a git-pull on the production machine will retrieve your changes.  Obviously this is not a fully "professional" strategy since it is possible to pull bad code directly to production, but given how infrequently the site is likely to be updated, it seems most valuable to keep the process simple.

While site development needs to be done locally before being moved to the live site, content editing will be done through the CMS as an average content editor would expect.  Likewise, we won't be attempting to capture _all_ configurations in feature modules, so changes that can easily be done through the Drupal admin (eg, site slogan, registration emails, etc).

See the section below [Drupal Development using Features] for more information concerning development of this Drupal site.

### Design & Theme
The site theme information is located at `sites/all/themes/cfbtv`.  This theme is a [drupal subtheme] which means that it inherits most of it's behavior and styles from an existing theme and provides overrides as necessary.  This speeds up development since a lot of the work is done for you, and also allows you to update the parent theme if any changes are made.

#### Theme inheritance
This site actually uses three themes.  My custom theme Cfbtv inherits from [the theme Tweme], and Tweme inherits from [the theme Bootstrap].  Bootstrap is intended to be a supportting framework for a custom theme - it only provides the basics: a grid layout, bootstrap components like glyphicons (which I augmented with font-awsome in Cfbtv), a good frontend workflow and other good stuff - check the Readme for that theme.  However, Bootstrap doesn't give you anything that looks like website theme when you open the site; that's why I use Tweme.  It's a lightweight theme that sits on top of Bootstrap and starts to make the site look like a site.  It specifies some basic page layouts, has drupal regions defined in its templates, provides some structure like headers, footers, navigation, etc.  And finally, I created the custom Cfbtv theme to actually make it look like a real website.  So all the work to be done can be done to the Cfbtv theme, but it's good to remember that it is also drawing from two other helper themes.

#### Navigating themes
It can be difficult to figure out which theme is being used for a specific segment of the site or page.  Drupal has a very useful feature for debugging themes.  Open your settings.php file and look for `$conf['theme_debug']`.  When this is enabled, drupal will generate html comments in the markup that show you what theme pages it is considering for a given area, and which one was used.

#### Things this theme doesn't do well
There is a lot of room for improvement in this theme.  I'm not good with css, so that's kind of going to suck :/  Although the Bootstrap theme is intended to use propper frontend workflow (compiled css, grunt, etc) I did not take the time to set that up.  A knowledgable person who is willing to learn how the Bootstrap theme can be best configured (there's a ton of documentation out there) could really improve the frontend of this site.

### Drupal Development using Features
Since so many of the drupal configurations are saved in the database (outside of git's source control) it can be a real pain to move all these changes from a development environment to a production environment.  

The CfBTV site will be using the Features module to encapsulate as many changes as possible to make it less painful to migrate local changes to the production system.  In particular, changes to these aspects of the site will be encapsulated with a drupal feature module:

 - user profile structure
 - mailchimp communication integration
 - events & meetup.com integration


   [drupal subtheme]: <https://www.drupal.org/docs/7/theming/creating-a-sub-theme>
   [basic overview]: <http://befused.com/drupal/features-first>
   [Drupal Development using Features]: (#drupal-development-using-features)
   [the theme Tweme]: <https://www.drupal.org/project/tweme>
   [the theme Bootstrap]: <https://www.drupal.org/project/bootstrap>