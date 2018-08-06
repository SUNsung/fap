
        
                def get_auth(self, username=None, password=None):
            assert self.raw_auth is None
            assert username is None
            assert password is None
            return basic_auth()
    
        CHUNK_SIZE = 1024 * 10
    
    
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
        def __init__(self, **kwargs):
        '''
        :param env: an class:`Environment` instance
        :param kwargs: additional keyword argument that some
                       processor might require.
    
        '''
    .format(''.join(OUTPUT_OPTIONS))
)
output_options.add_argument(
    '--all',
    default=False,
    action='store_true',
    help='''
    By default, only the final request/response is shown. Use this flag to show
    any intermediary requests/responses as well. Intermediary requests include
    followed redirects (with --follow), the first unauthorized request when
    Digest auth is used (--auth=digest), etc.
    
        def test_download_interrupted(self, httpbin_both):
        devnull = open(os.devnull, 'w')
        downloader = Downloader(output_file=devnull, progress_file=devnull)
        downloader.start(Response(
            url=httpbin_both.url + '/',
            headers={'Content-Length': 5}
        ))
        downloader.chunk_downloaded(b'1234')
        downloader.finish()
        assert downloader.interrupted

    
        def test_CRLF_ugly_request(self, httpbin):
        r = http('--pretty=none', '--print=HB', 'GET', httpbin.url + '/get')
        self._validate_crlf(r)
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
      # At this point, all that should be left is actual casts.
  error(filename, linenum, 'readability/casting', 4,
        'Using C-style cast.  Use %s<%s>(...) instead' %
        (cast_type, match.group(1)))
    
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
    
    
def _BuildQfListItem( goto_data_item ):
  qf_item = {}
  if 'filepath' in goto_data_item:
    qf_item[ 'filename' ] = ToUnicode( goto_data_item[ 'filepath' ] )
  if 'description' in goto_data_item:
    qf_item[ 'text' ] = ToUnicode( goto_data_item[ 'description' ] )
  if 'line_num' in goto_data_item:
    qf_item[ 'lnum' ] = goto_data_item[ 'line_num' ]
  if 'column_num' in goto_data_item:
    # ycmd returns columns 1-based, and QuickFix lists require 'byte offsets'.
    # See :help getqflist and equivalent comment in
    # vimsupport.ConvertDiagnosticsToQfList.
    #
    # When the Vim help says 'byte index', it really means '1-based column
    # number' (which is somewhat confusing). :help getqflist states 'first
    # column is 1'.
    qf_item[ 'col' ] = goto_data_item[ 'column_num' ]
    
    
@YouCompleteMeInstance()
def SendCommandRequest_BuildRange_NoVisualMarks_test( ycm, *args ):
  current_buffer = VimBuffer( 'buffer', contents = [ 'first line',
                                                     'second line' ] )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with patch( 'ycm.youcompleteme.SendCommandRequest' ) as send_request:
      ycm.SendCommandRequest( [ 'GoTo' ], 'python', '', True, 1, 2 )
      send_request.assert_called_once_with(
        [ 'GoTo' ],
        'python',
        '',
        {
          'options': {
            'tab_size': 2,
            'insert_spaces': True
          },
          'range': {
            'start': {
              'line_num': 1,
              'column_num': 1
            },
            'end': {
              'line_num': 2,
              'column_num': 12
            }
          }
        }
      )
    
        assert_that( vim.current.window.cursor, equal_to( ( 2, 4 ) ) )
    vim_command.assert_has_exact_calls( [
      call( 'normal! m\'' ),
      call( u'keepjumps belowright edit {0}'.format( target_name ) ),
      call( 'normal! zz' )
    ] )
    
        self._AddExtraConfDataIfNeeded( request_data )
    self._latest_completion_request = CompletionRequest( request_data )
    self._latest_completion_request.Start()
    
    
def _CompileFilters( config ):
  '''Given a filter config dictionary, return a list of compiled filters'''
  filters = []
    
    
def FormatDebugInfoResponse_ExtraConfFoundButNotLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found but not loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
      It could be argued that the user actually wants the final buffer state to be
  'foo.zoobar|' (the cursor at the end), but that would be much more difficult
  to implement and is probably not worth doing.
  '''
    
    '''
@author: Eugene Duboviy <eugene.dubovoy@gmail.com> | github.com/duboviy
    
        def on_switchover(self):
        self._hsm._perform_switchover()
        self._hsm._check_mate_status()
        self._hsm._send_switchover_response()
    
        def test_dog_shall_bark(self):
        noise = self.dog.bark()
        expected_noise = 'woof!'
        self.assertEqual(noise, expected_noise)
    
        def setUp(self):
        self.tc1 = TC1()
        self.tc2 = TC2()
        self.tc3 = TC3()
        self.average_result_tc1 = '###### In Test 1 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc2 = '###### In Test 2 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc3 = '###### In Test 3 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.runner = TestRunner()
        self.out = StringIO()
        self.saved_stdout = sys.stdout
        sys.stdout = self.out
    
        def __init__(self):
        pass
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example with the time provider used in
        production. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay()
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(production_code_time_provider), expected_time)
    
    
def count_to(count):
    '''Counts by word numbers, up to a maximum of five'''
    numbers = ['one', 'two', 'three', 'four', 'five']
    for number in numbers[:count]:
        yield number
    
            traceback.print_exc(file=sys.stdout)
    print(num_obj)
    
        def is_satisfied_by(self, candidate):
        return bool(self._one.is_satisfied_by(candidate) or
                    self._other.is_satisfied_by(candidate))
    
    
@gen.engine
def run_tests():
    url = options.url + '/getCaseCount'
    control_ws = yield websocket_connect(url, None)
    num_tests = int((yield control_ws.read_message()))
    logging.info('running %d cases', num_tests)
    msg = yield control_ws.read_message()
    assert msg is None
    
    
class BaseHandler(tornado.web.RequestHandler):
    def get_current_user(self):
        user_json = self.get_secure_cookie('fbdemo_user')
        if not user_json:
            return None
        return tornado.escape.json_decode(user_json)
    
        logging.warning('Starting fetch with curl client')
    curl_client = CurlAsyncHTTPClient()
    curl_client.fetch('http://localhost:%d/' % options.port,
                      callback=callback)
    IOLoop.current().start()
    
    
if __name__ == '__main__':
    main()

    
    
class ObjectHandler(BaseRequestHandler):
    def get(self, bucket, object_name):
        object_name = urllib.unquote(object_name)
        path = self._object_path(bucket, object_name)
        if not path.startswith(self.application.directory) or \
           not os.path.isfile(path):
            raise web.HTTPError(404)
        info = os.stat(path)
        self.set_header('Content-Type', 'application/unknown')
        self.set_header('Last-Modified', datetime.datetime.utcfromtimestamp(
            info.st_mtime))
        object_file = open(path, 'rb')
        try:
            self.finish(object_file.read())
        finally:
            object_file.close()
    
    # Get a reference to the Raspberry Pi camera.
# If this fails, make sure you have a camera connected to the RPi and that you
# enabled your camera in raspi-config and rebooted first.
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)
    
    # Note: This example is only tested with Python 3 (not Python 2)
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
         Structure:
        <train_dir>/
        ├── <person1>/
        │   ├── <somename1>.jpeg
        │   ├── <somename2>.jpeg
        │   ├── ...
        ├── <person2>/
        │   ├── <somename1>.jpeg
        │   └── <somename2>.jpeg
        └── ...