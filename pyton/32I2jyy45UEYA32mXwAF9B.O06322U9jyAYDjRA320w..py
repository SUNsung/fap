    n_features = 10
    list_n_samples = np.linspace(100, 1000000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, list_n_samples,
                                            [n_features], precompute=True)
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    
def _wsgi_json(start_response, status_int, message=''):
    status_message = webob.util.status_reasons[status_int]
    message = message or status_message
    
        def check_for_bearer_token(self):
        pass