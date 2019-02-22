
        
            with open(FISH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    filled_template = template.replace('{{commands}}', '\n'.join(commands))
    with open(FISH_COMPLETION_FILE, 'w') as f:
        f.write(filled_template)
    
    password = key + 16 * [0]
new_key = aes_encrypt(password, key_expansion(password)) * (32 // 16)
r = openssl_encode('aes-256-ctr', new_key, iv)
print('aes_decrypt_text 32')
print(repr(r))

    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    
# Import youtube_dl
ROOT_DIR = os.path.join(os.path.dirname(__file__), '..')
sys.path.insert(0, ROOT_DIR)
import youtube_dl
    
    import os
from os.path import dirname as dirn
import sys
    
    # Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']
    
        def test_youporn(self):
        self._assert_restricted(
            'http://www.youporn.com/watch/505835/sex-ed-is-it-safe-to-masturbate-daily/',
            '505835.mp4', 2, old_age=25)
    
    
class TestDownload(unittest.TestCase):
    # Parallel testing in nosetests. See
    # http://nose.readthedocs.org/en/latest/doc_tests/test_multiprocess/multiprocess.html
    _multiprocess_shared_ = True
    
        @app.route('/hello')
    def hello():
        return 'Hello, World!'
    
    import click
from flask import current_app, g
from flask.cli import with_appcontext
    
            :param name: the optional name of the test, otherwise the
                     function name will be used.
        '''
        def decorator(f):
            self.add_app_template_test(f, name=name)
            return f
        return decorator
    
    
def git_is_clean():
    return Popen(['git', 'diff', '--quiet']).wait() == 0
    
        # make sure we're not leaking a request context since we are
    # testing flask internally in debug mode in a few cases
    leaks = []
    while flask._request_ctx_stack.top is not None:
        leaks.append(flask._request_ctx_stack.pop())
    assert leaks == []
    
    
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
    
        def __init__(self, *args, **kwargs):
        '''Initialize RequestException with `request` and `response` objects.'''
        response = kwargs.pop('response', None)
        self.response = response
        self.request = kwargs.pop('request', None)
        if (response is not None and not self.request and
                hasattr(response, 'request')):
            self.request = self.response.request
        super(RequestException, self).__init__(*args, **kwargs)
    
    Available hooks:
    
    
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
    
    # If true, `todo` and `todoList` produce output, else they produce nothing.
todo_include_todos = True
    
        return merge_setting(request_hooks, session_hooks, dict_class)
    
        By default this will get the strings from the blns.txt file
    
    
ALL_SSL_OPTIONS_HASHES = [
    '0f81093a1465e3d4eaa8b0c14e77b2a2e93568b0fc1351c2b87893a95f0de87c',
    '9a7b32c49001fed4cff8ad24353329472a50e86ade1ef9b2b9e43566a619612e',
    'a6d9f1c7d6b36749b52ba061fff1421f9a0a3d2cfdafbd63c05d06f65b990937',
    '7f95624dd95cf5afc708b9f967ee83a24b8025dc7c8d9df2b556bbc64256b3ff',
    '394732f2bbe3e5e637c3fb5c6e980a1f1b90b01e2e8d6b7cff41dde16e2a756d',
    '4b16fec2bcbcd8a2f3296d886f17f9953ffdcc0af54582452ca1e52f5f776f16',
]
'''SHA256 hashes of the contents of all versions of MOD_SSL_CONF_SRC'''
    
        def setUp(self):
        from acme.errors import BadNonce
        self.error = BadNonce(nonce='xxx', error='error')
    
        def test_default_decoder_raises_deserialization_error(self):
        from acme.fields import RFC3339Field
        self.assertRaises(
            jose.DeserializationError, RFC3339Field.default_decoder, '')
    
            :param str title: The title of the save. If a title is given, the
            configuration will be saved as a new checkpoint and put in a
            timestamped directory.
    
    HSTS_ARGS = ['always', 'set', 'Strict-Transport-Security',
             '\'max-age=31536000\'']
'''Apache header arguments for HSTS'''
    
        :ivar str filep: file path of VH
    :ivar str path: Augeas path to virtual host
    :ivar set addrs: Virtual Host addresses (:class:`set` of
        :class:`common.Addr`)
    :ivar str name: ServerName of VHost
    :ivar list aliases: Server aliases of vhost
        (:class:`list` of :class:`str`)
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)
    
    
>>> import weakref
>>> _id2obj_dict = weakref.WeakValueDictionary()
>>> def remember(obj):
...     oid = id(obj)
...     _id2obj_dict[oid] = obj
...     return oid
...
>>> def id2obj(oid):
...     return _id2obj_dict[oid]
...
>>> a = A()             # from here, just testing
>>> a_id = remember(a)
>>> id2obj(a_id) is a
True
>>> del a
>>> try:
...     id2obj(a_id)
... except KeyError:
...     print('OK')
... else:
...     print('WeakValueDictionary error')
OK
    
    def _cell_factory():
    a = 1
    def f():
        nonlocal a
    return f.__closure__[0]
CellType = type(_cell_factory())
    
            if len(words) >= 3:  # Enough to determine protocol version
            version = words[-1]
            try:
                if not version.startswith('HTTP/'):
                    raise ValueError
                base_version_number = version.split('/', 1)[1]
                version_number = base_version_number.split('.')
                # RFC 2145 section 3.1 says there can be only one '.' and
                #   - major and minor numbers MUST be treated as
                #      separate integers;
                #   - HTTP/2.4 is a lower version than HTTP/2.13, which in
                #      turn is lower than HTTP/12.3;
                #   - Leading zeros MUST be ignored by recipients.
                if len(version_number) != 2:
                    raise ValueError
                version_number = int(version_number[0]), int(version_number[1])
            except (ValueError, IndexError):
                self.send_error(
                    HTTPStatus.BAD_REQUEST,
                    'Bad request version (%r)' % version)
                return False
            if version_number >= (1, 1) and self.protocol_version >= 'HTTP/1.1':
                self.close_connection = False
            if version_number >= (2, 0):
                self.send_error(
                    HTTPStatus.HTTP_VERSION_NOT_SUPPORTED,
                    'Invalid HTTP version (%s)' % base_version_number)
                return False
            self.request_version = version
    
        # 'The specifier name is a ``dotted name'' that may resolve ... to
    # ... a callable object which returns a TestCase ... instance'
    def test_loadTestsFromName__callable__TestCase_instance(self):
        m = types.ModuleType('m')
        testcase_1 = unittest.FunctionTestCase(lambda: None)
        def return_TestCase():
            return testcase_1
        m.return_TestCase = return_TestCase
    
    
__all__ = [
        'EnumMeta',
        'Enum', 'IntEnum', 'Flag', 'IntFlag',
        'auto', 'unique',
        ]
    
        This handler is not appropriate for use under Windows, because
    under Windows open files cannot be moved or renamed - logging
    opens the files with exclusive locks - and so there is no need
    for such a handler. Furthermore, ST_INO is not supported under
    Windows; stat always returns zero for this value.
    
        Directories are *not* resources.
    '''
    package = _get_package(package)
    _normalize_path(name)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.is_resource(name)
    try:
        package_contents = set(contents(package))
    except (NotADirectoryError, FileNotFoundError):
        return False
    if name not in package_contents:
        return False
    # Just because the given file_name lives as an entry in the package's
    # contents doesn't necessarily mean it's a resource.  Directories are not
    # resources, so let's try to find out if it's a directory or not.
    path = Path(package.__spec__.origin).parent / name
    return path.is_file()
    
            proc = subprocess.run(args, stdout=subprocess.PIPE,
                              universal_newlines=True, env=env)
        self.assertEqual(proc.stdout.rstrip(), 'False')
        self.assertEqual(proc.returncode, 0, proc)
    
    # If true, SmartyPants will be used to convert quotes and dashes to
# typographically correct entities.
#html_use_smartypants = True
    
    test_face_landmarks = '''
landmarks = face_recognition.face_landmarks(image, face_locations=face_locations)[0]
'''
    
    for face_landmarks in face_landmarks_list:
    pil_image = Image.fromarray(image)
    d = ImageDraw.Draw(pil_image, 'RGBA')
    
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
    
        if len(unknown_face_encodings) > 0:
        face_found = True
        # See if the first face in the uploaded image matches the known face of Obama
        match_results = face_recognition.compare_faces([known_face_encoding], unknown_face_encodings[0])
        if match_results[0]:
            is_obama = True
    
        :param img: A list of images (each as a numpy array)
    :param number_of_times_to_upsample: How many times to upsample the image looking for faces. Higher numbers find smaller faces.
    :return: A list of dlib 'rect' objects of found face locations
    '''
    return cnn_face_detector(images, number_of_times_to_upsample, batch_size=batch_size)
    
    
def print_result(filename, name, distance, show_distance=False):
    if show_distance:
        print('{},{},{}'.format(filename, name, distance))
    else:
        print('{},{}'.format(filename, name))