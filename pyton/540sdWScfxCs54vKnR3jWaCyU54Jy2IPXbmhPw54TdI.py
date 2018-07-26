
        
          # Lookahead LSTM reads right-to-left to represent the rightmost context of the
  # words. It gets word embeddings from the char model.
  lookahead = spec_builder.ComponentSpecBuilder('lookahead')
  lookahead.set_network_unit(
      name='wrapped_units.LayerNormBasicLSTMNetwork',
      hidden_layer_sizes='256')
  lookahead.set_transition_system(name='shift-only', left_to_right='false')
  lookahead.add_link(source=char2word, fml='input.last-char-focus',
                     embedding_dim=64)
    
    tf_kernel_library(
    name = 'dragnn_bulk_op_kernels',
    srcs = [
        'ops/dragnn_bulk_op_kernels.cc',
        'ops/dragnn_bulk_ops.cc',
    ],
    hdrs = [
    ],
    deps = [
        ':compute_session',
        ':compute_session_op',
        ':compute_session_pool',
        ':resource_container',
        ':shape_helpers',
        '//dragnn/components/util:bulk_feature_extractor',
        '//dragnn/core/util:label',
        '//dragnn/protos:spec_proto_cc',
        '//syntaxnet:base',
        '@org_tensorflow//tensorflow/core:protos_all_cc',
        '@org_tensorflow//third_party/eigen3',
    ],
)
    
      The digraph is 'unlabeled' in that there is at most one arc between any pair
  of tokens.  If labels are required, the BiaffineLabelNetwork can be used to
  label a set of selected arcs.
    
        correct, total = tf.constant(0), tf.constant(0)
    return state.handle, cost, correct, total
    
      Computing the gradient of the log partition function requires inverting the
  Laplacian matrix.  Numerical issues may occur if the Laplacian is singular or
  nearly-so.  (Intuitively, the Laplacian will be close to singular when the
  input scores strongly favor invalid structures such as cycles).  In the EMNLP
  paper, we alleviated the numerical issues by clipping the difference between
  the minimum and maximum score for each node to 20 (in the log domain).  The
  |max_dynamic_range| argument can be used for this purpose.
    
        # The name of the plugin, eg. 'My auth'.
    name = None
    
    ssl.add_argument(
    '--cert-key',
    default=None,
    type=readable_file_arg,
    help='''
    The private key to use with SSL. Only needed if --cert is given and the
    certificate file does not contain the private key.
    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
        def test_binary_stdin(self, httpbin):
        with open(BIN_FILE_PATH, 'rb') as stdin:
            env = MockEnvironment(
                stdin=stdin,
                stdin_isatty=False,
                stdout_isatty=False
            )
            r = http('--print=B', 'POST', httpbin.url + '/post', env=env)
            assert r == BIN_FILE_CONTENT
    
    
@click.command()
@click.argument('catalog_file', type=click.Path())
def cli(catalog_file):
    # Read the old ones back.  Once we are in, we will never go.
    with open(catalog_file) as f:
        rv = json.load(f)['supported_locales']
    
    from __future__ import print_function
    
        def test_dog_greek_localization(self):
        self.assertEqual(self.g.get('dog'), 'σκύλος')
    
        def tearDown(self):
        self.out.close()
        sys.stdout = self.saved_stdout
    
    from dft.parameter_injection import TimeDisplay, MidnightTimeProvider, ProductionCodeTimeProvider, datetime
    
            return transaction
    
    # Load a test image and get encondings for it
image_to_test = face_recognition.load_image_file('obama2.jpg')
image_to_test_encoding = face_recognition.face_encodings(image_to_test)[0]
    
    # Loop through each face found in the unknown image
for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
    # See if the face is a match for the known face(s)
    matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
    
            if True in result:
            [print_result(image_to_check, name, distance, show_distance) for is_match, name, distance in zip(result, known_names, distances) if is_match]
        else:
            print_result(image_to_check, 'unknown_person', None, show_distance)
    
    
def test_image(image_to_check, model):
    unknown_image = face_recognition.load_image_file(image_to_check)
    face_locations = face_recognition.face_locations(unknown_image, number_of_times_to_upsample=0, model=model)
    
    setup(
    name='face_recognition',
    version='1.2.2',
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

    
        :param faces: List of face encodings to compare
    :param face_to_compare: A face encoding to compare against
    :return: A numpy ndarray with the distance for each face in the same order as the 'faces' array
    '''
    if len(face_encodings) == 0:
        return np.empty((0))