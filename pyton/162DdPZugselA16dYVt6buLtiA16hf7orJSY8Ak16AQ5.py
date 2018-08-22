
        
            @property
    def config(self):
        if not hasattr(self, '_config'):
            self._config = Config(directory=self.config_dir)
            if self._config.is_new():
                self._config.save()
            else:
                self._config.load()
        return self._config
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
        # The URL prefix the adapter should be mount to.
    prefix = None
    
        '''
    abbrevs = [
        (1 << 50, 'PB'),
        (1 << 40, 'TB'),
        (1 << 30, 'GB'),
        (1 << 20, 'MB'),
        (1 << 10, 'kB'),
        (1, 'B')
    ]
    
        # 128+2 SIGINT <http://www.tldp.org/LDP/abs/html/exitcodes.html>
    ERROR_CTRL_C = 130
    
    
def test_POST_JSON_data(httpbin_both):
    r = http('POST', httpbin_both + '/post', 'foo=bar')
    assert HTTP_OK in r
    assert r.json['json']['foo'] == 'bar'
    
            parser.add_option_group(group)
    
            self.factory.noPage(\
                defer.TimeoutError('Getting %s took longer than %s seconds.' % \
                (self.factory.url, self.factory.timeout)))
    
            # scrapy already handles #! links properly
        ajax_crawl_request = request.replace(url=request.url+'#!')
        logger.debug('Downloading AJAX crawlable %(ajax_crawl_request)s instead of %(request)s',
                     {'ajax_crawl_request': ajax_crawl_request, 'request': request},
                     extra={'spider': spider})
    
    from scrapy import signals
    
        @classmethod
    def from_crawler(cls, crawler):
        o = cls(crawler.settings['USER_AGENT'])
        crawler.signals.connect(o.spider_opened, signal=signals.spider_opened)
        return o
    
    '''
Logging package for Python. Based on PEP 282 and comments thereto in
comp.lang.python.
    
        def test_invalid_cb_for_4bytes_seq(self):
        '''
        Test that an 'invalid continuation byte' error is raised when the
        continuation byte(s) of a 4-bytes sequence are invalid.  When
        errors='replace',the start byte and all the following valid
        continuation bytes are replaced with a single U+FFFD, and all the bytes
        starting from the first invalid continuation bytes (included) are
        handled separately.
        E.g. in the sequence <E1 80 41>, E1 is the start byte of a 3-bytes
        sequence, 80 is a valid continuation byte, but 41 is not a valid cb
        because it's the ASCII letter 'A'.
        Note: when the start byte is E0 or ED, the valid ranges for the first
        continuation byte are limited to A0..BF and 80..9F respectively.
        However, when the start byte is ED, Python 2 considers all the bytes
        in range 80..BF valid.  This is fixed in Python 3.
        '''
        FFFD = '\ufffd'
        FFFDx2 = FFFD * 2
        sequences = [
            ('F0 00', FFFD+'\x00'), ('F0 7F', FFFD+'\x7f'), ('F0 80', FFFDx2),
            ('F0 8F', FFFDx2), ('F0 C0', FFFDx2), ('F0 FF', FFFDx2),
            ('F0 90 00', FFFD+'\x00'), ('F0 90 7F', FFFD+'\x7f'),
            ('F0 90 C0', FFFDx2), ('F0 90 FF', FFFDx2),
            ('F0 BF 00', FFFD+'\x00'), ('F0 BF 7F', FFFD+'\x7f'),
            ('F0 BF C0', FFFDx2), ('F0 BF FF', FFFDx2),
            ('F0 90 80 00', FFFD+'\x00'), ('F0 90 80 7F', FFFD+'\x7f'),
            ('F0 90 80 C0', FFFDx2), ('F0 90 80 FF', FFFDx2),
            ('F0 90 BF 00', FFFD+'\x00'), ('F0 90 BF 7F', FFFD+'\x7f'),
            ('F0 90 BF C0', FFFDx2), ('F0 90 BF FF', FFFDx2),
            ('F0 BF 80 00', FFFD+'\x00'), ('F0 BF 80 7F', FFFD+'\x7f'),
            ('F0 BF 80 C0', FFFDx2), ('F0 BF 80 FF', FFFDx2),
            ('F0 BF BF 00', FFFD+'\x00'), ('F0 BF BF 7F', FFFD+'\x7f'),
            ('F0 BF BF C0', FFFDx2), ('F0 BF BF FF', FFFDx2),
            ('F1 00', FFFD+'\x00'), ('F1 7F', FFFD+'\x7f'), ('F1 C0', FFFDx2),
            ('F1 FF', FFFDx2), ('F1 80 00', FFFD+'\x00'),
            ('F1 80 7F', FFFD+'\x7f'), ('F1 80 C0', FFFDx2),
            ('F1 80 FF', FFFDx2), ('F1 BF 00', FFFD+'\x00'),
            ('F1 BF 7F', FFFD+'\x7f'), ('F1 BF C0', FFFDx2),
            ('F1 BF FF', FFFDx2), ('F1 80 80 00', FFFD+'\x00'),
            ('F1 80 80 7F', FFFD+'\x7f'), ('F1 80 80 C0', FFFDx2),
            ('F1 80 80 FF', FFFDx2), ('F1 80 BF 00', FFFD+'\x00'),
            ('F1 80 BF 7F', FFFD+'\x7f'), ('F1 80 BF C0', FFFDx2),
            ('F1 80 BF FF', FFFDx2), ('F1 BF 80 00', FFFD+'\x00'),
            ('F1 BF 80 7F', FFFD+'\x7f'), ('F1 BF 80 C0', FFFDx2),
            ('F1 BF 80 FF', FFFDx2), ('F1 BF BF 00', FFFD+'\x00'),
            ('F1 BF BF 7F', FFFD+'\x7f'), ('F1 BF BF C0', FFFDx2),
            ('F1 BF BF FF', FFFDx2), ('F3 00', FFFD+'\x00'),
            ('F3 7F', FFFD+'\x7f'), ('F3 C0', FFFDx2), ('F3 FF', FFFDx2),
            ('F3 80 00', FFFD+'\x00'), ('F3 80 7F', FFFD+'\x7f'),
            ('F3 80 C0', FFFDx2), ('F3 80 FF', FFFDx2),
            ('F3 BF 00', FFFD+'\x00'), ('F3 BF 7F', FFFD+'\x7f'),
            ('F3 BF C0', FFFDx2), ('F3 BF FF', FFFDx2),
            ('F3 80 80 00', FFFD+'\x00'), ('F3 80 80 7F', FFFD+'\x7f'),
            ('F3 80 80 C0', FFFDx2), ('F3 80 80 FF', FFFDx2),
            ('F3 80 BF 00', FFFD+'\x00'), ('F3 80 BF 7F', FFFD+'\x7f'),
            ('F3 80 BF C0', FFFDx2), ('F3 80 BF FF', FFFDx2),
            ('F3 BF 80 00', FFFD+'\x00'), ('F3 BF 80 7F', FFFD+'\x7f'),
            ('F3 BF 80 C0', FFFDx2), ('F3 BF 80 FF', FFFDx2),
            ('F3 BF BF 00', FFFD+'\x00'), ('F3 BF BF 7F', FFFD+'\x7f'),
            ('F3 BF BF C0', FFFDx2), ('F3 BF BF FF', FFFDx2),
            ('F4 00', FFFD+'\x00'), ('F4 7F', FFFD+'\x7f'), ('F4 90', FFFDx2),
            ('F4 BF', FFFDx2), ('F4 C0', FFFDx2), ('F4 FF', FFFDx2),
            ('F4 80 00', FFFD+'\x00'), ('F4 80 7F', FFFD+'\x7f'),
            ('F4 80 C0', FFFDx2), ('F4 80 FF', FFFDx2),
            ('F4 8F 00', FFFD+'\x00'), ('F4 8F 7F', FFFD+'\x7f'),
            ('F4 8F C0', FFFDx2), ('F4 8F FF', FFFDx2),
            ('F4 80 80 00', FFFD+'\x00'), ('F4 80 80 7F', FFFD+'\x7f'),
            ('F4 80 80 C0', FFFDx2), ('F4 80 80 FF', FFFDx2),
            ('F4 80 BF 00', FFFD+'\x00'), ('F4 80 BF 7F', FFFD+'\x7f'),
            ('F4 80 BF C0', FFFDx2), ('F4 80 BF FF', FFFDx2),
            ('F4 8F 80 00', FFFD+'\x00'), ('F4 8F 80 7F', FFFD+'\x7f'),
            ('F4 8F 80 C0', FFFDx2), ('F4 8F 80 FF', FFFDx2),
            ('F4 8F BF 00', FFFD+'\x00'), ('F4 8F BF 7F', FFFD+'\x7f'),
            ('F4 8F BF C0', FFFDx2), ('F4 8F BF FF', FFFDx2)
        ]
        for seq, res in sequences:
            self.assertCorrectUTF8Decoding(bytes.fromhex(seq), res,
                                           'invalid continuation byte')
    
        def commit(self, db):
        from tempfile import mktemp
        filename = mktemp()
        FCICreate(filename, self.files)
        add_data(db, 'Media',
                [(1, self.index, None, '#'+self.name, None, None)])
        add_stream(db, self.name, filename)
        os.unlink(filename)
        db.Commit()
    
        def testPeekBytesIO(self):
        with BytesIO(self.DATA) as bio:
            with BZ2File(bio) as bz2f:
                pdata = bz2f.peek()
                self.assertNotEqual(len(pdata), 0)
                self.assertTrue(self.TEXT.startswith(pdata))
                self.assertEqual(bz2f.read(), self.TEXT)
    
        def test_field_order_for_named_tuples(self):
        Person = namedtuple('Person', ['nickname', 'firstname', 'agegroup'])
        s = pydoc.render_doc(Person)
        self.assertLess(s.index('nickname'), s.index('firstname'))
        self.assertLess(s.index('firstname'), s.index('agegroup'))
    
            # Test lookup leaks [SF bug 572567]
        if hasattr(gc, 'get_objects'):
            class G(object):
                def __eq__(self, other):
                    return False
            g = G()
            orig_objects = len(gc.get_objects())
            for i in range(10):
                g==g
            new_objects = len(gc.get_objects())
            self.assertEqual(orig_objects, new_objects)
    
    Note: iter(d.keys()) could be written as iter(d) but since the
original d.iterkeys() was also redundant we don't fix this.  And there
are (rare) contexts where it makes a difference (e.g. when passing it
as an argument to a function that introspects the argument).
'''
    
        def test_async_with(self):
        self.validate('''async def foo():
                             async for a in b: pass''')
    
        def test_case_sha512_2(self):
        self.check('sha512',
                   b'abcdefghbcdefghicdefghijdefghijkefghijklfghijklmghijklmn'+
                   b'hijklmnoijklmnopjklmnopqklmnopqrlmnopqrsmnopqrstnopqrstu',
          '8e959b75dae313da8cf4f72814fc143f8f7779c6eb9f7fa17299aeadb6889018'+
          '501d289e4900f7e4331b99dec4b5433ac7d329eeb6dd26545e96e55b874be909')