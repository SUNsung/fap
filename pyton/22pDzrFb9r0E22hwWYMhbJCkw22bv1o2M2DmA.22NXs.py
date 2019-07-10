
        
            def deal_card(self):
        try:
            card = self.cards[self.deal_index]
            card.is_available = False
            self.deal_index += 1
        except IndexError:
            return None
        return card
    
    from mrjob.job import MRJob
    
            (foo, p1), 2
        (bar, p1), 3
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        yield key, sum(values)
    
        def get_person(self, person_id):
        person_server = self.lookup[person_id]
        return person_server.people[person_id]
    
    
class Node(object):
    
        def crawl(self):
        while True:
            page = self.data_store.extract_max_priority_page()
            if page is None:
                break
            if self.data_store.crawled_similar(page.signature):
                self.data_store.reduce_priority_link_to_crawl(page.url)
            else:
                self.crawl_page(page)
            page = self.data_store.extract_max_priority_page()

    
    r = openssl_encode('aes-128-cbc', key, iv)
print('aes_cbc_decrypt')
print(repr(r))
    
    versions_info['versions'][version] = new_version
versions_info['latest'] = version
    
    
if __name__ == '__main__':
    main()

    
    import io
import optparse
import os.path
import re
    
    # The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'
    
        def test_youporn(self):
        self._assert_restricted(
            'http://www.youporn.com/watch/505835/sex-ed-is-it-safe-to-masturbate-daily/',
            '505835.mp4', 2, old_age=25)
    
        def test_cache(self):
        ydl = FakeYDL({
            'cachedir': self.test_dir,
        })
        c = Cache(ydl)
        obj = {'x': 1, 'y': ['ä', '\\a', True]}
        self.assertEqual(c.load('test_cache', 'k.'), None)
        c.store('test_cache', 'k.', obj)
        self.assertEqual(c.load('test_cache', 'k2'), None)
        self.assertFalse(_is_empty(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), obj)
        self.assertEqual(c.load('test_cache', 'y'), None)
        self.assertEqual(c.load('test_cache2', 'k.'), None)
        c.remove()
        self.assertFalse(os.path.exists(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), None)
    
    
class TestJSInterpreter(unittest.TestCase):
    def test_basic(self):
        jsi = JSInterpreter('function x(){;}')
        self.assertEqual(jsi.call_function('x'), None)
    
    
class TestUnicodeLiterals(unittest.TestCase):
    def test_all_files(self):
        for dirpath, dirnames, filenames in os.walk(rootDir):
            for ignore_dir in IGNORED_DIRS:
                if ignore_dir in dirnames:
                    # If we remove the directory from dirnames os.walk won't
                    # recurse into it
                    dirnames.remove(ignore_dir)
            for basename in filenames:
                if not basename.endswith('.py'):
                    continue
                if basename in IGNORED_FILES:
                    continue
    
    
class UnrewindableBodyError(RequestException):
    '''Requests encountered an error when trying to rewind a body'''
    
        possible_keys = pytest.mark.parametrize('key', ('accept', 'ACCEPT', 'aCcEpT', 'Accept'))
    
                if isinstance(e.reason, _ProxyError):
                raise ProxyError(e, request=request)
    
        def items(self):
        '''Dict-like items() that returns a list of name-value tuples from the
        jar. Allows client-code to call ``dict(RequestsCookieJar)`` and get a
        vanilla python dict of key value pairs.
    
    try:
    from urllib3.contrib import pyopenssl
except ImportError:
    pyopenssl = None
    OpenSSL = None
    cryptography = None
else:
    import OpenSSL
    import cryptography
    
    This module provides the capabilities for the Requests hooks system.
    
        text_200 = (b'HTTP/1.1 200 OK\r\n'
                b'Content-Length: 0\r\n\r\n')
    
        # Client Error.
    400: ('bad_request', 'bad'),
    401: ('unauthorized',),
    402: ('payment_required', 'payment'),
    403: ('forbidden',),
    404: ('not_found', '-o-'),
    405: ('method_not_allowed', 'not_allowed'),
    406: ('not_acceptable',),
    407: ('proxy_authentication_required', 'proxy_auth', 'proxy_authentication'),
    408: ('request_timeout', 'timeout'),
    409: ('conflict',),
    410: ('gone',),
    411: ('length_required',),
    412: ('precondition_failed', 'precondition'),
    413: ('request_entity_too_large',),
    414: ('request_uri_too_large',),
    415: ('unsupported_media_type', 'unsupported_media', 'media_type'),
    416: ('requested_range_not_satisfiable', 'requested_range', 'range_not_satisfiable'),
    417: ('expectation_failed',),
    418: ('im_a_teapot', 'teapot', 'i_am_a_teapot'),
    421: ('misdirected_request',),
    422: ('unprocessable_entity', 'unprocessable'),
    423: ('locked',),
    424: ('failed_dependency', 'dependency'),
    425: ('unordered_collection', 'unordered'),
    426: ('upgrade_required', 'upgrade'),
    428: ('precondition_required', 'precondition'),
    429: ('too_many_requests', 'too_many'),
    431: ('header_fields_too_large', 'fields_too_large'),
    444: ('no_response', 'none'),
    449: ('retry_with', 'retry'),
    450: ('blocked_by_windows_parental_controls', 'parental_controls'),
    451: ('unavailable_for_legal_reasons', 'legal_reasons'),
    499: ('client_closed_request',),
    
            certfile = os.path.join(CertUtil.ca_certdir, commonname + '.crt')
        with open(certfile, 'wb') as fp:
            fp.write(OpenSSL.crypto.dump_certificate(OpenSSL.crypto.FILETYPE_PEM, cert))
            if CertUtil.cert_publickey is None:
                fp.write(OpenSSL.crypto.dump_privatekey(OpenSSL.crypto.FILETYPE_PEM, pkey))
        return certfile
    
                        mte = MismatchedTokenException(c, self.input)
                    self.recover(mte)
                    raise mte
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def FormatDebugInfoResponse_ExtraConfFoundAndLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': True,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found and loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    
def ContentsOfTestFile( test_file ):
  dir_of_script = os.path.dirname( os.path.abspath( __file__ ) )
  full_path_to_test_file = os.path.join( dir_of_script, 'testdata', test_file )
  return ReadFile( full_path_to_test_file )
    
    # Add any paths that contain custom themes here, relative to this directory.
#html_theme_path = []
    
        def test_cancelled(self):
        self.assertFalse(PENDING_FUTURE.cancelled())
        self.assertFalse(RUNNING_FUTURE.cancelled())
        self.assertTrue(CANCELLED_FUTURE.cancelled())
        self.assertTrue(CANCELLED_AND_NOTIFIED_FUTURE.cancelled())
        self.assertFalse(EXCEPTION_FUTURE.cancelled())
        self.assertFalse(SUCCESSFUL_FUTURE.cancelled())
    
    # choose a random port to avoid colliding with TIME_WAIT sockets left over
# from previous runs.
define('min_port', type=int, default=8000)
define('max_port', type=int, default=9000)
    
    
if __name__ == '__main__':
    main()

    
    
class AnyThreadEventLoopPolicy(asyncio.DefaultEventLoopPolicy):  # type: ignore
    '''Event loop policy that allows loop creation on any thread.
    
    For each function or class described in `tornado.platform.interface`,
the appropriate platform-specific implementation exists in this module.
Most code that needs access to this functionality should do e.g.::
    
    print('Starting')
sys.stdout.flush()
if 'TESTAPP_STARTED' not in os.environ:
    os.environ['TESTAPP_STARTED'] = '1'
    # Simulate an internal autoreload (one not caused
    # by the wrapper).
    tornado.autoreload._reload()
else:
    # Exit directly so autoreload doesn't catch it.
    os._exit(0)
'''
    
            class Delegate(HTTPMessageDelegate):
            def headers_received(self, start_line, headers):
                test.code = start_line.code