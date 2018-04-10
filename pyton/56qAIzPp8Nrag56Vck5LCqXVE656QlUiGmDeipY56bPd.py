
        
        versions_info['versions'][version] = new_version
versions_info['latest'] = version
    
    if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
        params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
        def _real_extract(self, url):
        playlist_id = self._match_id(url)
    
    from .nuevo import NuevoBaseIE
    
    # utilities we import from Werkzeug and Jinja2 that are unused
# in the module but are exported as public interface.
from werkzeug.exceptions import abort
from werkzeug.utils import redirect
from jinja2 import Markup, escape
    
    
# Certain versions of pypy have a bug where clearing the exception stack
# breaks the __exit__ function in a very peculiar way.  The second level of
# exception blocks is necessary because pypy seems to forget to check if an
# exception happened until the next bytecode instruction?
#
# Relevant PyPy bugfix commit:
# https://bitbucket.org/pypy/pypy/commits/77ecf91c635a287e88e60d8ddb0f4e9df4003301
# According to ronan on #pypy IRC, it is released in PyPy2 2.3 and later
# versions.
#
# Ubuntu 14.04 has PyPy 2.2.1, which does exhibit this bug.
BROKEN_PYPY_CTXMGR_EXIT = False
if hasattr(sys, 'pypy_version_info'):
    class _Mgr(object):
        def __enter__(self):
            return self
        def __exit__(self, *args):
            if hasattr(sys, 'exc_clear'):
                # Python 3 (PyPy3) doesn't have exc_clear
                sys.exc_clear()
    try:
        try:
            with _Mgr():
                raise AssertionError()
        except:
            raise
    except TypeError:
        BROKEN_PYPY_CTXMGR_EXIT = True
    except AssertionError:
        pass

    
        def default(self, o):
        '''Implement this method in a subclass such that it returns a
        serializable object for ``o``, or calls the base implementation (to
        raise a :exc:`TypeError`).
    
    
@pytest.mark.parametrize('value,path,result', (
    ('test', cwd, 'test'),
    ('test.py', cwd, 'test'),
    ('a/test', os.path.join(cwd, 'a'), 'test'),
    ('test/__init__.py', cwd, 'test'),
    ('test/__init__', cwd, 'test'),
    # nested package
    (
        os.path.join(test_path, 'cliapp', 'inner1', '__init__'),
        test_path, 'cliapp.inner1'
    ),
    (
        os.path.join(test_path, 'cliapp', 'inner1', 'inner2'),
        test_path, 'cliapp.inner1.inner2'
    ),
    # dotted name
    ('test.a.b', cwd, 'test.a.b'),
    (os.path.join(test_path, 'cliapp.app'), test_path, 'cliapp.app'),
    # not a Python file, will be caught during import
    (
        os.path.join(test_path, 'cliapp', 'message.txt'),
        test_path, 'cliapp.message.txt'
    ),
))
def test_prepare_import(request, value, path, result):
    '''Expect the correct path to be set and the correct import and app names
    to be returned.
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary (will be form-encoded), bytes, or file-like object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    import threading
import socket
import select
    
    from urllib3.fields import RequestField
from urllib3.filepost import encode_multipart_formdata
from urllib3.util import parse_url
from urllib3.exceptions import (
    DecodeError, ReadTimeoutError, ProtocolError, LocationParseError)
    
            :param name: a string containing name of cookie
        :param domain: (optional) string containing domain of cookie
        :param path: (optional) string containing path of cookie
        :raises KeyError: if cookie is not found
        :raises CookieConflictError: if there are multiple cookies
            that match name and optionally domain and path
        :return: cookie.value
        '''
        toReturn = None
        for cookie in iter(self):
            if cookie.name == name:
                if domain is None or cookie.domain == domain:
                    if path is None or cookie.path == path:
                        if toReturn is not None:  # if there are multiple cookies that meet passed in criteria
                            raise CookieConflictError('There are multiple cookies with name, %r' % (name))
                        toReturn = cookie.value  # we will eventually return this as long as no cookie conflict
    
    with open('README.rst', 'r', 'utf-8') as f:
    readme = f.read()
with open('HISTORY.rst', 'r', 'utf-8') as f:
    history = f.read()
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
            return self
    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if self.seekable:
            try:
                n = self.chunksize - self.size_read
                # maybe fix alignment
                if self.align and (self.chunksize & 1):
                    n = n + 1
                self.file.seek(n, 1)
                self.size_read = self.size_read + n
                return
            except OSError:
                pass
        while self.size_read < self.chunksize:
            n = min(8192, self.chunksize - self.size_read)
            dummy = self.read(n)
            if not dummy:
                raise EOFError

    
            if nextchar == ''':
            return parse_string(string, idx + 1, strict)
        elif nextchar == '{':
            return parse_object((string, idx + 1), strict,
                _scan_once, object_hook, object_pairs_hook, memo)
        elif nextchar == '[':
            return parse_array((string, idx + 1), _scan_once)
        elif nextchar == 'n' and string[idx:idx + 4] == 'null':
            return None, idx + 4
        elif nextchar == 't' and string[idx:idx + 4] == 'true':
            return True, idx + 4
        elif nextchar == 'f' and string[idx:idx + 5] == 'false':
            return False, idx + 5
    }
    
    def evalString(s):
    assert s.startswith(''') or s.startswith('''), repr(s[:1])
    q = s[0]
    if s[:3] == q*3:
        q = q*3
    assert s.endswith(q), repr(s[-len(q):])
    assert len(s) >= 2*len(q)
    s = s[len(q):-len(q)]
    return re.sub(r'\\(\'|\'|\\|[abfnrtv]|x.{0,2}|[0-7]{1,3})', escape, s)
    
    
def triplet_to_brightness(rgbtuple):
    # return the brightness (grey level) along the scale 0.0==black to
    # 1.0==white
    r = 0.299
    g = 0.587
    b = 0.114
    return r*rgbtuple[0] + g*rgbtuple[1] + b*rgbtuple[2]
    
        def user_has_beta_enabled(self, user):
        if not user:
            return False
        return user.pref_beta
    
    from pylons import request
from pylons import tmpl_context as c
from pylons import app_globals as g
    
    class EmbedController(RedditController):
    allow_stylesheets = True
    
        @validate(
        container_id=VGTMContainerId('id')
    )
    def GET_jail(self, container_id):
        return GoogleTagManagerJail(container_id=container_id).render()
    
        def GET_cachehealth(self):
        results = {}
        behaviors = {
            # Passed on to poll(2) in milliseconds
            'connect_timeout': 1000,
            # Passed on to setsockopt(2) in microseconds
            'receive_timeout': int(1e6),
            'send_timeout': int(1e6),
        }
        for server in cache._CACHE_SERVERS:
            try:
                if server.startswith('udp:'):
                    # libmemcached doesn't support UDP get/fetch operations
                    continue
                mc = pylibmc.Client([server], behaviors=behaviors)
                # it's ok that not all caches are mcrouter, we'll just ignore
                # the miss either way
                mc.get('__mcrouter__.version')
                results[server] = 'OK'
            except pylibmc.Error as e:
                g.log.warning('Health check for %s FAILED: %s', server, e)
                results[server] = 'FAILED %s' % e
        return json.dumps(results)
