
        
            # by setting the `trainable` argument, in Model
    x = Input(shape=(1,))
    layer = Dense(2)
    y = layer(x)
    model = Model(x, y)
    assert model.trainable_weights == layer.trainable_weights
    layer.trainable = False
    assert model.trainable_weights == []
    
            layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': (3, 3),
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_first'},
                   input_shape=(num_samples, stack_size, num_row, num_col))
    
        model = Sequential()
    model.add(layers.GRU(8,
                         input_shape=(x_train.shape[1], x_train.shape[2])))
    model.add(layers.Dense(y_train.shape[-1], activation='softmax'))
    model.compile(loss='categorical_crossentropy',
                  optimizer='rmsprop',
                  metrics=['accuracy'])
    model.summary()
    history = model.fit(x_train, y_train, epochs=4, batch_size=10,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['acc'][-1] >= 0.8)
    config = model.get_config()
    model = Sequential.from_config(config)
    
        model.fit(x_train, y_train, batch_size=batch_size, epochs=epochs, verbose=1, validation_data=(x_test, y_test))
    model.fit(x_train, y_train, batch_size=batch_size, epochs=epochs, verbose=2, validation_split=0.1)
    model.fit(x_train, y_train, batch_size=batch_size, epochs=epochs, verbose=0)
    model.fit(x_train, y_train, batch_size=batch_size, epochs=epochs, verbose=1, shuffle=False)
    
    
def plot_feature_times(all_times, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_times['pca'], label='PCA')
    plot_results(all_components, all_times['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plot_results(all_components, all_times['rpca'], label='RandomizedPCA')
    plt.legend(loc='upper left')
    plt.suptitle('Algorithm runtime vs. n_components\n \
                 LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Time (seconds)')
    
    
def bench_sample(sampling, n_population, n_samples):
    gc.collect()
    # start time
    t_start = datetime.now()
    sampling(n_population, n_samples)
    delta = (datetime.now() - t_start)
    # stop time
    time = compute_time(t_start, delta)
    return time
    
        print('============================================')
    print('Warning: this is going to take a looong time')
    print('============================================')
    
            text_filename = os.path.join(text_lang_folder,
                                     '%s_%04d.txt' % (lang, i))
        print('Writing %s' % text_filename)
        open(text_filename, 'wb').write(content.encode('utf-8', 'ignore'))
        i += 1
    
    # Define 'classifiers' to be used
classifiers = {
    'Empirical Covariance': EllipticEnvelope(support_fraction=1.,
                                             contamination=0.261),
    'Robust Covariance (Minimum Covariance Determinant)':
    EllipticEnvelope(contamination=0.261),
    'OCSVM': OneClassSVM(nu=0.261, gamma=0.05)}
colors = ['m', 'g', 'b']
legend1 = {}
legend2 = {}
    
    # Author: Kemal Eren <kemal@kemaleren.com>
# License: BSD 3 clause
    
    plt.matshow(fit_data, cmap=plt.cm.Blues)
plt.title('After biclustering; rearranged to show biclusters')
    
    n_classifiers = len(classifiers)
    
    plt.plot(features_samples_ratio, acc_clf1, linewidth=2,
         label='Linear Discriminant Analysis with shrinkage', color='navy')
plt.plot(features_samples_ratio, acc_clf2, linewidth=2,
         label='Linear Discriminant Analysis', color='gold')
    
        >>> import tornado.escape
    >>> import_object('tornado.escape') is tornado.escape
    True
    >>> import_object('tornado.escape.utf8') is tornado.escape.utf8
    True
    >>> import_object('tornado') is tornado
    True
    >>> import_object('tornado.missing_module')
    Traceback (most recent call last):
        ...
    ImportError: No module named missing_module
    '''
    if not isinstance(name, str):
        # on python 2 a byte string is required.
        name = name.encode('utf-8')
    if name.count('.') == 0:
        return __import__(name, None, None)
    
        .. versionchanged:: 5.0
       The ``io_loop`` argument (deprecated since version 4.1) has been removed.
    '''
    def initialize(self):
        self.io_loop = IOLoop.current()
        self.channel = pycares.Channel(sock_state_cb=self._sock_state_cb)
        self.fds = {}
    
    
def main():
    parse_command_line()
    t = Timer(e1)
    results = t.timeit(options.num) / options.num
    print('engine: %0.3f ms per iteration' % (results * 1000))
    t = Timer(c1)
    results = t.timeit(options.num) / options.num
    print('coroutine: %0.3f ms per iteration' % (results * 1000))
    
        q.put(base_url)