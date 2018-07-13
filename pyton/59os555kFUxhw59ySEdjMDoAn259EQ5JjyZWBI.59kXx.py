
        
        # build decoder model
latent_inputs = Input(shape=(latent_dim,), name='z_sampling')
x = Dense(shape[1] * shape[2] * shape[3], activation='relu')(latent_inputs)
x = Reshape((shape[1], shape[2], shape[3]))(x)
    
    
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
    
                # check that output changes after states are reset
            # (even though the model itself didn't change)
            layer.reset_states()
            out3 = model.predict(np.ones_like(inputs))
            assert(out2.max() != out3.max())
    
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
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=15,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test,
                            batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
    model1 = create_network(num_classes=num_classes, **network1)
history_model1 = model1.fit(x_train,
                            y_train,
                            batch_size=batch_size,
                            epochs=epochs,
                            verbose=1,
                            validation_split=0.1)
    
    
class Graph(object):
    
        def move_to_front(self, node):
        pass
    
        def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
    
class SpendingByCategory(MRJob):
    
    FORMATS = {
    'sequences': lambda y: [list(np.flatnonzero(s)) for s in y],
    'dense': lambda y: y,
    'csr': lambda y: sp.csr_matrix(y),
    'csc': lambda y: sp.csc_matrix(y),
}
    
    URL = ('http://people.csail.mit.edu/jrennie/'
       '20Newsgroups/20news-bydate.tar.gz')
    
    # Split the dataset in training and test set:
docs_train, docs_test, y_train, y_test = train_test_split(
    dataset.data, dataset.target, test_size=0.5)
    
        # split the dataset in training and test set:
    docs_train, docs_test, y_train, y_test = train_test_split(
        dataset.data, dataset.target, test_size=0.25, random_state=None)
    
            valbox = Tk.Frame(fm)
        controller.complexity = Tk.StringVar()
        controller.complexity.set('1.0')
        c = Tk.Frame(valbox)
        Tk.Label(c, text='C:', anchor='e', width=7).pack(side=Tk.LEFT)
        Tk.Entry(c, width=6, textvariable=controller.complexity).pack(
            side=Tk.LEFT)
        c.pack()
    
    # Illustrate calibrator
plt.figure(1)
# generate grid over 2-simplex
p1d = np.linspace(0, 1, 20)
p0, p1 = np.meshgrid(p1d, p1d)
p2 = 1 - p0 - p1
p = np.c_[p0.ravel(), p1.ravel(), p2.ravel()]
p = p[p[:, 2] >= 0]
    
    # Create different classifiers. The logistic regression cannot do
# multiclass out of the box.
classifiers = {'L1 logistic': LogisticRegression(C=C, penalty='l1'),
               'L2 logistic (OvR)': LogisticRegression(C=C, penalty='l2'),
               'Linear SVC': SVC(kernel='linear', C=C, probability=True,
                                 random_state=0),
               'L2 logistic (Multinomial)': LogisticRegression(
                C=C, solver='lbfgs', multi_class='multinomial'),
               'GPC': GaussianProcessClassifier(kernel)
               }
    
    
n_train = 20  # samples for training
n_test = 200  # samples for testing
n_averages = 50  # how often to repeat classification
n_features_max = 75  # maximum number of features
step = 4  # step size for the calculation
    
    '''
=========================================================
The Digit Dataset
=========================================================
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
            try:
            spidercls = self.crawler_process.spider_loader.load(name)
        except KeyError:
            pass
        else:
            # if spider already exists and not --force then halt
            if not opts.force:
                print('Spider %r already exists in module:' % name)
                print('  %s' % spidercls.__module__)
                return
        template_file = self._find_template(opts.template)
        if template_file:
            self._genspider(module, name, domain, opts.template, template_file)
            if opts.edit:
                self.exitcode = os.system('scrapy edit '%s'' % name)
    
        def adjust_request_args(self, args):
        args['url'] = self.args[0]
        return args
    
        def lineReceived(self, line):
        return HTTPClient.lineReceived(self, line.rstrip())
    
    
class UserAgentMiddleware(object):
    '''This middleware allows spiders to override the user_agent'''
    
        def request_fingerprint(self, request):
        return request_fingerprint(request)
    
        def error_count(self, failure, response, spider):
        self.counter['errorcount'] += 1
        if self.counter['errorcount'] == self.close_on['errorcount']:
            self.crawler.engine.close_spider(spider, 'closespider_errorcount')
    
    A tree.RewriteCardinalityException is raised, when the parsers hits a
cardinality mismatch during AST construction. Although this is basically a
bug in your grammar, it can only be detected at runtime.
    
            self.decisionNumber = decisionNumber
        self.eot = eot
        self.eof = eof
        self.min = min
        self.max = max
        self.accept = accept
        self.special = special
        self.transition = transition
    
            @param encoding If you set the optional encoding argument, then the
           data will be decoded on the fly.
           
        '''
        
        if encoding is not None:
            # wrap input in a decoding reader
            reader = codecs.lookup(encoding)[2]
            file = reader(file)
    
        return (major, minor, patch, beta)
    
    MIN_TOKEN_TYPE = UP+1