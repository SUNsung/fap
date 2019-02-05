
        
            def is_face_card(self):
        '''Jack = 11, Queen = 12, King = 13'''
        return True if 10 < self._value <= 13 else False
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
        def __init__(self, id, name):
        self.id = id
        self.name = name
        self.friend_ids = []
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        def __init__(self, pages, data_store, reverse_index_queue, doc_index_queue):
        self.pages = pages
        self.data_store = data_store
        self.reverse_index_queue = reverse_index_queue
        self.doc_index_queue = doc_index_queue
    
            ax.xaxis.set_major_locator(ticker.FixedLocator(tick_vals))
        ax.xaxis.set_major_formatter(ticker.FixedFormatter(tick_labels))
    
        for n_samples in sample_sizes:
        X = random_state.rand(n_samples, 300)
    
    import numpy as np
from scipy.cluster import hierarchy
import matplotlib.pyplot as plt
    
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
    
    from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.linear_model import Perceptron
from sklearn.pipeline import Pipeline
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    
# The training data folder must be passed as first argument
languages_data_folder = sys.argv[1]
dataset = load_files(languages_data_folder)
    
    
def plot_influence(conf, mse_values, prediction_times, complexities):
    '''
    Plot influence of model complexity on both accuracy and latency.
    '''
    plt.figure(figsize=(12, 6))
    host = host_subplot(111, axes_class=Axes)
    plt.subplots_adjust(right=0.75)
    par1 = host.twinx()
    host.set_xlabel('Model Complexity (%s)' % conf['complexity_label'])
    y1_label = conf['prediction_performance_label']
    y2_label = 'Time (s)'
    host.set_ylabel(y1_label)
    par1.set_ylabel(y2_label)
    p1, = host.plot(complexities, mse_values, 'b-', label='prediction error')
    p2, = par1.plot(complexities, prediction_times, 'r-',
                    label='latency')
    host.legend(loc='upper right')
    host.axis['left'].label.set_color(p1.get_color())
    par1.axis['right'].label.set_color(p2.get_color())
    plt.title('Influence of Model Complexity - %s' % conf['estimator'].__name__)
    plt.show()
    
    buffer = []
t0 = time.time()
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
            self._signer = None
        if is_botocore():
            import botocore.auth
            import botocore.credentials
            kw.pop('anon', None)
            if kw:
                raise TypeError('Unexpected keyword arguments: %s' % kw)
            if not self.anon:
                SignerCls = botocore.auth.AUTH_TYPE_MAPS['s3']
                self._signer = SignerCls(botocore.credentials.Credentials(
                    aws_access_key_id, aws_secret_access_key))
        else:
            _S3Connection = _get_boto_connection()
            try:
                self.conn = _S3Connection(
                    aws_access_key_id, aws_secret_access_key, **kw)
            except Exception as ex:
                raise NotConfigured(str(ex))
    
        def set_appid_not_exist(self, appid):
        self.logger.warn('APPID_manager, set_appid_not_exist %s', appid)
        with self.lock:
            if appid not in self.not_exist_appids:
                self.not_exist_appids.append(appid)
            try:
                self.config.GAE_APPIDS.remove(appid)
            except:
                pass
    
                # some site need full name cert
            # like https://about.twitter.com in Google Chrome
            if not isip and not full_name and commonname.count('.') >= 2 and [len(x) for x in reversed(commonname.split('.'))] > [2, 4]:
                commonname = commonname.partition('.')[-1]
                certfile = CertUtil._get_old_cert(commonname)
                if certfile:
                    return certfile
    
        noarch_lib = os.path.abspath( os.path.join(python_path, 'lib', 'noarch'))
    sys.path.append(noarch_lib)
    
        for qualified, server, _, _ in server_list:
        if qualified:
            best_server = server[0]
            break
    log = Log()
    if best_server:
        log.write('best server is: %s.' % best_server)
    else:
        xlog.warning('no server detected, return default: teredo.remlab.net.')
        log.write('no server detected, return default: teredo.remlab.net.')
        best_server = 'teredo.remlab.net'
    log.close()
    return best_server
    
    And tree.TreeParser finally fetches its input from a tree.TreeNodeStream:
    
    
    def predict(self, input):
        '''
        From the input stream, predict what alternative will succeed
	using this DFA (representing the covering regular approximation
	to the underlying CFL).  Return an alternative number 1..n.  Throw
	 an exception upon error.
	'''
        mark = input.mark()
        s = 0 # we always start at s0
        try:
            for _ in xrange(50000):
                #print '***Current state = %d' % s
                
                specialState = self.special[s]
                if specialState >= 0:
                    #print 'is special'
                    s = self.specialStateTransition(specialState, input)
                    if s == -1:
                        self.noViableAlt(s, input)
                        return 0
                    input.consume()
                    continue