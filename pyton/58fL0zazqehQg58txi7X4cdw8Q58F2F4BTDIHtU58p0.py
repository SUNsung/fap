
        
            app.session_interface.serializer.register(TagOrderedDict, index=0)
    
        version, release_date, codename = rv
    dev_version = bump_version(version) + '.dev'
    
    
def test_config_from_json():
    app = flask.Flask(__name__)
    current_dir = os.path.dirname(os.path.abspath(__file__))
    app.config.from_json(os.path.join(current_dir, 'static', 'config.json'))
    common_object_test(app)
    
        if logging_plugin:
        pytestconfig.pluginmanager.register(logging_plugin, 'logging-plugin')
    
    
def import_state_tuples(state_tuples, name, num_replicas):
  restored = []
  for i in range(len(state_tuples) * num_replicas):
    c = tf.get_collection_ref(name)[2 * i + 0]
    h = tf.get_collection_ref(name)[2 * i + 1]
    restored.append(tf.contrib.rnn.LSTMStateTuple(c, h))
  return tuple(restored)
    
      Returns a np.array matrix A that can be used to post-multiply a matrix S of
  spectrogram values (STFT magnitudes) arranged as frames x bins to generate a
  'mel spectrogram' M of frames x num_mel_bins.  M = S A.
    
      # Init ops
  if FLAGS.sync_replicas:
    local_init_op = tf.get_collection('local_init_op')[0]
    ready_for_local_init_op = tf.get_collection('ready_for_local_init_op')[0]
  else:
    local_init_op = tf.train.Supervisor.USE_DEFAULT
    ready_for_local_init_op = tf.train.Supervisor.USE_DEFAULT
    
    
class BaseBenchmarkLogger(object):
  '''Class to log the benchmark information to STDOUT.'''
    
      def test_inference(self):
    with tempfile.TemporaryDirectory() as working_dir, \
        tempfile.TemporaryDirectory() as export_dir:
      dualnet.bootstrap(working_dir, model_params.DummyMiniGoParams())
      exported_model = os.path.join(export_dir, 'bootstrap-model')
      dualnet.export_model(working_dir, exported_model)
    
        left_group = lib_tracker.groups[lib_tracker.group_index[coords.from_kgs(
        utils_test.BOARD_SIZE, 'A8')]]
    self.assertEqual(left_group.stones, coords_from_kgs_set('A8'))
    self.assertEqual(left_group.liberties,
                     coords_from_kgs_set('A9 B8 A7'))
    
        # We're assuming that select_leaf() returns a leaf like:
    #   root
    #     \
    #     leaf
    #       \
    #       leaf2
    # which happens in this test because root is W to play and leaf was a W win.
    self.assertEqual(root.position.to_play, go.WHITE)
    leaf2 = root.select_leaf()
    leaf2.incorporate_results(probs, -0.2, root)  # another white semi-win
    self.assertEqual(root.N, 3)
    # average of 0, 0, -1, -0.2
    self.assertAlmostEqual(root.Q, -0.3)
    
      def test_only_check_game_end_once(self):
    # When presented with a situation where the last move was a pass,
    # and we have to decide whether to pass, it should be the first thing
    # we check, but not more than that.
    
    
class Categorizer(object):
    
        def __init__(self):
        self.lookup = {}  # key: person_id, value: person_server
    
        def test_get_sni_addr(self):
        from certbot_apache.obj import Addr
        self.assertEqual(
            self.addr.get_sni_addr('443'), Addr.fromstring('*:443'))
        self.assertEqual(
            self.addr.get_sni_addr('225'), Addr.fromstring('*:225'))
        self.assertEqual(
            self.addr1.get_sni_addr('443'), Addr.fromstring('127.0.0.1'))
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_hsts_include_subdomains(self, mock_get_request):
        mock_get_request.return_value = create_response(
            headers={'strict-transport-security':
                     'max-age=31536000;includeSubDomains'})
        self.assertTrue(self.validator.hsts('test.com'))
    
    # Add any paths that contain custom themes here, relative to this directory.
#html_theme_path = []
    
    import mock
    
    '''
import zope.interface
    
    from babel.messages.pofile import read_po
    
    
def SetUpSystemPaths():
  sys.path.insert( 0, os.path.join( DIR_OF_YCMD ) )
    
        # Execute the template string in a temporary namespace and
    # support tracing utilities by setting a value for frame.f_globals['__name__']
    namespace = dict(_itemgetter=_itemgetter, __name__='namedtuple_%s' % typename,
                     _property=property, _tuple=tuple)
    try:
        exec(template, namespace)
    except SyntaxError:
        e = _sys.exc_info()[1]
        raise SyntaxError(e.message + ':\n' + template)
    result = namespace[typename]
    
    
def KeywordsFromSyntaxListOutput_MultipleStatementGroups_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             links to Statement
bargroup xxx zoo goo
             links to Statement''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
      if 'word' in vim_data:
    completion_data[ 'insertion_text' ] = vim_data[ 'word' ]
  if 'abbr' in vim_data:
    completion_data[ 'menu_text' ] = vim_data[ 'abbr' ]
  if 'menu' in vim_data:
    completion_data[ 'extra_menu_info' ] = vim_data[ 'menu' ]
  if 'kind' in vim_data:
    completion_data[ 'kind' ] = [ vim_data[ 'kind' ] ]
  if 'info' in vim_data:
    completion_data[ 'detailed_info' ] = vim_data[ 'info' ]