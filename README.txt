# Code For BTV Website

### Site Development
The deployment strategy for this site assumes that you will have a working LAMP stack and will be running the site locally to make changes.  Your changes will then be committed to git, and a git-pull on the production machine will retrieve your changes.  Obviously this is not a fully "professional" strategy since it is possible to pull bad code directly to production, but given how infrequently the site is likely to be updated, it seems most valuable to keep the process simple.

While site development needs to be done locally before being moved to the live site, content editing will be done through the CMS as an average content editor would expect.  Likewise, we won't be attempting to capture _all_ configurations in feature modules, so changes that can easily be done through the Drupal admin (eg, site slogan, registration emails, etc).

See the section below [Drupal Development using Features] for more information concerning development of this Drupal site.

### Design & Theme
The site theme information is located at `sites/all/themes/cfbtv`.  This theme is a [drupal subtheme] which means that it inherits most of it's behavior and styles from an existing theme and provides overrides as necessary.  This speeds up development since a lot of the work is done for you, and also allows you to update the parent theme if any changes are made.

The parent theme is currently Bartik - the default theme for drupal 7.

### Drupal Development using Features
Since so many of the drupal configurations are saved in the database (outside of git's source control) it can be a real pain to move all these changes from a development environment to a production environment.  

The CfBTV site will be using the Features module to encapsulate as many changes as possible to make it less painful to migrate local changes to the production system.  In particular, changes to these aspects of the site will be encapsulated with a drupal feature module:

 - user profile structure
 - mailchimp communication integration
 - events & meetup.com integration


   [drupal subtheme]: <https://www.drupal.org/docs/7/theming/creating-a-sub-theme>
   [basic overview]: <http://befused.com/drupal/features-first>
   [Drupal Development using Features]: (#drupal-development-using-features)
