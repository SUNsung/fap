
        
        versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
    try:
    input = raw_input
except NameError:
    pass
    
    from __future__ import unicode_literals
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
            # Audiomack wraps a lot of soundcloud tracks in their branded wrapper
        # if so, pass the work off to the soundcloud extractor
        if SoundcloudIE.suitable(api_response['url']):
            return {'_type': 'url', 'url': api_response['url'], 'ie_key': 'Soundcloud'}
    
        old_layer = keras.layers.Convolution3D(5, 3, 3, 4,
                                           init='normal',
                                           subsample=(2, 2, 2),
                                           border_mode='valid',
                                           dim_ordering='th',
                                           W_regularizer='l1',
                                           b_regularizer='l2',
                                           W_constraint='maxnorm',
                                           b_constraint='unitnorm',
                                           name='conv')
    new_layer = keras.layers.Conv3D(5, (3, 3, 4),
                                    kernel_initializer='normal',
                                    strides=(2, 2, 2),
                                    padding='valid',
                                    kernel_regularizer='l1',
                                    bias_regularizer='l2',
                                    kernel_constraint='max_norm',
                                    bias_constraint='unit_norm',
                                    data_format='channels_first',
                                    name='conv')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        def __init__(self):
        super(TerminateOnNaN, self).__init__()
    
        The sampling probabilities are generated according
    to the sampling distribution used in word2vec:
    
    
@keras_test
def test_min_max_norm():
    array = get_example_array()
    for m in get_test_values():
        norm_instance = constraints.min_max_norm(min_value=m, max_value=m * 2)
        normed = norm_instance(K.variable(array))
        value = K.eval(normed)
        l2 = np.sqrt(np.sum(np.square(value), axis=0))
        assert not l2[l2 < m]
        assert not l2[l2 > m * 2 + 1e-5]
    
    
@keras_test
def test_temporal_classification_functional():
    '''
    Classify temporal sequences of float numbers
    of length 3 into 2 classes using
    single layer of GRU units and softmax applied
    to the last activations of the units
    '''
    np.random.seed(1337)
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=200,
                                                         num_test=20,
                                                         input_shape=(3, 4),
                                                         classification=True,
                                                         num_classes=2)
    y_train = to_categorical(y_train)
    y_test = to_categorical(y_test)
    
        result = f([test_values])[0]
    expected = sigmoid(test_values)
    assert_allclose(result, expected, rtol=1e-05)
    
                # test for return state:
            x = Input(batch_shape=inputs.shape)
            kwargs = {'data_format': data_format,
                      'return_sequences': return_sequences,
                      'return_state': True,
                      'stateful': True,
                      'filters': filters,
                      'kernel_size': (num_row, num_col),
                      'padding': 'valid'}
            layer = convolutional_recurrent.ConvLSTM2D(**kwargs)
            layer.build(inputs.shape)
            outputs = layer(x)
            output, states = outputs[0], outputs[1:]
            assert len(states) == 2
            model = Model(x, states[0])
            state = model.predict(inputs)
            np.testing.assert_allclose(
                K.eval(layer.states[0]), state, atol=1e-4)
    
        # Returns
        Layer instance (may be Model, Sequential, Layer...)
    '''
    from .. import models
    globs = globals()  # All layers.
    globs['Model'] = models.Model
    globs['Sequential'] = models.Sequential
    return deserialize_keras_object(config,
                                    module_objects=globs,
                                    custom_objects=custom_objects,
                                    printable_module_name='layer')

    
            print('Training %s ... ' % name, end='')
        t0 = time()
        clf.fit(X_train, y_train)
        train_time[name] = time() - t0
        t0 = time()
        y_pred = clf.predict(X_test)
        test_time[name] = time() - t0
        accuracy[name] = accuracy_score(y_test, y_pred)
        print('done')
    
        for i, kk in enumerate(krange):
        print('k = %i (%i out of %i)' % (kk, i + 1, len(krange)))
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=kk,
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
        # TASK: Build a vectorizer / classifier pipeline that filters out tokens
    # that are too rare or too frequent
    pipeline = Pipeline([
        ('vect', TfidfVectorizer(min_df=3, max_df=0.95)),
        ('clf', LinearSVC(C=1000)),
    ])
    
    '''
print(__doc__)
    
    # Train uncalibrated random forest classifier on whole train and validation
# data and evaluate on test data
clf = RandomForestClassifier(n_estimators=25)
clf.fit(X_train_valid, y_train_valid)
clf_probs = clf.predict_proba(X_test)
score = log_loss(y_test, clf_probs)