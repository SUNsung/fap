
        
        
class HTTPieHTTPAdapter(HTTPAdapter):
    
        '''
    is_windows = is_windows
    config_dir = DEFAULT_CONFIG_DIR
    stdin = sys.stdin
    stdin_isatty = stdin.isatty()
    stdin_encoding = None
    stdout = sys.stdout
    stdout_isatty = stdout.isatty()
    stdout_encoding = None
    stderr = sys.stderr
    stderr_isatty = stderr.isatty()
    colors = 256
    if not is_windows:
        if curses:
            try:
                curses.setupterm()
                colors = curses.tigetnum('colors')
            except curses.error:
                pass
    else:
        # noinspection PyUnresolvedReferences
        import colorama.initialise
        stdout = colorama.initialise.wrap_stream(
            stdout, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        stderr = colorama.initialise.wrap_stream(
            stderr, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        del colorama
    
        def __iter__(self):
        return iter(self._plugins)
    
    UNICODE = FILE_CONTENT

    
        plugin_manager.register(Plugin)
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
        def load(self):
        try:
            with open(self.path, 'rt') as f:
                try:
                    data = json.load(f)
                except ValueError as e:
                    raise ValueError(
                        'Invalid %s JSON: %s [%s]' %
                        (type(self).__name__, str(e), self.path)
                    )
                self.update(data)
        except IOError as e:
            if e.errno != errno.ENOENT:
                raise
    
        def __init__(self):
        self.name = 'pg_trgm'
    
        def save(self, must_create=False):
        if self.session_key is None:
            return self.create()
        if must_create:
            func = self._cache.add
        elif self._cache.get(self.cache_key) is not None:
            func = self._cache.set
        else:
            raise UpdateError
        result = func(self.cache_key,
                      self._get_session(no_load=must_create),
                      self.get_expiry_age())
        if must_create and not result:
            raise CreateError
    
        @classmethod
    def get_model_class(cls):
        # Avoids a circular import and allows importing SessionStore when
        # django.contrib.sessions is not in INSTALLED_APPS.
        from django.contrib.sessions.models import Session
        return Session
    
    
class AbstractBaseSession(models.Model):
    session_key = models.CharField(_('session key'), max_length=40, primary_key=True)
    session_data = models.TextField(_('session data'))
    expire_date = models.DateTimeField(_('expire date'), db_index=True)
    
        def values(self):
        if self._pending_removals:
            self._commit_removals()
        with _IterationGuard(self):
            for wr in self.data.values():
                obj = wr()
                if obj is not None:
                    yield obj
    
            if keyword.lower() == 'connection':
            if value.lower() == 'close':
                self.close_connection = True
            elif value.lower() == 'keep-alive':
                self.close_connection = False
    
    
class BaseHTTPServerTestCase(BaseTestCase):
    class request_handler(NoLogRequestHandler, BaseHTTPRequestHandler):
        protocol_version = 'HTTP/1.1'
        default_request_version = 'HTTP/1.1'
    
            The pattern is deliberately not stored as a loader attribute so that
        packages can continue discovery themselves. top_level_dir is stored so
        load_tests does not need to pass this argument in to loader.discover().
    
    
SYMBOL_FILE              = support.findfile('symbol.py')
GEN_SYMBOL_FILE          = os.path.join(os.path.dirname(__file__),
                                        '..', '..', 'Tools', 'scripts',
                                        'generate_symbol_py.py')
GRAMMAR_FILE             = os.path.join(os.path.dirname(__file__),
                                        '..', '..', 'Include', 'graminit.h')
TEST_PY_FILE             = 'symbol_test.py'
    
    
# Does a path exist?
# This is false for dangling symbolic links on systems that support them.
def exists(path):
    '''Test whether a path exists.  Returns False for broken symbolic links'''
    try:
        os.stat(path)
    except (OSError, ValueError):
        return False
    return True
    
        # Fetch the records to be pickled.
    cursor.execute('SELECT * FROM memos')
    memos = [MemoRecord(key, task) for key, task in cursor]
    # Save the records using our custom DBPickler.
    file = io.BytesIO()
    DBPickler(file).dump(memos)
    
    document = '''\
<slideshow>
<title>Demo slideshow</title>
<slide><title>Slide title</title>
<point>This is a demo</point>
<point>Of a program for processing slides</point>
</slide>
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
        title = match1(html, r'<title>([^<]{1,9999})</title>')
    
    import os
import shutil
import io
import argparse