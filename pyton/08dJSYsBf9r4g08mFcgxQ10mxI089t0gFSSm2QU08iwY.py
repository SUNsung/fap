
        
            def __init__(self,
                 return_sequences=False,
                 return_state=False,
                 go_backwards=False,
                 stateful=False,
                 **kwargs):
        if K.backend() != 'tensorflow':
            raise RuntimeError('CuDNN RNNs are only available '
                               'with the TensorFlow backend.')
        super(RNN, self).__init__(**kwargs)
        self.return_sequences = return_sequences
        self.return_state = return_state
        self.go_backwards = go_backwards
        self.stateful = stateful
        self.supports_masking = False
        self.input_spec = [InputSpec(ndim=3)]
        if hasattr(self.cell.state_size, '__len__'):
            state_size = self.cell.state_size
        else:
            state_size = [self.cell.state_size]
        self.state_spec = [InputSpec(shape=(None, dim))
                           for dim in state_size]
        self.constants_spec = None
        self._states = None
        self._num_constants = None
    
        def _colision_resolution(self, key, data=None):
        new_key = self.hash_function(key + 1)
    
            return new_key
