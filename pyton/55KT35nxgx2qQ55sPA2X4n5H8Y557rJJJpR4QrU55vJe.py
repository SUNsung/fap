
        
            n_features = 10
    list_n_samples = np.linspace(100, 1000000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, list_n_samples,
                                            [n_features], precompute=True)
    
                std = X_train.std(axis=0)
            mean = X_train.mean(axis=0)
            X_train = (X_train - mean) / std
            X_test = (X_test - mean) / std
    
    
def setup(app):
    # Format template for issues URI
    # e.g. 'https://github.com/sloria/marshmallow/issues/{issue}
    app.add_config_value('issues_uri', default=None, rebuild='html')
    # Shortcut for GitHub, e.g. 'sloria/marshmallow'
    app.add_config_value('issues_github_path', default=None, rebuild='html')
    # Format template for user profile URI
    # e.g. 'https://github.com/{user}'
    app.add_config_value('issues_user_uri', default=None, rebuild='html')
    app.add_role('issue', issue_role)
    app.add_role('user', user_role)

    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    We generate data from three groups of waveforms. Two of the waveforms
(waveform 1 and waveform 2) are proportional one to the other. The cosine
distance is invariant to a scaling of the data, as a result, it cannot
distinguish these two waveforms. Thus even with no noise, clustering
using this distance will not separate out waveform 1 and 2.
    
    agglo = cluster.FeatureAgglomeration(connectivity=connectivity,
                                     n_clusters=32)
    
    The dataset used for evaluation is a 2D grid of isotropic Gaussian
clusters widely spaced.
'''
print(__doc__)
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
    # Ignore noisy twisted deprecation warnings
import warnings
warnings.filterwarnings('ignore', category=DeprecationWarning, module='twisted')
del warnings
    
        def short_desc(self):
        return 'Check spider contracts'
    
        spider = None
    items = {}
    requests = {}
    
        requires_project = False
    default_settings = {'SPIDER_LOADER_WARN_ONLY': True}
    
        def short_desc(self):
        return 'Get settings values'
    
        name = 'scrapes'
    
                # trustRoot set to platformTrust() will use the platform's root CAs.
            #
            # This means that a website like https://www.cacert.org will be rejected
            # by default, since CAcert.org CA certificate is seldom shipped.
            return optionsForClientTLS(hostname.decode('ascii'),
                                       trustRoot=platformTrust(),
                                       extraCertificateOptions={
                                            'method': self._ssl_method,
                                       })
    
        def _has_ajax_crawlable_variant(self, response):
        '''
        Return True if a page without hash fragment could be 'AJAX crawlable'
        according to https://developers.google.com/webmasters/ajax-crawling/docs/getting-started.
        '''
        body = response.text[:self.lookup_bytes]
        return _has_ajaxcrawlable_meta(body)
    
    def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % (name)) or os.path.exists('%s_privkey.txt' % (name)):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \nUse a different name or delete these files and re-run this program.' % (name, name))
        sys.exit()
    
        for i in range(1, n+1):
        for j in range(1, s+1):
            dp[i][j]= dp[i][j-1]
    
        freqPairs = list(freqToLetter.items())
    freqPairs.sort(key = getItemAtIndexZero, reverse = True)
    
        def test_invalid_registrations(self):
        msg_prefix = 'Invalid first argument to `register()`: '
        msg_suffix = (
            '. Use either `@register(some_class)` or plain `@register` on an '
            'annotated function.'
        )
        @functools.singledispatch
        def i(arg):
            return 'base'
        with self.assertRaises(TypeError) as exc:
            @i.register(42)
            def _(arg):
                return 'I annotated with a non-type'
        self.assertTrue(str(exc.exception).startswith(msg_prefix + '42'))
        self.assertTrue(str(exc.exception).endswith(msg_suffix))
        with self.assertRaises(TypeError) as exc:
            @i.register
            def _(arg):
                return 'I forgot to annotate'
        self.assertTrue(str(exc.exception).startswith(msg_prefix +
            '<function TestSingleDispatch.test_invalid_registrations.<locals>._'
        ))
        self.assertTrue(str(exc.exception).endswith(msg_suffix))
    
        def testReadBadFile(self):
        self.createTempFile(streams=0, suffix=self.BAD_DATA)
        with BZ2File(self.filename) as bz2f:
            self.assertRaises(OSError, bz2f.read)
    
        # Load the records from the pickle data stream.
    file.seek(0)
    memos = DBUnpickler(file, conn).load()
    
    dom = xml.dom.minidom.parseString(document)
    
            for i in range(n):  # 对每个数据
            i_score = np.inf
            i_label = -1
            for j in range(k):  # 与每个质心比较
                s_ij = score(data[i], centers[j])
                if s_ij < i_score:
                    i_score = s_ij
                    i_label = j
    
        search_txt = 'html a z'
    ret = search(search_txt, inverse_index, word_freq)
    # print(ret)
    printy(ret)
    r''' 
    ['html']
         ./data\b.txt
         ./data\c.txt
    ['a']
         ./data\b.txt
         ./data\a.txt
    ['z']
         -
    ['a', 'html']
         ./data\b.txt
    ['html', 'z']
         -
    ['a', 'z']
         -
    ['a', 'html', 'z']
         -
    '''

    
            # u_tilde(u~): context to question attended query vectors
        u_tilde = tf.matmul(softmax(S), u)  # [N, T, d]