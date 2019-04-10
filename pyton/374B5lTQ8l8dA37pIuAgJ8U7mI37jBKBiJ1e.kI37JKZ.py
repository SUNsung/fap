
        
          Args:
    cm: The confusion matrix.
    labels: The class names.
  '''
  columnwidth = 10
  empty_cell = ' ' * columnwidth
  short_labels = [label[:12].rjust(10, ' ') for label in labels]
    
    # Note that the dimension of the initial conditions is separated from the
# dimensions of the generator initial conditions (and a linear matrix will
# adapt the shapes if necessary).  This is just another way to control
# complexity.  In all likelihood, setting the ic dims to the size of the
# generator hidden state is just fine.
flags.DEFINE_integer('ic_dim', IC_DIM, 'Dimension of h0')
# Setting the dimensions of the factors to something smaller than the data
# dimension is a way to get a reduced dimensionality representation of your
# data.
flags.DEFINE_integer('factors_dim', FACTORS_DIM,
                     'Number of factors from generator')
flags.DEFINE_integer('ic_enc_dim', IC_ENC_DIM,
                     'Cell hidden size, encoder of h0')
    
      # Note that we put these 'truth' rates and input into this
  # structure, the only data that is used in LFADS are the noisy
  # data e.g. spike trains.  The rest is either for printing or posterity.
  data = {'train_truth': rates_train,
          'valid_truth': rates_valid,
          'input_train_truth' : input_train,
          'input_valid_truth' : inputs_valid,
          'train_data' : noisy_data_train,
          'valid_data' : noisy_data_valid,
          'train_percentage' : train_percentage,
          'nreplications' : nreplications,
          'dt' : rnn['dt'],
          'input_magnitude' : input_magnitude,
          'input_times_train' : input_times_train,
          'input_times_valid' : input_times_valid,
          'P_sxn' : P_sxn,
          'condition_labels_train' : condition_labels_train,
          'condition_labels_valid' : condition_labels_valid,
          'conversion_factor': 1.0 / rnn['conversion_factor']}
  datasets[dataset_name] = data
    
    
def index_to_vocab_array(indices, vocab_size, sequence_length):
  '''Convert the indices into an array with vocab_size one-hot encoding.'''
    
    no_match_output = '''
Listing... Done
'''
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_match(brew_no_available_formula, brew_already_installed,
               brew_install_no_argument):
    assert match(Command('brew install elsticsearch',
                         brew_no_available_formula))
    assert not match(Command('brew install git',
                             brew_already_installed))
    assert not match(Command('brew install', brew_install_no_argument))
    
        def test_decode_bad(self):
        self.assertRaises(jose.DeserializationError, self.field.decode, 'y')
    
        @nonce.decoder
    def nonce(value):  # pylint: disable=missing-docstring,no-self-argument
        try:
            return jose.decode_b64jose(value)
        except jose.DeserializationError as error:
            # TODO: custom error
            raise jose.DeserializationError('Invalid nonce: {0}'.format(error))
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        pool.starmap(test_image, function_parameters)
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
    frame = frame[:, :, ::-1]
    
        def test_command_line_interface_big_image(self):
        target_string = 'obama3.jpg,obama'
        runner = CliRunner()
        image_folder = os.path.join(os.path.dirname(__file__), 'test_images')
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama3.jpg')
    
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
