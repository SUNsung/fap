
        
        if os.environ.get('CONVERT_README'):
    import pypandoc
    
    
@pytest.fixture(autouse=True)
def functional(request):
    if request.node.get_marker('functional') \
            and not request.config.getoption('enable_functional'):
        pytest.skip('functional tests are disabled')
    
    
@pytest.fixture(autouse=True)
def shell(mocker):
    shell = mocker.patch('thefuck.entrypoints.not_configured.shell',
                         new_callable=MagicMock)
    shell.get_history.return_value = []
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=True)
    return shell
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_get_new_command(brew_no_available_formula):
    assert get_new_command(Command('brew install elsticsearch',
                                   brew_no_available_formula))\
        == 'brew install elasticsearch'
    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
        @staticmethod
    def verify_certificate(ca, cert):
        if hasattr(OpenSSL.crypto, 'X509StoreContext'):
            store = OpenSSL.crypto.X509Store()
            store.add_cert(ca)
            try:
                OpenSSL.crypto.X509StoreContext(store, cert).verify_certificate()
            except:
                return False
            else:
                return True
        else:
            # A fake verify, just check generated time.
            return ca.get_subject().OU == cert.get_issuer().OU
    
    
class CheckIp(front_base.check_ip.CheckIp):
    def check_response(self, response):
        server_type = response.headers.get('Server', '')
        self.logger.debug('status:%d', response.status)
        self.logger.debug('Server type:%s', server_type)
    
    
def get_line_value(r, n):
    rls = r.split('\r\n')
    if len(rls) < n + 1:
        return None
    
    from cert_util import CertUtil
import simple_http_server
import proxy_handler
import env_info
from front import front, direct_front
    
    ## Anything on different channel than DEFAULT_CHANNEL is not parsed
# by parser.
HIDDEN_CHANNEL = 99
    
            Using setter/getter methods is deprecated. Use o.text instead.
        '''
        raise NotImplementedError
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    __all__ = ['cbs_download']
    
    __all__ = ['douban_download']
    
    
class DebugInfoRequest( BaseRequest ):
  def __init__( self, extra_data = None ):
    super( DebugInfoRequest, self ).__init__()
    self._extra_data = extra_data
    self._response = None
    
    import logging
    
      return completion_data
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      return filters

    
        diags = self._line_to_diags[ line_num ]
    if not diags:
      if self._diag_message_needs_clearing:
        # Clear any previous diag echo
        vimsupport.PostVimMessage( '', warning = False )
        self._diag_message_needs_clearing = False
      return
    
      # On UNIX platforms, we use sys.executable as the Python interpreter path.
  # We cannot use sys.executable on Windows because for unknown reasons, it
  # returns the Vim executable. Instead, we use sys.exec_prefix to deduce the
  # interpreter path.
  python_interpreter = ( WIN_PYTHON_PATH if utils.OnWindows() else
                         sys.executable )
  if _EndsWithPython( python_interpreter ):
    return python_interpreter
    
      # Ignore 'syntax region' lines (see ':h syn-region'). They always start
  # with matchgroup= or start= in the syntax list.
  if SYNTAX_REGION_ARGUMENT_REGEX.match( words[ 0 ] ):
    return []
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseDone( [] ) ) as mock_future:
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( True, response ) )
    
    
def EndsWithPython_Python2Paths_test():
  python_paths = [
    'python',
    'python2',
    '/usr/bin/python2.7',
    '/home/user/.pyenv/shims/python2.7',
    r'C:\Python27\python.exe',
    '/Contents/MacOS/Python'
  ]
    
    
def KeywordsFromSyntaxListOutput_Function_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             zoo goo
             links to Function''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )