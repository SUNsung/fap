
        
            app = flask.Flask(__name__)
    with pytest.raises(TypeError):
        app.config.from_mapping(
            {}, {}
        )
    
        @app.teardown_request
    def end_of_request(exception):
        buffer.append(exception)
    
        for n_components in [i.astype(int) for i in
                         np.linspace(data.shape[1] // 10,
                                     data.shape[1], num=4)]:
        all_times = defaultdict(list)
        all_errors = defaultdict(list)
        pca = PCA(n_components=n_components)
        rpca = RandomizedPCA(n_components=n_components, random_state=1999)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('rpca', rpca)]}
    
        # start time
    tstart = datetime.now()
    clf = DecisionTreeClassifier()
    clf.fit(X, Y).predict(X)
    delta = (datetime.now() - tstart)
    # stop time
    
        # split the dataset in training and test set:
    docs_train, docs_test, y_train, y_test = train_test_split(
        dataset.data, dataset.target, test_size=0.25, random_state=None)
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    parameters = {
        'vect__ngram_range': [(1, 1), (1, 2)],
    }
    grid_search = GridSearchCV(pipeline, parameters, n_jobs=-1)
    grid_search.fit(docs_train, y_train)
    
            controller.gamma = Tk.StringVar()
        controller.gamma.set('0.01')
        g = Tk.Frame(valbox)
        Tk.Label(g, text='gamma:', anchor='e', width=7).pack(side=Tk.LEFT)
        Tk.Entry(g, width=6, textvariable=controller.gamma).pack(side=Tk.LEFT)
        g.pack()
    
    print('consensus score: {:.1f}'.format(score))
    
    calibrated_classifier = sig_clf.calibrated_classifiers_[0]
prediction = np.vstack([calibrator.predict(this_p)
                        for calibrator, this_p in
                        zip(calibrated_classifier.calibrators_, p.T)]).T
prediction /= prediction.sum(axis=1)[:, None]
    
    # 2 independent random clusterings with equal cluster number
    
    from concurrent.futures import (as_completed, ThreadPoolExecutor,
                                ProcessPoolExecutor)
    
    if __name__ == '__main__':
    main()

    
    
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
    
    
def RegexSingleList_test():
  opts = _JavaFilter( { 'regex' : [ 'taco' ] }  )
  f = _CreateFilterForTypes( opts, [ 'java' ] )
    
    
def AdjustCandidateInsertionText_MultipleStrings_test():
  with MockTextAfterCursor( 'bar' ):
    eq_( [ { 'abbr': 'foobar', 'word': 'foo' },
           { 'abbr': 'zobar', 'word': 'zo' },
           { 'abbr': 'qbar', 'word': 'q' },
           { 'abbr': 'bar', 'word': '' }, ],
         base.AdjustCandidateInsertionText( [ 'foobar',
                                              'zobar',
                                              'qbar',
                                              'bar' ] ) )
    
    YCM_VAR_PREFIX = 'ycm_'
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from nose.tools import ok_
from ycm.paths import _EndsWithPython