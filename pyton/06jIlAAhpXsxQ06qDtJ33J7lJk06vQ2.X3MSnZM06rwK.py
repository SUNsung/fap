
        
        ESTIMATORS = {
    'dummy': DummyClassifier(),
    'random_forest': RandomForestClassifier(n_estimators=100,
                                            max_features='sqrt',
                                            min_samples_split=10),
    'extra_trees': ExtraTreesClassifier(n_estimators=100,
                                        max_features='sqrt',
                                        min_samples_split=10),
    'logistic_regression': LogisticRegression(),
    'naive_bayes': MultinomialNB(),
    'adaboost': AdaBoostClassifier(n_estimators=10),
}
    
        if args.show_plot:
        plt.plot(*zip(*timings))
        plt.title('Average time taken running isotonic regression')
        plt.xlabel('Number of observations')
        plt.ylabel('Time (s)')
        plt.axis('tight')
        plt.loglog()
        plt.show()

    
        if dataset_name == 'SA':
        lb = LabelBinarizer()
        x1 = lb.fit_transform(X[:, 1].astype(str))
        x2 = lb.fit_transform(X[:, 2].astype(str))
        x3 = lb.fit_transform(X[:, 3].astype(str))
        X = np.c_[X[:, :1], x1, x2, x3, X[:, 4:]]
        y = (y != b'normal.').astype(int)
    
    
def plot_results(X, y, label):
    plt.plot(X, y, label=label, marker='o')
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        def test_exception_propagation(self):
        def f(p):
            1/0
        def g(p):
            try: f(p)
            finally: p.add_event('falling through')
        f_ident = ident(f)
        g_ident = ident(g)
        self.check_events(g, [(1, 'call', g_ident),
                              (2, 'call', f_ident),
                              (2, 'return', f_ident),
                              (1, 'falling through', g_ident),
                              (1, 'return', g_ident),
                              ])
    
        sepIndex = p.rfind(sep)
    if altsep:
        altsepIndex = p.rfind(altsep)
        sepIndex = max(sepIndex, altsepIndex)
    
        def test_split(self):
        self.assertEqual(posixpath.split('/foo/bar'), ('/foo', 'bar'))
        self.assertEqual(posixpath.split('/'), ('/', ''))
        self.assertEqual(posixpath.split('foo'), ('', 'foo'))
        self.assertEqual(posixpath.split('////foo'), ('////', 'foo'))
        self.assertEqual(posixpath.split('//foo//bar'), ('//foo', 'bar'))
    
        def test_warnings_filter_precedence(self):
        expected_filters = ('error::BytesWarning '
                            'once::UserWarning '
                            'always::UserWarning')
        if not Py_DEBUG:
            expected_filters += (' '
                                 'default::DeprecationWarning '
                                 'ignore::DeprecationWarning '
                                 'ignore::PendingDeprecationWarning '
                                 'ignore::ImportWarning '
                                 'ignore::ResourceWarning')
    
        @support.refcount_test
    def test_refleaks_in___init__(self):
        gettotalrefcount = support.get_attribute(sys, 'gettotalrefcount')
        bzd = BZ2Decompressor()
        refs_before = gettotalrefcount()
        for i in range(100):
            bzd.__init__()
        self.assertAlmostEqual(gettotalrefcount() - refs_before, 0, delta=10)
    
        # Tell child processes to stop
    for i in range(NUMBER_OF_PROCESSES):
        task_queue.put('STOP')
    
    *What does this example do?
The code shows a way to localize words in two languages: English and
Greek. 'getLocalizer' is the factory method that constructs a
localizer depending on the language chosen. The localizer object will
be an instance from a different class according to the language
localized. However, the main code does not have to worry about which
localizer will be instantiated, since the method 'get' will be called
in the same way independently of the language.
    
        def setTM(self, tm):
        self._tm = tm
    
        def __get__(self, obj, T):
        def transaction(*args, **kwargs):
            state = memento(obj)
            try:
                return self.method(obj, *args, **kwargs)
            except Exception as e:
                state()
                raise e
    
    *What does this example do?
Below the 'StrategyExample' is an example of the client while the two
functions; 'execute_replacement1' and 'execute_replacement2' are
examples of the implementation or strategy. In the example we can see
that the client can vary it's 'execute' method by changing the
strategy which is responsible for implementation.
    
    *TL;DR80
Defines the skeleton of an algorithm, deferring steps to subclasses.
'''
    
        pprint(contributions)
    
    
def SendEventNotificationAsync( event_name,
                                buffer_number = None,
                                extra_data = None ):
  event = EventNotification( event_name, buffer_number, extra_data )
  event.Start()

    
    _logger = logging.getLogger( __name__ )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from future.utils import iterkeys, iteritems
from ycm import vimsupport
import re
    
      # See ':h group-name' for details on how the initial group hierarchy is built.
  group_name_to_group = {
    'Boolean': SyntaxGroup( 'Boolean' ),
    'Identifier': identifier_group,
    'Statement': statement_group,
    'PreProc': preproc_group,
    'Type': type_group
  }
    
        @YouCompleteMeInstance( { 'log_level': 'debug',
                              'keep_logfiles': 1 } )
    def Debug_test( ycm ):
        ...
  '''
  def Decorator( test ):
    @functools.wraps( test )
    def Wrapper( *args, **kwargs ):
      with UserOptions( custom_options ):
        ycm = YouCompleteMe()
        WaitUntilReady()
        ycm.CheckIfServerIsReady()
        try:
          test( ycm, *args, **kwargs )
        finally:
          StopServer( ycm )
    return Wrapper
  return Decorator

    
    
def FormatDebugInfoResponse_ExtraConfFoundButNotLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found but not loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    
def ExtractKeywordsFromGroup_KeywordWithoutNextgroup_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'skipempty foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'skipempty', 'foo', 'bar', 'zoo', 'goo' ) )