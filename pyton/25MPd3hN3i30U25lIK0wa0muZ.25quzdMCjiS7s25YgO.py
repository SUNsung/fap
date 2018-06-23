
        
        anchor = '###'
min_entries_per_section = 3
auth_keys = ['apiKey', 'OAuth', 'X-Mashape-Key', 'No']
punctuation = ['.', '?', '!']
https_keys = ['Yes', 'No']
cors_keys = ['Yes', 'No', 'Unknown']
    
            self.assertTrue(self.addr_default.conflicts(self.addr))
        self.assertTrue(self.addr_default.conflicts(self.addr1))
        self.assertTrue(self.addr_default.conflicts(self.addr_defined))
    
    # Add any paths that contain custom themes here, relative to this directory.
#html_theme_path = []
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_redirect_missing_location(self, mock_get_request):
        mock_get_request.return_value = create_response(301)
        self.assertFalse(self.validator.redirect('test.com'))
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'certbot-compatibility-test',
     u'certbot-compatibility-test Documentation',
     [author], 1)
]
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = '0'
# The full version, including alpha/beta/rc tags.
release = '0'