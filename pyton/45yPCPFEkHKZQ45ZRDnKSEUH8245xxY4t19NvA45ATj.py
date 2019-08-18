
        
                self.assertFalse(asyncio.iscoroutinefunction(mock.Mock()))
    
        def test_default_data(self):
        eq = self.assertEqual
        eq(self.db.guess_type('foo.html'), ('text/html', None))
        eq(self.db.guess_type('foo.tgz'), ('application/x-tar', 'gzip'))
        eq(self.db.guess_type('foo.tar.gz'), ('application/x-tar', 'gzip'))
        eq(self.db.guess_type('foo.tar.Z'), ('application/x-tar', 'compress'))
        eq(self.db.guess_type('foo.tar.bz2'), ('application/x-tar', 'bzip2'))
        eq(self.db.guess_type('foo.tar.xz'), ('application/x-tar', 'xz'))
    
            The count of unfinished tasks goes up whenever an item is added to the
        queue. The count goes down whenever a consumer thread calls task_done()
        to indicate the item was retrieved and all work on it is complete.
    
            self.assertEqual(results, list(range(N + 1)))
    
        def subtype_as_add(self, method, subtype, outcome):
        m, msg_headers, payload = self._make_subtype_test_message(subtype)
        cm = self._TestSetContentManager()
        add_method = 'add_attachment' if method=='mixed' else 'add_' + method
        if outcome == 'raises':
            self._check_disallowed_subtype_raises(m, method, subtype, add_method)
            return
        getattr(m, add_method)('test', content_manager=cm)
        self.assertEqual(m.get_content_maintype(), 'multipart')
        self.assertEqual(m.get_content_subtype(), method)
        if method == subtype or subtype == 'no_content':
            self.assertEqual(len(m.get_payload()), 1)
            for name, value in msg_headers:
                self.assertEqual(m[name], value)
            part = m.get_payload()[0]
        else:
            self.assertEqual(len(m.get_payload()), 2)
            self._check_make_multipart(m, msg_headers, payload)
            part = m.get_payload()[1]
        self.assertEqual(part.get_content_type(), 'text/plain')
        self.assertEqual(part.get_payload(), 'test')
        if method=='mixed':
            self.assertEqual(part['Content-Disposition'], 'attachment')
        elif method=='related':
            self.assertEqual(part['Content-Disposition'], 'inline')
        else:
            # Otherwise we don't guess.
            self.assertIsNone(part['Content-Disposition'])
    
            # asyncio issue #184: Ensure that _StreamProtocol constructor
        # retrieves the current loop if the loop parameter is not set
        stream = mock.Mock()
        protocol = _StreamProtocol(stream, _asyncio_internal=True)
        self.assertIs(protocol._loop, self.loop)
    
            exp9 = '''PeriodIndex: 3 entries, 2013Q1 to 2013Q3
Freq: Q-DEC'''
    
            def random_text(nobs=100):
            df = []
            for i in range(nobs):
                idx = np.random.randint(len(letters), size=2)
                idx.sort()
    
    jieba.enable_parallel(4)