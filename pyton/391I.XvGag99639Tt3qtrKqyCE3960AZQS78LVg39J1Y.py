
        
            # Path-based
    if self.hparams.input in ['path', 'integrated', 'integrated-nc']:
      network_input += self.path_dim
    
      if ntime is None:
    ntime = dataset['train_data'].shape[1]
  if nsamples is None:
    nsamples = dataset['train_data'].shape[0]
    
      dir_name = os.path.dirname(data_fname)
  if not os.path.exists(dir_name):
    os.makedirs(dir_name)
    
        Args:
      filepattern: Dataset file pattern.
      vocab: Vocabulary.
    '''
    self._vocab = vocab
    self._all_shards = tf.gfile.Glob(filepattern)
    tf.logging.info('Found %d shards at %s', len(self._all_shards), filepattern)
    
    import tensorflow as tf
    
      # *Total* number of n-grams produced by the generator.
  total_ngrams_produced = 0
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
        def get_headers(self):
        return self.formatting.format_headers(
            self.msg.headers).encode(self.output_encoding)
    
        def __iter__(self):
        return iter(self._plugins)
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
class Response(object):
    # noinspection PyDefaultArgument
    def __init__(self, url, headers={}, status_code=200):
        self.url = url
        self.headers = CaseInsensitiveDict(headers)
        self.status_code = status_code
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
            '''
        env = MockEnvironment(colors=256)
        r = http('--print=B', '--pretty=all', httpbin.url + '/post',
                 'Content-Type:text/foo+json', 'a=b', env=env)
        assert COLOR in r
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        ratio = n_samples / opts.n_population
    
    File: sparsity_benchmark.py
Function: benchmark_sparse_predict at line 56
Total time: 0.39274 s
    
    '''
    
      if not p.isfile( build_file ):
    sys.exit(
      'File {0} does not exist; you probably forgot to run:\n'
      '\tgit submodule update --init --recursive\n'.format( build_file ) )
    
      if left_string == right_string:
    return min( left_string_length, right_string_length )
    
    
class MessagesPoll( BaseRequest ):
  def __init__( self ):
    super( MessagesPoll, self ).__init__()
    self._request_data = BuildRequestData()
    self._response_future = None
    
    
def ConvertVimDataToCompletionData( vim_data ):
  # see :h complete-items for a description of the dictionary fields
  completion_data = {}
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def AdjustCandidateInsertionText_MoreThanWordMatchingAfterCursor_test():
  with MockTextAfterCursor( 'bar.h' ):
    eq_( [ { 'abbr': 'foobar.h', 'word': 'foo' } ],
         base.AdjustCandidateInsertionText( [ 'foobar.h' ] ) )
    
    
  def Just_Detailed_Info_test( self ):
    self._Check( 9999999999, {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '9999999999',
    } )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa