
        
                :param name: the optional name of the filter, otherwise the
                     function name will be used.
        '''
        def register_template(state):
            state.app.jinja_env.filters[name or f.__name__] = f
        self.record_once(register_template)
    
        .. versionchanged:: 0.10
       This function's return value is now always safe for HTML usage, even
       if outside of script tags or if used in XHTML.  This rule does not
       hold true when using this function in HTML attributes that are double
       quoted.  Always single quote attributes if you use the ``|tojson``
       filter.  Alternatively use ``|tojson|forceescape``.
    '''
    rv = dumps(obj, **kwargs) \
        .replace(u'<', u'\\u003c') \
        .replace(u'>', u'\\u003e') \
        .replace(u'&', u'\\u0026') \
        .replace(u''', u'\\u0027')
    if not _slash_escape:
        rv = rv.replace('\\/', '/')
    return rv
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
        def __init__(self, *args, **kwargs):
        super(FlaskClient, self).__init__(*args, **kwargs)
        self.environ_base = {
            'REMOTE_ADDR': '127.0.0.1',
            'HTTP_USER_AGENT': 'werkzeug/' + werkzeug.__version__
        }
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
        def __init__(self):
        # Track the set of token types that can follow any rule invocation.
        # Stack grows upwards.
        self.following = []
    
            try:
            isabs, = set(p[:1] == sep for p in paths)
        except ValueError:
            raise ValueError('Can't mix absolute and relative paths') from None
    
        If the resulting string contains path separators, an exception is raised.
    '''
    parent, file_name = os.path.split(path)
    if parent:
        raise ValueError('{!r} must be only a file name'.format(path))
    else:
        return file_name
    
    # An imaginary module that would make this work and be safe.
from imaginary import magic_html_parser
    
    def handlePoint(point):
    print('<li>%s</li>' % getText(point.childNodes))
    
    # register get_operator_module(); make public functions accessible via proxy
MyManager.register('operator', get_operator_module)
    
    
class CompleterAvailableRequest( BaseRequest ):
  def __init__( self, filetypes ):
    super( CompleterAvailableRequest, self ).__init__()
    self.filetypes = filetypes
    self._response = None
    
    
  def Poll( self, diagnostics_handler ):
    '''This should be called regularly to check for new messages in this buffer.
    Returns True if Poll should be called again in a while. Returns False when
    the completer or server indicated that further polling should not be done
    for the requested file.'''
    
    
class OmniCompletionRequest( CompletionRequest ):
  def __init__( self, omni_completer, request_data ):
    super( OmniCompletionRequest, self ).__init__( request_data )
    self._omni_completer = omni_completer
    
    
@patch( 'ycm.client.messages_request.PostVimMessage',
        new_callable = ExtendedMock )
def HandlePollResponse_MultipleMessagesAndDiagnostics_test( post_vim_message ):
  diagnostics_handler = ExtendedMock()
  messages = [
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER1' ] },
    { 'message': 'On the first day of Christmas, my VimScript gave to me' },
    { 'filepath': 'bar', 'diagnostics': [ 'PLACEHOLDER2' ] },
    { 'message': 'A test file in a Command-T' },
    { 'filepath': 'baz', 'diagnostics': [ 'PLACEHOLDER3' ] },
    { 'message': 'On the second day of Christmas, my VimScript gave to me' },
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER4' ] },
    { 'message': 'Two popup menus, and a test file in a Command-T' },
  ]
  assert_that( _HandlePollResponse( messages, diagnostics_handler ),
               equal_to( True ) )
  diagnostics_handler.UpdateWithNewDiagnosticsForFile.assert_has_exact_calls( [
    call( 'foo', [ 'PLACEHOLDER1' ] ),
    call( 'bar', [ 'PLACEHOLDER2' ] ),
    call( 'baz', [ 'PLACEHOLDER3' ] ),
    call( 'foo', [ 'PLACEHOLDER4' ] )
  ] )
    
      return request
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseInProgress() ):
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( False ) )