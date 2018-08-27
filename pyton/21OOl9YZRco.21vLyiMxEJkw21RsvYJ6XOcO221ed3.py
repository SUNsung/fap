
        
        
def hex_str(int_list):
    return codecs.encode(intlist_to_bytes(int_list), 'hex')
    
    try:
    input = raw_input
except NameError:
    pass
    
    if __name__ == '__main__':
    main()

    
    if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(readme)
    
    
def format_size(bytes):
    return '%s (%d bytes)' % (format_bytes(bytes), bytes)
    
        with open(ZSH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    
    try:
    # This will create an exe that needs Microsoft Visual C++ 2008
    # Redistributable Package
    import py2exe
except ImportError:
    if len(sys.argv) >= 2 and sys.argv[1] == 'py2exe':
        print('Cannot import py2exe', file=sys.stderr)
        exit(1)
    
        def test_format_note(self):
        ydl = YoutubeDL()
        self.assertEqual(ydl._format_note({}), '')
        assertRegexpMatches(self, ydl._format_note({
            'vbr': 10,
        }), r'^\s*10k$')
        assertRegexpMatches(self, ydl._format_note({
            'fps': 30,
        }), r'^30fps$')
    
        def test_cbc_decrypt(self):
        data = bytes_to_intlist(
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd'
        )
        decrypted = intlist_to_bytes(aes_cbc_decrypt(data, self.key, self.iv))
        self.assertEqual(decrypted.rstrip(b'\x08'), self.secret_msg)
    
        def test_youtube_matching(self):
        self.assertTrue(YoutubeIE.suitable('PLtS2H6bU1M'))
        self.assertFalse(YoutubeIE.suitable('https://www.youtube.com/watch?v=AV6J6_AeFEQ&playnext=1&list=PL4023E734DA416012'))  # 668
        self.assertMatch('http://youtu.be/BaW_jenozKc', ['youtube'])
        self.assertMatch('http://www.youtube.com/v/BaW_jenozKc', ['youtube'])
        self.assertMatch('https://youtube.googleapis.com/v/BaW_jenozKc', ['youtube'])
        self.assertMatch('http://www.cleanvideosearch.com/media/action/yt/watch?videoId=8v_4O44sfjM', ['youtube'])
    
        # 128+2 SIGINT <http://www.tldp.org/LDP/abs/html/exitcodes.html>
    ERROR_CTRL_C = 130
    
        def init_poolmanager(self, *args, **kwargs):
        kwargs['ssl_version'] = self._ssl_version
        super(HTTPieHTTPAdapter, self).init_poolmanager(*args, **kwargs)
    
        def iter_lines(self, chunk_size):
        yield self.body, b''
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
        @property
    def bindata(self):
        if not hasattr(self, '_bindata'):
            self._bindata = urlopen(self.url).read()
        return self._bindata
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
        r = http('GET', httpbin_both + '/headers', 'Accept;')
    assert r.json['headers']['Accept'] == ''   # Accept has no value
    
        def test_CRLF_headers_only(self, httpbin):
        r = http('--headers', 'GET', httpbin.url + '/get')
        body = self._validate_crlf(r)
        assert not body, 'Garbage after headers: %r' % r
    
    
def load_vector(*names):
    '''Load contents of a test vector.'''
    # luckily, resource_string opens file in binary mode
    return pkg_resources.resource_string(
        __name__, os.path.join('testdata', *names))
    
            return responses
    
    
def BuildServerConf():
  '''Builds a dictionary mapping YCM Vim user options to values. Option names
  don't have the 'ycm_' prefix.'''
  # We only evaluate the keys of the vim globals and not the whole dictionary
  # to avoid unicode issues.
  # See https://github.com/Valloric/YouCompleteMe/pull/2151 for details.
  keys = vimsupport.GetVimGlobalsKeys()
  server_conf = {}
  for key in keys:
    if not key.startswith( YCM_VAR_PREFIX ):
      continue
    new_key = key[ len( YCM_VAR_PREFIX ): ]
    new_value = vimsupport.VimExpressionToPythonType( 'g:' + key )
    server_conf[ new_key ] = new_value
    
    
@patch( 'ycm.client.messages_request.PostVimMessage',
        new_callable = ExtendedMock )
def HandlePollResponse_MultipleMessages_test( post_vim_message ):
  assert_that( _HandlePollResponse( [ { 'message': 'this is a message' },
                                      { 'message': 'this is another one' } ] ,
                                    None ),
               equal_to( True ) )
    
    
def RegexNotFiltered_test():
  opts = _JavaFilter( { 'regex' : 'taco' } )
  f = _CreateFilterForTypes( opts, [ 'cs' ] )
    
        server_message = {
      'message': 'this message came from the server'
    }
    
    
@patch( 'ycm.vimsupport.CurrentFiletypes', return_value = [ 'java' ] )
def GetCompleteDoneHooks_ResultOnJava_test( *args ):
  request = CompletionRequest( None )
  result = list( request._GetCompleteDoneHooks() )
  eq_( result, [ request._OnCompleteDone_FixIt ] )
    
    
def ExtractKeywordsFromGroup_ContainedSyntaxArgAllowed_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'contained foo zoq',
                   'contained bar goo',
                   'far'
                 ] ) ),
               contains_inanyorder( 'foo', 'zoq', 'bar', 'goo', 'far' ) )

    
        def attach(self, observer):
        if observer not in self._observers:
            self._observers.append(observer)
    
        def __init__(self, radio):
        self.radio = radio
        self.stations = ['1250', '1380', '1510']
        self.pos = 0
        self.name = 'AM'
    
        @property
    def _lazy_property(self):
        if not hasattr(self, attr):
            setattr(self, attr, fn(self))
        return getattr(self, attr)
    return _lazy_property
    
    class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
    # Get a reference to webcam #0 (the default one)
video_capture = cv2.VideoCapture(0)
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
        # Return the result as json
    result = {
        'face_found_in_image': face_found,
        'is_picture_of_obama': is_obama
    }
    return jsonify(result)
    
        # For a definition of each point index, see https://cdn-images-1.medium.com/max/1600/1*AbEg31EgkbXSQehuNJBlWg.png
    if model == 'large':
        return [{
            'chin': points[0:17],
            'left_eyebrow': points[17:22],
            'right_eyebrow': points[22:27],
            'nose_bridge': points[27:31],
            'nose_tip': points[31:36],
            'left_eye': points[36:42],
            'right_eye': points[42:48],
            'top_lip': points[48:55] + [points[64]] + [points[63]] + [points[62]] + [points[61]] + [points[60]],
            'bottom_lip': points[54:60] + [points[48]] + [points[60]] + [points[67]] + [points[66]] + [points[65]] + [points[64]]
        } for points in landmarks_as_tuples]
    elif model == 'small':
        return [{
            'nose_tip': [points[4]],
            'left_eye': points[2:4],
            'right_eye': points[0:2],
        } for points in landmarks_as_tuples]
    else:
        raise ValueError('Invalid landmarks model type. Supported models are ['small', 'large'].')
    
    # Get a reference to webcam #0 (the default one)
video_capture = cv2.VideoCapture(0)
    
    # Loop through each face found in the unknown image
for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
    # See if the face is a match for the known face(s)
    matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
    
    requirements = [
    'face_recognition_models>=0.3.0',
    'Click>=6.0',
    'dlib>=19.7',
    'numpy',
    'Pillow'
]