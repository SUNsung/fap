
        
            def test_timeout(self):
        self.assertTrue(self.timeout.timeout)
        self.assertFalse(self.invalid.timeout)
    
    
class Fixed(jose.Field):
    '''Fixed field.'''
    
    .. note::
   This configuration limits the scope of the TSIG key to just be able to
   add and remove TXT records for one specific host for the purpose of
   completing the ``dns-01`` challenge. If your version of BIND doesn't
   support the
   `update-policy <http://www.zytrax.com/books/dns/ch7/xfer.html#update-policy>`_
   directive then you can use the less-secure
   `allow-update <http://www.zytrax.com/books/dns/ch7/xfer.html#allow-update>`_
   directive instead.
    
        @mock.patch('dns.query.udp')
    def test_query_soa_wraps_errors(self, query_mock):
        query_mock.side_effect = Exception
    
        #Checking correctness of path
    if not os.path.isdir(loc):
        print('Invalid directory. Please try again!', file = sys.stderr)
        sys.exit(1)