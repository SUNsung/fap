
        
        with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
        with open('supportedsites.html', 'w', encoding='utf-8') as sitesf:
        sitesf.write(template)
    
                        # Pandoc's definition_lists. See http://pandoc.org/README.html
                    # for more information.
                    ret += '\n%s\n:   %s\n' % (option, description)
                    continue
            ret += line.lstrip() + '\n'
        else:
            ret += line + '\n'
    
    rootDir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    
    
@bp.before_app_request
def load_logged_in_user():
    '''If a user id is stored in the session, load the user object from
    the database into ``g.user``.'''
    user_id = session.get('user_id')
    
    
def get_db():
    '''Connect to the application's configured database. The connection
    is unique for each request and will be reused if this is called
    again.
    '''
    if 'db' not in g:
        g.db = sqlite3.connect(
            current_app.config['DATABASE'],
            detect_types=sqlite3.PARSE_DECLTYPES
        )
        g.db.row_factory = sqlite3.Row
    
    
@pytest.fixture
def app():
    '''Create and configure a new app instance for each test.'''
    # create a temporary file to isolate the database for each test
    db_fd, db_path = tempfile.mkstemp()
    # create the app with common test config
    app = create_app({
        'TESTING': True,
        'DATABASE': db_path,
    })
    
        return logger

    
        When you want to decorate a pluggable view you will have to either do that
    when the view function is created (by wrapping the return value of
    :meth:`as_view`) or you can use the :attr:`decorators` attribute::
    
    
def test_request_context_means_app_context(app):
    with app.test_request_context():
        assert flask.current_app._get_current_object() == app
    assert flask._app_ctx_stack.top is None
    
    
class BtreeGistExtension(CreateExtension):
    
        def save(self, must_create=False):
        super().save(must_create)
        self._cache.set(self.cache_key, self._session, self.get_expiry_age())
    
        def exists(self, session_key):
        return self.model.objects.filter(session_key=session_key).exists()
    
        def __str__(self):
        return self.session_key
    
    
FORM_CONTENT_TYPE = 'application/x-www-form-urlencoded; charset=utf-8'
JSON_CONTENT_TYPE = 'application/json'
JSON_ACCEPT = '{0}, */*'.format(JSON_CONTENT_TYPE)
DEFAULT_UA = 'HTTPie/%s' % __version__
    
    from httpie.plugins import plugin_manager
from httpie.context import Environment
    
        def __init__(self, chunk_size=CHUNK_SIZE, **kwargs):
        super(RawStream, self).__init__(**kwargs)
        self.chunk_size = chunk_size
    
            :param headers: The headers as text.
    
            See https://github.com/jakubroztocil/httpie/issues/212
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
        def test_non_existent_file_raises_parse_error(self, httpbin):
        with pytest.raises(ParseError):
            http('--form',
                 'POST', httpbin.url + '/post', 'foo@/__does_not_exist__')
    
        num_train_samples = 50000
    
    
def serialize(regularizer):
    return serialize_keras_object(regularizer)
    
        out1 = utils.preprocess_input(x, 'channels_last')
    out1int = utils.preprocess_input(xint, 'channels_last')
    out2 = utils.preprocess_input(np.transpose(x, (0, 3, 1, 2)),
                                  'channels_first')
    out2int = utils.preprocess_input(np.transpose(xint, (0, 3, 1, 2)),
                                     'channels_first')
    assert_allclose(out1, out2.transpose(0, 2, 3, 1))
    assert_allclose(out1int, out2int.transpose(0, 2, 3, 1))
    
    
def test_cifar():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = cifar10.load_data()
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('fine')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('coarse')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
    
    
def normalize(x, axis=-1, order=2):
    '''Normalizes a Numpy array.
    
        all_outputs = []
    for i in range(len(model.outputs)):
        all_outputs.append([])
    
    # convert class vectors to binary class matrices
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
    
    x = Conv2DTranspose(filters=1,
                    kernel_size=kernel_size,
                    padding='same')(x)
    
    
def binary_crossentropy(y_true, y_pred):
    return K.mean(K.binary_crossentropy(y_true, y_pred), axis=-1)
    
            if row1 == row2:
            plaintext += table[row1*5+(col1-1)%5]
            plaintext += table[row2*5+(col2-1)%5]
        elif col1 == col2:
            plaintext += table[((row1-1)%5)*5+col1]
            plaintext += table[((row2-1)%5)*5+col2]
        else: # rectangle
            plaintext += table[row1*5+col2]
            plaintext += table[row2*5+col1]
    
            next_prime_gt = next_prime(value % self.size_table) \
            if not check_prime(value % self.size_table) else value % self.size_table  #gt = bigger than
        return next_prime_gt - (data % next_prime_gt)
    
        def _colision_resolution(self, key, data=None):
        i = 1
        new_key = self.hash_function(key + i*i)
    
    This is a pure Python implementation of Dynamic Programming solution to the longest_sub_array problem.
    
    #Mean Bias Deviation
def mbd(predict, actual):
    predict = np.array(predict)
    actual = np.array(actual)
    
        return res
    
            a += a
        b >>= 1
    
    from certbot_apache import constants
    
            self.addr1 = Addr.fromstring('127.0.0.1')
        self.addr2 = Addr.fromstring('127.0.0.1:443')
        self.addr_default = Addr.fromstring('_default_:443')
    
    
# -- Options for LaTeX output ---------------------------------------------
    
    
Examples
--------
    
        # Display the results
    for top, right, bottom, left in face_locations:
        # Scale back up face locations since the frame we detected in was scaled to 1/4 size
        top *= 4
        right *= 4
        bottom *= 4
        left *= 4
    
        function_parameters = zip(
        images_to_check,
        itertools.repeat(model),
    )
    
    # Open the input movie file
input_movie = cv2.VideoCapture('hamilton_clip.mp4')
length = int(input_movie.get(cv2.CAP_PROP_FRAME_COUNT))
    
        if len(unknown_face_encodings) > 0:
        face_found = True
        # 看看图片中的第一张脸是不是奥巴马
        match_results = face_recognition.compare_faces([known_face_encoding], unknown_face_encodings[0])
        if match_results[0]:
            is_obama = True
    
        # Start to show video
    last_num = 1
    fps_list = []
    tmp_time = time.time()
    while not Global.is_exit:
        while Global.write_num != last_num:
            last_num = int(Global.write_num)
    
    
def process_code(read_filehandle, text_filehandle, line, linenum, sourcefile, codedir, name, index, indent_depth):
    fenced = (line.strip() == '```')
    if fenced:
        try:
            line = read_filehandle.next()
            linenum += 1
            text_filehandle.write('\n')
        except StopIteration:
            return ('', linenum)
    start_linenum = linenum
    has_actual_code = False
    has_question_marks = False
    linebuffer = []
    while ((fenced and line.strip() != '```') or (not fenced and is_inside_code(line, indent_depth))):
        # copy comments to plain text for spell check
        comment_idx = line.find('//')
        no_comment_line = line
        if comment_idx >= 0:
            no_comment_line = line[:comment_idx].strip()
            text_filehandle.write(line[comment_idx + 2:])
        else:
            # write empty line so line numbers stay stable
            text_filehandle.write('\n')
    
            # Adding model 'DSymApp'
        db.create_table(
            'sentry_dsymapp', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), ('app_id', self.gf('django.db.models.fields.CharField')(max_length=64)),
                ('sync_id', self.gf('django.db.models.fields.CharField')(max_length=64, null=True)),
                ('data', self.gf('jsonfield.fields.JSONField')(default={})), (
                    'platform',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(
                        default=0
                    )
                ), (
                    'last_synced',
                    self.gf('django.db.models.fields.DateTimeField')()
                ), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['DSymApp'])