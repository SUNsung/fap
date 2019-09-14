
        
        :class:`sklearn.covariance.EllipticEnvelope` assumes the data is Gaussian and
learns an ellipse. It thus degrades when the data is not unimodal. Notice
however that this estimator is robust to outliers.
    
    Show below is a logistic-regression classifiers decision boundaries on the
first two dimensions (sepal length and width) of the `iris
<https://en.wikipedia.org/wiki/Iris_flower_data_set>`_ dataset. The datapoints
are colored according to their labels.
    
    from sklearn.cluster import AgglomerativeClustering
    
    import gc
    
    
def _linkcode_resolve(domain, info, package, url_fmt, revision):
    '''Determine a link to online source for a class/method/function
    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    # Get data
X1 = load_boston()['data'][:, [8, 10]]  # two clusters
X2 = load_boston()['data'][:, [5, 12]]  # 'banana'-shaped
    
    This example demonstrates how to generate a dataset and bicluster it
using the Spectral Co-Clustering algorithm.
    
    # compressed face
plt.figure(2, figsize=(3, 2.2))
plt.imshow(face_compressed, cmap=plt.cm.gray, vmin=vmin, vmax=vmax)
    
    def shorten_title(title):
    m1 = re.search('[[0-9]*]', title)
    m2 = re.search(''.*'', title)
    if m1:
        title = m1.group(0)
    if m2:
        title = ' '.join((title, m2.group(0)))   
    return title[:50] + ' [...]'    
    
      with MockVimBuffers( [ current_buffer ], [ current_buffer ], ( 1, 2 ) ):
    ycm.SendCompletionRequest( force_semantic = True )
    assert_that(
      ycm.GetCompletionResponse(),
      has_entries( {
        'completions': ToBytesOnPY2( ycm_completions ),
        'completion_start_column': ycm_start_column
      } )
    )
    
        return _MasterDiagnosticFilter( compiled_by_type )
    
    
  def GetErrorCount( self ):
    return self._DiagnosticsCount( _DiagnosticIsError )
    
    
def SendShutdownRequest():
  request = ShutdownRequest()
  # This is a blocking call.
  request.Start()

    
    
GENERIC_RESPONSE = {
  'clang': {
    'has_support': True,
    'version': 'Clang version'
  },
  'completer': {
    'items': [
      {
        'key': 'key',
        'value': 'value'
      }
    ],
    'name': 'Completer name',
    'servers': [
      {
        'address': '127.0.0.1',
        'executable': '/path/to/executable',
        'extras': [
          {
            'key': 'key',
            'value': 'value'
          }
        ],
        'is_running': True,
        'logfiles': [
          '/path/to/stdout/logfile',
          '/path/to/stderr/logfile'
        ],
        'name': 'Server name',
        'pid': 12345,
        'port': 1234
      }
    ]
  },
  'extra_conf': {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  },
  'python': {
    'executable': '/path/to/python/interpreter',
    'version': 'Python version'
  }
}
    
      opts = { 'filter_diagnostics' : {
    'java' : { 'regex' : '.*taco.*' },
    'xml'  : { 'regex' : '.*burrito.*' } } }
    
    
def KeywordsFromSyntaxListOutput_PhpSyntax_ContainsPreProc_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput(
                   ContentsOfTestFile( 'php_syntax' ) ),
               has_items( 'skip', 'function' ) )
    
      def shutdown( self, wait=True ):
    with self._shutdown_lock:
      self._shutdown = True
      self._work_queue.put( None )
    if wait:
      for t in self._threads:
        t.join()
  shutdown.__doc__ = _base.Executor.shutdown.__doc__

    
    
class TwitterServerShowUserHandler(RequestHandler):
    def get(self, screen_name):
        if screen_name == 'error':
            raise HTTPError(500)
        assert 'oauth_nonce' in self.request.arguments
        assert 'oauth_timestamp' in self.request.arguments
        assert 'oauth_signature' in self.request.arguments
        assert self.get_argument('oauth_consumer_key') == 'test_twitter_consumer_key'
        assert self.get_argument('oauth_signature_method') == 'HMAC-SHA1'
        assert self.get_argument('oauth_version') == '1.0'
        assert self.get_argument('oauth_token') == 'hjkl'
        self.write(dict(screen_name=screen_name, name=screen_name.capitalize()))
    
    
class EscapeTestCase(unittest.TestCase):
    def test_linkify(self):
        for text, kwargs, html in linkify_tests:
            linked = tornado.escape.linkify(text, **kwargs)
            self.assertEqual(linked, html)