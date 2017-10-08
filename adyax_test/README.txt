Adyaxtest module can be used to easily create automatically numbered footnote
references into an article or post (such as a reference to a URL). <strong>It
now supports CKEditor via WYSIWYG module</strong>.

The module creates a button in the CKEditor.
When you click on the dialog that pops up in which you write the link text and the anchor marker and after saving the node,
we will see the bottom of the page of the link to the text in the node itself (anchor).
Setup:
1. Turn on the button in the profile ckeditor.
/admin/config/content/wysiwyg/profile/full_html
2. Include support for footnotes in full html and place above all filters.
/admin/config/content/formats/full_html