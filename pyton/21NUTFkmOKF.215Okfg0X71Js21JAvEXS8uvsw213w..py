
        
        cc_library(
    name = 'syntaxnet_link_feature_extractor',
    srcs = ['syntaxnet_link_feature_extractor.cc'],
    hdrs = ['syntaxnet_link_feature_extractor.h'],
    deps = [
        '//dragnn/protos:spec_proto_cc',
        '//syntaxnet:base',
        '//syntaxnet:embedding_feature_extractor',
        '//syntaxnet:parser_transitions',
        '//syntaxnet:task_context',
    ],
)
    
    # Don't use this library directly; instead use 'dragnn/python:mst_ops'.
tf_gen_op_wrapper_py(
    name = 'mst_ops',
    visibility = ['//dragnn/python:__pkg__'],
    deps = [':mst_ops_op_lib'],
)
    
    tf_proto_library_py(
    name = 'data_pb2',
    srcs = ['data.proto'],
)
    
      def __init__(self, master, component_spec):
    self.master = master
    self.spec = component_spec
    self.name = component_spec.name
    self.network = MockNetwork()
    self.beam_size = 1
    self.num_actions = 45
    self._attrs = {}
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        def get_auth(self, username=None, password=None):
        '''
        If `auth_parse` is set to `True`, then `username`
        and `password` contain the parsed credentials.
    
    import requests.auth
    
    First, we fix a training set and increase the number of
samples. Then we plot the computation time as function of
the number of samples.
    
    
@ignore_warnings
def benchmark(metrics=tuple(v for k, v in sorted(METRICS.items())),
              formats=tuple(v for k, v in sorted(FORMATS.items())),
              samples=1000, classes=4, density=.2,
              n_times=5):
    '''Times metric calculations for a number of inputs
    
                c_bar = plt.bar(xvals, build_time[alg] - bottom,
                            width, bottom, color='r')
            q_bar = plt.bar(xvals, query_time[alg],
                            width, build_time[alg], color='b')
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
       ###########################################################################
    # Set custom automatic method selection
    sampling_algorithm['custom-auto'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='auto',
                                       random_state=random_state)
    
    
if not os.path.exists(html_folder):
    os.makedirs(html_folder)
    
    '''
print(__doc__)
    
    This illustrates the `datasets.make_multilabel_classification` dataset
generator. Each sample consists of counts of two features (up to 50 in
total), which are differently distributed in each of two classes.
    
        def __init__(self, expecting, input):
        RecognitionException.__init__(self, input)
        
        self.expecting = expecting
    
    
    def getRuleInvocationStack(self):
        '''
        Return List<String> of the rules in your parser instance
        leading up to a call to this method.  You could override if
        you want more details such as the file/line info of where
        in the parser java code a rule is invoked.
    
    
    def insertAfter(self, *args):
        if len(args) == 2:
            programName = self.DEFAULT_PROGRAM_NAME
            index = args[0]
            text = args[1]
            
        elif len(args) == 3:
            programName = args[0]
            index = args[1]
            text = args[2]
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'futuresdoc'
    
    
@contextlib.contextmanager
def MockEventNotification( response_method, native_filetype_completer = True ):
  '''Mock out the EventNotification client request object, replacing the
  Response handler's JsonFromFuture with the supplied |response_method|.
  Additionally mock out YouCompleteMe's FiletypeCompleterExistsForFiletype
  method to return the supplied |native_filetype_completer| parameter, rather
  than querying the server'''
    
    
  def ShowDetailedDiagnostic( self ):
    detailed_diagnostic = BaseRequest().PostDataToHandler(
        BuildRequestData(), 'detailed_diagnostic' )
    
    
def _MockGetBufferVariable( buffer_number, option ):
  for vim_buffer in VIM_MOCK.buffers:
    if vim_buffer.number == buffer_number:
      if option == '&mod':
        return vim_buffer.modified
      if option == '&ft':
        return vim_buffer.filetype
      if option == 'changedtick':
        return vim_buffer.changedtick
      if option == '&bh':
        return vim_buffer.bufhidden
      return ''
  return ''
    
      vim_command.assert_has_exact_calls( [
    call( '12split {0}'.format( __file__ ) ),
    call( 'exec '
          ''au BufEnter <buffer> :silent! checktime {0}''.format( __file__ ) ),
    call( 'silent! normal! Gzz' ),
    call( 'silent! wincmd p' )
  ] )
    
    
def GetCurrentBufferFilepath():
  return GetBufferFilepath( vim.current.buffer )
    
      return FilterLevel
    
    
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
    
    
def ExtractKeywordsFromGroup_KeywordWithoutNextgroup_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'skipempty foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'skipempty', 'foo', 'bar', 'zoo', 'goo' ) )