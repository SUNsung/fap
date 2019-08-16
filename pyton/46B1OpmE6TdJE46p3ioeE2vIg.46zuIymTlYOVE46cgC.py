
        
        from django.core.exceptions import ImproperlyConfigured
from django.http import HttpResponse
from django.test import RequestFactory, SimpleTestCase, override_settings
from django.test.utils import require_jinja2
from django.urls import resolve
from django.views.generic import RedirectView, TemplateView, View
    
    
@unittest.skipUnless(HAS_POSTGRES, 'The psycopg2 driver is needed for these tests')
class TestPostGISVersionCheck(unittest.TestCase):
    '''
    The PostGIS version check parses correctly the version numbers
    '''
    
        def test_gist_index(self):
        # Ensure the table is there and doesn't have an index.
        self.assertNotIn('field', self.get_constraints(CharFieldModel._meta.db_table))
        # Add the index.
        index_name = 'char_field_model_field_gist'
        index = GistIndex(fields=['field'], name=index_name)
        with connection.schema_editor() as editor:
            editor.add_index(CharFieldModel, index)
        constraints = self.get_constraints(CharFieldModel._meta.db_table)
        # The index was added.
        self.assertEqual(constraints[index_name]['type'], GistIndex.suffix)
        # Drop the index.
        with connection.schema_editor() as editor:
            editor.remove_index(CharFieldModel, index)
        self.assertNotIn(index_name, self.get_constraints(CharFieldModel._meta.db_table))
    
    
def decorator_from_middleware(middleware_class):
    '''
    Given a middleware class (not an instance), return a view decorator. This
    lets you use middleware functionality on a per-view basis. The middleware
    is created with no params passed.
    '''
    return make_middleware_decorator(middleware_class)()
    
        @property
    def name(self):
        'Return the name of this layer in the Data Source.'
        name = capi.get_fd_name(self._ldefn)
        return force_str(name, self._ds.encoding, strings_only=True)
    
    '''
=========================================================
Logistic Regression 3-class Classifier
=========================================================
    
    
def fixed_batch_size_comparison(data):
    all_features = [i.astype(int) for i in np.linspace(data.shape[1] // 10,
                                                       data.shape[1], num=5)]
    batch_size = 1000
    # Compare runtimes and error for fixed batch size
    all_times = defaultdict(list)
    all_errors = defaultdict(list)
    for n_components in all_features:
        pca = PCA(n_components=n_components)
        ipca = IncrementalPCA(n_components=n_components, batch_size=batch_size)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('ipca', ipca)]}
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    import gc
    
        xx = np.arange(start_dim, start_dim + n * step, step)
    plt.subplot(212)
    plt.title('Learning in high dimensional spaces')
    plt.plot(xx, scikit_classifier_results, 'g-', label='classification')
    plt.plot(xx, scikit_regressor_results, 'r-', label='regression')
    plt.legend(loc='upper left')
    plt.xlabel('number of dimensions')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    We selected two sets of two variables from the Boston housing data set
as an illustration of what kind of analysis can be done with several
outlier detection tools. For the purpose of visualization, we are working
with two-dimensional examples, but one should be aware that things are
not so trivial in high-dimension, as it will be pointed out.
    
    The dataset is generated using the ``make_biclusters`` function, which
creates a matrix of small values and implants bicluster with large
values. The rows and columns are then shuffled and passed to the
Spectral Co-Clustering algorithm. Rearranging the shuffled matrix to
make biclusters contiguous shows how accurately the algorithm found
the biclusters.
    
        parser = argparse.ArgumentParser(description = 'Download all the PDF/HTML links into README.md')
    parser.add_argument('-d', action='store', dest='directory')
    parser.add_argument('--no-html', action='store_true', dest='nohtml', default = False)
    parser.add_argument('--overwrite', action='store_true', default = False)    
    results = parser.parse_args()
    
        for url in urls:
        if not url.startswith('http'):
            print('markdown file name: ' + url)
            continue
        if check_live_url(url):
            print(url)
        else:
            print(url, file=sys.stderr)
    
    def upload_file(self, fileDir, isPicture=False, isVideo=False,
        toUserName='filehelper', file_=None, preparedFile=None):
    logger.debug('Request to upload a %s: %s' % (
        'picture' if isPicture else 'video' if isVideo else 'file', fileDir))
    if not preparedFile:
        preparedFile = _prepare_file(fileDir, file_)
        if not preparedFile:
            return preparedFile
    fileSize, fileMd5, file_ = \
        preparedFile['fileSize'], preparedFile['fileMd5'], preparedFile['file_']
    fileSymbol = 'pic' if isPicture else 'video' if isVideo else'doc'
    chunks = int((fileSize - 1) / 524288) + 1
    clientMediaId = int(time.time() * 1e4)
    uploadMediaRequest = json.dumps(OrderedDict([
        ('UploadType', 2),
        ('BaseRequest', self.loginInfo['BaseRequest']),
        ('ClientMediaId', clientMediaId),
        ('TotalLen', fileSize),
        ('StartPos', 0),
        ('DataLen', fileSize),
        ('MediaType', 4),
        ('FromUserName', self.storageClass.userName),
        ('ToUserName', toUserName),
        ('FileMd5', fileMd5)]
        ), separators = (',', ':'))
    r = {'BaseResponse': {'Ret': -1005, 'ErrMsg': 'Empty file detected'}}
    for chunk in range(chunks):
        r = upload_chunk_file(self, fileDir, fileSymbol, fileSize,
            file_, chunk, chunks, uploadMediaRequest)
    file_.close()
    if isinstance(r, dict):
        return ReturnValue(r)
    return ReturnValue(rawResponse=r)