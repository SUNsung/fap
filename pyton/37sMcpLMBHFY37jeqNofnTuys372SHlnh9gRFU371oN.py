
        
        
def _check_cryptography(cryptography_version):
    # cryptography < 1.3.4
    try:
        cryptography_version = list(map(int, cryptography_version.split('.')))
    except ValueError:
        return
    
        def __call__(self, r):
        # Initialize per-thread state, if needed
        self.init_per_thread_state()
        # If we have a saved nonce, skip the 401
        if self._thread_local.last_nonce:
            r.headers['Authorization'] = self.build_digest_header(r.method, r.url)
        try:
            self._thread_local.pos = r.body.tell()
        except AttributeError:
            # In the case of HTTPDigestAuth being reused and the body of
            # the previous request was a file-like object, pos has the
            # file position of the previous body. Ensure it's set to
            # None.
            self._thread_local.pos = None
        r.register_hook('response', self.handle_401)
        r.register_hook('response', self.handle_redirect)
        self._thread_local.num_401_calls = 1
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
        @possible_keys
    def test_getitem(self, key):
        assert self.case_insensitive_dict[key] == 'application/json'
    
            p = PreparedRequest()
        p.prepare(
            method=request.method.upper(),
            url=request.url,
            files=request.files,
            data=request.data,
            json=request.json,
            headers=merge_setting(request.headers, self.headers, dict_class=CaseInsensitiveDict),
            params=merge_setting(request.params, self.params),
            auth=merge_setting(auth, self.auth),
            cookies=merged_cookies,
            hooks=merge_hooks(request.hooks, self.hooks),
        )
        return p
    
        def test_session_hooks_are_used_with_no_request_hooks(self, httpbin):
        hook = lambda x, *args, **kwargs: x
        s = requests.Session()
        s.hooks['response'].append(hook)
        r = requests.Request('GET', httpbin())
        prep = s.prepare_request(r)
        assert prep.hooks['response'] != []
        assert prep.hooks['response'] == [hook]
    
        def triger_check_network(self, fail=False, force=False):
        time_now = time.time()
        if not force:
            if self._checking_num > 0:
                return
    
            begin_recv = time.time()
        while time.time() < self.timeout + begin_recv:
            qualified = self.prober_dict[dst_ip]['ra_packets'].get()
            if qualified:
                return qualified
            time.sleep(0.01)
    
                # Is there a bitwise operation to do this?
            if v == 0xFFFF:
                v = -1
    
    class BaseRecognizer(object):
    '''
    @brief Common recognizer functionality.
    
    A generic recognizer that can handle recognizers generated from
    lexer, parser, and tree grammars.  This is all the parsing
    support code essentially; most of it is error recovery stuff and
    backtracking.
    '''
    
        @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
    
class VirtualHostTest(unittest.TestCase):
    '''Test the VirtualHost class.'''
    
    
def main(path):
    
    
  def Start( self ):
    self.PostDataToHandler( {},
                            'shutdown',
                            TIMEOUT_SECONDS,
                            display_message = False )
    
      AddToGroupMap( 'Conditional', statement_group )
  AddToGroupMap( 'Repeat'     , statement_group )
  AddToGroupMap( 'Label'      , statement_group )
  AddToGroupMap( 'Operator'   , statement_group )
  AddToGroupMap( 'Keyword'    , statement_group )
  AddToGroupMap( 'Exception'  , statement_group )
    
    
def FormatDebugInfoResponse_Completer_ServerNotRunningWithNoLogfiles_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'is_running': False,
    'logfiles': []
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name not running\n'
      '  Server name executable: /path/to/executable\n'
      '  No logfiles available\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )

    
      # We don't want the requests to actually be sent to the server, just have it
  # return success.
  with patch( 'ycm.client.completer_available_request.'
              'CompleterAvailableRequest.PostDataToHandler',
              return_value = True ):
    with patch( 'ycm.client.completion_request.CompletionRequest.'
                'PostDataToHandlerAsync',
                return_value = MagicMock( return_value=True ) ):
    
      return {
    'extra_data': extra_data,
    'insertion_text': insertion_text,
    'menu_text': menu_text,
    'extra_menu_info': extra_menu_info,
    'kind': kind,
    'detailed_info': detailed_info,
  }
    
          assert_that( ycm.IsServerAlive(), equal_to( False ) )
      post_vim_message.assert_called_once_with(
        'Unable to start the ycmd server. Cannot find Python 2.7 or 3.4+. '
        'Set the 'g:ycm_server_python_interpreter' option to a Python '
        'interpreter path. '
        'Correct the error then restart the server with ':YcmRestartServer'.' )
    
    
def run_test(setup, test, iterations_per_test=5, tests_to_run=10):
    fastest_execution = min(timeit.Timer(test, setup=setup).repeat(tests_to_run, iterations_per_test))
    execution_time = fastest_execution / iterations_per_test
    fps = 1.0 / execution_time
    return execution_time, fps
    
    # Note: This isn't exactly the same as a 'percent match'. The scale isn't linear. But you can assume that images with a
# smaller distance are more similar to each other than ones with a larger distance.
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        # If no valid image file was uploaded, show the file upload form:
    return '''
    <!doctype html>
    <title>Is this a picture of Obama?</title>
    <h1>Upload a picture and see if it's a picture of Obama!</h1>
    <form method='POST' enctype='multipart/form-data'>
      <input type='file' name='file'>
      <input type='submit' value='Upload'>
    </form>
    '''
    
    
@click.command()
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel. -1 means 'use all in system'')
@click.option('--model', default='hog', help='Which face detection model to use. Options are 'hog' or 'cnn'.')
def main(image_to_check, cpus, model):
    # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
                face_names.append(name)
    
    # Get a reference to the Raspberry Pi camera.
# If this fails, make sure you have a camera connected to the RPi and that you
# enabled your camera in raspi-config and rebooted first.
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)
    
        # Every 128 frames (the default batch size), batch process the list of frames to find faces
    if len(frames) == 128:
        batch_of_face_locations = face_recognition.batch_face_locations(frames, number_of_times_to_upsample=0)