# define outlier/anomaly detection methods to be compared
anomaly_algorithms = [
    ('Robust covariance', EllipticEnvelope(contamination=outliers_fraction)),
    ('One-Class SVM', svm.OneClassSVM(nu=outliers_fraction, kernel='rbf',
                                      gamma=0.1)),
    ('Isolation Forest', IsolationForest(contamination=outliers_fraction,
                                         random_state=42)),
    ('Local Outlier Factor', LocalOutlierFactor(
        n_neighbors=35, contamination=outliers_fraction))]
    
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
    
    The outer product of the row and column label vectors shows a
representation of the checkerboard structure.
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
    agglo.fit(X)
X_reduced = agglo.transform(X)
    
    plt.figure(figsize=(12, 12))
    
    for face_location in face_locations:
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
        def test_cnn_face_locations(self):
        img = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg'))
        detected_faces = api.face_locations(img, model='cnn')
    
        # Loop through each face in this frame of video
    for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
        # See if the face is a match for the known face(s)
        matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
    
    # 提示：运行本案例需要安装Flask，你可以用下面的代码安装Flask
# $ pip3 install flask
    
    
  def _OnCompleteDone_Csharp( self ):
    completions = self._GetCompletionsUserMayHaveCompleted()
    namespaces = [ _GetRequiredNamespaceImport( c ) for c in completions ]
    namespaces = [ n for n in namespaces if n ]
    if not namespaces:
      return
    
    
  def NullCharactersInExtraInfoAndDocString_test( self ):
    self._Check( '0', {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED\x00INFO',
      'extra_data': {
        'doc_string': 'DOC\x00STRING'
      },
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILEDINFO\nDOCSTRING',
      'equal'    : 1,
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0',
    } )
    
    
  def Response( self ):
    return self._response
    
        for diags in itervalues( self._line_to_diags ):
      # We also want errors to be listed before warnings so that errors aren't
      # hidden by the warnings; Vim won't place a sign over an existing one.
      diags.sort( key = lambda diag: ( diag[ 'kind' ],
                                       diag[ 'location' ][ 'column_num' ] ) )
    
    
  def Response( self ):
    return self._response
    
    
def FormatDebugInfoResponse_NoExtraConf_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'No extra configuration file found\n'
    )
  )