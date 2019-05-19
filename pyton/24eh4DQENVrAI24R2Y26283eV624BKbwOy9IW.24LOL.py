
        
        index_title = 0
index_desc = 1
index_auth = 2
index_https = 3
index_cors = 4
index_link = 5
num_segments = 5
    
    
allobj = [losses.mean_squared_error,
          losses.mean_absolute_error,
          losses.mean_absolute_percentage_error,
          losses.mean_squared_logarithmic_error,
          losses.squared_hinge,
          losses.hinge,
          losses.categorical_crossentropy,
          losses.binary_crossentropy,
          losses.kullback_leibler_divergence,
          losses.poisson,
          losses.cosine_proximity,
          losses.logcosh,
          losses.categorical_hinge]
    
                    # Save the outputs for merging back together later.
                for o in range(len(outputs)):
                    all_outputs[o].append(outputs[o])
    
        # Note on using statefulness in RNNs
        You can set RNN layers to be 'stateful', which means that the states
        computed for the samples in one batch will be reused as initial states
        for the samples in the next batch. This assumes a one-to-one mapping
        between samples in different successive batches.
    
    x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
    print('\nNetwork 1 results')
print('Hyperparameters:', network1)
print('Test score:', score_model1[0])
print('Test accuracy:', score_model1[1])
print('Network 2 results')
print('Hyperparameters:', network2)
print('Test score:', score_model2[0])
print('Test accuracy:', score_model2[1])
    
    
def test_normalize_tuple():
    assert conv_utils.normalize_tuple(5, 2, 'kernel_size') == (5, 5)
    assert conv_utils.normalize_tuple([7, 9], 2, 'kernel_size') == (7, 9)
    
    # The encoding of source files.
#source_encoding = 'utf-8-sig'
    
    test_face_landmarks = '''
landmarks = face_recognition.face_landmarks(image, face_locations=face_locations)[0]
'''
    
            # Loop through each training image for the current person
        for img_path in image_files_in_folder(os.path.join(train_dir, class_dir)):
            image = face_recognition.load_image_file(img_path)
            face_bounding_boxes = face_recognition.face_locations(image)
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        # Bail out when the video file ends
    if not ret:
        break
    
    # Create a PIL imagedraw object so we can draw on the picture
pil_image = Image.fromarray(image)
d = ImageDraw.Draw(pil_image)
    
    # Find all the faces and face encodings in the unknown image
face_locations = face_recognition.face_locations(unknown_image)
face_encodings = face_recognition.face_encodings(unknown_image, face_locations)
    
    
def relu6(x):
    '''
    `o = min(max(x, 0), 6)`
    '''
    return tf.nn.relu6(x)
    
    import tensorflow as tf
    
    l2_regularizer = L1L2Regularizer(l2=0.01)
    
    # 因为 'a', 'aa', 'aaa' 中都只含有 '<a' ，所以它们直积上都只是 '<a'
print(model.wv['a'])
print(model.wv['aa'])
print(model.wv['aaa'])
print(model.wv['<a'])
'''
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
'''
print()
    
                The 'fixed' parameter is only for training configs. Training configurations
            are set when the model is created, and then reloaded from the state file.
            Marking an item as fixed=False indicates that this value can be changed for
            existing models, and will overide the value saved in the state file with the
            updated value in config.
    
            warped_image, warped_mask = self.separate_mask(warped_image)
        target_image, target_mask = self.separate_mask(target_image)
    
            insertion = np.rint(new_face[y_crop, x_crop] * 255.0).astype('uint8')
        insertion_mask = np.rint(raw_mask[y_crop, x_crop] * 255.0).astype('uint8')
        insertion_mask[insertion_mask != 0] = 255
        prior = np.rint(np.pad(old_face * 255.0,
                               ((height, height), (width, width), (0, 0)),
                               'constant')).astype('uint8')
    
        def pre_encode(self, image):
        logger.trace('Pre-encoding image')
        fmt = self.format_dict.get(self.config['format'], None)
        fmt = self.config['format'].upper() if fmt is None else fmt
        encoded = BytesIO()
        rgb = [2, 1, 0]
        if image.shape[2] == 4:
            rgb.append(3)
        out_image = Image.fromarray(image[..., rgb])
        out_image.save(encoded, fmt, **self.kwargs)
        encoded.seek(0)
        return encoded
    
            # << LIGHTWEIGHT MODEL OPTIONS >> #
        section = 'model.lightweight'
        self.add_section(title=section,
                         info='A lightweight version of the Original Faceswap Model, designed to '
                              'run on lower end GPUs (~2GB).\nDon't expect great results, but it '
                              'allows users with lower end cards to play with the '
                              'software.' + ADDITIONAL_INFO)
        self.add_item(
            section=section, title='mask_type', datatype=str, default='none',
            choices=MASK_TYPES, info=MASK_INFO)
        self.add_item(
            section=section, title='coverage', datatype=float, default=62.5, rounding=1,
            min_max=(62.5, 100.0), info=COVERAGE_INFO)
    
            self.state = State(self.model_dir,
                           self.name,
                           self.config_changeable_items,
                           no_logs,
                           pingpong,
                           training_image_size)
        self.is_legacy = False
        self.rename_legacy()
        self.load_state_info()
    
            _inputs = {input_.path: _input_opts}
        _outputs = {output.path: _output_opts}
        Effmpeg.__run_ffmpeg(exe=exe, inputs=_inputs, outputs=_outputs)
    
        The roulette wheel has 37 spots. If the bet is 0 and a 0 comes up,
    you win a reward of 35. If the parity of your bet matches the parity
    of the spin, you win 1. Otherwise you receive a reward of -1.
    
        def step(self, dt):
        for w in self.wheels:
            # Steer each wheel
            dir = np.sign(w.steer - w.joint.angle)
            val = abs(w.steer - w.joint.angle)
            w.joint.motorSpeed = dir*min(50.0*val, 3.0)