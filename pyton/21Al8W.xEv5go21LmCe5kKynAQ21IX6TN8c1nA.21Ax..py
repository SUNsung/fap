
        
            def test_repr(self):
        self.assertEqual(repr(self.addr2), 'certbot_apache.obj.Addr(('127.0.0.1', '443'))')
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_hsts_include_subdomains(self, mock_get_request):
        mock_get_request.return_value = create_response(
            headers={'strict-transport-security':
                     'max-age=31536000;includeSubDomains'})
        self.assertTrue(self.validator.hsts('test.com'))
    
    # If true, show URL addresses after external links.
#latex_show_urls = False
    
    # General information about the project.
project = u'certbot-nginx'
copyright = u'2014-2015, Let\'s Encrypt Project'
author = u'Let\'s Encrypt Project'
    
        @mock.patch('certbot.display.enhancements.util')
    def test_redirect(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 1)
        self.assertTrue(self._call('redirect'))