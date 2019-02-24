
        
        
rng = np.random.RandomState(seed=FLAGS.synth_data_seed)
u_rng = np.random.RandomState(seed=FLAGS.synth_data_seed+1)
T = FLAGS.T
C = FLAGS.C
N = FLAGS.N  # must be same N as in trained model (provided example is N = 50)
nreplications = FLAGS.nreplications
E = nreplications * C  # total number of trials
train_percentage = FLAGS.train_percentage
ntimesteps = int(T / FLAGS.dt)
batch_size = 1  # gives one example per ntrial
    
    def get_train_n_valid_inds(num_trials, train_fraction, nreplications):
  '''Split the numbers between 0 and num_trials-1 into two portions for
  training and validation, based on the train fraction.
  Args:
    num_trials: the number of trials
    train_fraction: (e.g. .80)
    nreplications: the number of spiking trials per initial condition
  Returns:
    a 2-tuple of two lists: the training indices and validation indices
    '''
  train_inds = []
  valid_inds = []
  for i in range(num_trials):
    # This line divides up the trials so that within one initial condition,
    # the randomness of spikifying the condition is shared among both
    # training and validation data splits.
    if (i % nreplications)+1 > train_fraction * nreplications:
      valid_inds.append(i)
    else:
      train_inds.append(i)
    
      Raises:
    ValueError: if batch_size or num_steps are too high.
  '''
  del epoch_size_override
  data_len = len(raw_data)
  num_batches = data_len // batch_size - 1
    
    # TODO: ensure that history changes.

    
        assert match(command)
    
        return _set_text
    
    
def test_get_new_command():
    new_command = get_new_command(Command('sudo apt update', match_output))
    assert new_command == 'sudo apt list --upgradable'
    
            Did you mean `build`?
'''
    
    tensorboard = TensorBoard(batch_size=batch_size,
                          embeddings_freq=1,
                          embeddings_layer_names=['features'],
                          embeddings_metadata='metadata.tsv',
                          embeddings_data=x_test)
    
        paths = []
    for fname in files:
        paths.append(get_file(fname,
                              origin=base + fname,
                              cache_subdir=dirname))
    
    
def _get_available_devices():
    return [x.name for x in K.get_session().list_devices()]
    
    model = Sequential()
model.add(Conv2D(32, kernel_size=(3, 3),
                 activation='relu',
                 input_shape=input_shape))
model.add(Conv2D(64, (3, 3), activation='relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))
model.add(Dropout(0.25))
model.add(Flatten())
model.add(Dense(128, activation='relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes, activation='softmax'))
    
    print('Evaluate IRNN...')
model = Sequential()
model.add(SimpleRNN(hidden_units,
                    kernel_initializer=initializers.RandomNormal(stddev=0.001),
                    recurrent_initializer=initializers.Identity(gain=1.0),
                    activation='relu',
                    input_shape=x_train.shape[1:]))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
rmsprop = RMSprop(lr=learning_rate)
model.compile(loss='categorical_crossentropy',
              optimizer=rmsprop,
              metrics=['accuracy'])
    
    import datetime
import keras
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation, Flatten
from keras.layers import Conv2D, MaxPooling2D
from keras import backend as K
    
    '''
requests.exceptions
~~~~~~~~~~~~~~~~~~~
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
        # Check cryptography version
    from cryptography import __version__ as cryptography_version
    _check_cryptography(cryptography_version)
except ImportError:
    pass
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        close_server = threading.Event()
    server = Server(response_handler, wait_to_close_event=close_server)
    
        def test_server_closes(self):
        '''the server closes when leaving the context manager'''
        with Server.basic_response_server() as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
    
    
@pytest.mark.parametrize(
    'value, expected', (
        (
            'application/xml',
            ('application/xml', {})
        ),
        (
            'application/json ; charset=utf-8',
            ('application/json', {'charset': 'utf-8'})
        ),
        (
            'application/json ; Charset=utf-8',
            ('application/json', {'charset': 'utf-8'})
        ),
        (
            'text/plain',
            ('text/plain', {})
        ),
        (
            'multipart/form-data; boundary = something ; boundary2=\'something_else\' ; no_equals ',
            ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
                'multipart/form-data; boundary = something ; boundary2='something_else' ; no_equals ',
                ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
            'multipart/form-data; boundary = something ; \'boundary2=something_else\' ; no_equals ',
            ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
            'multipart/form-data; boundary = something ; 'boundary2=something_else' ; no_equals ',
            ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
            'application/json ; ; ',
            ('application/json', {})
        )
    ))
def test__parse_content_type_header(value, expected):
    assert _parse_content_type_header(value) == expected
    
        # Client Error.
    400: ('bad_request', 'bad'),
    401: ('unauthorized',),
    402: ('payment_required', 'payment'),
    403: ('forbidden',),
    404: ('not_found', '-o-'),
    405: ('method_not_allowed', 'not_allowed'),
    406: ('not_acceptable',),
    407: ('proxy_authentication_required', 'proxy_auth', 'proxy_authentication'),
    408: ('request_timeout', 'timeout'),
    409: ('conflict',),
    410: ('gone',),
    411: ('length_required',),
    412: ('precondition_failed', 'precondition'),
    413: ('request_entity_too_large',),
    414: ('request_uri_too_large',),
    415: ('unsupported_media_type', 'unsupported_media', 'media_type'),
    416: ('requested_range_not_satisfiable', 'requested_range', 'range_not_satisfiable'),
    417: ('expectation_failed',),
    418: ('im_a_teapot', 'teapot', 'i_am_a_teapot'),
    421: ('misdirected_request',),
    422: ('unprocessable_entity', 'unprocessable'),
    423: ('locked',),
    424: ('failed_dependency', 'dependency'),
    425: ('unordered_collection', 'unordered'),
    426: ('upgrade_required', 'upgrade'),
    428: ('precondition_required', 'precondition'),
    429: ('too_many_requests', 'too_many'),
    431: ('header_fields_too_large', 'fields_too_large'),
    444: ('no_response', 'none'),
    449: ('retry_with', 'retry'),
    450: ('blocked_by_windows_parental_controls', 'parental_controls'),
    451: ('unavailable_for_legal_reasons', 'legal_reasons'),
    499: ('client_closed_request',),
    
                if url.lower().startswith(prefix.lower()):
                return adapter
    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
    def _run_print_help(parser, func, *a, **kw):
    try:
        func(*a, **kw)
    except UsageError as e:
        if str(e):
            parser.error(str(e))
        if e.print_help:
            parser.print_help()
        sys.exit(2)
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
        def short_desc(self):
        return 'Edit spider'
    
            # Request requires callback argument as callable or None, not string
        request = Request(url, None)
        _start_requests = lambda s: [self.prepare_request(s, request, opts)]
        self.spidercls.start_requests = _start_requests
    
        def __init__(self, request, timeout=180):
        self._url = urldefrag(request.url)[0]
        # converting to bytes to comply to Twisted interface
        self.url = to_bytes(self._url, encoding='ascii')
        self.method = to_bytes(request.method, encoding='ascii')
        self.body = request.body or None
        self.headers = Headers(request.headers)
        self.response_headers = None
        self.timeout = request.meta.get('download_timeout') or timeout
        self.start_time = time()
        self.deferred = defer.Deferred().addCallback(self._build_response, request)
    
    # How to display URL addresses: 'footnote', 'no', or 'inline'.
#texinfo_show_urls = 'footnote'
    
    REWRITE_HTTPS_ARGS = [
    '^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[L,NE,R=permanent]']
'''Apache version<2.3.9 rewrite rule arguments used for redirections to
https vhost'''
    
        def test_nonexistent_like(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                for like in entrypoint.OVERRIDE_CLASSES.keys():
                    mock_like.return_value = [like]
                    self.assertEqual(entrypoint.get_configurator(),
                                     entrypoint.OVERRIDE_CLASSES[like])
    
            self.assertTrue(self.vhost1.same_server(self.vhost2))
        self.assertTrue(no_name1.same_server(no_name2))
    
            # Make sure calls made to mocked function were correct
        self.assertEqual(
            mock_setup_cert.call_args_list[0], mock.call(self.achalls[0]))
        self.assertEqual(
            mock_setup_cert.call_args_list[1], mock.call(self.achalls[1]))
    
    # This is a very simple benchmark to give you an idea of how fast each step of face recognition will run on your system.
# Notice that face detection gets very slow at large image sizes. So you might consider running face detection on a
# scaled down version of your image and then running face encodings on the the full size image.
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
    for face_location in face_locations:
    
        :param img: An image (as a numpy array)
    :param number_of_times_to_upsample: How many times to upsample the image looking for faces. Higher numbers find smaller faces.
    :param model: Which face detection model to use. 'hog' is less accurate but faster on CPUs. 'cnn' is a more accurate
                  deep-learning model which is GPU/CUDA accelerated (if available). The default is 'hog'.
    :return: A list of tuples of found face locations in css (top, right, bottom, left) order
    '''
    if model == 'cnn':
        return [_trim_css_to_bounds(_rect_to_css(face.rect), img.shape) for face in _raw_face_locations(img, number_of_times_to_upsample, 'cnn')]
    else:
        return [_trim_css_to_bounds(_rect_to_css(face), img.shape) for face in _raw_face_locations(img, number_of_times_to_upsample, model)]
    
            face_encoding_a1 = api.face_encodings(img_a1)[0]
        face_encoding_a2 = api.face_encodings(img_a2)[0]
        face_encoding_a3 = api.face_encodings(img_a3)[0]
        face_encoding_b1 = api.face_encodings(img_b1)[0]
    
    
def detect_faces_in_image(file_stream):
    # 用face_recognition.face_encodings(img)接口提前把奥巴马人脸的编码录入
    known_face_encoding = [-0.09634063,  0.12095481, -0.00436332, -0.07643753,  0.0080383,
                            0.01902981, -0.07184699, -0.09383309,  0.18518871, -0.09588896,
                            0.23951106,  0.0986533 , -0.22114635, -0.1363683 ,  0.04405268,
                            0.11574756, -0.19899382, -0.09597053, -0.11969153, -0.12277931,
                            0.03416885, -0.00267565,  0.09203379,  0.04713435, -0.12731361,
                           -0.35371891, -0.0503444 , -0.17841317, -0.00310897, -0.09844551,
                           -0.06910533, -0.00503746, -0.18466514, -0.09851682,  0.02903969,
                           -0.02174894,  0.02261871,  0.0032102 ,  0.20312519,  0.02999607,
                           -0.11646006,  0.09432904,  0.02774341,  0.22102901,  0.26725179,
                            0.06896867, -0.00490024, -0.09441824,  0.11115381, -0.22592428,
                            0.06230862,  0.16559327,  0.06232892,  0.03458837,  0.09459756,
                           -0.18777156,  0.00654241,  0.08582542, -0.13578284,  0.0150229 ,
                            0.00670836, -0.08195844, -0.04346499,  0.03347827,  0.20310158,
                            0.09987706, -0.12370517, -0.06683611,  0.12704916, -0.02160804,
                            0.00984683,  0.00766284, -0.18980607, -0.19641446, -0.22800779,
                            0.09010898,  0.39178532,  0.18818057, -0.20875394,  0.03097027,
                           -0.21300618,  0.02532415,  0.07938635,  0.01000703, -0.07719778,
                           -0.12651891, -0.04318593,  0.06219772,  0.09163868,  0.05039065,
                           -0.04922386,  0.21839413, -0.02394437,  0.06173781,  0.0292527 ,
                            0.06160797, -0.15553983, -0.02440624, -0.17509389, -0.0630486 ,
                            0.01428208, -0.03637431,  0.03971229,  0.13983178, -0.23006812,
                            0.04999552,  0.0108454 , -0.03970895,  0.02501768,  0.08157793,
                           -0.03224047, -0.04502571,  0.0556995 , -0.24374914,  0.25514284,
                            0.24795187,  0.04060191,  0.17597422,  0.07966681,  0.01920104,
                           -0.01194376, -0.02300822, -0.17204897, -0.0596558 ,  0.05307484,
                            0.07417042,  0.07126575,  0.00209804]