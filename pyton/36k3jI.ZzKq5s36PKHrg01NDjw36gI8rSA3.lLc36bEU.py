
        
        
class SpendingByCategory(MRJob):
    
    
class DefaultCategories(Enum):
    
        def create_signature(self):
        # Create signature based on url and contents
        pass
    
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
    
        infile, outfile = args
    
    sys.path.insert(0, dirn(dirn((os.path.abspath(__file__)))))
import youtube_dl
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
    
from test.helper import FakeYDL
from youtube_dl.cache import Cache
    
        def test_allsubtitles(self):
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertEqual(set(subtitles.keys()), set(['it']))
        self.assertEqual(md5(subtitles['it']), 'b1d90a98755126b61e667567a1f6680a')
    
        def format_headers(self, headers):
        for p in self.enabled_plugins:
            headers = p.format_headers(headers)
        return headers
    
        def __iter__(self):
        '''Return an iterator over `self.msg`.'''
        if self.with_headers:
            yield self.get_headers()
            yield b'\r\n\r\n'
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
            def get_auth(self, username=None, password=None):
            assert self.raw_auth is None
            assert username is None
            assert password is None
            return basic_auth()
    
    import pytest
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        def test_request_body_from_file_by_path_no_data_items_allowed(
            self, httpbin):
        env = MockEnvironment(stdin_isatty=False)
        r = http('POST', httpbin.url + '/post', '@' + FILE_PATH_ARG, 'foo=bar',
                 env=env, error_exit_ok=True)
        assert 'cannot be mixed' in r.stderr

    
    alpha = 0.1
# alpha = 0.01
    
    
def benchmark(estimator, data):
    gc.collect()
    print('Benching %s' % estimator)
    t0 = time()
    estimator.fit(data)
    training_time = time() - t0
    data_t = estimator.transform(data)
    data_r = estimator.inverse_transform(data_t)
    reconstruction_error = np.mean(np.abs(data - data_r))
    return {'time': training_time, 'error': reconstruction_error}
    
                tstart = time()
            clf.fit(X_train, y_train)
            sgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                      y_test)
            sgd_results[i, j, 1] = time() - tstart
    
    from sklearn.datasets import make_checkerboard
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralBiclustering
from sklearn.metrics import consensus_score
    
    # Create a graph capturing local connectivity. Larger number of neighbors
# will give more homogeneous clusters to the cost of computation
# time. A very large number of neighbors gives more evenly distributed
# cluster sizes, but may not impose the local manifold structure of
# the data
knn_graph = kneighbors_graph(X, 30, include_self=False)
    
    # Plot the ground truth
fig = plt.figure(fignum, figsize=(4, 3))
ax = Axes3D(fig, rect=[0, 0, .95, 1], elev=48, azim=134)
    
    import numpy as np
import matplotlib.pyplot as plt
    
        # TODO: decoder should check that nonce is in the protected header
    
            :raises .errors.PluginError: If there is a problem with the input or
            the function is unable to correctly revert the configuration
    
        @certbot_util.patch_get_utility()
    def test_select_correct(self, mock_util):
        mock_util().checklist.return_value = (
            display_util.OK, [self.vhosts[3].display_repr(),
                              self.vhosts[2].display_repr()])
        vhs = select_vhost_multiple([self.vhosts[3],
                                     self.vhosts[2],
                                     self.vhosts[1]])
        self.assertTrue(self.vhosts[2] in vhs)
        self.assertTrue(self.vhosts[3] in vhs)
        self.assertFalse(self.vhosts[1] in vhs)
    
    # If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
sys.path.insert(0, os.path.abspath(os.path.join(here, '..')))
    
    .. code-block:: bash
   :caption: To acquire a certificate for ``example.com``, waiting 60 seconds
             for DNS propagation
    
    # The suffix(es) of source filenames.
# You can specify multiple suffix as a list of string:
#
# source_suffix = ['.rst', '.md']
source_suffix = '.rst'
    
        def test___code__(self):
        num_one, num_two = 7, 8
        def a(): pass
        def b(): return 12
        def c(): return num_one
        def d(): return num_two
        def e(): return num_one, num_two
        for func in [a, b, c, d, e]:
            self.assertEqual(type(func.__code__), types.CodeType)
        self.assertEqual(c(), 7)
        self.assertEqual(d(), 8)
        d.__code__ = c.__code__
        self.assertEqual(c.__code__, d.__code__)
        self.assertEqual(c(), 7)
        # self.assertEqual(d(), 7)
        try:
            b.__code__ = c.__code__
        except ValueError:
            pass
        else:
            self.fail('__code__ with different numbers of free vars should '
                      'not be possible')
        try:
            e.__code__ = d.__code__
        except ValueError:
            pass
        else:
            self.fail('__code__ with different numbers of free vars should '
                      'not be possible')
    
        def test_get(self):
        self.con = http.client.HTTPConnection(self.HOST, self.PORT)
        self.con.connect()
    
            suite = loader.loadTestsFromName('sdasfasfasdf')
        expected = 'No module named 'sdasfasfasdf''
        error, test = self.check_deferred_error(loader, suite)
        self.assertIn(
            expected, error,
            'missing error string in %r' % error)
        self.assertRaisesRegex(ImportError, expected, test.sdasfasfasdf)
    
        def _FunctionDef(self, t):
        self.__FunctionDef_helper(t, 'def')
    
    
# Does a path exist?
# This is false for dangling symbolic links on systems that support them.
def exists(path):
    '''Test whether a path exists.  Returns False for broken symbolic links'''
    try:
        os.stat(path)
    except (OSError, ValueError):
        return False
    return True
    
        If the resulting string contains path separators, an exception is raised.
    '''
    parent, file_name = os.path.split(path)
    if parent:
        raise ValueError('{!r} must be only a file name'.format(path))
    else:
        return file_name
    
    from email.policy import default
    
        # Create queues
    task_queue = Queue()
    done_queue = Queue()
    
    for i, face_distance in enumerate(face_distances):
    print('The test image has a distance of {:.2} from known image #{}'.format(face_distance, i))
    print('- With a normal cutoff of 0.6, would the test image match the known image? {}'.format(face_distance < 0.6))
    print('- With a very strict cutoff of 0.5, would the test image match the known image? {}'.format(face_distance < 0.5))
    print()

    
        # Write the resulting image to the output video file
    print('Writing frame {} / {}'.format(frame_number, length))
    output_movie.write(frame)
    
    # Get a reference to the Raspberry Pi camera.
# If this fails, make sure you have a camera connected to the RPi and that you
# enabled your camera in raspi-config and rebooted first.
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)
    
    setup(
    name='face_recognition',
    version='1.2.3',
    description='Recognize faces from Python or from the command line',
    long_description=readme + '\n\n' + history,
    author='Adam Geitgey',
    author_email='ageitgey@gmail.com',
    url='https://github.com/ageitgey/face_recognition',
    packages=[
        'face_recognition',
    ],
    package_dir={'face_recognition': 'face_recognition'},
    package_data={
        'face_recognition': ['models/*.dat']
    },
    entry_points={
        'console_scripts': [
            'face_recognition=face_recognition.face_recognition_cli:main',
            'face_detection=face_recognition.face_detection_cli:main'
        ]
    },
    install_requires=requirements,
    license='MIT license',
    zip_safe=False,
    keywords='face_recognition',
    classifiers=[
        'Development Status :: 4 - Beta',
        'Intended Audience :: Developers',
        'License :: OSI Approved :: MIT License',
        'Natural Language :: English',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.6',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
    ],
    test_suite='tests',
    tests_require=test_requirements
)

    
    import face_recognition
import picamera
import numpy as np
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
        :param file: image file name or file object to load
    :param mode: format to convert the image to. Only 'RGB' (8-bit RGB, 3 channels) and 'L' (black and white) are supported.
    :return: image contents as numpy array
    '''
    im = PIL.Image.open(file)
    if mode:
        im = im.convert(mode)
    return np.array(im)
    
        # Global variables
    Global = Manager().Namespace()
    Global.buff_num = 1
    Global.read_num = 1
    Global.write_num = 1
    Global.frame_delay = 0
    Global.is_exit = False
    read_frame_list = Manager().dict()
    write_frame_list = Manager().dict()
    
    # Load an image with an unknown face
unknown_image = face_recognition.load_image_file('two_people.jpg')