
        
        
@bp.route('/create', methods=('GET', 'POST'))
@login_required
def create():
    '''Create a new post for the current user.'''
    if request.method == 'POST':
        title = request.form['title']
        body = request.form['body']
        error = None
    
        # login request set the user_id in the session
    # check that the user is loaded from the session
    with client:
        client.get('/')
        assert session['user_id'] == 1
        assert g.user['username'] == 'test'
    
        with app.app_context():
        db = get_db()
        count = db.execute('SELECT COUNT(id) FROM post').fetchone()[0]
        assert count == 2
    
    
class FormDataRoutingRedirect(AssertionError):
    '''This exception is raised by Flask in debug mode if it detects a
    redirect caused by the routing system when the request method is not
    GET, HEAD or OPTIONS.  Reasoning: form data will be dropped.
    '''
    
            url = url_parse(path)
        base_url = '{scheme}://{netloc}/{path}'.format(
            scheme=url.scheme or url_scheme,
            netloc=url.netloc or http_host,
            path=app_root.lstrip('/')
        )
        path = url.path
    
        When you want to decorate a pluggable view you will have to either do that
    when the view function is created (by wrapping the return value of
    :meth:`as_view`) or you can use the :attr:`decorators` attribute::
    
    
@pytest.fixture
def purge_module(request):
    def inner(name):
        request.addfinalizer(lambda: sys.modules.pop(name, None))
    
    tensorboard = TensorBoard(batch_size=batch_size,
                          embeddings_freq=1,
                          embeddings_layer_names=['features'],
                          embeddings_metadata='metadata.tsv',
                          embeddings_data=x_test)
    
        with gzip.open(paths[1], 'rb') as imgpath:
        x_train = np.frombuffer(imgpath.read(), np.uint8,
                                offset=16).reshape(len(y_train), 28, 28)
    
        y_a = K.variable(np.random.randint(0, 7, (6,)))
    y_b = K.variable(np.random.random((6, 7)))
    assert K.eval(losses.sparse_categorical_crossentropy(y_a, y_b)).shape == (6,)
    
            # allow cell (if layer) to build before we set or validate state_spec
        if isinstance(self.cell, Layer):
            step_input_shape = (input_shape[0],) + input_shape[2:]
            if constants_shape is not None:
                self.cell.build([step_input_shape] + constants_shape)
            else:
                self.cell.build(step_input_shape)
    
    x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
        return out
    
    # Warnings
    
    from .models import Response
from .compat import urlparse, basestring
from .utils import (DEFAULT_CA_BUNDLE_PATH, extract_zipped_paths,
                    get_encoding_from_headers, prepend_scheme_if_needed,
                    get_auth_from_url, urldefragauth, select_proxy)
from .structures import CaseInsensitiveDict
from .cookies import extract_cookies_to_jar
from .exceptions import (ConnectionError, ConnectTimeout, ReadTimeout, SSLError,
                         ProxyError, RetryError, InvalidSchema, InvalidProxyURL,
                         InvalidURL)
from .auth import _basic_auth_str
    
            if algorithm is None:
            _algorithm = 'MD5'
        else:
            _algorithm = algorithm.upper()
        # lambdas assume digest modules are imported at the top level
        if _algorithm == 'MD5' or _algorithm == 'MD5-SESS':
            def md5_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.md5(x).hexdigest()
            hash_utf8 = md5_utf8
        elif _algorithm == 'SHA':
            def sha_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha1(x).hexdigest()
            hash_utf8 = sha_utf8
        elif _algorithm == 'SHA-256':
            def sha256_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha256(x).hexdigest()
            hash_utf8 = sha256_utf8
        elif _algorithm == 'SHA-512':
            def sha512_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha512(x).hexdigest()
            hash_utf8 = sha512_utf8
    
        Requests does not use the dict interface internally; it's just for
    compatibility with external client code. All requests code should work
    out of the box with externally provided instances of ``CookieJar``, e.g.
    ``LWPCookieJar`` and ``FileCookieJar``.
    
        implementation_info = _implementation()
    urllib3_info = {'version': urllib3.__version__}
    chardet_info = {'version': chardet.__version__}
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        @pytest.mark.parametrize(
        'path', (
            '/',
            __file__,
            pytest.__file__,
            '/etc/invalid/location',
        ))
    def test_unzipped_paths_unchanged(self, path):
        assert path == extract_zipped_paths(path)
    
    Some codes have multiple names, and both upper- and lower-case versions of
the names are allowed. For example, ``codes.ok``, ``codes.OK``, and
``codes.okay`` all correspond to the HTTP status code 200.
'''
    
        def test_caught_exception(self):
        def f(p):
            try: 1/0
            except: pass
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident),
                              ])
    
        dotIndex = p.rfind(extsep)
    if dotIndex > sepIndex:
        # skip all leading dots
        filenameIndex = sepIndex + 1
        while filenameIndex < dotIndex:
            if p[filenameIndex:filenameIndex+1] != extsep:
                return p[:dotIndex], p[dotIndex:]
            filenameIndex += 1
    
        If the resource does not already exist on its own on the file system,
    a temporary file will be created. If the file was created, the file
    will be deleted upon exiting the context manager (no exception is
    raised if the file was deleted prior to the context manager
    exiting).
    '''
    resource = _normalize_path(resource)
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        try:
            yield Path(reader.resource_path(resource))
            return
        except FileNotFoundError:
            pass
    else:
        _check_location(package)
    # Fall-through for both the lack of resource_path() *and* if
    # resource_path() raises FileNotFoundError.
    package_directory = Path(package.__spec__.origin).parent
    file_path = package_directory / resource
    if file_path.exists():
        yield file_path
    else:
        with open_binary(package, resource) as fp:
            data = fp.read()
        # Not using tempfile.NamedTemporaryFile as it leads to deeper 'try'
        # blocks due to the need to close the temporary file to work on
        # Windows properly.
        fd, raw_path = tempfile.mkstemp()
        try:
            os.write(fd, data)
            os.close(fd)
            yield Path(raw_path)
        finally:
            try:
                os.remove(raw_path)
            except FileNotFoundError:
                pass
    
        @unittest.skipUnless(support.FS_NONASCII, 'need support.FS_NONASCII')
    def test_non_ascii(self):
        # Test handling of non-ascii data
        command = ('assert(ord(%r) == %s)'
                   % (support.FS_NONASCII, ord(support.FS_NONASCII)))
        assert_python_ok('-c', command)
    
    from email.message import EmailMessage
from email.policy import SMTP
    
        if not isinstance(value, Number):
        raise TypeError('{} is not of numeric type'.format(value))
    
    
    {    # Additional stuff for the LaTeX preamble.
    #'preamble': '',
}
    
        face_names = []
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces(known_faces, face_encoding, tolerance=0.50)
    
    # Load a sample picture and learn how to recognize it.
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
            # Now let's list all the faces we found in all 128 frames
        for frame_number_in_batch, face_locations in enumerate(batch_of_face_locations):
            number_of_faces_in_frame = len(face_locations)
    
    
# Remove the drawing library from memory as per the Pillow docs
del draw
    
    # 载入样本图片（奥巴马和拜登）
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
    
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
    
    
    
        in_channels = int(x.get_shape()[-1])
    kernel_shape = list(kernel_size) + [in_channels, in_channels]
    
    word_unk = 'aam'
ngrams = compute_ngrams(word_unk, min_ngrams, max_ngrams)  # min_ngrams, max_ngrams = 2, 4
word_vec = np.zeros(model.vector_size, dtype=np.float32)
ngrams_found = 0
for ngram in ngrams:
    ngram_hash = ft_hash(ngram) % model.bucket
    if ngram_hash in model.wv.hash2index:
        word_vec += model.wv.vectors_ngrams[model.wv.hash2index[ngram_hash]]
        ngrams_found += 1