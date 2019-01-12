
        
            inputs = Input(shape=input_shape)
    # v2 performs Conv2D with BN-ReLU on input before splitting into 2 paths
    x = resnet_layer(inputs=inputs,
                     num_filters=num_filters_in,
                     conv_first=True)
    
        num_train_samples = 50000
    
        y_train = np.reshape(y_train, (len(y_train), 1))
    y_test = np.reshape(y_test, (len(y_test), 1))
    
        if sequential_like:
        line_length = line_length or 65
        positions = positions or [.45, .85, 1.]
        if positions[-1] <= 1:
            positions = [int(line_length * p) for p in positions]
        # header names for the different log elements
        to_display = ['Layer (type)', 'Output Shape', 'Param #']
    else:
        line_length = line_length or 98
        positions = positions or [.33, .55, .67, 1.]
        if positions[-1] <= 1:
            positions = [int(line_length * p) for p in positions]
        # header names for the different log elements
        to_display = ['Layer (type)',
                      'Output Shape',
                      'Param #',
                      'Connected to']
        relevant_nodes = []
        for v in model._nodes_by_depth.values():
            relevant_nodes += v
    
    
def test_kernel_regularization():
    x_train, y_train = get_data()
    for reg in [regularizers.l1(),
                regularizers.l2(),
                regularizers.l1_l2()]:
        model = create_model(kernel_regularizer=reg)
        model.compile(loss='categorical_crossentropy', optimizer='sgd')
        assert len(model.losses) == 1
        model.train_on_batch(x_train, y_train)
    
        # Example
    
        @property
    def layers(self):
        # Historically, `sequential.layers` only returns layers that were added
        # via `add`, and omits the auto-generated `InputLayer`
        # that comes at the bottom of the stack.
        if self._layers and isinstance(self._layers[0], InputLayer):
            return self._layers[1:]
        return self._layers
    
    # we add a Convolution1D, which will learn filters
# word group filters of size filter_length:
model.add(Conv1D(filters,
                 kernel_size,
                 padding='valid',
                 activation='relu',
                 strides=1))
# we use max pooling:
model.add(GlobalMaxPooling1D())
    
    
def setup(app):
    app.add_crossref_type(
        directivename = 'setting',
        rolename      = 'setting',
        indextemplate = 'pair: %s; setting',
    )
    app.add_crossref_type(
        directivename = 'signal',
        rolename      = 'signal',
        indextemplate = 'pair: %s; signal',
    )
    app.add_crossref_type(
        directivename = 'command',
        rolename      = 'command',
        indextemplate = 'pair: %s; command',
    )
    app.add_crossref_type(
        directivename = 'reqmeta',
        rolename      = 'reqmeta',
        indextemplate = 'pair: %s; reqmeta',
    )
    app.add_role('source', source_role)
    app.add_role('commit', commit_role)
    app.add_role('issue', issue_role)
    app.add_role('rev', rev_role)
    
            sfile = sys.modules[spidercls.__module__].__file__
        sfile = sfile.replace('.pyc', '.py')
        self.exitcode = os.system('%s '%s'' % (editor, sfile))

    
        def _print_response(self, response, opts):
        if opts.headers:
            self._print_headers(response.request.headers, b'>')
            print('>')
            self._print_headers(response.headers, b'<')
        else:
            self._print_bytes(response.body)
    
    
    class ScrapyClientTLSOptions(ClientTLSOptions):
        '''
        SSL Client connection creator ignoring certificate verification errors
        (for genuinely invalid certificates or bugs in verification code).