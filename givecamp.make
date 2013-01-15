; Version and API
core = 7.x
api = 2

; Modules ======================================================================

; Admin ========================================================================
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"

; Ctool/Context ================================================================
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"

projects[context][type] = "module"
projects[context][subdir] = "contrib"


; Date/time ====================================================================
projects[calendar][type] = "module"
projects[calendar][subdir] = "contrib"

projects[date][type] = "module"
projects[date][subdir] = "contrib"

; Development ==================================================================
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"

; Field related ================================================================
projects[email][type] = "module"
projects[email][subdir] = "contrib"

projects[link][type] = "module"
projects[link][subdir] = "contrib"

projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

; Menu =========================================================================
projects[menu_block][type] = "module"
projects[menu_block][subdir] = "contrib"

; Other ========================================================================
projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"

; projects[securepages][type] = "module"
; projects[securepages][subdir] = "contrib"

; Social media==================================================================
projects[socialmedia][type] = module
projects[socialmedia][subdir] = contrib

projects[twitter_pull][type] = module
projects[twitter_pull][subdir] = contrib

; Performance ==================================================================
projects[entitycache][type] = "module"
projects[entitycache][subdir] = "contrib"

; Rules ========================================================================

; Security =====================================================================
projects[mollom][type] = "module"
projects[mollom][subdir] = "contrib"

; SEO ==========================================================================
projects[globalredirect][type] = "module"
projects[globalredirect][subdir] = "contrib"

projects[google_analytics][type] = "module"
projects[google_analytics][subdir] = "contrib"

projects[metatag][type] = "modules"
projects[metatag][subdir] = "contrib"

projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"

projects[xmlsitemap][type] = "module"
projects[xmlsitemap][subdir] = "contrib"

; Views ========================================================================
projects[views][type] = "module"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"

projects[views_slideshow][type] = "module"
projects[views_slideshow][subdir] = "contrib"

; User features ================================================================
projects[logintoboggan][type] = "module"
projects[logintoboggan][subdir] = "contrib"

; Webform ======================================================================
projects[webform][type] = "module"
projects[webform][subdir] = "contrib"

; WYSIWYG ======================================================================
projects[imce][type] = "module"
projects[imce][subdir] = "contrib"

projects[wysiwyg][type] = "module"
projects[wysiwyg][subdir] = "contrib"

projects[imce_wysiwyg][type] = "module"
projects[imce_wysiwyg][subdir] = "contrib"


; Themes =======================================================================
projects[rubik][type] = "theme"
projects[tao][type] = "theme"
projects[zurb-foundation][type] = "theme"

; Third party libraries ========================================================
libraries[tinymce][download][type] = get
libraries[tinymce][download][url] = https://github.com/downloads/tinymce/tinymce/tinymce_3.5.7.zip
libraries[tinymce][directory_name] = tinymce
