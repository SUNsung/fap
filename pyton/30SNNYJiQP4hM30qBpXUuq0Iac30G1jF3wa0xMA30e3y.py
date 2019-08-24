
        
            # Live videos get deleted soon. See http://www.cbsnews.com/live/ for the latest examples
    _TEST = {
        'url': 'http://www.cbsnews.com/live/video/clinton-sanders-prepare-to-face-off-in-nh/',
        'info_dict': {
            'id': 'clinton-sanders-prepare-to-face-off-in-nh',
            'ext': 'mp4',
            'title': 'Clinton, Sanders Prepare To Face Off In NH',
            'duration': 334,
        },
        'skip': 'Video gone',
    }
    
    
class RedBullTVRrnContentIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?redbull(?:\.tv|\.com(?:/[^/]+)?(?:/tv)?)/(?:video|live)/rrn:content:[^:]+:(?P<id>[\da-f]{8}-[\da-f]{4}-[\da-f]{4}-[\da-f]{4}-[\da-f]{12})'
    _TESTS = [{
        'url': 'https://www.redbull.com/int-en/tv/video/rrn:content:live-videos:e3e6feb4-e95f-50b7-962a-c70f8fd13c73/mens-dh-finals-fort-william',
        'only_matching': True,
    }, {
        'url': 'https://www.redbull.com/int-en/tv/video/rrn:content:videos:a36a0f36-ff1b-5db8-a69d-ee11a14bf48b/tn-ts-style?playlist=rrn:content:event-profiles:83f05926-5de8-5389-b5e4-9bb312d715e8:extras',
        'only_matching': True,
    }]
    
        ie_htmls = []
    for ie in youtube_dl.list_extractors(age_limit=None):
        ie_html = '<b>{}</b>'.format(ie.IE_NAME)
        ie_desc = getattr(ie, 'IE_DESC', None)
        if ie_desc is False:
            continue
        elif ie_desc is not None:
            ie_html += ': {}'.format(ie.IE_DESC)
        if not ie.working():
            ie_html += ' (Currently broken)'
        ie_htmls.append('<li>{}</li>'.format(ie_html))
    
    module_contents = [
    module_template + '\n' + getsource(InfoExtractor.suitable) + '\n',
    'class LazyLoadSearchExtractor(LazyLoadExtractor):\n    pass\n']
    
    with io.open(README_FILE, 'w', encoding='utf-8') as f:
    f.write(header)
    f.write(options)
    f.write(footer)

    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        def write(self, filename, image):
        logger.trace('Outputting: (filename: '%s'', filename)
        filename = self.output_filename(filename)
        try:
            with open(filename, 'wb') as outfile:
                outfile.write(image.read())
        except Exception as err:  # pylint: disable=broad-except
            logger.error('Failed to save image '%s'. Original Error: %s', filename, err)
    
        # Vim may not be able to convert the 'errors' entry to its internal format
    # so we remove it from the response.
    errors = response.pop( 'errors', [] )
    for e in errors:
      exception = MakeServerException( e )
      _logger.error( exception )
      DisplayServerException( exception, truncate_message = True )
    
        @YouCompleteMeInstance( { 'log_level': 'debug',
                              'keep_logfiles': 1 } )
    def Debug_test( ycm ):
        ...
  '''
  def Decorator( test ):
    @functools.wraps( test )
    def Wrapper( *args, **kwargs ):
      with UserOptions( custom_options ):
        ycm = YouCompleteMe()
        WaitUntilReady()
        ycm.CheckIfServerIsReady()
        try:
          test( ycm, *args, **kwargs )
        finally:
          StopServer( ycm )
    return Wrapper
  return Decorator

    
    
@YouCompleteMeInstance()
def SendCommandRequest_IgnoreFileTypeOption_test( ycm, *args ):
  current_buffer = VimBuffer( 'buffer' )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    expected_args = (
      [ 'GoTo' ],
      '',
      'same-buffer',
      {
        'options': {
          'tab_size': 2,
          'insert_spaces': True
        },
      }
    )
    
    
def KeywordsFromSyntaxListOutput_StatementAndTypeGroups_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             links to Statement
bargroup xxx zoo goo
             links to Type''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
        try:
      result = self.fn( *self.args, **self.kwargs )
    except BaseException:
      e = sys.exc_info()[ 1 ]
      self.future.set_exception( e )
    else:
      self.future.set_result( result )
    
    def _create_and_install_waiters(fs, return_when):
    if return_when == _AS_COMPLETED:
        waiter = _AsCompletedWaiter()
    elif return_when == FIRST_COMPLETED:
        waiter = _FirstCompletedWaiter()
    else:
        pending_count = sum(
                f._state not in [CANCELLED_AND_NOTIFIED, FINISHED] for f in fs)
    
        # Execute the template string in a temporary namespace and
    # support tracing utilities by setting a value for frame.f_globals['__name__']
    namespace = dict(_itemgetter=_itemgetter, __name__='namedtuple_%s' % typename,
                     _property=property, _tuple=tuple)
    try:
        exec(template, namespace)
    except SyntaxError:
        e = _sys.exc_info()[1]
        raise SyntaxError(e.message + ':\n' + template)
    result = namespace[typename]
    
    
def main():
    parse_command_line()
    t = Timer(e1)
    results = t.timeit(options.num) / options.num
    print('engine: %0.3f ms per iteration' % (results * 1000))
    t = Timer(c1)
    results = t.timeit(options.num) / options.num
    print('coroutine: %0.3f ms per iteration' % (results * 1000))
    
    
@gen.engine
def run_tests():
    url = options.url + '/getCaseCount'
    control_ws = yield websocket_connect(url, None)
    num_tests = int((yield control_ws.read_message()))
    logging.info('running %d cases', num_tests)
    msg = yield control_ws.read_message()
    assert msg is None
    
            ws.ping('hello')
        resp = yield ws.read_message()
        # on_ping always sees bytes.
        self.assertEqual(resp, b'hello')
    
    
class BaseAsyncIOLoop(IOLoop):
    def initialize(  # type: ignore
        self, asyncio_loop: asyncio.AbstractEventLoop, **kwargs: Any
    ) -> None:
        self.asyncio_loop = asyncio_loop
        # Maps fd to (fileobj, handler function) pair (as in IOLoop.add_handler)
        self.handlers = {}  # type: Dict[int, Tuple[Union[int, _Selectable], Callable]]
        # Set of fds listening for reads/writes
        self.readers = set()  # type: Set[int]
        self.writers = set()  # type: Set[int]
        self.closing = False
        # If an asyncio loop was closed through an asyncio interface
        # instead of IOLoop.close(), we'd never hear about it and may
        # have left a dangling reference in our map. In case an
        # application (or, more likely, a test suite) creates and
        # destroys a lot of event loops in this way, check here to
        # ensure that we don't have a lot of dead loops building up in
        # the map.
        #
        # TODO(bdarnell): consider making self.asyncio_loop a weakref
        # for AsyncIOMainLoop and make _ioloop_for_asyncio a
        # WeakKeyDictionary.
        for loop in list(IOLoop._ioloop_for_asyncio):
            if loop.is_closed():
                del IOLoop._ioloop_for_asyncio[loop]
        IOLoop._ioloop_for_asyncio[asyncio_loop] = self
    
            # Make sure the tornado module under test is available to the test
        # application
        pythonpath = os.getcwd()
        if 'PYTHONPATH' in os.environ:
            pythonpath += os.pathsep + os.environ['PYTHONPATH']