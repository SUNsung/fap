
        
        try:
    # https://urllib3.readthedocs.io/en/latest/security.html
    # noinspection PyPackageRequirements
    import urllib3
    urllib3.disable_warnings()
except (ImportError, AttributeError):
    # In some rare cases, the user may have an old version of the requests
    # or urllib3, and there is no method called 'disable_warnings.' In these
    # cases, we don't need to call the method.
    # They may get some noisy output but execution shouldn't die. Move on.
    pass
    
            with open(self.path, 'w') as f:
            json.dump(self, f, indent=4, sort_keys=True, ensure_ascii=True)
            f.write('\n')
    
        def __str__(self):
        defaults = dict(type(self).__dict__)
        actual = dict(defaults)
        actual.update(self.__dict__)
        actual['config'] = self.config
        return repr_dict_nice(dict(
            (key, value)
            for key, value in actual.items()
            if not key.startswith('_'))
        )
    
            yield self.process_body(body)

    
            :param mime: E.g., 'application/atom+xml'.
        :param content: The body content as text
    
            See https://github.com/jakubroztocil/httpie/issues/212
    
    
install_requires = [
    'requests>=2.18.4',
    'Pygments>=2.1.3'
]
    
    
FILE_PATH_ARG = patharg(FILE_PATH)
BIN_FILE_PATH_ARG = patharg(BIN_FILE_PATH)
JSON_FILE_PATH_ARG = patharg(JSON_FILE_PATH)
    
        @property
    def bindata(self):
        if not hasattr(self, '_bindata'):
            self._bindata = urlopen(self.url).read()
        return self._bindata
    
        def test_GET_with_data_auto_JSON_headers(self, httpbin):
        # JSON headers should automatically be set also for GET with data.
        r = http('POST', httpbin.url + '/post', 'a=b')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        assert r.json['headers']['Content-Type'] == 'application/json'
    
        if K.image_data_format() == 'channels_last':
        x_train = x_train.transpose(0, 2, 3, 1)
        x_test = x_test.transpose(0, 2, 3, 1)
    
        # Iterated over every node in the reference model, in depth order.
    depth_keys = list(model._nodes_by_depth.keys())
    depth_keys.sort(reverse=True)
    for depth in depth_keys:
        nodes = model._nodes_by_depth[depth]
        for node in nodes:
            # Recover the corresponding layer.
            layer = node.outbound_layer
    
        # Test with Sequential API
    model = Sequential([
        layers.Dense(16, input_shape=(x_train.shape[-1],), activation='relu'),
        layers.Dense(8),
        layers.Activation('relu'),
        layers.Dense(num_classes, activation='softmax')
    ])
    model.compile(loss='categorical_crossentropy',
                  optimizer='rmsprop',
                  metrics=['accuracy'])
    model.summary()
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    config = model.get_config()
    model = Sequential.from_config(config)
    
        alpha = 0.01  # regularization parameter
    
    
def plot_batch_errors(all_errors, n_features, all_batch_sizes, data):
    plt.figure()
    plot_results(all_batch_sizes, all_errors['pca'], label='PCA')
    plot_results(all_batch_sizes, all_errors['ipca'], label='IncrementalPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. batch_size for n_components %i\n \
                 LFW, size %i x %i' % (
                 n_features, data.shape[0], data.shape[1]))
    plt.xlabel('Batch size')
    plt.ylabel('Mean absolute error')
    
            # plot the actual surface
        ax.plot_surface(X, Y, Z.T, cstride=1, rstride=1, color=c, alpha=0.8)
    
                gc.collect()
            print('benchmarking orthogonal_mp (with Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            orthogonal_mp(X, y, precompute=True,
                          n_nonzero_coefs=n_informative)
            delta = time() - tstart
            print('%0.3fs' % delta)
            omp_gram[i_f, i_s] = delta
    
                gc.collect()
            print('benchmarking scipy svd: ')
            tstart = time()
            svd(X, full_matrices=False)
            results['scipy svd'].append(time() - tstart)
    
        op.add_option('--transformers',
                  dest='selected_transformers',
                  default='GaussianRandomProjection,SparseRandomProjection',
                  type=str,
                  help='Comma-separated list of transformer to benchmark. '
                       'Default: %default. Available: '
                       'GaussianRandomProjection,SparseRandomProjection')
    
    
def main():
    command_stack = []
    
    print('Counting to five...')
for number in count_to_five():
    print(number, end=' ')
    
    
class CompositeSpecification(Specification):
    
    
def lazy_property2(fn):
    attr = '_lazy__' + fn.__name__
    
    
def main():
    try:
        import queue
    except ImportError:  # python 2.x compatibility
        import Queue as queue
    
        def now(self):
        current_time = datetime.datetime.now()
        current_time_formatted = '{}:{}'.format(current_time.hour,
                                                current_time.minute)
        return current_time_formatted
    
        @property
    def is_eager_to_contribute(self):
        return True
    
    
# ConcreteImplementor 2/2
class DrawingAPI2(object):
    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
        # Quit when the input video file ends
    if not ret:
        break
    
        # Hit 'q' on the keyboard to quit!
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
    
        for file in image_files_in_folder(known_people_folder):
        basename = os.path.splitext(os.path.basename(file))[0]
        img = face_recognition.load_image_file(file)
        encodings = face_recognition.face_encodings(img)