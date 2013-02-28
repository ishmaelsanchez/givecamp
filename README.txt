The features below are listed on http://givecampstartersite.codeplex.com/

For each featues a short description of how it was implemented in Drupal

Charity/Non-Profits to enter proposal submissions
  * Implemented using a custom content type proposal and additional fields

Volunteer registration
  * Implemented via core Drupal, administrator approve signups

Volunteers can review and self-assign themselves to a project
  * Implemented using entity reference 

Automatically notify Charity/Non-Profit that they have been accepted
  * Proposal views and use VBO to approve

Automatically notify organizers when a Charity/Non-Profit or Volunteer 
  Implemented using rules

The ability to host more than one event with a single install
  * Implemented using a custom content type: event

The ability to post announcements about the event from the integrated blog
  * Implemented using article content type

Integrated Content Management functionality to allow page content to be easily updated
  * Drupal, nuff said

The ability to post announcements to the blog and maintain page content via MetaWebLog
  * Using WYSIWYG API module and TinyMCE 

The ability for Administrators to assign Volunteers to Charity/Non-Profit project and accept them to the event
  * Entity reference and proposal accepted field

The ability for Administrators to add/update sponsors information
  * Implemented using sponsor content type

Allow project teams to collaborate with each other on projects
  * Implemented using project content type and mytinytodo list field

Allow project team member to upload documents to their projects
  * File field on project nodes

The ability to display Tweets for configured twitter account on site
  * Implemented via the Twitter pull module

Administrative functions to configure dates and times for event, location
  * Event content type using a date fields and by default venue node

Easily select look and feel using pure CSS themes
  To be implemented: using live themer module

*** Possible additional features/changes ***
  Add FB connect
  Mailchimp to send email maybe
  Possibly replace Twitter pull (oauth and/or oauthconnector)
  Inline entity editing for reviewing proposals
  Carousel view for logos
