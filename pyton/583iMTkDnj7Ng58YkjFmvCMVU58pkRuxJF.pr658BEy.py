
        
        
class Conversion(object):
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
        package_name = '(builtin)'
    
        def load(self):
        try:
            with open(self.path, 'rt') as f:
                try:
                    data = json.load(f)
                except ValueError as e:
                    raise ValueError(
                        'Invalid %s JSON: %s [%s]' %
                        (type(self).__name__, str(e), self.path)
                    )
                self.update(data)
        except IOError as e:
            if e.errno != errno.ENOENT:
                raise
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
        fn = K.function(recreated_model.inputs, recreated_model.outputs)
    fn_outputs = fn([np.random.random((10, 32)), np.random.random((10, 32)),
                     np.random.random((10, 32)), np.random.random((10, 32))])
    # note that the output of the K.function will still be a 1-elem list
    assert [x.shape for x in fn_outputs] == [(10, 69)]
    
            lr = self.lr
        if self.initial_decay > 0:
            lr = lr * (1. / (1. + self.decay * K.cast(self.iterations,
                                                      K.dtype(self.decay))))
        # momentum
        shapes = [K.int_shape(p) for p in params]
        moments = [K.zeros(shape) for shape in shapes]
        self.weights = [self.iterations] + moments
        for p, g, m in zip(params, grads, moments):
            v = self.momentum * m - lr * g  # velocity
            self.updates.append(K.update(m, v))
    
        reconstruction_loss *= original_dim
    kl_loss = 1 + z_log_var - K.square(z_mean) - K.exp(z_log_var)
    kl_loss = K.sum(kl_loss, axis=-1)
    kl_loss *= -0.5
    vae_loss = K.mean(reconstruction_loss + kl_loss)
    vae.add_loss(vae_loss)
    vae.compile(optimizer='adam')
    vae.summary()
    plot_model(vae,
               to_file='vae_mlp.png',
               show_shapes=True)
    
    
# reparameterization trick
# instead of sampling from Q(z|X), sample eps = N(0,I)
# then z = z_mean + sqrt(var)*eps
def sampling(args):
    '''Reparameterization trick by sampling fr an isotropic unit Gaussian.
    
    from keras.utils.test_utils import layer_test
from keras.utils.test_utils import keras_test
from keras.layers import local
    
    print('Building model...')
model = Sequential()
model.add(Dense(512, input_shape=(max_words,)))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
    
    
def get_example_array():
    np.random.seed(3537)
    example_array = np.random.random((100, 100)) * 100. - 50.
    example_array[0, 0] = 0.  # 0 could possibly cause trouble
    return example_array
    
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
    
    
def test_selu():
    x = K.placeholder(ndim=2)
    f = K.function([x], [activations.selu(x)])
    alpha = 1.6732632423543772848170429916717
    scale = 1.0507009873554804934193349852946
    
    # The suffix(es) of source filenames.
# You can specify multiple suffix as a list of string:
# source_suffix = ['.rst', '.md']
source_suffix = '.rst'
    
    class Bigthink(VideoExtractor):
    name = 'Bigthink'
    
    from ..common import *
    
    	type, ext, size = url_info(url)
	print_info(site_info, title, type, size)
	
	if not info_only:
		download_urls([url], title, ext, size, output_dir, merge = merge)
    
        def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
            self.title = match1(content,
                            r'setup\[\'title\'\] = '([^']+)';')
    
        # ordered list of supported stream types / qualities on this site
    # order: high quality -> low quality
    stream_types = [
        {'id': 'original'}, # contains an 'id' or 'itag' field at minimum
        {'id': 'small'},
    ]
    
    define('port', default=8888, help='run on the given port', type=int)
    
        def finish(self):
        '''Implements `.HTTPConnection.finish`.'''
        if (self._expected_content_remaining is not None and
                self._expected_content_remaining != 0 and
                not self.stream.closed()):
            self.stream.close()
            raise httputil.HTTPOutputError(
                'Tried to write %d bytes less than Content-Length' %
                self._expected_content_remaining)
        if self._chunking_output:
            if not self.stream.closed():
                self._pending_write = self.stream.write(b'0\r\n\r\n')
                self._pending_write.add_done_callback(self._on_write_complete)
        self._write_finished = True
        # If the app finished the request while we're still reading,
        # divert any remaining data away from the delegate and
        # close the connection when we're done sending our response.
        # Closing the connection is the only way to avoid reading the
        # whole input body.
        if not self._read_finished:
            self._disconnect_on_finish = True
        # No more data is coming, so instruct TCP to send any remaining
        # data immediately instead of waiting for a full packet or ack.
        self.stream.set_nodelay(True)
        if self._pending_write is None:
            self._finish_request(None)
        else:
            future_add_done_callback(self._pending_write, self._finish_request)