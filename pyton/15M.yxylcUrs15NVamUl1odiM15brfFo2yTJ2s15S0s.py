
        
        for image in TEST_IMAGES:
    size = image.split('-')[1].split('.')[0]
    print('Timings at {}:'.format(size))
    
    # Note: This isn't exactly the same as a 'percent match'. The scale isn't linear. But you can assume that images with a
# smaller distance are more similar to each other than ones with a larger distance.
    
        # Use the KNN model to find the best matches for the test face
    closest_distances = knn_clf.kneighbors(faces_encodings, n_neighbors=1)
    are_matches = [closest_distances[0][i][0] <= distance_threshold for i in range(len(X_face_locations))]
    
        face_names = []
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces(known_faces, face_encoding, tolerance=0.50)
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
    with open('HISTORY.rst') as history_file:
    history = history_file.read()
    
        :param css:  plain tuple representation of the rect in (top, right, bottom, left) order
    :return: a dlib `rect` object
    '''
    return dlib.rectangle(css[3], css[0], css[1], css[2])
    
        # Quit
    cv2.destroyAllWindows()

    
    # This is an example of running face recognition on a single image
# and drawing a box around each person that was identified.
    
        with tf.variable_scope(name, reuse=reuse):
        alpha = get_w(alpha_shape, w_initializer=alpha_init, name='alpha')
        # o = relu(x) + 0.5 * tf.multiply(alpha, x - tf.abs(x))  # TFLearn
        o = leaky_relu(x, alpha)  # TensorLayer / <Deep Learning>
    
        return o

    
    
def multi_highway_dense(x, n_layer, act_fn=relu, carry_bias=-1.0, name=None):
    '''多层 highway_dense
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_input]
    '''
    name = name or 'highway_dense'
    for i in range(n_layer):
        x = highway_dense(x, act_fn=act_fn, carry_bias=carry_bias, name='{}-{}'.format(name, i))
    
    word_unk = 'aam'
ngrams = compute_ngrams(word_unk, min_ngrams, max_ngrams)  # min_ngrams, max_ngrams = 2, 4
word_vec = np.zeros(model.vector_size, dtype=np.float32)
ngrams_found = 0
for ngram in ngrams:
    ngram_hash = ft_hash(ngram) % model.bucket
    if ngram_hash in model.wv.hash2index:
        word_vec += model.wv.vectors_ngrams[model.wv.hash2index[ngram_hash]]
        ngrams_found += 1
    
            print('Test: Multiple dequeue in a row')
        assert_equal(queue.dequeue(), 1)
        assert_equal(queue.dequeue(), 2)
    
            print('Test: Pop on no elements')
        assert_equal(stacks.pop(), None)
    
        def test_sort_stack(self, stack):
        print('Test: Empty stack')
        sorted_stack = self.get_sorted_stack(stack, [])
        assert_equal(sorted_stack.pop(), None)
    
    
		print('Test: insert checking with pre order traversal')
		expectVal = [50, 30, 10, 7, 25, 40, 38, 70, 60, 80]
		assert_equal(myTree.printPreOrder(), expectVal)
		expectVal = [1, 11, 21, 31, 41, 51, 61, 71, 81, 91]
		assert_equal(myTree2.printPreOrder(), expectVal)
    
        def extract_min(self):
        if not self.array:
            return None
        minimum = sys.maxsize
        for index, node in enumerate(self.array):
            if node.key < minimum:
                minimum = node.key
                minimum_index = index
        return self.array.pop(minimum_index)