
        
        
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    history_not_changed(proc, TIMEOUT)
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
    
no_suggestions = '''\
usage: aws [options] <command> <subcommand> [<subcommand> ...] [parameters]
To see help text, you can run:
    
    
@pytest.mark.parametrize('script, output', [
    ('brew link sshfs', output),
    ('cat output', output),
    ('brew install sshfs', '')])
def test_not_match(script, output):
    command = Command(script, output)
    assert not match(command)
    
    
@pytest.mark.parametrize('command', [
    Command('cargo buid', no_such_subcommand_old),
    Command('cargo buils', no_such_subcommand)])
def test_match(command):
    assert match(command)
    
    
@pytest.fixture
def tar_error(tmpdir):
    def fixture(filename):
        path = os.path.join(str(tmpdir), filename)
    
            content += new_content
    
    # FileModeWarnings go off per the default.
warnings.simplefilter('default', FileModeWarning, append=True)

    
                if isinstance(e.reason, _ProxyError):
                raise ProxyError(e, request=request)
    
        builtin_str = str
    str = str
    bytes = bytes
    basestring = (str, bytes)
    numeric_types = (int, float)
    integer_types = (int,)

    
    
def extract_cookies_to_jar(jar, request, response):
    '''Extract the cookies from the response into a CookieJar.
    
    
class VersionedPackage(object):
    def __init__(self, version):
        self.__version__ = version
    
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
    
        urls = []
    
    
def testUnsignedInt():
    check(b'\x99\xcc\x00\xcc\x80\xcc\xff\xcd\x00\x00\xcd\x80\x00'
          b'\xcd\xff\xff\xce\x00\x00\x00\x00\xce\x80\x00\x00\x00'
          b'\xce\xff\xff\xff\xff',
          (0,
           128,
           255,
           0,
           32768,
           65535,
           0,
           2147483648,
           4294967295, ), )
    
        files = [x for x in root.xpath('//a/text()')
             if x.startswith('pandas-{}'.format(version))
             and not dest.joinpath(x).exists()]
    
    gtk and PyQt4 modules are not available for Python 3,
and this module does not work with PyGObject yet.
'''
__version__ = '1.5.27'
    
    
@pytest.fixture
def frame(seriesd):
    return DataFrame(seriesd)
    
    
@pytest.fixture()
def series():
    df = pd.DataFrame({'outer': ['a', 'a', 'a', 'b', 'b', 'b'],
                       'inner': [1, 2, 3, 1, 2, 3],
                       'A': np.arange(6),
                       'B': ['one', 'one', 'two', 'two', 'one', 'one']})
    s = df.set_index(['outer', 'inner', 'B'])['A']
    
    These tests are intended for third-party libraries to subclass to validate
that their extension arrays and dtypes satisfy the interface. Moving or
renaming the tests should not be done lightly.
    
    
class CompleterAvailableRequest( BaseRequest ):
  def __init__( self, filetypes ):
    super( CompleterAvailableRequest, self ).__init__()
    self.filetypes = filetypes
    self._response = None
    
      if current_group:
    group_name_to_group[ current_group.name ] = current_group
  return group_name_to_group
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def KeywordsFromSyntaxListOutput_StatementHierarchy_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
baa xxx foo bar
        links to Foo
Foo xxx zoo goo
        links to Bar
Bar xxx qux moo
        links to Statement''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo', 'qux', 'moo' ) )
    
      def shutdown( self, wait=True ):
    with self._shutdown_lock:
      self._shutdown = True
      self._work_queue.put( None )
    if wait:
      for t in self._threads:
        t.join()
  shutdown.__doc__ = _base.Executor.shutdown.__doc__

    
    def download_urls_with_executor(urls, executor, timeout=60):
    try:
        url_to_content = {}
        future_to_url = dict((executor.submit(load_url, url, timeout), url)
                             for url in urls)
    
    from concurrent.futures import ThreadPoolExecutor, ProcessPoolExecutor