
        
            def _test_with_all_supported(self):
        if self.client.installer is None:
            self.client.installer = mock.MagicMock()
        self.client.installer.supported_enhancements.return_value = [
            'ensure-http-header', 'redirect', 'staple-ocsp']
        self.client.enhance_config([self.domain], None)
        self.assertEqual(self.client.installer.save.call_count, 1)
        self.assertEqual(self.client.installer.restart.call_count, 1)
    
        def test_conflicts(self):
        # Note: Defined IP is more important than defined port in match
        self.assertTrue(self.addr.conflicts(self.addr1))
        self.assertTrue(self.addr.conflicts(self.addr2))
        self.assertTrue(self.addr.conflicts(self.addr_defined))
        self.assertFalse(self.addr.conflicts(self.addr_default))
    
        def get_testable_domain_names(self):
        '''Returns the set of domain names that can be tested against'''
        if self._test_names:
            return self._test_names
        else:
            return {'example.com'}
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_success(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        mock_probe_sni.return_value = cert
        self.assertTrue(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
    # A shorter title for the navigation bar.  Default is the same as html_title.
#html_short_title = None
    
        '''
    data = sorted(data)
    n = len(data)
    if n == 0:
        raise StatisticsError('no median for empty data')
    if n%2 == 1:
        return data[n//2]
    else:
        return data[n//2 - 1]
    
        if C is not None:
        assert(sx == sy)

    
    Usage:
while True:
    try:
        chunk = Chunk(file)
    except EOFError:
        break
    chunktype = chunk.getname()
    while True:
        data = chunk.read(nbytes)
        if not data:
            pass
        # do something with data
    
    def evalString(s):
    assert s.startswith(''') or s.startswith('''), repr(s[:1])
    q = s[0]
    if s[:3] == q*3:
        q = q*3
    assert s.endswith(q), repr(s[-len(q):])
    assert len(s) >= 2*len(q)
    s = s[len(q):-len(q)]
    return re.sub(r'\\(\'|\'|\\|[abfnrtv]|x.{0,2}|[0-7]{1,3})', escape, s)
    
        def __len__(self):
        '''Return a count of messages in the mailbox.'''
        return len(list(self.iterkeys()))
    
    class AnnotationsFutureTestCase(unittest.TestCase):
    template = dedent(
        '''
        from __future__ import annotations
        def f() -> {ann}:
            ...
        def g(arg: {ann}) -> None:
            ...
        var: {ann}
        var2: {ann} = None
        '''
    )
    
        def test_open_mode(self):
        old_mask = os.umask(0)
        self.addCleanup(os.umask, old_mask)
        p = self.cls(BASE)
        with (p / 'new_file').open('wb'):
            pass
        st = os.stat(join('new_file'))
        self.assertEqual(stat.S_IMODE(st.st_mode), 0o666)
        os.umask(0o022)
        with (p / 'other_new_file').open('wb'):
            pass
        st = os.stat(join('other_new_file'))
        self.assertEqual(stat.S_IMODE(st.st_mode), 0o644)
    
            rd, wr = self.make_socketpair()
    
    import dataclasses
import typing
    
        def do_GET(self):
        self.send_error(403, 'Forbidden access')
    
    
if __name__ == '__main__':
    main()

    
        def on_message(self, message):
        logging.info('got message %r', message)
        parsed = tornado.escape.json_decode(message)
        chat = {
            'id': str(uuid.uuid4()),
            'body': parsed['body'],
        }
        chat['html'] = tornado.escape.to_basestring(
            self.render_string('message.html', message=chat))
    
    '''Usage: python file_receiver.py
    
    '''Usage: python file_uploader.py [--put] file1.txt file2.png ...
    
    Circular references are not leaks per se, because they will eventually
be GC'd. However, on CPython, they prevent the reference-counting fast
path from being used and instead rely on the slower full GC. This
increases memory footprint and CPU overhead, so we try to eliminate
circular references created by normal operation.
'''
    
        for host in args:
        print('Resolving %s' % host)
        for resolver in resolvers:
            addrinfo = yield resolver.resolve(host, 80, family)
            print('%s: %s' % (resolver.__class__.__name__,
                              pprint.pformat(addrinfo)))
        print()
    
        if not os.path.exists(EASY_INSTALL):
        filename = download_to_cache('http://python-distribute.org/distribute_setup.py')
        subprocess.check_call([sys.executable, filename])
    
    setup(
    name='tornado',
    version=version,
    packages=['tornado', 'tornado.test', 'tornado.platform'],
    package_data={
        # data files need to be listed both here (which determines what gets
        # installed) and in MANIFEST.in (which determines what gets included
        # in the sdist tarball)
        'tornado.test': [
            'README',
            'csv_translations/fr_FR.csv',
            'gettext_translations/fr_FR/LC_MESSAGES/tornado_test.mo',
            'gettext_translations/fr_FR/LC_MESSAGES/tornado_test.po',
            'options_test.cfg',
            'options_test_types.cfg',
            'options_test_types_str.cfg',
            'static/robots.txt',
            'static/sample.xml',
            'static/sample.xml.gz',
            'static/sample.xml.bz2',
            'static/dir/index.html',
            'static_foo.txt',
            'templates/utf8.html',
            'test.crt',
            'test.key',
        ],
    },
    author='Facebook',
    author_email='python-tornado@googlegroups.com',
    url='http://www.tornadoweb.org/',
    license='http://www.apache.org/licenses/LICENSE-2.0',
    description=('Tornado is a Python web framework and asynchronous networking library,'
                 ' originally developed at FriendFeed.'),
    classifiers=[
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: Implementation :: CPython',
        'Programming Language :: Python :: Implementation :: PyPy',
    ],
    **kwargs
)
