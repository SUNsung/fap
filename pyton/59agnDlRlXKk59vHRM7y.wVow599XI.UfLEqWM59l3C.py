
        
        
def get(url, params=None, **kwargs):
    r'''Sends a GET request.
    
    
class CaseInsensitiveDict(collections.MutableMapping):
    '''A case-insensitive ``dict``-like object.
    
            with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(b'hehehe, not received')
            sock.close()
    
        def update(self, other):
        '''Updates this jar with cookies from another CookieJar or dict-like'''
        if isinstance(other, cookielib.CookieJar):
            for cookie in other:
                self.set_cookie(copy.copy(cookie))
        else:
            super(RequestsCookieJar, self).update(other)
    
        # Check urllib3 for compatibility.
    major, minor, patch = urllib3_version  # noqa: F811
    major, minor, patch = int(major), int(minor), int(patch)
    # urllib3 >= 1.21.1, <= 1.22
    assert major == 1
    assert minor >= 21
    assert minor <= 22
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
        for data_format in ['channels_first', 'channels_last']:
        if data_format == 'channels_first':
            shape = (3, 5, 5)
            target_shape = (5, 5, 3)
            prev_shape = (2, 3, 2)
            flip = lambda x: np.flip(np.flip(x, axis=2), axis=3)
            transpose = lambda x: np.transpose(x, (0, 2, 3, 1))
            target_data_format = 'channels_last'
        elif data_format == 'channels_last':
            shape = (5, 5, 3)
            target_shape = (3, 5, 5)
            prev_shape = (2, 2, 3)
            flip = lambda x: np.flip(np.flip(x, axis=1), axis=2)
            transpose = lambda x: np.transpose(x, (0, 3, 1, 2))
            target_data_format = 'channels_first'
    
            if transform_matrix is not None:
            h, w = x.shape[img_row_axis], x.shape[img_col_axis]
            transform_matrix = transform_matrix_offset_center(transform_matrix, h, w)
            x = apply_transform(x, transform_matrix, img_channel_axis,
                                fill_mode=self.fill_mode, cval=self.cval)
    
    
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
    
    
def test_boston_housing():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = boston_housing.load_data()
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
    
    
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
    
    
if __name__ == '__main__':
    main()

    
    
def yes_or_no(prompt, true_value='y', false_value='n', default=True):
    '''
    检查是否已经为启动程序做好了准备
    '''
    default_value = true_value if default else false_value
    prompt = '{} {}/{} [{}]: '.format(prompt, true_value,
        false_value, default_value)
    i = input(prompt)
    if not i:
        return default
    while True:
        if i == true_value:
            return True
        elif i == false_value:
            return False
        prompt = 'Please input {} or {}: '.format(true_value, false_value)
        i = input(prompt)