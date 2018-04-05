
        
        from sklearn.dummy import DummyClassifier
    
    from sklearn.datasets.samples_generator import make_regression
    
      * scikit-learn
    
    pages = {
    u'ar': u'http://ar.wikipedia.org/wiki/%D9%88%D9%8A%D9%83%D9%8A%D8%A8%D9%8A%D8%AF%D9%8A%D8%A7',
    u'de': u'http://de.wikipedia.org/wiki/Wikipedia',
    u'en': u'https://en.wikipedia.org/wiki/Wikipedia',
    u'es': u'http://es.wikipedia.org/wiki/Wikipedia',
    u'fr': u'http://fr.wikipedia.org/wiki/Wikip%C3%A9dia',
    u'it': u'http://it.wikipedia.org/wiki/Wikipedia',
    u'ja': u'http://ja.wikipedia.org/wiki/Wikipedia',
    u'nl': u'http://nl.wikipedia.org/wiki/Wikipedia',
    u'pl': u'http://pl.wikipedia.org/wiki/Wikipedia',
    u'pt': u'http://pt.wikipedia.org/wiki/Wikip%C3%A9dia',
    u'ru': u'http://ru.wikipedia.org/wiki/%D0%92%D0%B8%D0%BA%D0%B8%D0%BF%D0%B5%D0%B4%D0%B8%D1%8F',
#    u'zh': u'http://zh.wikipedia.org/wiki/Wikipedia',
}
    
    from sklearn import datasets
from sklearn.naive_bayes import GaussianNB
from sklearn.svm import LinearSVC
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import (brier_score_loss, precision_score, recall_score,
                             f1_score)
from sklearn.calibration import CalibratedClassifierCV, calibration_curve
from sklearn.model_selection import train_test_split
    
    Non-adjusted measures such as the V-Measure show a dependency between
the number of clusters and the number of samples: the mean V-Measure
of random labeling increases significantly as the number of clusters is
closer to the total number of samples used to compute the measure.
    
                # exhausted iterator
            self.assertRaises(StopIteration, next, itorg)
            dump = pickle.dumps((itorg, orig), proto)
            it, d = pickle.loads(dump)
            for i, x in enumerate(data):
                d[i] = x
            self.assertEqual(type(it), type(itorg))
            self.assertEqual(list(it), [])
    
        def test_set_properties(self):
        morsel = cookies.Morsel()
        with self.assertRaises(AttributeError):
            morsel.key = ''
        with self.assertRaises(AttributeError):
            morsel.value = ''
        with self.assertRaises(AttributeError):
            morsel.coded_value = ''
    
        def skip(self):
        '''Skip the rest of the chunk.
        If you are not interested in the contents of the chunk,
        this method should be called so that the file points to
        the start of the next chunk.
        '''
    
    simple_escapes = {'a': '\a',
                  'b': '\b',
                  'f': '\f',
                  'n': '\n',
                  'r': '\r',
                  't': '\t',
                  'v': '\v',
                  ''': ''',
                  ''': ''',
                  '\\': '\\'}
    
        # We only ever write one 'entry point' symbol - either
    # 'main' or 'WinMain'.  Therefore, there is no need to
    # pass a subsystem switch to the linker as it works it
    # out all by itself.  However, the subsystem _does_ determine
    # the file extension and additional linker flags.
    target_link_flags = ''
    target_ext = '.exe'
    if subsystem_details[vars['subsystem']][2]:
        target_link_flags = '-dll'
        target_ext = '.dll'
    
    class PyBaseExceptionObjectPtr(PyObjectPtr):
    '''
    Class wrapping a gdb.Value that's a PyBaseExceptionObject* i.e. an exception
    within the process being debugged.
    '''
    _typename = 'PyBaseExceptionObject'
    
        def test_help_flag(self):
        rc, out, err = assert_python_ok('-m', 'json.tool', '-h')
        self.assertEqual(rc, 0)
        self.assertTrue(out.startswith(b'usage: '))
        self.assertEqual(err, b'')
    
            try:
            result = self.fn(*self.args, **self.kwargs)
        except BaseException:
            e = sys.exc_info()[1]
            self.future.set_exception(e)
        else:
            self.future.set_result(result)
    
    def is_prime(n):
    if n % 2 == 0:
        return False
    
    
def _FormatCompleterDebugInfo( completer ):
  message = '{0} completer debug information:\n'.format( completer[ 'name' ] )
  for server in completer[ 'servers' ]:
    name = server[ 'name' ]
    if server[ 'is_running' ]:
      address = server[ 'address' ]
      port = server[ 'port' ]
      if address and port:
        message += '  {0} running at: http://{1}:{2}\n'.format( name,
                                                                address,
                                                                port )
      else:
        message += '  {0} running\n'.format( name )
      message += '  {0} process ID: {1}\n'.format( name, server[ 'pid' ] )
    else:
      message += '  {0} not running\n'.format( name )
    message += '  {0} executable: {1}\n'.format( name, server[ 'executable'] )
    logfiles = server[ 'logfiles' ]
    if logfiles:
      message += '  {0} logfiles:\n'.format( name )
      for logfile in logfiles:
        message += '    {0}\n'.format( logfile )
    else:
      message += '  No logfiles available\n'
    if 'extras' in server:
      for extra in server[ 'extras' ]:
        message += '  {0} {1}: {2}\n'.format( name,
                                              extra[ 'key' ],
                                              extra[ 'value' ] )
  for item in completer[ 'items' ]:
    message += '  {0}: {1}\n'.format( item[ 'key' ].capitalize(),
                                      item[ 'value' ] )
  return message
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def FormatDebugInfoResponse_ExtraConfFoundAndLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': True,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found and loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )