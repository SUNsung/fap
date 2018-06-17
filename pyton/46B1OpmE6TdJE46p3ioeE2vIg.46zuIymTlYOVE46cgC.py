
        
        with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
    entry_template = textwrap.dedent('''
    <entry>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed/youtube-dl-@VERSION@</id>
        <title>New version @VERSION@</title>
        <link href='http://rg3.github.io/youtube-dl' />
        <content type='xhtml'>
            <div xmlns='http://www.w3.org/1999/xhtml'>
                Downloads available at <a href='https://yt-dl.org/downloads/@VERSION@/'>https://yt-dl.org/downloads/@VERSION@/</a>
            </div>
        </content>
        <author>
            <name>The youtube-dl maintainers</name>
        </author>
        <updated>@TIMESTAMP@</updated>
    </entry>
    ''')
    
            self.assertTrue(
            isinstance(got, compat_str),
            'Expected a %s object, but got %s for field %s' % (
                compat_str.__name__, type(got).__name__, field))
        self.assertTrue(
            match_rex.match(got),
            'field %s (value: %r) should match %r' % (field, got, match_str))
    elif isinstance(expected, compat_str) and expected.startswith('startswith:'):
        start_str = expected[len('startswith:'):]
        self.assertTrue(
            isinstance(got, compat_str),
            'Expected a %s object, but got %s for field %s' % (
                compat_str.__name__, type(got).__name__, field))
        self.assertTrue(
            got.startswith(start_str),
            'field %s (value: %r) should start with %r' % (field, got, start_str))
    elif isinstance(expected, compat_str) and expected.startswith('contains:'):
        contains_str = expected[len('contains:'):]
        self.assertTrue(
            isinstance(got, compat_str),
            'Expected a %s object, but got %s for field %s' % (
                compat_str.__name__, type(got).__name__, field))
        self.assertTrue(
            contains_str in got,
            'field %s (value: %r) should contain %r' % (field, got, contains_str))
    elif isinstance(expected, type):
        self.assertTrue(
            isinstance(got, expected),
            'Expected type %r for field %s, but got value %r of type %r' % (expected, field, got, type(got)))
    elif isinstance(expected, dict) and isinstance(got, dict):
        expect_dict(self, got, expected)
    elif isinstance(expected, list) and isinstance(got, list):
        self.assertEqual(
            len(expected), len(got),
            'Expect a list of length %d, but got a list of length %d for field %s' % (
                len(expected), len(got), field))
        for index, (item_got, item_expected) in enumerate(zip(got, expected)):
            type_got = type(item_got)
            type_expected = type(item_expected)
            self.assertEqual(
                type_expected, type_got,
                'Type mismatch for list item at index %d for field %s, expected %r, got %r' % (
                    index, field, type_expected, type_got))
            expect_value(self, item_got, item_expected, field)
    else:
        if isinstance(expected, compat_str) and expected.startswith('md5:'):
            self.assertTrue(
                isinstance(got, compat_str),
                'Expected field %s to be a unicode object, but got value %r of type %r' % (field, got, type(got)))
            got = 'md5:' + md5(got)
        elif isinstance(expected, compat_str) and expected.startswith('mincount:'):
            self.assertTrue(
                isinstance(got, (list, dict)),
                'Expected field %s to be a list or a dict, but it is of type %s' % (
                    field, type(got).__name__))
            expected_num = int(expected.partition(':')[2])
            assertGreaterEqual(
                self, len(got), expected_num,
                'Expected %d items in field %s, but only got %d' % (expected_num, field, len(got)))
            return
        self.assertEqual(
            expected, got,
            'Invalid value for field %s, expected %r, got %r' % (field, expected, got))
    
        def tearDown(self):
        if os.path.exists(self.test_dir):
            shutil.rmtree(self.test_dir)
    
    
class TestSocks(unittest.TestCase):
    _SKIP_SOCKS_TEST = True
    
    from .nuevo import NuevoBaseIE
    
    from .onet import OnetBaseIE
    
            formats = []
        for secure in ('', 'Secure'):
            for ext in ('Ogg', 'Mp3'):
                format_id = '%s%s' % (secure, ext)
                format_url = metadata.get('%sUrl' % format_id)
                if format_url:
                    formats.append({
                        'url': format_url,
                        'format_id': format_id,
                        'vcodec': 'none',
                    })
        self._sort_formats(formats)
    
    
print('\n# ======================================================================')
print('#                               Factorial')
print('# ======================================================================\n')
    
    def get_colordb(file, filetype=None):
    colordb = None
    fp = open(file)
    try:
        line = fp.readline()
        if not line:
            return None
        # try to determine the type of RGB file it is
        if filetype is None:
            filetypes = FILETYPES
        else:
            filetypes = [filetype]
        for typere, class_ in filetypes:
            mo = typere.search(line)
            if mo:
                break
        else:
            # no matching type
            return None
        # we know the type and the class to grok the type, so suck it in
        colordb = class_(fp)
    finally:
        fp.close()
    # save a global copy
    global DEFAULT_DB
    DEFAULT_DB = colordb
    return colordb
    
        def test_oldargs1_0(self):
        msg = r'count\(\) takes exactly one argument \(0 given\)'
        self.assertRaisesRegex(TypeError, msg, [].count)
    
            documenter = ServerHTMLDoc()
        documentation = documenter.docserver(
                                self.server_name,
                                self.server_documentation,
                                methods
                            )
    
    
def _get_resource_reader(
        package: ModuleType) -> Optional[resources_abc.ResourceReader]:
    # Return the package's loader if it's a ResourceReader.  We can't use
    # a issubclass() check here because apparently abc.'s __subclasscheck__()
    # hook wants to create a weak reference to the object, but
    # zipimport.zipimporter does not support weak references, resulting in a
    # TypeError.  That seems terrible.
    spec = package.__spec__
    if hasattr(spec.loader, 'get_resource_reader'):
        return cast(resources_abc.ResourceReader,
                    spec.loader.get_resource_reader(spec.name))
    return None
    
        def site_maps(self):
        if not self.sitemaps:
            return None
        return self.sitemaps
    
        def run(self):
        '''Method representing the thread's activity.
    
        Each ``AsyncIOLoop`` creates a new ``asyncio.EventLoop``; this object
    can be accessed with the ``asyncio_loop`` attribute.
    
            {
            # Hostname to host or ip
            'example.com': '127.0.1.1',
    }
    
            # A 204 response never has a body, even if doesn't have a content-length
        # (which would otherwise mean read-until-close).  We simulate here a
        # server that sends no content length and does not close the connection.
        #
        # Tests of a 204 response with no Content-Length header are included
        # in SimpleHTTPClientTestMixin.
        stream = request.connection.detach()
        stream.write(b'HTTP/1.1 204 No content\r\n')
        if request.arguments.get('error', [False])[-1]:
            stream.write(b'Content-Length: 5\r\n')
        else:
            stream.write(b'Content-Length: 0\r\n')
        stream.write(b'\r\n')
        stream.close()
    
    
class custom_build_ext(build_ext):
    '''Allow C extension building to fail.
    
            The `mock.patch <unittest.mock.patch>` function (included in
        the standard library `unittest.mock` package since Python 3.3,
        or in the third-party ``mock`` package for older versions of
        Python) is incompatible with objects like ``options`` that
        override ``__getattr__`` and ``__setattr__``.  This function
        returns an object that can be used with `mock.patch.object
        <unittest.mock.patch.object>` to modify option values::