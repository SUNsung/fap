
        
            y_train = np.reshape(y_train, (len(y_train), 1))
    y_test = np.reshape(y_test, (len(y_test), 1))
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    
        # Place a copy of the model on each GPU,
    # each getting a slice of the inputs.
    for i, gpu_id in enumerate(target_gpu_ids):
        with tf.device('/gpu:%d' % gpu_id):
            with tf.name_scope('replica_%d' % gpu_id):
                inputs = []
                # Retrieve a slice of the input.
                for x in model.inputs:
                    # In-place input splitting which is not only
                    # 5% ~ 12% faster but also less GPU memory
                    # duplication.
                    with tf.device(x.device):
                        input_shape = K.int_shape(x)[1:]
                        slice_i = Lambda(get_slice,
                                         output_shape=input_shape,
                                         arguments={'i': i,
                                                    'parts': num_gpus})(x)
                        inputs.append(slice_i)
    
            i = self.recurrent_activation(x_i + h_i)
        f = self.recurrent_activation(x_f + h_f)
        c = f * c_tm1 + i * self.activation(x_c + h_c)
        o = self.recurrent_activation(x_o + h_o)
        h = o * self.activation(c)
    
    x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
    # Model creation using tensors from the get_next() graph node.
inputs, targets = iterator.get_next()
model_input = layers.Input(tensor=inputs)
model_output = cnn_layers(model_input)
train_model = keras.models.Model(inputs=model_input, outputs=model_output)
    
    - Klambauer, G., Unterthiner, T., Mayr, A., & Hochreiter, S. (2017).
  Self-Normalizing Neural Networks. arXiv preprint arXiv:1706.02515.
  https://arxiv.org/abs/1706.02515
'''
from __future__ import print_function
    
            # Create flat baselines to compare the variation over batch size
        all_times['pca'].extend([results_dict['pca']['time']] *
                                len(batch_sizes))
        all_errors['pca'].extend([results_dict['pca']['error']] *
                                 len(batch_sizes))
        all_times['rpca'].extend([results_dict['rpca']['time']] *
                                 len(batch_sizes))
        all_errors['rpca'].extend([results_dict['rpca']['error']] *
                                  len(batch_sizes))
        for batch_size in batch_sizes:
            ipca = IncrementalPCA(n_components=n_components,
                                  batch_size=batch_size)
            results_dict = {k: benchmark(est, data) for k, est in [('ipca',
                                                                   ipca)]}
            all_times['ipca'].append(results_dict['ipca']['time'])
            all_errors['ipca'].append(results_dict['ipca']['error'])
    
    Invoke with
-----------
    
    
def bench_scikit_tree_regressor(X, Y):
    '''Benchmark with scikit-learn decision tree regressor'''
    
    # Plot the results (= shape of the data points cloud)
plt.figure(1)  # two clusters
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X1[:, 0], X1[:, 1], color='black')
bbox_args = dict(boxstyle='round', fc='0.8')
arrow_args = dict(arrowstyle='->')
plt.annotate('several confounded points', xy=(24, 19),
             xycoords='data', textcoords='data',
             xytext=(13, 10), bbox=bbox_args, arrowprops=arrow_args)
plt.xlim((xx1.min(), xx1.max()))
plt.ylim((yy1.min(), yy1.max()))
plt.legend((legend1_values_list[0].collections[0],
            legend1_values_list[1].collections[0],
            legend1_values_list[2].collections[0]),
           (legend1_keys_list[0], legend1_keys_list[1], legend1_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('accessibility to radial highways')
plt.xlabel('pupil-teacher ratio by town')
    
    # The online learning part: cycle over the whole dataset 6 times
index = 0
for _ in range(6):
    for img in faces.images:
        data = extract_patches_2d(img, patch_size, max_patches=50,
                                  random_state=rng)
        data = np.reshape(data, (len(data), -1))
        buffer.append(data)
        index += 1
        if index % 10 == 0:
            data = np.concatenate(buffer, axis=0)
            data -= np.mean(data, axis=0)
            data /= np.std(data, axis=0)
            kmeans.partial_fit(data)
            buffer = []
        if index % 100 == 0:
            print('Partial fit of %4i out of %i'
                  % (index, 6 * len(faces.images)))
    
    def isPrime(num):
    if (num < 2):
        return False
    
    def generateKey(keySize):
    print('Generating prime p...')
    p = rabinMiller.generateLargePrime(keySize)
    print('Generating prime q...')
    q = rabinMiller.generateLargePrime(keySize)
    n = p * q
    
    	TEMPORARY_ARRAY = [ element for element in ARRAY[1:] if element >= PIVOT ]
	TEMPORARY_ARRAY = [PIVOT] + longestSub(TEMPORARY_ARRAY)
	if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
		return TEMPORARY_ARRAY
	else:
		return LONGEST_SUB
    
    	currPos = 0
	while currPos < len(bitString):
		currPart = bitString[currPos:currPos+512]
		mySplits = []
		for i in range(16):
			mySplits.append(int(rearrange(currPart[32*i:32*i+32]),2))
		yield mySplits
		currPos += 512
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
    # Load a sample picture and learn how to recognize it.
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
        if os.path.isdir(image_to_check):
        if cpus == 1:
            [test_image(image_file, known_names, known_face_encodings, tolerance, show_distance) for image_file in image_files_in_folder(image_to_check)]
        else:
            process_images_in_process_pool(image_files_in_folder(image_to_check), known_names, known_face_encodings, cpus, tolerance, show_distance)
    else:
        test_image(image_to_check, known_names, known_face_encodings, tolerance, show_distance)
    
            self.assertEqual(len(detected_faces), 1)
        self.assertAlmostEqual(detected_faces[0].rect.top(), 144, delta=25)
        self.assertAlmostEqual(detected_faces[0].rect.bottom(), 389, delta=25)
    
        # Let's trace out each facial feature in the image with a line!
    for facial_feature in face_landmarks.keys():
        d.line(face_landmarks[facial_feature], width=5)