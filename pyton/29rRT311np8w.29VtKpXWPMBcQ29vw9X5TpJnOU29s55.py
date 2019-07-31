
        
            def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
    
    
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
    
            self.host = host
        self.port = port
        self.requests_to_handle = requests_to_handle
    
    try:
    import simplejson as json
except ImportError:
    import json
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or {}
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
            with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(data)
            sock.close()
    
    # Windows
if os.name == 'nt':
    import msvcrt  # pylint: disable=import-error
    
    The MIT License
    
        def remove_tabs(self):
        ''' Remove all command specific tabs '''
        for child in self.tabs():
            if child in self.static_tabs:
                continue
            logger.debug('removing child: %s', child)
            child_name = child.split('.')[-1]
            child_object = self.children[child_name]  # returns the OptionalDisplayPage object
            child_object.close()  # Call the OptionalDisplayPage close() method
            self.forget(child)
    
    
class Config(FaceswapConfig):
    ''' Config File for Convert '''
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
    
class Writer(Output):
    ''' Images output writer using cv2 '''
    def __init__(self, output_folder, **kwargs):
        super().__init__(output_folder, **kwargs)
        self.extension = '.{}'.format(self.config['format'])
        self.check_transparency_format()
        self.args = self.get_save_args()
    
    
  def _RawResponse( self ):
    if not self._response_future:
      return NO_COMPLETIONS
    
    
  def ShouldUseNowInner( self, request_data ):
    if request_data[ 'force_semantic' ]:
      return True
    disabled_filetypes = self.user_options[
      'filetype_specific_completion_to_disable' ]
    if not vimsupport.CurrentFiletypesEnabled( disabled_filetypes ):
      return False
    return super( OmniCompleter, self ).ShouldUseNowInner( request_data )
    
    
  def _SendRequest( self ):
    self._response_future = self.PostDataToHandlerAsync(
      self._request_data,
      'receive_messages',
      timeout = TIMEOUT_SECONDS )
    return
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      _assert_rejects( f, 'This is a Taco' )
  _assert_accepts( f, 'This is a Burrito' )
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseInProgress() ):
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( False ) )
    
        try:
      result = self.fn( *self.args, **self.kwargs )
    except BaseException:
      e = sys.exc_info()[ 1 ]
      self.future.set_exception( e )
    else:
      self.future.set_result( result )
    
        def _adjust_process_count(self):
        for _ in range(len(self._processes), self._max_workers):
            p = multiprocessing.Process(
                    target=_process_worker,
                    args=(self._call_queue,
                          self._result_queue))
            p.start()
            self._processes.add(p)