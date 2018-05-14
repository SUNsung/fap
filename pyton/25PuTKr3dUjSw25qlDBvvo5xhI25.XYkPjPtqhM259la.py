
        
        
tar_extensions = ('.tar', '.tar.Z', '.tar.bz2', '.tar.gz', '.tar.lz',
                  '.tar.lzma', '.tar.xz', '.taz', '.tb2', '.tbz', '.tbz2',
                  '.tgz', '.tlz', '.txz', '.tz')
    
        old_layer = keras.layers.MaxPooling3D((2, 2, 2), padding='valid', dim_ordering='th', name='maxpool3d')
    new_layer = keras.layers.MaxPool3D(pool_size=(2, 2, 2), padding='valid', data_format='channels_first', name='maxpool3d')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        # Ensure that the model takes into account
    # any potential predecessors of `input_tensor`
    if input_tensor is not None:
        inputs = get_source_inputs(input_tensor)
    else:
        inputs = img_input
    
        # Arguments
        x: input tensor.
        filters: filters in `Conv2D`.
        num_row: height of the convolution kernel.
        num_col: width of the convolution kernel.
        padding: padding mode in `Conv2D`.
        strides: strides in `Conv2D`.
        name: name of the ops; will become `name + '_conv'`
            for the convolution and `name + '_bn'` for the
            batch norm layer.
    
        out = model.predict(x)
    _, fname = tempfile.mkstemp('.h5')
    with h5py.File(fname, mode='r+') as h5file:
        save_model(model, h5file)
        loaded_model = load_model(h5file)
        out2 = loaded_model.predict(x)
    assert_allclose(out, out2, atol=1e-05)
    
        def call(self, inputs, states, training=None):
        if 0 < self.dropout < 1 and self._dropout_mask is None:
            self._dropout_mask = _generate_dropout_mask(
                K.ones_like(inputs),
                self.dropout,
                training=training,
                count=4)
        if (0 < self.recurrent_dropout < 1 and
                self._recurrent_dropout_mask is None):
            self._recurrent_dropout_mask = _generate_dropout_mask(
                K.ones_like(states[1]),
                self.recurrent_dropout,
                training=training,
                count=4)
    
                if do_validation:
                val_outs = test_loop(model, val_f, val_ins,
                                     steps=validation_steps,
                                     verbose=0)
                if not isinstance(val_outs, list):
                    val_outs = [val_outs]
                # Same labels assumed.
                for l, o in zip(out_labels, val_outs):
                    epoch_logs['val_' + l] = o
        else:
            if shuffle == 'batch':
                index_array = batch_shuffle(index_array, batch_size)
            elif shuffle:
                np.random.shuffle(index_array)
    
        z_mean, z_log_var = args
    batch = K.shape(z_mean)[0]
    dim = K.int_shape(z_mean)[1]
    # by default, random_normal has mean=0 and std=1.0
    epsilon = K.random_normal(shape=(batch, dim))
    return z_mean + K.exp(0.5 * z_log_var) * epsilon
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup.get(query)
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
        def _find_available_spot(self, vehicle):
        '''Find an available spot where vehicle can fit, or return None'''
        pass
    
    Test code which will almost always fail (if not exactly 12:01) when untestable
production code (have a look into constructor_injection.py) is used:
    
        def test_display_current_time_at_midnight(self):
        '''
        Will almost always fail (despite of right at/after midnight).
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
    class TimeDisplay(object):
    
        def __init__(self, successor=None):
        self._successor = successor
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
    
# Example usage...
def main():
    data1 = Data('Data 1')
    data2 = Data('Data 2')
    view1 = DecimalViewer()
    view2 = HexViewer()
    data1.attach(view1)
    data1.attach(view2)
    data2.attach(view2)
    data2.attach(view1)