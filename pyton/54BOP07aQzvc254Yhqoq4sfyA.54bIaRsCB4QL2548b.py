
        
            def from_mapping(self, *mapping, **kwargs):
        '''Updates the config like :meth:`update` ignoring items with non-upper
        keys.
    
        :param source: the source code of the template to be
                   rendered
    :param context: the variables that should be available in the
                    context of the template.
    '''
    ctx = _app_ctx_stack.top
    ctx.app.update_template_context(context)
    return _render(ctx.app.jinja_env.from_string(source),
                   context, ctx.app)

    
    
def test_config_missing_json():
    app = flask.Flask(__name__)
    with pytest.raises(IOError) as e:
        app.config.from_json('missing.json')
    msg = str(e.value)
    assert msg.startswith('[Errno 2] Unable to load configuration '
                          'file (No such file or directory):')
    assert msg.endswith('missing.json'')
    assert not app.config.from_json('missing.json', silent=True)
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
    
PACKAGES = [
    'httpie',
    'requests',
    'pygments',
]
    
        # The URL prefix the adapter should be mount to.
    prefix = None
    
        def test_cert_and_key(self, httpbin_secure):
        r = http(httpbin_secure + '/get',
                 '--cert', CLIENT_CERT,
                 '--cert-key', CLIENT_KEY)
        assert HTTP_OK in r
    
        # Print results
    ###########################################################################
    print('Script arguments')
    print('===========================')
    arguments = vars(opts)
    print('%s \t | %s ' % ('Arguments'.ljust(16),
                           'Value'.center(12),))
    print(25 * '-' + ('|' + '-' * 14) * 1)
    for key, value in arguments.items():
        print('%s \t | %s ' % (str(key).ljust(16),
                               str(value).strip().center(12)))
    print('')
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
DATA_FOLDER = 'txt_sentoken'
    
    import os
import tarfile
from contextlib import closing
    
    # TASK: Fit the pipeline on the training set
    
    from sklearn.datasets import make_checkerboard
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralBiclustering
from sklearn.metrics import consensus_score
    
    n_features = X.shape[1]
    
    
n_train = 20  # samples for training
n_test = 200  # samples for testing
n_averages = 50  # how often to repeat classification
n_features_max = 75  # maximum number of features
step = 4  # step size for the calculation
    
    # Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: BSD 3 clause
    
    # Generate waveform data
n_features = 2000
t = np.pi * np.linspace(0, 1, n_features)
    
            general form:
        @returns request(s)/item(s) [min=1 [max]]
    
        raise socket.error('unknown address family')
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
        def __init__(self, decisionNumber, input):
        RecognitionException.__init__(self, input)
    
            raise NotImplementedError
    
            return '[@%r,%r,<%r>%s,%r:%r]' % (self.index,
                                          txt,
                                          self.type,
                                          channelStr,
                                          self.line,
                                          self.charPositionInLine
                                          )
    
    
            self.config = mock.MagicMock(dnsimple_credentials=path,
                                     dnsimple_propagation_seconds=0)  # don't wait during tests
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        def test_restart_failure(self):
        self.client.installer = mock.MagicMock()
        self.client.installer.restart.side_effect = [errors.PluginError, None]
        self._test_error_with_rollback()
    
    # If true, links to the reST sources are added to the pages.
#html_show_sourcelink = True
    
                FIRST_COMPLETED - Return when any future finishes or is
                              cancelled.
            FIRST_EXCEPTION - Return when any future finishes by raising an
                              exception. If no future raises an exception
                              then it is equivalent to ALL_COMPLETED.
            ALL_COMPLETED -   Return when all futures finish or are cancelled.
    
            Args:
            max_workers: The maximum number of processes that can be used to
                execute the given calls. If None or not given then as many
                worker processes will be created as the machine has processors.
        '''
        _check_system_limits()
    
        def run(self):
        if not self.future.set_running_or_notify_cancel():
            return
    
    
def ExtractKeywordsFromGroup_KeywordAssignAndMiddle_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'nextgroup=zoo foo skipnl bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'skipnl', 'bar', 'zoo', 'goo' ) )
    
      text_after_cursor = vimsupport.TextAfterCursor()
  if not text_after_cursor:
    return candidates
    
    
class FakeFuture( object ):
  '''A fake version of a future response object, just about suitable for
  mocking a server response as generated by PostDataToHandlerAsync.
  Not usually used directly. See MockAsyncServerResponse* methods'''
  def __init__( self, done, response = None, exception = None ):
    self._done = done
    
    
  def No_Insertion_Text_test( self ):
    self._Check( 0, {
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
      'extra_data': {
        'doc_string':    'DOC STRING',
      },
    }, {
      'word'     : '',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO\nDOC STRING',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0'
    } )

    
    from ycm.client.base_request import BaseRequest, BuildRequestData
    
    
class ShutdownRequest( BaseRequest ):
  def __init__( self ):
    super( ShutdownRequest, self ).__init__()
    
        def _abort_diagnostics(self):
        return 'abort diagnostics'
    
        def __init__(self):
        self.msg_queue = []
        self.subscribers = {}
    
        def test_am_station_overflow_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)