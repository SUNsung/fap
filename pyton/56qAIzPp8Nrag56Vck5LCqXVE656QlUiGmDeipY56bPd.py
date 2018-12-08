
        
        print()

    
    signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
        fileopts = []
    for opt in opts_file:
        if opt._short_opts:
            fileopts.extend(opt._short_opts)
        if opt._long_opts:
            fileopts.extend(opt._long_opts)
    
    from __future__ import unicode_literals
    
            Tests on MNIST show that Antirectifier allows to train networks
        with twice less parameters yet with comparable
        classification accuracy as an equivalent ReLU-based network.
    '''
    
    
def load_data():
    '''Loads CIFAR10 dataset.
    
        def print_row(fields, positions):
        line = ''
        for i in range(len(fields)):
            if i > 0:
                line = line[:-1] + ' '
            line += str(fields[i])
            line = line[:positions[i]]
            line += ' ' * (positions[i] - len(line))
        print_fn(line)
    
    
def test_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
        @interfaces.legacy_convlstm2d_support
    def __init__(self, filters,
                 kernel_size,
                 strides=(1, 1),
                 padding='valid',
                 data_format=None,
                 dilation_rate=(1, 1),
                 activation='tanh',
                 recurrent_activation='hard_sigmoid',
                 use_bias=True,
                 kernel_initializer='glorot_uniform',
                 recurrent_initializer='orthogonal',
                 bias_initializer='zeros',
                 unit_forget_bias=True,
                 kernel_regularizer=None,
                 recurrent_regularizer=None,
                 bias_regularizer=None,
                 activity_regularizer=None,
                 kernel_constraint=None,
                 recurrent_constraint=None,
                 bias_constraint=None,
                 return_sequences=False,
                 go_backwards=False,
                 stateful=False,
                 dropout=0.,
                 recurrent_dropout=0.,
                 **kwargs):
        cell = ConvLSTM2DCell(filters=filters,
                              kernel_size=kernel_size,
                              strides=strides,
                              padding=padding,
                              data_format=data_format,
                              dilation_rate=dilation_rate,
                              activation=activation,
                              recurrent_activation=recurrent_activation,
                              use_bias=use_bias,
                              kernel_initializer=kernel_initializer,
                              recurrent_initializer=recurrent_initializer,
                              bias_initializer=bias_initializer,
                              unit_forget_bias=unit_forget_bias,
                              kernel_regularizer=kernel_regularizer,
                              recurrent_regularizer=recurrent_regularizer,
                              bias_regularizer=bias_regularizer,
                              kernel_constraint=kernel_constraint,
                              recurrent_constraint=recurrent_constraint,
                              bias_constraint=bias_constraint,
                              dropout=dropout,
                              recurrent_dropout=recurrent_dropout)
        super(ConvLSTM2D, self).__init__(cell,
                                         return_sequences=return_sequences,
                                         go_backwards=go_backwards,
                                         stateful=stateful,
                                         **kwargs)
        self.activity_regularizer = regularizers.get(activity_regularizer)
    
        # Note that when using this delayed-build pattern
    # (no input shape specified),
    # the model doesn't have any weights until the first call
    # to a training/evaluation method (since it isn't yet built):
    model = Sequential()
    model.add(Dense(32))
    model.add(Dense(32))
    model.weights  # returns []
    
    seq.add(Conv3D(filters=1, kernel_size=(3, 3, 3),
               activation='sigmoid',
               padding='same', data_format='channels_last'))
seq.compile(loss='binary_crossentropy', optimizer='adadelta')
    
        def __init__(self, name=None):
        self.name = name
        super(LookupDict, self).__init__()
    
        @get_item_parameters
    def test_get(self, key, value):
        assert self.lookup_dict.get(key) == value

    
            if algorithm is None:
            _algorithm = 'MD5'
        else:
            _algorithm = algorithm.upper()
        # lambdas assume digest modules are imported at the top level
        if _algorithm == 'MD5' or _algorithm == 'MD5-SESS':
            def md5_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.md5(x).hexdigest()
            hash_utf8 = md5_utf8
        elif _algorithm == 'SHA':
            def sha_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha1(x).hexdigest()
            hash_utf8 = sha_utf8
        elif _algorithm == 'SHA-256':
            def sha256_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha256(x).hexdigest()
            hash_utf8 = sha256_utf8
        elif _algorithm == 'SHA-512':
            def sha512_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha512(x).hexdigest()
            hash_utf8 = sha512_utf8
    
        builtin_str = str
    str = str
    bytes = bytes
    basestring = (str, bytes)
    numeric_types = (int, float)
    integer_types = (int,)

    
    def test_fragment_update_on_redirect():
    '''Verify we only append previous fragment if one doesn't exist on new
    location. If a new fragment is encountered in a Location header, it should
    be added to all subsequent requests.
    '''
    
        def test_valid(self):
        assert is_ipv4_address('8.8.8.8')
    
        plt.clf()
    xx = range(0, n * step, step)
    plt.title('Lasso regression on sample dataset (%d features)' % n_features)
    plt.plot(xx, scikit_results, 'b-', label='scikit-learn')
    plt.plot(xx, glmnet_results, 'r-', label='glmnet')
    plt.legend()
    plt.xlabel('number of samples to classify')
    plt.ylabel('Time (s)')
    plt.show()
    
        results = benchmark([METRICS[k] for k in args.metrics],
                        [FORMATS[k] for k in args.formats],
                        args.samples, args.classes, args.density,
                        args.n_times)
    
    
if __name__ == '__main__':
    samples_range = np.linspace(1000, 5000, 5).astype(np.int)
    features_range = np.linspace(1000, 5000, 5).astype(np.int)
    results = compute_bench(samples_range, features_range)
    max_time = max(np.max(t) for t in results.values())
    
    
def euclidean_distances(X, n_jobs):
    return pairwise_distances(X, metric='euclidean', n_jobs=n_jobs)
    
    import numpy as np
from scipy.cluster import hierarchy
import matplotlib.pyplot as plt
    
    # Split data in train set and test set
n_samples = X.shape[0]
X_train, y_train = X[:n_samples // 2], y[:n_samples // 2]
X_test, y_test = X[n_samples // 2:], y[n_samples // 2:]
print('test data sparsity: %f' % sparsity_ratio(X_test))
    
    print('='*80 + '\n#' + '    Text vectorizers benchmark' + '\n' + '='*80 + '\n')
print('Using a subset of the 20 newsrgoups dataset ({} documents).'
      .format(len(text)))
print('This benchmarks runs in ~20 min ...')
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'GroupCommitResolution'
        db.create_table(
            'sentry_groupcommitresolution', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'group_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'commit_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'datetime', self.gf('django.db.models.fields.DateTimeField')(
                        db_index=True
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['GroupCommitResolution'])
    
            # Adding unique constraint on 'CommitAuthor', fields ['organization_id', 'external_id']
        db.create_unique('sentry_commitauthor', ['organization_id', 'external_id'])
    
    def check_live_url(url):
    
    *What does this example do?
The code shows a way to localize words in two languages: English and
Greek. 'getLocalizer' is the factory method that constructs a
localizer depending on the language chosen. The localizer object will
be an instance from a different class according to the language
localized. However, the main code does not have to worry about which
localizer will be instantiated, since the method 'get' will be called
in the same way independently of the language.
    
        doctest.testmod()

    
    '''
*What is this pattern about?
This pattern aims to decouple the senders of a request from its
receivers. It does this by allowing a request to move through chained
objects until it is handled by an appropriate receiver.
    
    '''
http://web.archive.org/web/20120309135549/http://dpip.testingperspective.com/?p=28
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
        def __init__(self, one, other):
        self._one = one
        self._other = other
    
    ### OUTPUT ###
# generic_visit A
# visit_B B
# visit_B C

    
        def show_pet(self):
        '''Creates and shows a pet using the abstract factory'''
    
        def get_objects(self):
        '''Get all objects'''
        return self._objects