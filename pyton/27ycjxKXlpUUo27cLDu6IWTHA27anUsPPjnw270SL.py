
        
        num_classes = 10
batch_size = 128
epochs = 15
weighted_class = 5
high_weight = 10
train_samples = 5000
test_samples = 1000
timesteps = 3
input_dim = 10
loss = 'mse'
loss_full_name = 'mean_squared_error'
standard_weight = 1
standard_score_sequential = 0.5
    
    
@keras_test
@skipif_no_tf_gpu
def test_trainability():
    input_size = 10
    units = 2
    for layer_class in [keras.layers.CuDNNGRU, keras.layers.CuDNNLSTM]:
        layer = layer_class(units)
        layer.build((None, None, input_size))
        assert len(layer.weights) == 3
        assert len(layer.trainable_weights) == 3
        assert len(layer.non_trainable_weights) == 0
        layer.trainable = False
        assert len(layer.weights) == 3
        assert len(layer.non_trainable_weights) == 3
        assert len(layer.trainable_weights) == 0
        layer.trainable = True
        assert len(layer.weights) == 3
        assert len(layer.trainable_weights) == 3
        assert len(layer.non_trainable_weights) == 0
    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_split=0.1)
score = model.evaluate(x_test, y_test,
                       batch_size=batch_size, verbose=1)
print('Test score:', score[0])
print('Test accuracy:', score[1])

    
    
@keras_test
def test_max_norm():
    array = get_example_array()
    for m in get_test_values():
        norm_instance = constraints.max_norm(m)
        normed = norm_instance(K.variable(array))
        assert(np.all(K.eval(normed) < m))
    
        x = K.placeholder(ndim=2)
    f = K.function([x], [activations.softplus(x)])
    test_values = get_standard_values()
    
    - LSTM loss decrease patterns during training can be quite different
from what you see with CNNs/MLPs/etc.
'''
from __future__ import print_function
    
    
def create_network(n_dense=6,
                   dense_units=16,
                   activation='selu',
                   dropout=AlphaDropout,
                   dropout_rate=0.1,
                   kernel_initializer='lecun_normal',
                   optimizer='adam',
                   num_classes=1,
                   max_words=max_words):
    '''Generic function to create a fully-connected neural network.
    
    
def test_sparse_categorical_crossentropy_4d():
    y_pred = K.variable(np.array([[[[0.7, 0.1, 0.2],
                                    [0.0, 0.3, 0.7],
                                    [0.1, 0.1, 0.8]],
                                   [[0.3, 0.7, 0.0],
                                    [0.3, 0.4, 0.3],
                                    [0.2, 0.5, 0.3]],
                                   [[0.8, 0.1, 0.1],
                                    [1.0, 0.0, 0.0],
                                    [0.4, 0.3, 0.3]]]]))
    y_true = K.variable(np.array([[[0, 1, 0],
                                   [2, 1, 0],
                                   [2, 2, 1]]]))
    expected_loss = - (np.log(0.7) + np.log(0.3) + np.log(0.1) +
                       np.log(K.epsilon()) + np.log(0.4) + np.log(0.2) +
                       np.log(0.1) + np.log(K.epsilon()) + np.log(0.3)) / 9
    loss = K.eval(losses.sparse_categorical_crossentropy(y_true, y_pred))
    assert np.isclose(expected_loss, np.mean(loss))
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    assert 0 <= test_split < 1
    path = get_file(path,
                    origin='https://s3.amazonaws.com/keras-datasets/boston_housing.npz',
                    file_hash='f553886a1f8d56431e820c5b82552d9d95cfcb96d1e678153f8839538947dff5')
    f = np.load(path)
    x = f['x']
    y = f['y']
    f.close()
    
    known_encodings = [
    obama_face_encoding,
    biden_face_encoding
]
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
    while True:
    # Grab a single frame of video
    ret, frame = input_movie.read()
    frame_number += 1
    
        # Every 128 frames (the default batch size), batch process the list of frames to find faces
    if len(frames) == 128:
        batch_of_face_locations = face_recognition.batch_face_locations(frames, number_of_times_to_upsample=0)
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')