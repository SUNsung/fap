
        
        
def test_auth_plugin_require_auth_false_and_auth_provided(httpbin):
    
        if (first_byte_pos != resumed_from
            or (instance_length is not None
                and last_byte_pos + 1 != instance_length)):
        # Not what we asked for.
        raise ContentRangeError(
            'Unexpected Content-Range returned (%r)'
            ' for the requested Range ('bytes=%d-')'
            % (content_range, resumed_from)
        )
    
            X_test = X[-n_test_samples:]
        Y_test = Y[-n_test_samples:]
        X = X[:(i * step)]
        Y = Y[:(i * step)]
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
    input data sparsity: 0.050000
true coef sparsity: 0.000100
test data sparsity: 0.027400
model sparsity: 0.000024
r^2 on test data (dense model) : 0.233651
r^2 on test data (sparse model) : 0.233651
Wrote profile results to sparsity_benchmark.py.lprof
Timer unit: 1e-06 s
    
    from sklearn.datasets import make_checkerboard
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralBiclustering
from sklearn.metrics import consensus_score
    
    # Anisotropicly distributed data
transformation = [[0.60834549, -0.63667341], [-0.40887718, 0.85253229]]
X_aniso = np.dot(X, transformation)
y_pred = KMeans(n_clusters=3, random_state=random_state).fit_predict(X_aniso)
    
    # #############################################################################
# Compute clustering with Means
    
        def __init__(self, unpacked, extra):
        self.unpacked = unpacked
        self.extra = extra
    
        result = s[lambda x: ['A', 'B']]
    tm.assert_series_equal(result, s.loc[['A', 'B']])
    
    
ABCIndex = create_pandas_abc_type('ABCIndex', '_typ', ('index', ))
ABCInt64Index = create_pandas_abc_type('ABCInt64Index', '_typ',
                                       ('int64index', ))
ABCUInt64Index = create_pandas_abc_type('ABCUInt64Index', '_typ',
                                        ('uint64index', ))
ABCRangeIndex = create_pandas_abc_type('ABCRangeIndex', '_typ',
                                       ('rangeindex', ))
ABCFloat64Index = create_pandas_abc_type('ABCFloat64Index', '_typ',
                                         ('float64index', ))
ABCMultiIndex = create_pandas_abc_type('ABCMultiIndex', '_typ',
                                       ('multiindex', ))
ABCDatetimeIndex = create_pandas_abc_type('ABCDatetimeIndex', '_typ',
                                          ('datetimeindex', ))
ABCTimedeltaIndex = create_pandas_abc_type('ABCTimedeltaIndex', '_typ',
                                           ('timedeltaindex', ))
ABCPeriodIndex = create_pandas_abc_type('ABCPeriodIndex', '_typ',
                                        ('periodindex', ))
ABCCategoricalIndex = create_pandas_abc_type('ABCCategoricalIndex', '_typ',
                                             ('categoricalindex', ))
ABCIntervalIndex = create_pandas_abc_type('ABCIntervalIndex', '_typ',
                                          ('intervalindex', ))
ABCIndexClass = create_pandas_abc_type('ABCIndexClass', '_typ',
                                       ('index', 'int64index', 'rangeindex',
                                        'float64index', 'uint64index',
                                        'multiindex', 'datetimeindex',
                                        'timedeltaindex', 'periodindex',
                                        'categoricalindex', 'intervalindex'))