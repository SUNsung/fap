
        
        
class TaggedJSONSerializer(object):
    '''Serializer that uses a tag system to compactly represent objects that
    are not JSON types. Passed as the intermediate serializer to
    :class:`itsdangerous.Serializer`.
    
            app.add_url_rule('/hello/<name>', view_func=MyView.as_view('myview'))
    
    
def parse_changelog():
    with open('CHANGES.rst') as f:
        lineiter = iter(f)
        for line in lineiter:
            match = re.search('^Version\s+(.*)', line.strip())
    
        Tests the request context.
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    print('Convert class vector to binary class matrix '
      '(for use with categorical_crossentropy)')
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
print('y_train shape:', y_train.shape)
print('y_test shape:', y_test.shape)
    
    
def test_softplus():
    '''Test using a reference softplus implementation.
    '''
    def softplus(x):
        return np.log(np.ones_like(x) + np.exp(x))
    
                    layer = convolutional_recurrent.ConvLSTM2D(**kwargs)
                layer.build(inputs.shape)
                assert len(layer.losses) == 3
                assert layer.activity_regularizer
                output = layer(K.variable(np.ones(inputs.shape)))
                assert len(layer.losses) == 4
                K.eval(output)
    
        toplot = track2[i, ::, ::, 0]
    if i >= 2:
        toplot = shifted_movies[which][i - 1, ::, ::, 0]
    
        fpath = os.path.join(path, 'train')
    x_train, y_train = load_batch(fpath, label_key=label_mode + '_labels')
    
        def test_car_adapter_shall_make_very_loud_noise(self):
        car = Car()
        car_adapter = Adapter(car, make_noise=car.make_noise)
        noise = car_adapter.make_noise(10)
        expected_noise = 'vroom!!!!!!!!!!'
    
        def test_b_observers_shall_be_attachable(cls):
        cls.s.attach(cls.dec_obs)
        cls.assertEqual(isinstance(cls.s._observers[0], DecimalViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.attach(cls.hex_obs)
        cls.assertEqual(isinstance(cls.s._observers[1], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 2)
    
        def test_cat_greek_localization(self):
        self.assertEqual(self.g.get('cat'), 'γάτα')
    
        def tearDown(self):
        if not self._bProblem:
            print('Tearing down')
            time.sleep(0.1)
            self._tm.publishReport()
        else:
            print('Test not executed. No tear down required.')
    
        def update(self, subject):
        print(u'HexViewer: Subject %s has data 0x%x' %
              (subject.name, subject.data))
    
    
class Specification(object):
    
    # See how far apart the test image is from the known faces
face_distances = face_recognition.face_distance(known_encodings, image_to_test_encoding)
    
        # Apply some eyeliner
    d.line(face_landmarks['left_eye'] + [face_landmarks['left_eye'][0]], fill=(0, 0, 0, 110), width=6)
    d.line(face_landmarks['right_eye'] + [face_landmarks['right_eye'][0]], fill=(0, 0, 0, 110), width=6)
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        face_found = False
    is_obama = False
    
    # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title, author, documentclass
# [howto/manual]).
latex_documents = [
    ('index', 'face_recognition.tex',
     u'Face Recognition Documentation',
     u'Adam Geitgey', 'manual'),
]
    
    
def image_files_in_folder(folder):
    return [os.path.join(folder, f) for f in os.listdir(folder) if re.match(r'.*\.(jpg|jpeg|png)', f, flags=re.I)]
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')