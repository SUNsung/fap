    with gzip.open(paths[2], 'rb') as lbpath:
        y_test = np.frombuffer(lbpath.read(), np.uint8, offset=8)
    
        # Arguments
        dense: The target `Dense` layer.
        previous_feature_map_shape: A shape tuple of 3 integers,
            e.g. `(512, 7, 7)`. The shape of the convolutional
            feature map right before the `Flatten` layer that
            came before the target `Dense` layer.
        target_data_format: One of 'channels_last', 'channels_first'.
            Set it 'channels_last'
            if converting a 'channels_first' model to 'channels_last',
            or reciprocally.
    '''
    assert target_data_format in {'channels_last', 'channels_first'}
    kernel, bias = dense.get_weights()
    for i in range(kernel.shape[1]):
        if target_data_format == 'channels_first':
            c, h, w = previous_feature_map_shape
            original_fm_shape = (h, w, c)
            ki = kernel[:, i].reshape(original_fm_shape)
            ki = np.transpose(ki, (2, 0, 1))  # last -> first
        else:
            h, w, c = previous_feature_map_shape
            original_fm_shape = (c, h, w)
            ki = kernel[:, i].reshape(original_fm_shape)
            ki = np.transpose(ki, (1, 2, 0))  # first -> last
        kernel[:, i] = np.reshape(ki, (np.prod(previous_feature_map_shape),))
    dense.set_weights([kernel, bias])
    
    
def test_imdb():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = imdb.load_data()
        (x_train, y_train), (x_test, y_test) = imdb.load_data(maxlen=40)
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
        word_index = imdb.get_word_index()
        assert isinstance(word_index, dict)
    
        # Example
    
        # Merge outputs under expected scope.
    with tf.device('/cpu:0' if cpu_merge else '/gpu:%d' % target_gpu_ids[0]):
        merged = []
        for name, outputs in zip(output_names, all_outputs):
            merged.append(concatenate(outputs,
                                      axis=0, name=name))
        return Model(model.inputs, merged)

    
        def build(self, input_shape):
        super(CuDNNLSTM, self).build(input_shape)
        if isinstance(input_shape, list):
            input_shape = input_shape[0]
        input_dim = input_shape[-1]
    
        author = proj_info['author'],
    author_email = proj_info['author_email'],
    url = proj_info['url'],
    license = proj_info['license'],
    
            link_list = self.get_streams_by_id(account_number, video_id)
    
    def ehow_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
	
	assert re.search(r'http://www.ehow.com/video_', url), 'URL you entered is not supported'
    
    # Find all facial features in all the faces in the image
face_landmarks_list = face_recognition.face_landmarks(image)
    
    for i, face_distance in enumerate(face_distances):
    print('The test image has a distance of {:.2} from known image #{}'.format(face_distance, i))
    print('- With a normal cutoff of 0.6, would the test image match the known image? {}'.format(face_distance < 0.6))
    print('- With a very strict cutoff of 0.5, would the test image match the known image? {}'.format(face_distance < 0.5))
    print()

    
            # Display results overlaid on an image
        show_prediction_labels_on_image(os.path.join('knn_examples/test', image_file), predictions)

    
    # Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find_faces_in_picture_cnn.py
face_locations = face_recognition.face_locations(image)
    
    
def test_image(image_to_check, model):
    unknown_image = face_recognition.load_image_file(image_to_check)
    face_locations = face_recognition.face_locations(unknown_image, number_of_times_to_upsample=0, model=model)
    
            # If a match was found in known_face_encodings, just use the first one.
        if True in matches:
            first_match_index = matches.index(True)
            name = known_face_names[first_match_index]
    
        # Scale down image if it's giant so things run a little faster
    if max(unknown_image.shape) > 1600:
        pil_img = PIL.Image.fromarray(unknown_image)
        pil_img.thumbnail((1600, 1600), PIL.Image.LANCZOS)
        unknown_image = np.array(pil_img)
    
    # Create a PIL imagedraw object so we can draw on the picture
pil_image = Image.fromarray(image)
d = ImageDraw.Draw(pil_image)