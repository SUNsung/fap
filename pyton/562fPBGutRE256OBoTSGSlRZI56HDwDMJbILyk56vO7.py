
        
        
class PrivateChat(Chat):
    
        def __init__(self, num_levels):
        self.num_levels = num_levels
        self.levels = []  # List of Levels
    
            (foo, p1), 2
        (bar, p1), 2
        (bar, p1), 1
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        timestamp, product_id, category, quantity = line.split('\t')
        if self.within_past_week(timestamp):
            yield (category, product_id), quantity
    
    
if __name__ == '__main__':
    RemoveDuplicateUrls.run()

    
        def __init__(self, person_ids, lookup):
        self.lookup = lookup
        self.person_ids = person_ids
        self.visited_ids = set()
    
        def _init_github_account(self):
        try:
            info = netrc.netrc().authenticators(self._NETRC_MACHINE)
            if info is not None:
                self._username = info[0]
                self._password = info[2]
                compat_print('Using GitHub credentials found in .netrc...')
                return
            else:
                compat_print('No GitHub credentials found in .netrc')
        except (IOError, netrc.NetrcParseError):
            compat_print('Unable to parse .netrc')
        self._username = compat_input(
            'Type your GitHub username or email address and press [Return]: ')
        self._password = compat_getpass(
            'Type your GitHub password and press [Return]: ')
    
    
if len(sys.argv) <= 1:
    print('Specify the version number as parameter')
    sys.exit()
version = sys.argv[1]
    
        ie_htmls = []
    for ie in youtube_dl.list_extractors(age_limit=None):
        ie_html = '<b>{}</b>'.format(ie.IE_NAME)
        ie_desc = getattr(ie, 'IE_DESC', None)
        if ie_desc is False:
            continue
        elif ie_desc is not None:
            ie_html += ': {}'.format(ie.IE_DESC)
        if not ie.working():
            ie_html += ' (Currently broken)'
        ie_htmls.append('<li>{}</li>'.format(ie_html))
    
    sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
    # The master toctree document.
master_doc = 'index'
    
        By default, it represents the actual environment.
    All of the attributes can be overwritten though, which
    is used by the test suite to simulate various scenarios.
    
        package_name = '(builtin)'
    
    
class PluginManager(object):
    
    
# bdist_wheel
extras_require = {
    # http://wheel.readthedocs.io/en/latest/#defining-conditional-dependencies
    'python_version == '3.0' or python_version == '3.1'': ['argparse>=1.2.1'],
    ':sys_platform == 'win32'': ['colorama>=0.2.4'],
}
    
        data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
            X, Y, coef_ = make_regression(
            n_samples=(i * step) + n_test_samples, n_features=n_features,
            noise=0.1, n_informative=n_informative, coef=True)
    
    import numpy as np
import gc
from datetime import datetime
from sklearn.isotonic import isotonic_regression
from sklearn.utils.bench import total_seconds
import matplotlib.pyplot as plt
import argparse
    
    ###############################################################################
clf = SGDRegressor(penalty='l1', alpha=.2, fit_intercept=True, max_iter=2000,
                   tol=None)
clf.fit(X_train, y_train)
print('model sparsity: %f' % sparsity_ratio(clf.coef_))
    
        xx = range(0, n * step, step)
    plt.figure('scikit-learn tree benchmark results')
    plt.subplot(211)
    plt.title('Learning with varying number of samples')
    plt.plot(xx, scikit_classifier_results, 'g-', label='classification')
    plt.plot(xx, scikit_regressor_results, 'r-', label='regression')
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    
    Copyright 2014 Steven Loria
    
    
URL = ('http://www.cs.cornell.edu/people/pabo/'
       'movie-review-data/review_polarity.tar.gz')
    
    # Split the dataset in training and test set:
docs_train, docs_test, y_train, y_test = train_test_split(
    dataset.data, dataset.target, test_size=0.5)
    
    from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.linear_model import Perceptron
from sklearn.pipeline import Pipeline
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
            channel = pyflic.ButtonConnectionChannel(self._address)
        channel.on_button_up_or_down = self._on_up_down
    
        @Throttle(MIN_TIME_BETWEEN_SCANS)
    async def _async_update_info(self):
        '''
        Query Tado for device marked as at home.
    
        def download_file(service):
        '''Start thread to download file specified in the URL.'''
        def do_download():
            '''Download the file.'''
            try:
                url = service.data[ATTR_URL]
    
    
def setup(hass, config):
    '''Set up the folder watcher.'''
    conf = config[DOMAIN]
    for watcher in conf:
        path = watcher[CONF_FOLDER]
        patterns = watcher[CONF_PATTERNS]
        if not hass.config.is_allowed_path(path):
            _LOGGER.error('folder %s is not valid or allowed', path)
            return False
        Watcher(path, patterns, hass)
    
    _LOGGER = logging.getLogger(__name__)
DOMAIN = 'hive'
DATA_HIVE = 'data_hive'
DEVICETYPES = {
    'binary_sensor': 'device_list_binary_sensor',
    'climate': 'device_list_climate',
    'light': 'device_list_light',
    'switch': 'device_list_plug',
    'sensor': 'device_list_sensor',
    }
    
    import voluptuous as vol