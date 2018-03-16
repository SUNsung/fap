
        
            Code is a simple port of what is already in the /scripts directory
    
        def test_str(self):
        self.assertTrue('FOO' in str(self.error))
        self.assertTrue('{}' in str(self.error))
    
        def get_all_names_answer(self):
        '''Returns the set of domain names that the plugin should find'''
        if self._all_names:
            return self._all_names
        else:
            raise errors.Error('No configuration file loaded')
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    def test_smtp_success(self, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.connect.call_count, 1)
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
    
            if cmd.startswith('#'):
            log.write('%s' % cmd)
            continue
    
    The runtime provides these Token implementations:
    
        def __init__(self, expecting, input, inserted):
        MismatchedTokenException.__init__(self, expecting, input)
    
    
    def emit(self, token=None):
        '''
        The standard method called to automatically emit a token at the
        outermost lexical rule.  The token object should point into the
        char buffer start..stop.  If there is a text override in 'text',
        use that to set the token's text.  Override this method to emit
        custom Token objects.