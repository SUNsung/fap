
        
            def __init__(self, app, **options):
        if 'loader' not in options:
            options['loader'] = app.create_global_jinja_loader()
        BaseEnvironment.__init__(self, **options)
        self.app = app
    
        from config_module_app import app
    assert app.instance_path == str(modules_tmpdir.join('instance'))
    
    
def test_has_level_handler():
    logger = logging.getLogger('flask.app')
    assert not has_level_handler(logger)
    
    import gc
import sys
import threading
    
    try:
    from greenlet import greenlet
except ImportError:
    greenlet = None
    
        @app.route('/')
    def index():
        return flask.render_template('non_escaping_template.txt', text=text,
                                     html=flask.Markup(text))
    
        finally:
        if downloader and not downloader.finished:
            downloader.failed()
    
        def get_adapter(self):
        '''
        Return a ``requests.adapters.BaseAdapter`` subclass instance to be
        mounted to ``self.prefix``.
    
        def test_self_signed_server_cert_by_default_raises_ssl_error(
            self,
            httpbin_secure_untrusted):
        with pytest.raises(SSLError):
            http(httpbin_secure_untrusted.url + '/get')
    
    # Separators that become request data
SEP_GROUP_DATA_ITEMS = frozenset([
    SEP_DATA,
    SEP_DATA_RAW_JSON,
    SEP_FILES,
    SEP_DATA_EMBED_FILE,
    SEP_DATA_EMBED_RAW_JSON_FILE
])
    
        def _get_path(self):
        return self._path
    
    
def head(url, **kwargs):
    r'''Sends a HEAD request.
    
    from .auth import HTTPBasicAuth
from .cookies import cookiejar_from_dict, get_cookie_header, _copy_cookie_jar
from .exceptions import (
    HTTPError, MissingSchema, InvalidURL, ChunkedEncodingError,
    ContentDecodingError, ConnectionError, StreamConsumedError)
from ._internal_utils import to_native_string, unicode_is_ascii
from .utils import (
    guess_filename, get_auth_from_url, requote_uri,
    stream_decode_response_unicode, to_key_val_list, parse_header_links,
    iter_slices, guess_json_utf, super_len, check_header_validity)
from .compat import (
    cookielib, urlunparse, urlsplit, urlencode, str, bytes,
    is_py2, chardet, builtin_str, basestring)
from .compat import json as complexjson
from .status_codes import codes
    
            # XXX should the partial digests be encoded too?
        base = 'username='%s', realm='%s', nonce='%s', uri='%s', ' \
               'response='%s'' % (self.username, realm, nonce, path, respdig)
        if opaque:
            base += ', opaque='%s'' % opaque
        if algorithm:
            base += ', algorithm='%s'' % algorithm
        if entdig:
            base += ', digest='%s'' % entdig
        if qop:
            base += ', qop='auth', nc=%s, cnonce='%s'' % (ncvalue, cnonce)
    
        if hasattr(jar, 'copy'):
        # We're dealing with an instance of RequestsCookieJar
        return jar.copy()
    # We're dealing with a generic CookieJar instance
    new_jar = copy.copy(jar)
    new_jar.clear()
    for cookie in jar:
        new_jar.set_cookie(copy.copy(cookie))
    return new_jar
    
        # not a test, but looks like a test
    'scrapy/utils/testsite.py',
    
            general form:
        @returns request(s)/item(s) [min=1 [max]]
    
            #out = subprocess.check_output(cmd, startupinfo=startupinfo)
        process = subprocess.Popen(cmd, stdout=subprocess.PIPE, startupinfo=startupinfo)
        out, unused_err = process.communicate()
        retcode = process.poll()
        if retcode:
            return out + '\n retcode:%s\n unused_err:%s\n' % (retcode, unused_err)
    except Exception as e:
        out = 'Exception:%r' % e
    
    # Can't import these from paths.py because that uses `future` imports
DIR_OF_CURRENT_SCRIPT = os.path.dirname( os.path.abspath( __file__ ) )
DIR_OF_YCMD = os.path.join( DIR_OF_CURRENT_SCRIPT, '..', '..', 'third_party',
                            'ycmd' )
    
        Returns:
        A named 2-tuple of sets. The first set, named 'done', contains the
        futures that completed (is finished or cancelled) before the wait
        completed. The second set, named 'not_done', contains uncompleted
        futures.
    '''
    with _AcquireFutures(fs):
        done = set(f for f in fs
                   if f._state in [CANCELLED_AND_NOTIFIED, FINISHED])
        not_done = set(fs) - done
    
    Process #1..n:
- reads _CallItems from 'Call Q', executes the calls, and puts the resulting
  _ResultItems in 'Request Q'
'''
    
    # Workers are created as daemon threads. This is done to allow the interpreter
# to exit when there are still idle threads in a ThreadPoolExecutor's thread
# pool (i.e. shutdown() was not called). However, allowing workers to die with
# the interpreter has two undesirable properties:
#   - The workers would still be running during interpretor shutdown,
#     meaning that they would fail in unpredictable ways.
#   - The workers could be killed while evaluating a work item, which could
#     be bad if the callable being evaluated has external side-effects e.g.
#     writing to a file.
#
# To work around this problem, an exit handler is installed which tells the
# workers to exit when their work queues are empty and then waits until the
# threads finish.
    
    
GENERIC_RESPONSE = {
  'clang': {
    'has_support': True,
    'version': 'Clang version'
  },
  'completer': {
    'items': [
      {
        'key': 'key',
        'value': 'value'
      }
    ],
    'name': 'Completer name',
    'servers': [
      {
        'address': '127.0.0.1',
        'executable': '/path/to/executable',
        'extras': [
          {
            'key': 'key',
            'value': 'value'
          }
        ],
        'is_running': True,
        'logfiles': [
          '/path/to/stdout/logfile',
          '/path/to/stderr/logfile'
        ],
        'name': 'Server name',
        'pid': 12345,
        'port': 1234
      }
    ]
  },
  'extra_conf': {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  },
  'python': {
    'executable': '/path/to/python/interpreter',
    'version': 'Python version'
  }
}
    
    
def KeywordsFromSyntaxListOutput_PythonSyntax_test():
  expected_keywords = (
    'bytearray', 'IndexError', 'all', 'help', 'vars', 'SyntaxError', 'global',
    'elif', 'unicode', 'sorted', 'memoryview', 'isinstance', 'except',
    'nonlocal', 'NameError', 'finally', 'BytesWarning', 'dict', 'IOError',
    'pass', 'oct', 'bin', 'SystemExit', 'return', 'StandardError', 'format',
    'TabError', 'break', 'next', 'not', 'UnicodeDecodeError', 'False',
    'RuntimeWarning', 'list', 'iter', 'try', 'reload', 'Warning', 'round',
    'dir', 'cmp', 'set', 'bytes', 'UnicodeTranslateError', 'intern',
    'issubclass', 'yield', 'Ellipsis', 'hash', 'locals', 'BufferError',
    'slice', 'for', 'FloatingPointError', 'sum', 'VMSError', 'getattr', 'abs',
    'print', 'import', 'True', 'FutureWarning', 'ImportWarning', 'None',
    'EOFError', 'len', 'frozenset', 'ord', 'super', 'raise', 'TypeError',
    'KeyboardInterrupt', 'UserWarning', 'filter', 'range', 'staticmethod',
    'SystemError', 'or', 'BaseException', 'pow', 'RuntimeError', 'float',
    'MemoryError', 'StopIteration', 'globals', 'divmod', 'enumerate', 'apply',
    'LookupError', 'open', 'basestring', 'from', 'UnicodeError', 'zip', 'hex',
    'long', 'IndentationError', 'int', 'chr', '__import__', 'type',
    'Exception', 'continue', 'tuple', 'reduce', 'reversed', 'else', 'assert',
    'UnicodeEncodeError', 'input', 'with', 'hasattr', 'delattr', 'setattr',
    'raw_input', 'PendingDeprecationWarning', 'compile', 'ArithmeticError',
    'while', 'del', 'str', 'property', 'def', 'and', 'GeneratorExit',
    'ImportError', 'xrange', 'is', 'EnvironmentError', 'KeyError', 'coerce',
    'SyntaxWarning', 'file', 'in', 'unichr', 'ascii', 'any', 'as', 'if',
    'OSError', 'DeprecationWarning', 'min', 'UnicodeWarning', 'execfile', 'id',
    'complex', 'bool', 'ValueError', 'NotImplemented', 'map', 'exec', 'buffer',
    'max', 'class', 'object', 'repr', 'callable', 'ZeroDivisionError', 'eval',
    '__debug__', 'ReferenceError', 'AssertionError', 'classmethod',
    'UnboundLocalError', 'NotImplementedError', 'lambda', 'AttributeError',
    'OverflowError', 'WindowsError' )
    
    
def OverlapLength_OneCharOverlap_test():
  eq_( 1, base.OverlapLength( 'foo b', 'b zoo' ) )
    
      raise RuntimeError( 'Cannot find Python 2.7 or 3.4+. '
                      'Set the 'g:ycm_server_python_interpreter' option '
                      'to a Python interpreter path.' )
    
    
def ParseArguments():
  parser = argparse.ArgumentParser()
  parser.add_argument( '--skip-build', action = 'store_true',
                       help = 'Do not build ycmd before testing' )
  parser.add_argument( '--coverage', action = 'store_true',
                       help = 'Enable coverage report' )
  parser.add_argument( '--no-flake8', action = 'store_true',
                       help = 'Do not run flake8' )