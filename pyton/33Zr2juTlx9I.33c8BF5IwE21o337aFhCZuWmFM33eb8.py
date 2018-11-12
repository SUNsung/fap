
        
        
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        def test_default_encoder_naive_fails(self):
        from acme.fields import RFC3339Field
        self.assertRaises(
            ValueError, RFC3339Field.default_encoder, datetime.datetime.now())
    
    HSTS_ARGS = ['always', 'set', 'Strict-Transport-Security',
             '\'max-age=31536000\'']
'''Apache header arguments for HSTS'''
    
        def test_view_config_changes(self):
        self.config.view_config_changes()
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)