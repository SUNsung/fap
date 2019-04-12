
        
        from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  def Start( self ):
    request_data = BuildRequestData()
    if self._extra_data:
      request_data.update( self._extra_data )
    self._response = self.PostDataToHandler( request_data,
                                             'debug_info',
                                             display_message = False )
    
    
@YouCompleteMeInstance()
@patch( 'ycm.client.base_request._logger', autospec = True )
@patch( 'ycm.vimsupport.PostVimMessage', new_callable = ExtendedMock )
def SendCompletionRequest_ErrorFromServer_test( ycm,
                                                post_vim_message,
                                                logger ):
  current_buffer = VimBuffer( 'buffer' )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with MockCompletionRequest( ServerError( 'Server error' ) ):
      ycm.SendCompletionRequest()
      ok_( ycm.CompletionRequestReady() )
      response = ycm.GetCompletionResponse()
      logger.exception.assert_called_with( 'Error while handling server '
                                           'response' )
      post_vim_message.assert_has_exact_calls( [
        call( 'Server error', truncate = True )
      ] )
      assert_that(
        response,
        has_entries( {
          'completions': empty(),
          'completion_start_column': -1
        } )
      )

    
    
  def result( self ):
    return self._result
    
    
def KeywordsFromSyntaxListOutput_CppSyntax_test():
  expected_keywords = (
    'int_fast32_t', 'FILE', 'size_t', 'bitor', 'typedef', 'const', 'struct',
    'uint8_t', 'fpos_t', 'thread_local', 'unsigned', 'uint_least16_t', 'do',
    'intptr_t', 'uint_least64_t', 'return', 'auto', 'void', '_Complex',
    'break', '_Alignof', 'not', 'using', '_Static_assert', '_Thread_local',
    'public', 'uint_fast16_t', 'this', 'continue', 'char32_t', 'int16_t',
    'intmax_t', 'static', 'clock_t', 'sizeof', 'int_fast64_t', 'mbstate_t',
    'try', 'xor', 'uint_fast32_t', 'int_least8_t', 'div_t', 'volatile',
    'template', 'char16_t', 'new', 'ldiv_t', 'int_least16_t', 'va_list',
    'uint_least8_t', 'goto', 'noreturn', 'enum', 'static_assert', 'bitand',
    'compl', 'imaginary', 'jmp_buf', 'throw', 'asm', 'ptrdiff_t', 'uint16_t',
    'or', 'uint_fast8_t', '_Bool', 'int32_t', 'float', 'private', 'restrict',
    'wint_t', 'operator', 'not_eq', '_Imaginary', 'alignas', 'union', 'long',
    'uint_least32_t', 'int_least64_t', 'friend', 'uintptr_t', 'int8_t', 'else',
    'export', 'int_fast8_t', 'catch', 'true', 'case', 'default', 'double',
    '_Noreturn', 'signed', 'typename', 'while', 'protected', 'wchar_t',
    'wctrans_t', 'uint64_t', 'delete', 'and', 'register', 'false', 'int',
    'uintmax_t', 'off_t', 'char', 'int64_t', 'int_fast16_t', 'DIR', '_Atomic',
    'time_t', 'xor_eq', 'namespace', 'virtual', 'complex', 'bool', 'mutable',
    'if', 'int_least32_t', 'sig_atomic_t', 'and_eq', 'ssize_t', 'alignof',
    '_Alignas', '_Generic', 'extern', 'class', 'typeid', 'short', 'for',
    'uint_fast64_t', 'wctype_t', 'explicit', 'or_eq', 'switch', 'uint32_t',
    'inline' )
    
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
    
            for future in as_completed(future_to_url):
            try:
                url_to_content[future_to_url[future]] = future.result()
            except:
                pass
        return url_to_content
    finally:
        executor.shutdown()
    
    def with_thread_pool_executor():
    with ThreadPoolExecutor(10) as executor:
        return list(executor.map(is_prime, PRIMES))
    
        def request(self, flow):
        if not flow.reply.has_message:
            self.run(flow, flow.request.headers)
    
    
def ckey(attrs: Dict[str, str], f: http.HTTPFlow) -> TOrigin:
    '''
        Returns a (domain, port, path) tuple.
    '''
    domain = f.request.host
    path = '/'
    if 'domain' in attrs:
        domain = attrs['domain']
    if 'path' in attrs:
        path = attrs['path']
    return (domain, f.request.port, path)
    
                self._m_x = (self.x_int / 100000.0)
            return self._m_x if hasattr(self, '_m_x') else None
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    class BiDi: