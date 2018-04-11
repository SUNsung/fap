
        
        import os
    
    
def secure_hash(filename, hash_func=sha1):
    ''' Return a secure hash hex digest of local file, None if file is not present or a directory. '''
    
        args = parser.parse_args()
    
            # zone, resource, entity, method
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/zones/us-east1-c/instanceGroupManagers/my-mig/recreateInstances'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertEquals('us-east1-c', actual['zone'])
        self.assertEquals('instanceGroupManagers', actual['resource_name'])
        self.assertEquals('my-mig', actual['entity_name'])
        self.assertEquals('recreateInstances', actual['method_name'])
    
        terminal_length = os.getenv('ANSIBLE_VYOS_TERMINAL_LENGTH', 10000)
    
        # `sample_weight_mode` matches output_names partially.
    with pytest.raises(ValueError):
        model.compile(optimizer, loss='mse', sample_weight_mode={'dense_1': 'temporal'})
    
        def reset_states(self, states=None):
        if not self.stateful:
            raise AttributeError('Layer must be stateful.')
        input_shape = self.input_spec[0].shape
        state_shape = self.compute_output_shape(input_shape)
        if self.return_state:
            state_shape = state_shape[0]
        if self.return_sequences:
            state_shape = state_shape[:1] + state_shape[2:]
        if None in state_shape:
            raise ValueError('If a RNN is stateful, it needs to know '
                             'its batch size. Specify the batch size '
                             'of your input tensors: \n'
                             '- If using a Sequential model, '
                             'specify the batch size by passing '
                             'a `batch_input_shape` '
                             'argument to your first layer.\n'
                             '- If using the functional API, specify '
                             'the time dimension by passing a '
                             '`batch_shape` argument to your Input layer.\n'
                             'The same thing goes for the number of rows and columns.')
    
            if self.width_shift_range:
            ty = np.random.uniform(-self.width_shift_range, self.width_shift_range)
            if self.width_shift_range < 1:
                ty *= x.shape[img_col_axis]
        else:
            ty = 0
    
    
@keras_test
def test_loss_masking():
    weighted_loss = _weighted_masked_objective(losses.get('mae'))
    shape = (3, 4, 2)
    x = np.arange(24).reshape(shape)
    y = 2 * x
    
        # fit without validation data should raise ValueError if histogram_freq > 0
    with pytest.raises(ValueError) as raised_exception:
        model.fit(X_train, y_train, batch_size=batch_size,
                  callbacks=callbacks_factory(histogram_freq=1), epochs=3)
    assert 'validation_data must be provided' in str(raised_exception.value)
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
        def test_parrot_eng_localization(self):
        self.assertEqual(self.e.get('parrot'), 'parrot')
    
        def test_shall_toggle_from_am_to_fm(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'FM'
        self.assertEqual(state, expected_state_name)
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
    
def coroutine(func):
    def start(*args, **kwargs):
        cr = func(*args, **kwargs)
        next(cr)
        return cr
    return start
    
        def not_specification(self):
        return NotSpecification(self)