
        
                # Default to utf8 when unsure.
        self.output_encoding = output_encoding or 'utf8'
    
            '''
        r.headers['Authorization'] = type(self).make_header(
            self.username, self.password).encode('latin1')
        return r
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        pattern = (
        r'^bytes (?P<first_byte_pos>\d+)-(?P<last_byte_pos>\d+)'
        r'/(\*|(?P<instance_length>\d+))$'
    )
    match = re.match(pattern, content_range)
    
        def long_desc(self):
        return 'Fetch a URL using the Scrapy downloader and print its content ' \
            'to stdout. You may want to use --nolog to disable logging'
    
        from twisted.internet.ssl import (optionsForClientTLS,
                                      CertificateOptions,
                                      platformTrust)
    from twisted.web.client import BrowserLikePolicyForHTTPS
    from twisted.web.iweb import IPolicyForHTTPS
    
    
def run():
    io_loop = IOLoop(make_current=True)
    app = Application([('/', RootHandler)])
    port = random.randrange(options.min_port, options.max_port)
    app.listen(port, address='127.0.0.1')
    signal.signal(signal.SIGCHLD, handle_sigchld)
    args = ['ab']
    args.extend(['-n', str(options.n)])
    args.extend(['-c', str(options.c)])
    if options.keepalive:
        args.append('-k')
    if options.quiet:
        # just stops the progress messages printed to stderr
        args.append('-q')
    args.append('http://127.0.0.1:%d/' % port)
    subprocess.Popen(args)
    io_loop.start()
    io_loop.close()
    io_loop.clear_current()
    
    # sys.path handling
# -----------------
#
# If a module is run with 'python -m', the current directory (i.e. '')
# is automatically prepended to sys.path, but not if it is run as
# 'path/to/file.py'.  The processing for '-m' rewrites the former to
# the latter, so subsequent executions won't have the same path as the
# original.
#
# Conversely, when run as path/to/file.py, the directory containing
# file.py gets added to the path, which can cause confusion as imports
# may become relative in spite of the future import.
#
# We address the former problem by reconstructing the original command
# line (Python >= 3.4) or by setting the $PYTHONPATH environment
# variable (Python < 3.4) before re-execution so the new process will
# see the correct path.  We attempt to address the latter problem when
# tornado.autoreload is run as __main__.
    
        def _set_timeout(self, msecs: int) -> None:
        '''Called by libcurl to schedule a timeout.'''
        if self._timeout is not None:
            self.io_loop.remove_timeout(self._timeout)
        self._timeout = self.io_loop.add_timeout(
            self.io_loop.time() + msecs / 1000.0, self._handle_timeout
        )
    
        def _parse_datetime(self, value: str) -> datetime.datetime:
        for format in self._DATETIME_FORMATS:
            try:
                return datetime.datetime.strptime(value, format)
            except ValueError:
                pass
        raise Error('Unrecognized date/time format: %r' % value)
    
            asyncio.set_event_loop_policy(AnyThreadEventLoopPolicy())
    
        .. versionchanged:: 5.0
       The ``io_loop`` argument (deprecated since version 4.1) has been removed.
    '''
    
        description='A complete wechat personal account api',
    long_description=long_description,
    
        def remove_release(self, version):
        print('Removing release draft for {}'.format(version))
        releases = self.gh_repo.get_releases()
        for release in releases:
            if release.tag_name == version and release.title == version:
                if not release.draft:
                    print(
                        'The release at {} is no longer a draft. If you TRULY intend '
                        'to remove it, please do so manually.'.format(release.url)
                    )
                    continue
                release.delete_release()
    
    
    class TextChunk(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.keyword = (self._io.read_bytes_term(0, False, True, True)).decode(u'iso8859-1')
            self.text = (self._io.read_bytes_full()).decode(u'iso8859-1')
    
        def take(self):
        '''
        Scripts or other parties make 'take' a reply out of a normal flow.
        For example, intercepted flows are taken out so that the connection thread does not proceed.
        '''
        if self.state != 'start':
            raise exceptions.ControlException(
                'Reply is {}, but expected it to be start.'.format(self.state)
            )
        self._state = 'taken'
    
        def configure(self, updated):
        if 'web_static_viewer' in updated and ctx.options.web_static_viewer:
            flows = io.read_flows_from_paths([ctx.options.rfile])
            p = pathlib.Path(ctx.options.web_static_viewer).expanduser()
            self.export(p, flows)