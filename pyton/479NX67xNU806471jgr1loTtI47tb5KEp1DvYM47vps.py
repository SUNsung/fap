
        
        '''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
    cc_library(
    name = 'mst_ops_cc',
    srcs = [
        'ops/mst_op_kernels.cc',
        'ops/mst_ops.cc',
    ],
    deps = [
        ':mst_solver',
        '//syntaxnet:base',
        '@org_tensorflow//tensorflow/core:framework_headers_lib',
        '@org_tensorflow//tensorflow/core:lib',
    ],
    alwayslink = 1,
)

    
    py_test(
    name = 'transformer_units_test',
    size = 'small',
    srcs = ['transformer_units_test.py'],
    deps = [
        ':network_units',
        ':transformer_units',
        '//dragnn/core:dragnn_bulk_ops',
        '//dragnn/core:dragnn_ops',
        '//dragnn/protos:spec_pb2_py',
        '//syntaxnet:load_parser_ops_py',
        '@org_tensorflow//tensorflow:tensorflow_py',
        '@org_tensorflow//tensorflow/core:protos_all_py',
    ],
)
    
      def testConstantFixedFeaturesAreNotDifferentiableButOthersAre(self):
    component_spec = spec_pb2.ComponentSpec()
    text_format.Parse('''
        name: 'test'
        network_unit {
          registered_name: 'IdentityNetwork'
        }
        fixed_feature {
          name: 'constant' embedding_dim: 32 size: 1
          is_constant: true
          pretrained_embedding_matrix { part {} }
          vocab { part {} }
        }
        fixed_feature {
          name: 'trainable' embedding_dim: 32 size: 1
          pretrained_embedding_matrix { part {} }
          vocab { part {} }
        }
        component_builder {
          registered_name: 'bulk_component.BulkFeatureExtractorComponentBuilder'
        }
        ''', component_spec)
    comp = bulk_component.BulkFeatureExtractorComponentBuilder(
        self.master, component_spec)
    
    while True:
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
            name = 'Unknown'
    
    # Create arrays of known face encodings and their names
known_face_encodings = [
    obama_face_encoding,
    biden_face_encoding
]
known_face_names = [
    'Barack Obama',
    'Joe Biden'
]
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
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

    
        def test_fd_command_line_interface_hog_model(self):
        target_string = 'obama.jpg'
        runner = CliRunner()
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg')