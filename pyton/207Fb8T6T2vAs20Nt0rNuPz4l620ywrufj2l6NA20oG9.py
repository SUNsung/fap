
        
        from enum import Enum
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
        def __init__(self, size):
        self.size = size
        self.table = [[] for _ in range(self.size)]
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
                if isinstance(e.reason, ResponseError):
                raise RetryError(e, request=request)
    
    
def _implementation():
    '''Return a dict with the Python implementation and version.
    
        def test_server_finishes_on_error(self):
        '''the server thread exits even if an exception exits the context manager'''
        server = Server.basic_response_server()
        with pytest.raises(Exception):
            with server:
                raise Exception()
    
        @pytest.mark.parametrize(
        'url', (
            'http://192.168.0.1:5000/',
            'http://192.168.0.1/',
            'http://172.16.1.1/',
            'http://172.16.1.1:5000/',
            'http://localhost.localdomain:5000/v1.0/',
        ))
    def test_bypass(self, url):
        assert get_environ_proxies(url, no_proxy=None) == {}
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
            return resp
    
        :param header: tuple, in the format (name, value).
    '''
    name, value = header
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def SyntaxKeywordsForCurrentBuffer():
  syntax_output = vimsupport.CaptureVimCommand( 'syntax list' )
  return _KeywordsFromSyntaxListOutput( syntax_output )
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running at: http://127.0.0.1:1234\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )
    
    from ycm.tests.test_utils import MockVimModule
MockVimModule()
    
        try:
      result = self.fn( *self.args, **self.kwargs )
    except BaseException:
      e = sys.exc_info()[ 1 ]
      self.future.set_exception( e )
    else:
      self.future.set_result( result )
    
            for future in as_completed(future_to_url):
            try:
                url_to_content[future_to_url[future]] = future.result()
            except:
                pass
        return url_to_content
    finally:
        executor.shutdown()
    
    if __name__ == '__main__':
    test_main()

    
      def test_config_to_json_string(self):
    config = modeling.BertConfig(vocab_size=99, hidden_size=37)
    obj = json.loads(config.to_json_string())
    self.assertEqual(obj['vocab_size'], 99)
    self.assertEqual(obj['hidden_size'], 37)
    
    
class WordpieceTokenizer(object):
  '''Runs WordPiece tokenziation.'''
    
    TABLE_TAG = 'SVG '