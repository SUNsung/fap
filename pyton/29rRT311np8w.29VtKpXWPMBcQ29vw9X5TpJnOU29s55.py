
        
          def testMaximumSpanningTreeGradientError(self):
    '''Numerically validates the max score gradient.'''
    with self.test_session():
      # The maximum-spanning-tree-score function, as a max of linear functions,
      # is piecewise-linear (i.e., faceted).  The numerical gradient estimate
      # may be inaccurate if the epsilon ball used for the estimate crosses an
      # edge from one facet to another.  To avoid spurious errors, we manually
      # set the sample point so the epsilon ball fits in a facet.  Or in other
      # words, we set the scores so there is a non-trivial margin between the
      # best and second-best trees.
      scores_raw = [[[0, 0, 0, 0],
                     [1, 0, 0, 0],
                     [1, 2, 0, 0],
                     [1, 2, 3, 4]],
                    [[4, 3, 2, 9],
                     [0, 0, 2, 9],
                     [0, 0, 0, 9],
                     [9, 9, 9, 9]]]  # pyformat: disable
    
        Hyperparameters used:
      dropout_rate: The probability that an input is not dropped.  Only used
          when the |dropout_keep_prob| parameter is negative.
    '''
    self._attrs = get_attrs_with_defaults(
        component.spec.network_unit.parameters,
        defaults={
            'hidden_layer_sizes': '',
            'omit_logits': False,
            'layer_norm_input': False,
            'layer_norm_hidden': False,
            'nonlinearity': 'relu',
            'dropout_keep_prob': -1.0,
            'dropout_per_sequence': False,
            'dropout_all_layers': False,
            'initialize_bias_zero': False,
            'initialize_softmax_zero': False,
            'initialize_hidden_orthogonal': False,
        })
    
      def testIdentityInitializerNonSquareRank3(self):
    divisor = 2.
    std = 1e-3
    shape = (2, 2, 6)
    m = divisor / shape[-1]
    expected = [[[
        5.05617063e-05, 4.99951362e-04, -9.95908980e-04, 6.93598529e-04,
        -4.18301526e-04, -1.58457726e-03
    ], [
        -6.47706795e-04, 5.98575163e-04, 3.32250027e-04, -1.14747661e-03,
        6.18669670e-04, -8.79869258e-05
    ]], [[m, m, m, 3.50997143e-04, -6.06887275e-04, 1.54697930e-03],
         [7.23341596e-04, 4.61355667e-05, -9.82991653e-04, m, m, m]]]
    self.IdentityInitializerHelper(shape, expected, divisor, std)
    
          # Add hooks.  This should add hooks for all rank-2 params.
      with tf.variable_scope(component.name, reuse=True):
        runtime_support.add_hooks(component, export_pb2.CellSubgraphSpec())
    
          prev_tagger_steps = stats[1]
      prev_parser_steps = stats[2]
      tf.logging.info('adjusting schedule from steps: %d, %d',
                      prev_tagger_steps, prev_parser_steps)
      pretrain_steps[0] = max(pretrain_steps[0] - prev_tagger_steps, 0)
      tf.logging.info('new pretrain steps: %d', pretrain_steps[0])
    
    
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
    
if __name__ == '__main__':
    main()

    
        from urllib3.packages.ordered_dict import OrderedDict
    
        # Client Error.
    400: ('bad_request', 'bad'),
    401: ('unauthorized',),
    402: ('payment_required', 'payment'),
    403: ('forbidden',),
    404: ('not_found', '-o-'),
    405: ('method_not_allowed', 'not_allowed'),
    406: ('not_acceptable',),
    407: ('proxy_authentication_required', 'proxy_auth', 'proxy_authentication'),
    408: ('request_timeout', 'timeout'),
    409: ('conflict',),
    410: ('gone',),
    411: ('length_required',),
    412: ('precondition_failed', 'precondition'),
    413: ('request_entity_too_large',),
    414: ('request_uri_too_large',),
    415: ('unsupported_media_type', 'unsupported_media', 'media_type'),
    416: ('requested_range_not_satisfiable', 'requested_range', 'range_not_satisfiable'),
    417: ('expectation_failed',),
    418: ('im_a_teapot', 'teapot', 'i_am_a_teapot'),
    421: ('misdirected_request',),
    422: ('unprocessable_entity', 'unprocessable'),
    423: ('locked',),
    424: ('failed_dependency', 'dependency'),
    425: ('unordered_collection', 'unordered'),
    426: ('upgrade_required', 'upgrade'),
    428: ('precondition_required', 'precondition'),
    429: ('too_many_requests', 'too_many'),
    431: ('header_fields_too_large', 'fields_too_large'),
    444: ('no_response', 'none'),
    449: ('retry_with', 'retry'),
    450: ('blocked_by_windows_parental_controls', 'parental_controls'),
    451: ('unavailable_for_legal_reasons', 'legal_reasons'),
    499: ('client_closed_request',),
    
    
def get_from_rhc_config(variable):
    global configparser
    CONF_FILE = os.path.expanduser('~/.openshift/express.conf')
    if os.path.exists(CONF_FILE):
        if not configparser:
            ini_str = '[root]\n' + open(CONF_FILE, 'r').read()
            configparser = ConfigParser.SafeConfigParser()
            configparser.readfp(StringIO.StringIO(ini_str))
        try:
            return configparser.get('root', variable)
        except ConfigParser.NoOptionError:
            return None
    
        def short_desc(self):
        return 'Run quick benchmark test'
    
        def _list_templates(self):
        print('Available templates:')
        for filename in sorted(os.listdir(self.templates_dir)):
            if filename.endswith('.tmpl'):
                print('  %s' % splitext(filename)[0])
    
        def __init__(self, crawler):
        self._crawler = crawler
        self._schemes = {}  # stores acceptable schemes on instancing
        self._handlers = {}  # stores instanced handlers for schemes
        self._notconfigured = {}  # remembers failed handlers
        handlers = without_none_values(
            crawler.settings.getwithbase('DOWNLOAD_HANDLERS'))
        for scheme, clspath in six.iteritems(handlers):
            self._schemes[scheme] = clspath
    
        class _v20_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, http_request, *args, **kwargs):
            http_request.authorize(connection=self)
            return http_request.headers
    
        def spider_opened(self, spider):
        self.user_agent = getattr(spider, 'user_agent', self.user_agent)
    
    # Workers are created as daemon threads. This is done to allow the interpreter
# to exit when there are still idle threads in a ThreadPoolExecutor's thread
# pool (i.e. shutdown() was not called). However, allowing workers to die with
# the interpreter has two undesirable properties:
#   - The workers would still be running during interpretor shutdown,
#     meaning that they would fail in unpredictable ways.
#   - The workers could be killed while evaluating a work item, which could
#     be bad if the callable being evaluated has external side-effects e.g.
#     writing to a file.
#
# To work around this problem, an exit handler is installed which tells the
# workers to exit when their work queues are empty and then waits until the
# threads finish.
    
            for future in as_completed(future_to_url):
            try:
                url_to_content[future_to_url[future]] = future.result()
            except:
                pass
        return url_to_content
    finally:
        executor.shutdown()
    
    
  def Response( self ):
    response = self.RawResponse()
    response[ 'completions' ] = _ConvertCompletionDatasToVimDatas(
        response[ 'completions' ] )
    return response
    
    import json
from mock import patch, call
from nose.tools import ok_
from ycm.client.command_request import CommandRequest
    
      # and another, for luck
  start, end = _BuildLocations( 2, 2, 3, 2 )
  vimsupport.ReplaceChunk( start, end, 'E', result_buffer )
    
    
def KeywordsFromSyntaxListOutput_StatementAndTypeHierarchy_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
tBaa xxx foo bar
         links to tFoo
tFoo xxx zoo goo
         links to tBar
tBar xxx qux moo
         links to Type
sBaa xxx na bar
         links to sFoo
sFoo xxx zoo nb
         links to sBar
sBar xxx qux nc
         links to Statement''' ),
              contains_inanyorder( 'foo', 'bar', 'zoo', 'goo', 'qux', 'moo',
                                   'na', 'nb', 'nc' ) )
    
          if 'abbr' not in new_candidate:
        new_candidate[ 'abbr' ] = new_candidate[ 'word' ]