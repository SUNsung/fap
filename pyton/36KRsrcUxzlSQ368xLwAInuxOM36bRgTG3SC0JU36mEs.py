
        
            def build_response(self, req, resp):
        '''Builds a :class:`Response <requests.Response>` object from a urllib3
        response. This should not be called from user code, and is only exposed
        for use when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`
    
    import pytest
from requests.compat import urljoin
    
    # -------
# Pythons
# -------
    
            # Get the appropriate adapter to use
        adapter = self.get_adapter(url=request.url)
    
    Data structures that power Requests.
'''
    
            try:
            def get_netrc_auth_mock(url):
                return auth
            requests.sessions.get_netrc_auth = get_netrc_auth_mock
    
            print('benchmarking scikit-learn: ')
        scikit_results.append(bench(ScikitLasso, X, Y, X_test, Y_test, coef_))
        print('benchmarking glmnet: ')
        glmnet_results.append(bench(GlmnetLasso, X, Y, X_test, Y_test, coef_))
    
        if dat == 'shuttle':
        dataset = fetch_mldata('shuttle')
        X = dataset.data
        y = dataset.target
        X, y = sh(X, y, random_state=random_state)
        # we remove data with label 4
        # normal data are then those of class 1
        s = (y != 4)
        X = X[s, :]
        y = y[s]
        y = (y != 1).astype(int)
        print('----- ')
    
        print('LocalOutlierFactor processing...')
    model = LocalOutlierFactor(n_neighbors=20)
    tstart = time()
    model.fit(X)
    fit_time = time() - tstart
    scoring = -model.negative_outlier_factor_  # the lower, the more normal
    fpr, tpr, thresholds = roc_curve(y, scoring)
    AUC = auc(fpr, tpr)
    plt.plot(fpr, tpr, lw=1,
             label=('ROC for %s (area = %0.3f, train-time: %0.2fs)'
                    % (dataset_name, AUC, fit_time)))
    
    from sklearn.linear_model import lars_path, orthogonal_mp
from sklearn.datasets.samples_generator import make_sparse_coded_signal
    
    from sklearn.utils import check_random_state
from sklearn.metrics.pairwise import pairwise_distances
from sklearn.metrics.pairwise import pairwise_kernels
    
    if __name__ == '__main__':
    list_n_samples = np.linspace(100, 10000, 5).astype(np.int)
    list_n_features = [10, 100, 1000]
    n_test = 1000
    max_iter = 1000
    noise = 0.1
    alpha = 0.01
    sgd_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    elnet_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    ridge_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    asgd_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    for i, n_train in enumerate(list_n_samples):
        for j, n_features in enumerate(list_n_features):
            X, y, coef = make_regression(
                n_samples=n_train + n_test, n_features=n_features,
                noise=noise, coef=True)
    
    $ git clone git@github.com:lvdmaaten/bhtsne.git
$ cd bhtsne
$ g++ sptree.cpp tsne.cpp tsne_main.cpp -o bh_tsne -O2
$ touch __init__.py
$ cd ..
''')
    
    # General substitutions.
project = 'Python'
copyright = '2001-%s, Python Software Foundation' % time.strftime('%Y')
    
    
if __name__ == '__main__':
    main()

    
        f1 = manager.Foo1()
    f1.f()
    f1.g()
    assert not hasattr(f1, '_h')
    assert sorted(f1._exposed_) == sorted(['f', 'g'])
    
            print('Ordered results using pool.apply_async():')
        for r in results:
            print('\t', r.get())
        print()
    
    while True:
    line = input()
    if line == '':
        break
    buffer += line
    if sqlite3.complete_statement(buffer):
        try:
            buffer = buffer.strip()
            cur.execute(buffer)
    
        def insert(self):
        print('Inserting the execution begin status in the Database')
        time.sleep(0.1)
        # Following code is to simulate a communication from DB to TC
        if random.randrange(1, 4) == 3:
            return -1
    
            for i in range(3):
            num_obj.increment()
            print(num_obj)
        num_obj.value += 'x'  # will fail
        print(num_obj)
    except Exception as e:
        a_transaction.rollback()
        print('-- rolled back')
    print(num_obj)
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
        def __init__(self, super_user=False):
        self.super_user = super_user
    
        strat1 = StrategyExample(execute_replacement1)
    strat1.name = 'Strategy Example 1'
    
    # Create our template functions
templates = [make_template(s, g, a)
             for g in (get_list, get_lists)
             for a in (print_item, reverse_item)
             for s in (iter_elements, rev_elements)]
    
    *What does this example do?
To understand the implementation of this pattern in Python, it is
important to know that, in Python, instance attributes are stored in a
attribute dictionary called __dict__. Usually, each instance will have
its own dictionary, but the Borg pattern modifies this so that all
instances have the same dictionary.
In this example, the __shared_state attribute will be the dictionary
shared between all instances, and this is ensured by assigining
__shared_state to the __dict__ variable when initializing a new
instance (i.e., in the __init__ method). Other attributes are usually
added to the instance's attribute dictionary, but, since the attribute
dictionary itself is shared (which is __shared_state), all other
attributes will also be shared.
For this reason, when the attribute self.state is modified using
instance rm2, the value of self.state in instance rm1 also chages. The
same happends if self.state is modified using rm3, which is an
instance from a subclass.
Notice that even though they share attributes, the instances are not
the same, as seen by their ids.
    
        def get(self, msgid):
        return str(msgid)
    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
    # initialization of new graph search object
graph1 = GraphSearch(graph)
    
    
__licence__ = 'BSD (3 clause)'
    
    _LOGGER = logging.getLogger(__name__)
    
    _LOGGER = logging.getLogger(__name__)
    
    SPC_AREA_MODE_TO_STATE = {
    '0': STATE_ALARM_DISARMED,
    '1': STATE_ALARM_ARMED_HOME,
    '3': STATE_ALARM_ARMED_AWAY,
}
    
        open_connection()
    
    import voluptuous as vol
    
    
@asyncio.coroutine
def async_trigger(hass, config, action):
    '''Listen for events based on configuration.'''
    number = config.get(CONF_NUMBER)
    held_more_than = config.get(CONF_HELD_MORE_THAN)
    held_less_than = config.get(CONF_HELD_LESS_THAN)
    pressed_time = None
    cancel_pressed_more_than = None