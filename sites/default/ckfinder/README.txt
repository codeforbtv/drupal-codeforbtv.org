The configuration for ckfinder is very confusing.

Normally I would expect that the path where images are saved would be set here:  
  codeforbtv.org/admin/config/content/ckeditor > edit profile > file browser settings > Path to uploaded files

However, it seems that the path is actually being set in 
  sites/all/modules/ckeditor/ckfinder/config.php

As long as the filesystem is being set in that config doc, that means we cannot
use multiple directories.  This will be a problem if/when any images are used for
purposes other than being displayed on pages on the website.  (For example, if 
we ever wanted to allow users to upload their own images.)
