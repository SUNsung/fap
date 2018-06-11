
        
        # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
        @classmethod
    def add_parser_arguments(cls, parser):
        '''Adds command line arguments needed by the plugin'''
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
    
# -- Options for HTML output ----------------------------------------------
    
        @mock.patch('certbot.display.enhancements.util')
    def test_secure(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 1)
        self.assertTrue(self._call())
    
        description = 'Example Installer plugin'
    
    
def html_page_context(app, pagename, templatename, context, doctree):
    if templatename != 'page.html':
        return