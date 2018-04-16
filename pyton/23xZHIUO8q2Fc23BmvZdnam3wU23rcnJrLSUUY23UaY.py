    # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
        Models: `flatpages.flatpages`
    Templates: Uses the template defined by the ``template_name`` field,
        or :template:`flatpages/default.html` if template_name is not defined.
    Context:
        flatpage
            `flatpages.flatpages` object
    '''
    if not url.startswith('/'):
        url = '/' + url
    site_id = get_current_site(request).id
    try:
        f = get_object_or_404(FlatPage, url=url, sites=site_id)
    except Http404:
        if not url.endswith('/') and settings.APPEND_SLASH:
            url += '/'
            f = get_object_or_404(FlatPage, url=url, sites=site_id)
            return HttpResponsePermanentRedirect('%s/' % request.path)
        else:
            raise
    return render_flatpage(request, f)
    
    
def import_state_tuples(state_tuples, name, num_replicas):
  restored = []
  for i in range(len(state_tuples) * num_replicas):
    c = tf.get_collection_ref(name)[2 * i + 0]
    h = tf.get_collection_ref(name)[2 * i + 1]
    restored.append(tf.contrib.rnn.LSTMStateTuple(c, h))
  return tuple(restored)
    
      # Create pretrain Saver
  if pretrained_model_dir:
    assert variables_to_restore
    tf.logging.info('Will attempt restore from %s: %s', pretrained_model_dir,
                    variables_to_restore)
    saver_for_restore = tf.train.Saver(variables_to_restore)
    
    
class RegressionTest(tf.test.TestCase):
  '''Test the regression examples in this directory.'''
    
      def testBidirLM(self):
    graphs.VatxtBidirModel().language_model_graph()
    
    def get_vars(config_name):
  vars = config_name.split('_')
  if len(vars) == 1: # All data or not.
    vars.append('noall')
  if len(vars) == 2: # n_ori
    vars.append('4')
  logging.error('vars: %s', vars)
  return vars
    
    py_test(
    name = 'cifar10_input_test',
    size = 'small',
    srcs = ['cifar10_input_test.py'],
    srcs_version = 'PY2AND3',
    deps = [
        ':cifar10_input',
        '//tensorflow:tensorflow_py',
        '//tensorflow/python:framework_test_lib',
        '//tensorflow/python:platform_test',
    ],
)
    
    licenses(['notice'])  # Apache 2.0
    
    
# -- Options for manual page output ---------------------------------------
    
    # Can't import these from paths.py because that uses `future` imports
DIR_OF_CURRENT_SCRIPT = os.path.dirname( os.path.abspath( __file__ ) )
DIR_OF_YCMD = os.path.join( DIR_OF_CURRENT_SCRIPT, '..', '..', 'third_party',
                            'ycmd' )
    
            waiter = _create_and_install_waiters(fs, return_when)
    
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
    
    PY_MAJOR, PY_MINOR = sys.version_info[ 0 : 2 ]
if not ( ( PY_MAJOR == 2 and PY_MINOR >= 6 ) or
         ( PY_MAJOR == 3 and PY_MINOR >= 3 ) or
         PY_MAJOR > 3 ):
  sys.exit( 'YouCompleteMe requires Python >= 2.6 or >= 3.3; '
            'your version of Python is ' + sys.version )
    
    
  @staticmethod
  def CreateFromOptions( user_options ):
    all_filters = dict( user_options.get( 'filter_diagnostics', {} ) )
    compiled_by_type = {}
    for type_spec, filter_value in iteritems( dict( all_filters ) ):
      filetypes = [ type_spec ]
      if type_spec.find( ',' ) != -1:
        filetypes = type_spec.split( ',' )
      for filetype in filetypes:
        compiled_by_type[ filetype ] = _CompileFilters( filter_value )
    
    
class OmniCompletionRequest( CompletionRequest ):
  def __init__( self, omni_completer, request_data ):
    super( OmniCompletionRequest, self ).__init__( request_data )
    self._omni_completer = omni_completer
    
    
def Done_AlwaysTrue_test():
  request = BuildOmnicompletionRequest( [] )
    
    In Blackboard pattern several specialised sub-systems (knowledge sources)
assemble their knowledge to build a possibly partial or approximate solution.
In this way, the sub-systems work together to solve the problem,
where the solution is the sum of its parts.
    
        def test_bunch_launch(self):
        self.runner.runAll()
        output = self.out.getvalue().strip()
        self.assertEqual(output, str(self.average_result_tc1 + '\n\n' +
                         self.average_result_tc2 + '\n\n' +
                         self.average_result_tc3))

    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def setProblem(self, value):
        self._bProblem = value