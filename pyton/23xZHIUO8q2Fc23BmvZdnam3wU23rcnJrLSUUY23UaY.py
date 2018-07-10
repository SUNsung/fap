
        
        tf_proto_library_cc(
    name = 'data_proto',
    srcs = ['data.proto'],
)
    
      Returns:
    1. None, since the op is not differentiable w.r.t. its |num_nodes| input.
    2. [B,M,M] tensor where entry b,t,s is a subgradient of the network loss
       w.r.t. entry b,t,s of the |scores| input, with the same dtype as
       |d_loss_d_max_scores|.
  '''
  dtype = d_loss_d_max_scores.dtype.base_dtype
  check.NotNone(dtype)
    
        ref_params = layer._cudnn_gru.canonical_to_params(
        weights=[
            layer.kernel_r,
            layer.kernel_z,
            layer.kernel_h,
            layer.recurrent_kernel_r,
            layer.recurrent_kernel_z,
            layer.recurrent_kernel_h,
        ],
        biases=[
            layer.bias_r_i,
            layer.bias_z_i,
            layer.bias_h_i,
            layer.bias_r,
            layer.bias_z,
            layer.bias_h,
        ],
    )
    params = layer._canonical_to_params(
        weights=[
            layer.kernel_r,
            layer.kernel_z,
            layer.kernel_h,
            layer.recurrent_kernel_r,
            layer.recurrent_kernel_z,
            layer.recurrent_kernel_h,
        ],
        biases=[
            layer.bias_r_i,
            layer.bias_z_i,
            layer.bias_h_i,
            layer.bias_r,
            layer.bias_z,
            layer.bias_h,
        ],
    )
    ref_params_value = keras.backend.get_value(ref_params)
    params_value = keras.backend.get_value(params)
    diff = np.mean(ref_params_value - params_value)
    assert diff < 1e-8
    
        layer_test(local.LocallyConnected1D,
               kwargs={'filters': filters,
                       'kernel_size': filter_length,
                       'padding': padding,
                       'kernel_regularizer': 'l2',
                       'bias_regularizer': 'l2',
                       'activity_regularizer': 'l2',
                       'strides': strides},
               input_shape=(num_samples, num_steps, input_dim))
    
    # Convolution
kernel_size = 5
filters = 64
pool_size = 4
    
                # cntk doesn't support eval convolution with static
            # variable, will enable it later
            if K.backend() != 'cntk':
                # check regularizers
                kwargs = {'data_format': data_format,
                          'return_sequences': return_sequences,
                          'kernel_size': (num_row, num_col),
                          'stateful': True,
                          'filters': filters,
                          'batch_input_shape': inputs.shape,
                          'kernel_regularizer': regularizers.L1L2(l1=0.01),
                          'recurrent_regularizer': regularizers.L1L2(l1=0.01),
                          'bias_regularizer': 'l2',
                          'activity_regularizer': 'l2',
                          'kernel_constraint': 'max_norm',
                          'recurrent_constraint': 'max_norm',
                          'bias_constraint': 'max_norm',
                          'padding': 'same'}
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    print('Vectorizing sequence data...')
tokenizer = Tokenizer(num_words=max_words)
x_train = tokenizer.sequences_to_matrix(x_train, mode='binary')
x_test = tokenizer.sequences_to_matrix(x_test, mode='binary')
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)