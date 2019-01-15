
        
        
seller_category_map = {}
seller_category_map['Exxon'] = DefaultCategories.GAS
seller_category_map['Target'] = DefaultCategories.SHOPPING
    
    
if __name__ == '__main__':
    HitCounts.run()

    
    from mrjob.job import MRJob
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
        By default, it represents the actual environment.
    All of the attributes can be overwritten though, which
    is used by the test suite to simulate various scenarios.
    
        def iter_lines(self, chunk_size):
        return ((line, b'\n') for line in self._orig.iter_lines(chunk_size))
    
    
def write_stream(stream, outfile, flush):
    '''Write the output stream.'''
    try:
        # Writing bytes so we use the buffer interface (Python 3).
        buf = outfile.buffer
    except AttributeError:
        buf = outfile
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
def test_default_headers_case_insensitive(httpbin):
    '''
    <https://github.com/jakubroztocil/httpie/issues/644>
    '''
    r = http(
        '--debug',
        '--print=H',
        httpbin.url + '/post',
        'CONTENT-TYPE:application/json-patch+json',
        'a=b',
    )
    assert 'CONTENT-TYPE: application/json-patch+json' in r
    assert 'Content-Type' not in r
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
def test_unicode_headers_verbose(httpbin):
    # httpbin doesn't interpret utf8 headers
    r = http('--verbose', httpbin.url + '/headers', u'Test:%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
        def test_upload_multiple_fields_with_the_same_name(self, httpbin):
        r = http('--form', '--verbose', 'POST', httpbin.url + '/post',
                 'test-file@%s' % FILE_PATH_ARG,
                 'test-file@%s' % FILE_PATH_ARG)
        assert HTTP_OK in r
        assert r.count('Content-Disposition: form-data; name='test-file';'
                       ' filename='%s'' % os.path.basename(FILE_PATH)) == 2
        # Should be 4, but is 3 because httpbin
        # doesn't seem to support filed field lists
        assert r.count(FILE_CONTENT) in [3, 4]
        assert r.count('Content-Type: text/plain') == 2
    
        def process_response(self, request, response):
        # No need to check for a redirect for non-404 responses.
        if response.status_code != 404:
            return response
    
        def create(self):
        '''
        To create a new key, set the modified flag so that the cookie is set
        on the client for the current request.
        '''
        self.modified = True
    
        return TemplateResponse(request, template_name, {'sitemaps': sites},
                            content_type=content_type)
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        module.run_command_environ_update = dict(LANG='C', LC_ALL='C', LC_MESSAGES='C', LC_CTYPE='C')
    Icinga2FeatureHelper(module).manage()
    
        if state == 'reloaded':
        if module.check_mode:
            module.exit_json(changed=True)
        rc, out, err = module.run_command('%s reload' % MONIT)
        if rc != 0:
            module.fail_json(msg='monit reload failed', stdout=out, stderr=err)
        wait_for_monit_to_stop_pending()
        module.exit_json(changed=True, name=name, state=state)
    
        def glob(self, pattern):
        '''Iterate over this subtree and yield all existing files (of any
        kind, including directories) matching the given pattern.
        '''
        if not pattern:
            raise ValueError('Unacceptable pattern: {!r}'.format(pattern))
        pattern = self._flavour.casefold(pattern)
        drv, root, pattern_parts = self._flavour.parse_parts((pattern,))
        if drv or root:
            raise NotImplementedError('Non-relative patterns are unsupported')
        selector = _make_selector(tuple(pattern_parts))
        for p in selector.select_from(self):
            yield p
    
        def check_warnings_filters(self, cmdline_option, envvar, use_pywarning=False):
        if use_pywarning:
            code = ('import sys; from test.support import import_fresh_module; '
                    'warnings = import_fresh_module('warnings', blocked=['_warnings']); ')
        else:
            code = 'import sys, warnings; '
        code += ('print(' '.join('%s::%s' % (f[0], f[2].__name__) '
                                'for f in warnings.filters))')
        args = (sys.executable, '-W', cmdline_option, '-bb', '-c', code)
        env = dict(os.environ)
        env.pop('PYTHONDEVMODE', None)
        env['PYTHONWARNINGS'] = envvar
        proc = subprocess.run(args,
                              stdout=subprocess.PIPE,
                              stderr=subprocess.STDOUT,
                              universal_newlines=True,
                              env=env)
        self.assertEqual(proc.returncode, 0, proc)
        return proc.stdout.rstrip()
    
    # Import the email modules we'll need
from email import policy
from email.parser import BytesParser
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        def prepare(self, **kwargs):
        self.api_data = json.loads(get_content(self.__class__.ep.format(self.vid)))
        self.title = self.api_data['title']
        for s in self.api_data['video']:
            for st in self.__class__.stream_types:
                if st['map_to'] == s:
                    urls = self.api_data['video'][s]
                    src = [u['url'] for u in urls]
                    stream_data = dict(src=src, size=0, container='mp4', video_profile=st['video_profile'])
                    self.streams[st['id']] = stream_data
    
    def facebook_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    
    __all__ = ['flickr_download_main']
    
                post_url = r1(r''(https://plus.google.com/[^/]+/posts/[^']*)'', html)
            post_author = r1(r'/\+([^/]+)/posts', post_url)
            if post_author:
                post_url = 'https://plus.google.com/+%s/posts/%s' % (parse.quote(post_author), r1(r'posts/(.+)', post_url))
            post_html = get_html(post_url, faker=True)
            title = r1(r'<title[^>]*>([^<\n]+)', post_html)