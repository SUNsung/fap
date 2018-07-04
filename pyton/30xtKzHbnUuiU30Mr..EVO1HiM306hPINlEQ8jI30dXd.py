
        
            # a Model inside a Sequential
    x = Input(shape=(1,))
    y = Dense(2)(x)
    inner_model = Model(x, y)
    outer_model = Sequential()
    outer_model.add(inner_model)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
            inputs = np.random.random((num_samples, timesteps, input_size))
        state = model.predict(inputs)
        np.testing.assert_allclose(
            keras.backend.eval(layer.states[0]), state, atol=1e-4)
    
        indices_for_conversion_to_dense = []
    for i in range(len(model._feed_inputs)):
        if issparse(ins[i]) and not K.is_sparse(model._feed_inputs[i]):
            indices_for_conversion_to_dense.append(i)
    
    for i, input_text in enumerate(input_texts):
    for t, char in enumerate(input_text):
        encoder_input_data[i, t, input_token_index[char]] = 1.
    
    
def top_k_categorical_accuracy(y_true, y_pred, k=5):
    return K.mean(K.in_top_k(y_pred, K.argmax(y_true, axis=-1), k), axis=-1)
    
        # a more explicit example
    norm_instance = constraints.max_norm(2.0)
    x = np.array([[0, 0, 0], [1.0, 0, 0], [3, 0, 0], [3, 3, 3]]).T
    x_normed_target = np.array([[0, 0, 0], [1.0, 0, 0],
                                [2.0, 0, 0],
                                [2. / np.sqrt(3),
                                 2. / np.sqrt(3),
                                 2. / np.sqrt(3)]]).T
    x_normed_actual = K.eval(norm_instance(K.variable(x)))
    assert_allclose(x_normed_actual, x_normed_target, rtol=1e-05)
    
    from sklearn.datasets import make_multilabel_classification
from sklearn.metrics import (f1_score, accuracy_score, hamming_loss,
                             jaccard_similarity_score)
from sklearn.utils.testing import ignore_warnings
    
    import numpy as np
import matplotlib.pyplot as plt
from matplotlib import ticker
    
        op.add_option('--density',
                  dest='density', default=1 / 3,
                  help='Density used by the sparse random projection.'
                       ' ('auto' or float (0.0, 1.0]')
    
    
# TASK: Build a vectorizer that splits strings into sequence of 1 to 3
# characters instead of word tokens
    
    iris = datasets.load_iris()
X = iris.data[:, 0:2]  # we only take the first two features for visualization
y = iris.target
    
    n_samples = 100
n_clusters_range = np.linspace(2, n_samples, 10).astype(np.int)
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)
    
        # The font size ('10pt', '11pt' or '12pt').
    #'pointsize': '10pt',
    
    patch_file = 'homeassistant.components.device_tracker.bt_home_hub_5'