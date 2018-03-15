
        
        # TODO: ensure that history changes.

    
            # test stacked bidirectional layers
        model = Sequential()
        model.add(wrappers.Bidirectional(rnn(output_dim,
                                             return_sequences=True),
                                         merge_mode=mode,
                                         input_shape=(timesteps, dim)))
        model.add(wrappers.Bidirectional(rnn(output_dim), merge_mode=mode))
        model.compile(loss='mse', optimizer='sgd')
        model.fit(x, y, epochs=1, batch_size=1)
    
        out = K.eval(weighted_loss(K.variable(x),
                               K.variable(y),
                               K.variable(weights),
                               K.variable(mask)))
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_lecun_uniform(tensor_shape):
    fan_in, _ = initializers._compute_fans(tensor_shape)
    scale = np.sqrt(3. / fan_in)
    _runner(initializers.lecun_uniform(), tensor_shape,
            target_mean=0., target_max=scale, target_min=-scale)
    
        def fn_output_shape(tup):
        s1, s2 = tup
        return (s1[0], s1[1] + s2[1]) + s1[2:]
    
        x = K.placeholder(ndim=2)
    f = K.function([x], [activations.softplus(x)])
    test_values = get_standard_values()
    
    
@keras_test
def test_vector_classification_functional():
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    # Test with functional API
    inputs = layers.Input(shape=(x_train.shape[-1],))
    x = layers.Dense(16, activation=keras.activations.relu)(inputs)
    x = layers.Dense(8)(x)
    x = layers.Activation('relu')(x)
    outputs = layers.Dense(num_classes, activation='softmax')(x)
    model = keras.models.Model(inputs, outputs)
    model.compile(loss=keras.losses.sparse_categorical_crossentropy,
                  optimizer=keras.optimizers.RMSprop(),
                  metrics=['acc'])
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    
        dimensions = 500 * np.arange(1, n_iter + 1)
    
                gc.collect()
            print('benchmarking lasso_path (without Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            lasso_path(X, y, precompute=False)
            delta = time() - tstart
            print('%0.3fs' % delta)
            results['lasso_path (without Gram)'].append(delta)
    
        gc.collect()
    
    
if not os.path.exists(html_folder):
    os.makedirs(html_folder)
    
    # Predict the result on some short new sentences:
sentences = [
    u'This is a language detection test.',
    u'Ceci est un test de d\xe9tection de la langue.',
    u'Dies ist ein Test, um die Sprache zu erkennen.',
]
predicted = clf.predict(sentences)
    
    # Author: Kemal Eren <kemal@kemaleren.com>
# License: BSD 3 clause
    
            clf_score = brier_score_loss(y_test, prob_pos, pos_label=y.max())
        print('%s:' % name)
        print('\tBrier: %1.3f' % (clf_score))
        print('\tPrecision: %1.3f' % precision_score(y_test, y_pred))
        print('\tRecall: %1.3f' % recall_score(y_test, y_pred))
        print('\tF1: %1.3f\n' % f1_score(y_test, y_pred))
    
    from sklearn.datasets import make_blobs
from sklearn.discriminant_analysis import LinearDiscriminantAnalysis
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
                tested_methods = conman.tested_methods_from_spidercls(spidercls)
            if opts.list:
                for method in tested_methods:
                    contract_reqs[spidercls.name].append(method)
            elif tested_methods:
                self.crawler_process.crawl(spidercls)
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
            try:
            self.max_bound = int(self.args[2])
        except IndexError:
            self.max_bound = float('inf')
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
        c-ares fails to resolve some names when ``family`` is ``AF_UNSPEC``,
    so it is only recommended for use in ``AF_INET`` (i.e. IPv4).  This is
    the default for ``tornado.simple_httpclient``, but other libraries
    may default to ``AF_UNSPEC``.
    
        For use on platforms that don't have os.pipe() (or where pipes cannot
    be passed to select()), but do have sockets.  This includes Windows
    and Jython.
    '''
    def __init__(self):
        from .auto import set_close_exec
        # Based on Zope select_trigger.py:
        # https://github.com/zopefoundation/Zope/blob/master/src/ZServer/medusa/thread/select_trigger.py
    
            p = Popen(
            [sys.executable, '-m', 'testapp'], stdout=subprocess.PIPE,
            cwd=path, env=dict(os.environ, PYTHONPATH=pythonpath),
            universal_newlines=True)
        out = p.communicate()[0]
        self.assertEqual(out, 'Starting\nStarting\n')

    
        def call_wrapped(self, count):
        '''Wraps and calls a function at each level of stack depth
        to measure the overhead of the wrapped function.
        '''
        # This queue is analogous to IOLoop.add_callback, but lets us
        # benchmark the stack_context in isolation without system call
        # overhead.
        queue = collections.deque()
        self.call_wrapped_inner(queue, count)
        while queue:
            queue.popleft()()
    
        def _on_stream(self, stream):
        if stream is None:
            # Session may have expired
            self.redirect('/auth/login')
            return
        self.render('stream.html', stream=stream)