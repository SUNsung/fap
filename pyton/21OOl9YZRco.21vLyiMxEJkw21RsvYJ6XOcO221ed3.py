
        
            # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        def __call__(self, x):
        regularization = 0.
        if self.l1:
            regularization += K.sum(self.l1 * K.abs(x))
        if self.l2:
            regularization += K.sum(self.l2 * K.square(x))
        return regularization
    
        model = create_multi_input_model_from(*models)
    model.compile(loss='categorical_crossentropy', optimizer='sgd')
    assert len(model.losses) == 8
    
            # On-the-fly setting of symbolic model inputs
        # (either by using the tensor provided,
        # or by creating a placeholder if Numpy data was provided).
        self.inputs = []
        self.input_names = []
        self._feed_inputs = []
        self._feed_input_names = []
        self._feed_input_shapes = []
        inputs = to_list(inputs, allow_tuple=True)
    
    	# Track the line at which the error occurred in case this is
	# generated from a lexer.  We need to track this since the
        # unexpected char doesn't carry the line info.
        self.line = None
    
    
class DeleteOp(ReplaceOp):
    '''
    @brief Internal helper class.
    '''
    
        def __init__(self, json_name, value):
        self.value = value
        super(Fixed, self).__init__(
            json_name=json_name, default=value, omitempty=False)
    
    import josepy as jose
    
    def get_mod_deps(mod_name):
    '''Get known module dependencies.
    
            self.config.revert_challenge_config()
        self.assertEqual(mock_load.call_count, 1)
    
        def test_include_missing(self):
        # This should miss
        self.verify_fnmatch('test_*.onf', False)
    
        def test_nonexistent_like(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                for like in entrypoint.OVERRIDE_CLASSES.keys():
                    mock_like.return_value = [like]
                    self.assertEqual(entrypoint.get_configurator(),
                                     entrypoint.OVERRIDE_CLASSES[like])
    
            complex_vh = VirtualHost(
            'fp', 'vhp',
            set([Addr.fromstring('*:443'), Addr.fromstring('1.2.3.4:443')]),
            False, False)
        self.assertTrue(complex_vh.conflicts([self.addr1]))
        self.assertTrue(complex_vh.conflicts([self.addr2]))
        self.assertFalse(complex_vh.conflicts([self.addr_default]))
    
    # If false, no module index is generated.
#latex_domain_indices = True
    
          # Pop the stack if there is a matching '<'.  Otherwise, ignore
      # this '>' since it must be an operator.
      if stack:
        if stack[-1] == '<':
          stack.pop()
          if not stack:
            return (i + 1, None)
    elif char == ';':
      # Found something that look like end of statements.  If we are currently
      # expecting a '>', the matching '<' must have been an operator, since
      # template argument list should not contain statements.
      while stack and stack[-1] == '<':
        stack.pop()
      if not stack:
        return (-1, None)