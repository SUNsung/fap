
        
                :param filename: the filename of the config.  This can either be an
                         absolute filename or a filename relative to the
                         root path.
        :param silent: set to ``True`` if you want silent failure for missing
                       files.
    
        if app.debug and logger.level == logging.NOTSET:
        logger.setLevel(logging.DEBUG)
    
        #: Some implementations can detect whether a session is newly
    #: created, but that is not guaranteed. Use with caution. The mixin
    # default is hard-coded ``False``.
    new = False
    
        def dispatch_request(self):
        '''Subclasses have to override this method to implement the
        actual view function code.  This method is called with all
        the arguments from the URL rule.
        '''
        raise NotImplementedError()
    
        logging_plugin = pytestconfig.pluginmanager.unregister(
        name='logging-plugin')
    
    
@ignore_warnings
def benchmark(metrics=tuple(v for k, v in sorted(METRICS.items())),
              formats=tuple(v for k, v in sorted(FORMATS.items())),
              samples=1000, classes=4, density=.2,
              n_times=5):
    '''Times metric calculations for a number of inputs
    
    ratio = scikits_time / scipy_time
    
        print('Dataset statics')
    print('===========================')
    print('n_samples \t= %s' % opts.n_samples)
    print('n_features \t= %s' % opts.n_features)
    if opts.n_components == 'auto':
        print('n_components \t= %s (auto)' %
              johnson_lindenstrauss_min_dim(n_samples=opts.n_samples,
                                            eps=opts.eps))
    else:
        print('n_components \t= %s' % opts.n_components)
    print('n_elements \t= %s' % (opts.n_features * opts.n_samples))
    print('n_nonzeros \t= %s per feature' % n_nonzeros)
    print('ratio_nonzeros \t= %s' % opts.ratio_nonzeros)
    print('')
    
        # start time
    tstart = datetime.now()
    clf = DecisionTreeRegressor()
    clf.fit(X, Y).predict(X)
    delta = (datetime.now() - tstart)
    # stop time
    
    
if __name__ == '__main__':
    # NOTE: we put the following in a 'if __name__ == '__main__'' protected
    # block to be able to use a multi-core grid search that also works under
    # Windows, see: http://docs.python.org/library/multiprocessing.html#windows
    # The multiprocessing module is used as the backend of joblib.Parallel
    # that is used when n_jobs != 1 in GridSearchCV
    
    legend2_values_list = list(legend2.values())
legend2_keys_list = list(legend2.keys())
    
    # Author: Kemal Eren <kemal@kemaleren.com>
# License: BSD 3 clause
    
    # Annotate points on the simplex
plt.annotate(r'($\frac{1}{3}$, $\frac{1}{3}$, $\frac{1}{3}$)',
             xy=(1.0/3, 1.0/3), xytext=(1.0/3, .23), xycoords='data',
             arrowprops=dict(facecolor='black', shrink=0.05),
             horizontalalignment='center', verticalalignment='center')
plt.plot([1.0/3], [1.0/3], 'ko', ms=5)
plt.annotate(r'($\frac{1}{2}$, $0$, $\frac{1}{2}$)',
             xy=(.5, .0), xytext=(.5, .1), xycoords='data',
             arrowprops=dict(facecolor='black', shrink=0.05),
             horizontalalignment='center', verticalalignment='center')
plt.annotate(r'($0$, $\frac{1}{2}$, $\frac{1}{2}$)',
             xy=(.0, .5), xytext=(.1, .5), xycoords='data',
             arrowprops=dict(facecolor='black', shrink=0.05),
             horizontalalignment='center', verticalalignment='center')
plt.annotate(r'($\frac{1}{2}$, $\frac{1}{2}$, $0$)',
             xy=(.5, .5), xytext=(.6, .6), xycoords='data',
             arrowprops=dict(facecolor='black', shrink=0.05),
             horizontalalignment='center', verticalalignment='center')
plt.annotate(r'($0$, $0$, $1$)',
             xy=(0, 0), xytext=(.1, .1), xycoords='data',
             arrowprops=dict(facecolor='black', shrink=0.05),
             horizontalalignment='center', verticalalignment='center')
plt.annotate(r'($1$, $0$, $0$)',
             xy=(1, 0), xytext=(1, .1), xycoords='data',
             arrowprops=dict(facecolor='black', shrink=0.05),
             horizontalalignment='center', verticalalignment='center')
plt.annotate(r'($0$, $1$, $0$)',
             xy=(0, 1), xytext=(.1, 1), xycoords='data',
             arrowprops=dict(facecolor='black', shrink=0.05),
             horizontalalignment='center', verticalalignment='center')
# Add grid
plt.grid('off')
for x in [0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0]:
    plt.plot([0, x], [x, 0], 'k', alpha=0.2)
    plt.plot([0, 0 + (1-x)/2], [x, x + (1-x)/2], 'k', alpha=0.2)
    plt.plot([x, x + (1-x)/2], [0, 0 + (1-x)/2], 'k', alpha=0.2)
    
    '''
print(__doc__)
    
    plt.show()
    
        def test_repr(self):
        self.assertEqual('PollError(exhausted=%s, updated={sentinel.AR: '
                         'sentinel.AR2})' % repr(set()), repr(self.invalid))
    
    # If true, '()' will be appended to :func: etc. cross-reference text.
#add_function_parentheses = True
    
    
class AskTest(unittest.TestCase):
    '''Test the ask method.'''
    def setUp(self):
        logging.disable(logging.CRITICAL)