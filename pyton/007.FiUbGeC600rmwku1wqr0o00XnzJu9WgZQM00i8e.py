
        
        
class Header(jose.Header):
    '''ACME-specific JOSE Header. Implements nonce, kid, and url.
    '''
    nonce = jose.Field('nonce', omitempty=True, encoder=jose.encode_b64jose)
    kid = jose.Field('kid', omitempty=True)
    url = jose.Field('url', omitempty=True)
    
    # A dictionary with options for the search language support, empty by default.
# Now only 'ja' uses this config value
#html_search_options = {'type': 'default'}
    
            if record_contents:
            # We need to remove old records in the same request
            data['deletions'] = [
                {
                    'kind': 'dns#resourceRecordSet',
                    'type': 'TXT',
                    'name': record_name + '.',
                    'rrdatas': record_contents,
                    'ttl': record_ttl,
                },
            ]
    
    
@pytest.fixture()
def context(request):
    # Fixture request is a built-in pytest fixture describing current test request.
    integration_test_context = nginx_context.IntegrationTestsContext(request)
    try:
        yield integration_test_context
    finally:
        integration_test_context.cleanup()
    
    
def certbot_test(certbot_args, directory_url, http_01_port, tls_alpn_01_port,
                 config_dir, workspace, force_renew=True):
    '''
    Invoke the certbot executable available in PATH in a test context for the given args.
    The test context consists in running certbot in debug mode, with various flags suitable
    for tests (eg. no ssl check, customizable ACME challenge ports and config directory ...).
    This command captures stdout and returns it to the caller.
    :param list certbot_args: the arguments to pass to the certbot executable
    :param str directory_url: URL of the ACME directory server to use
    :param int http_01_port: port for the HTTP-01 challenges
    :param int tls_alpn_01_port: port for the TLS-ALPN-01 challenges
    :param str config_dir: certbot configuration directory to use
    :param str workspace: certbot current directory to use
    :param bool force_renew: set False to not force renew existing certificates (default: True)
    :return: stdout as string
    :rtype: str
    '''
    command, env = _prepare_args_env(certbot_args, directory_url, http_01_port, tls_alpn_01_port,
                                     config_dir, workspace, force_renew)
    
            path = os.path.join(HERE, 'data', 'does_not_exist.' + fn_ext)
        msg1 = r'File (b')?.+does_not_exist\.{}'? does not exist'.format(fn_ext)
        msg2 = (
            r'\[Errno 2\] No such file or directory: '.+does_not_exist' r'\.{}''
        ).format(fn_ext)
        msg3 = 'Expected object or value'
        msg4 = 'path_or_buf needs to be a string file path or file-like'
        msg5 = (
            r'\[Errno 2\] File .+does_not_exist\.{} does not exist:'
            r' '.+does_not_exist\.{}''
        ).format(fn_ext, fn_ext)
        with pytest.raises(
            error_class, match=r'({}|{}|{}|{}|{})'.format(msg1, msg2, msg3, msg4, msg5)
        ):
            reader(path)
    
    
@pytest.mark.parametrize(
    'access_method',
    [lambda s, x: s[:, x], lambda s, x: s.loc[:, x], lambda s, x: s.xs(x, level=1)],
)
@pytest.mark.parametrize(
    'level1_value, expected',
    [(0, Series([1], index=[0])), (1, Series([2, 3], index=[1, 2]))],
)
def test_series_getitem_multiindex(access_method, level1_value, expected):
    
    DataFrame\\.index values are different \\(100\\.0 %\\)
\\[left\\]:  Index\\(\\['a', 'b'\\], dtype='object'\\)
\\[right\\]: RangeIndex\\(start=0, stop=2, step=1\\)'''
        with pytest.raises(AssertionError, match=error_msg):
            assert_frame_equal(result, expected, check_index_type=False)
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def _FormatYcmdDebugInfo( ycmd ):
  python = ycmd[ 'python' ]
  clang = ycmd[ 'clang' ]
  message = ( 'Server Python interpreter: {0}\n'
              'Server Python version: {1}\n'
              'Server has Clang support compiled in: {2}\n'
              'Clang version: {3}\n'.format( python[ 'executable' ],
                                             python[ 'version' ],
                                             clang[ 'has_support' ],
                                             clang[ 'version' ] ) )
  extra_conf = ycmd[ 'extra_conf' ]
  extra_conf_path = extra_conf[ 'path' ]
  if not extra_conf_path:
    message += 'No extra configuration file found\n'
  elif not extra_conf[ 'is_loaded' ]:
    message += ( 'Extra configuration file found but not loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  else:
    message += ( 'Extra configuration file found and loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  return message
    
    
def _assert_accepts( filter, text ):
  _assert_accept_equals( filter, text, True )
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseDone( [] ) ) as mock_future:
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( True, response ) )
    
            Args:
            timeout: The number of seconds to wait for the result if the future
                isn't done. If None, then there is no limit on the wait time.