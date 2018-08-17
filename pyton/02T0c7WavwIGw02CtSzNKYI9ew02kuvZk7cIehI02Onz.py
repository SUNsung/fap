
        
            model.fit(temporal_x_train, temporal_y_train, batch_size=batch_size,
              epochs=epochs // 3, verbose=0,
              sample_weight=temporal_sample_weight)
    model.fit(temporal_x_train, temporal_y_train, batch_size=batch_size,
              epochs=epochs // 3, verbose=0,
              sample_weight=temporal_sample_weight,
              validation_split=0.1)
    
        x = Input(shape=(1,))
    y = inner_model(x)
    outer_model = Model(x, y)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
    
@keras_test
def test_temporal_classification():
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
    
    # try using different optimizers and different optimizer configs
model.compile(loss='binary_crossentropy',
              optimizer='adam',
              metrics=['accuracy'])
    
        num_train_samples = 50000
    
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
    
    
# split train/test data
def split_data(x, y, ratio=0.8):
    to_train = int(input_len * ratio)
    # tweak to match with batch_size
    to_train -= to_train % batch_size
    
        time_ridge = np.empty(n_iter)
    time_ols = np.empty(n_iter)
    time_lasso = np.empty(n_iter)
    
        op.add_option('--n-components',
                  dest='n_components', default='auto',
                  help='Size of the random subspace.'
                       ' ('auto' or int > 0)')
    
    
def _get_git_revision():
    try:
        revision = subprocess.check_output(REVISION_CMD.split()).strip()
    except (subprocess.CalledProcessError, OSError):
        print('Failed to execute git to get revision')
        return None
    return revision.decode('utf-8')
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
        # TASK: print the mean and std for each candidate along with the parameter
    # settings for all the candidates explored by grid search.
    n_candidates = len(grid_search.cv_results_['params'])
    for i in range(n_candidates):
        print(i, 'params - %s; mean - %0.2f; std - %0.2f'
                 % (grid_search.cv_results_['params'][i],
                    grid_search.cv_results_['mean_test_score'][i],
                    grid_search.cv_results_['std_test_score'][i]))
    
            self.concurrent -= 1
        return ''
    
        def run(self, args, opts):
        # load contracts
        contracts = build_component_list(self.settings.getwithbase('SPIDER_CONTRACTS'))
        conman = ContractsManager(load_object(c) for c in contracts)
        runner = TextTestRunner(verbosity=2 if opts.verbose else 1)
        result = TextTestResult(runner.stream, runner.descriptions, runner.verbosity)
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
            if not aws_access_key_id:
            aws_access_key_id = settings['AWS_ACCESS_KEY_ID']
        if not aws_secret_access_key:
            aws_secret_access_key = settings['AWS_SECRET_ACCESS_KEY']
    
    from scrapy import signals
    
            spider.crawler.stats.inc_value('dupefilter/filtered', spider=spider)

    
        def error_count(self, failure, response, spider):
        self.counter['errorcount'] += 1
        if self.counter['errorcount'] == self.close_on['errorcount']:
            self.crawler.engine.close_spider(spider, 'closespider_errorcount')
    
    
    def _read_image(self):
        return np.array(Image.open(self.image_dir))

    
    update = True
    
        def adb_path(self):
        return self.adb_path
