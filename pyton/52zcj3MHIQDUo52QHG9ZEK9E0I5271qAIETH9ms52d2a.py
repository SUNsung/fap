cc_library(
    name = 'spanning_tree_iterator',
    testonly = 1,
    srcs = ['spanning_tree_iterator.cc'],
    hdrs = ['spanning_tree_iterator.h'],
    deps = [
        '//syntaxnet:base',
    ],
)
    
    py_test(
    name = 'runtime_support_test',
    srcs = ['runtime_support_test.py'],
    deps = [
        ':network_units',
        ':runtime_support',
        '//dragnn/protos:export_pb2_py',
        '//dragnn/protos:spec_pb2_py',
        '@org_tensorflow//tensorflow:tensorflow_py',
    ],
)
    
    
def _make_biaffine_spec():
  '''Returns a ComponentSpec that the BiaffineDigraphNetwork works on.'''
  component_spec = spec_pb2.ComponentSpec()
  text_format.Parse('''
    name: 'test_component'
    backend { registered_name: 'TestComponent' }
    linked_feature {
      name: 'sources'
      fml: 'input.focus'
      source_translator: 'identity'
      source_component: 'previous'
      source_layer: 'sources'
      size: 1
      embedding_dim: -1
    }
    linked_feature {
      name: 'targets'
      fml: 'input.focus'
      source_translator: 'identity'
      source_component: 'previous'
      source_layer: 'targets'
      size: 1
      embedding_dim: -1
    }
    network_unit {
      registered_name: 'biaffine_units.BiaffineDigraphNetwork'
    }
  ''', component_spec)
  return component_spec
    
        # Compute the gradient of the output layer w.r.t. the embedding matrix.
    # This should be well-defined for in the normal case.
    gradients = tf.gradients(outputs, fixed_embedding_matrix)
    self.assertEqual(len(gradients), 1)
    self.assertFalse(gradients[0] is None)
    
    
def export_to_graph(master_spec,
                    params_path,
                    export_path,
                    external_graph,
                    export_moving_averages,
                    build_runtime_graph,
                    signature_name='model'):
  '''Restores a model and exports it in SavedModel form.
    
        # Export the graph via SavedModel. (Here, we maintain a handle to the graph
    # for comparison, but that's usually not necessary.)
    export_path = os.path.join(test_flags.temp_dir(), 'export')
    dragnn_model_saver_lib.clean_output_paths(export_path)
    saver_graph = tf.Graph()
    
    FLAGS = flags.FLAGS
    
    # The second sentence has different length, to test the effect of
# mixed-length batches.
_DUMMY_GOLD_SENTENCE_2 = '''
token {
  word: 'sentence' start: 0 end: 7 tag: 'NN' category: 'NOUN' label: 'ROOT'
}
'''
    
      def testCreateLexiconContext(self):
    expected_context = task_spec_pb2.TaskSpec()
    text_format.Parse(_EXPECTED_CONTEXT, expected_context)
    self.assertProtoEquals(
        lexicon.create_lexicon_context('/tmp'), expected_context)
    
    Available hooks:
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
        def _handle_requests(self):
        for _ in range(self.requests_to_handle):
            sock = self._accept_connection()
            if not sock:
                break
    
        # Redirection.
    300: ('multiple_choices',),
    301: ('moved_permanently', 'moved', '\\o-'),
    302: ('found',),
    303: ('see_other', 'other'),
    304: ('not_modified',),
    305: ('use_proxy',),
    306: ('switch_proxy',),
    307: ('temporary_redirect', 'temporary_moved', 'temporary'),
    308: ('permanent_redirect',
          'resume_incomplete', 'resume',),  # These 2 to be removed in 3.0
    
    
def main():
    '''Pretty-print the bug information as JSON.'''
    print(json.dumps(info(), sort_keys=True, indent=2))
    
        return False
    
    
def print_host(host):
    data = get_landscape_members_data()
    meta = get_meta(data)
    print(json.dumps(meta['hostvars'][host]))
    
    
def ismount(path):
    '''Test whether a path is a mount point
    clone of os.path.ismount (from cpython Lib/posixpath.py)
    fixed to solve https://github.com/ansible/ansible-modules-core/issues/2186
    and workaround non-fixed http://bugs.python.org/issue2466
    this should be rewritten as soon as python issue 2466 is fixed
    probably check for python version and use os.path.ismount if fixed
    
        parser.add_argument('--key',
                        dest='api_key',
                        default=api_key,
                        required=api_key is None,
                        help='api key for accessing Shippable')
    
        def setUp(self):
        self.engine = se.SearchEngine(self.root)  # None also seems to work
        self.dialog = sdb.SearchDialogBase(root=self.root, engine=self.engine)
    
        def test_oldargs1_2_kw(self):
        msg = r'count\(\) takes no keyword arguments'
        self.assertRaisesRegex(TypeError, msg, [].count, x=2, y=2)
    
        def check_syntax_error(self, err, basename, lineno, offset=0):
        self.assertIn('%s.py, line %d' % (basename, lineno), str(err))
        self.assertEqual(os.path.basename(err.filename), basename + '.py')
        self.assertEqual(err.lineno, lineno)
        self.assertEqual(err.offset, offset)
    
        if not patterns:
        func = None
        # set_match_tests(None) behaves as set_match_tests(())
        patterns = ()
    elif all(map(_is_full_match_test, patterns)):
        # Simple case: all patterns are full test identifier.
        # The test.bisect utility only uses such full test identifiers.
        func = set(patterns).__contains__
    else:
        regex = '|'.join(map(fnmatch.translate, patterns))
        # The search *is* case sensitive on purpose:
        # don't use flags=re.IGNORECASE
        regex_match = re.compile(regex).match
    
        def LoadTagDefs(self):
        theme = idleConf.CurrentTheme()
        self.tagdefs = {
            'COMMENT': idleConf.GetHighlight(theme, 'comment'),
            'KEYWORD': idleConf.GetHighlight(theme, 'keyword'),
            'BUILTIN': idleConf.GetHighlight(theme, 'builtin'),
            'STRING': idleConf.GetHighlight(theme, 'string'),
            'DEFINITION': idleConf.GetHighlight(theme, 'definition'),
            'SYNC': {'background':None,'foreground':None},
            'TODO': {'background':None,'foreground':None},
            'ERROR': idleConf.GetHighlight(theme, 'error'),
            # The following is used by ReplaceDialog:
            'hit': idleConf.GetHighlight(theme, 'hit'),
            }
    
    
class GzipDecompressor(object):
    '''Streaming gzip decompressor.
    
        def get_app(self):
        return Application(self.get_handlers())
    
        def on_operator_inservice(self):
        self._hsm.on_switchover()  # message ignored
        self._hsm.send_operator_inservice_response()
        self._hsm.next_state('suspect')
    
        @classmethod
    def setUpClass(self):
        '''
        - Create a temporary directory and file
        /test_command
           /foo.txt
        - get the temporary test directory
        - and initializes the command stack.
        '''
        os.mkdir('tests/test_command')
        open('tests/test_command/foo.txt', 'w').close()
        self.__get_test_directory()
        self.command_stack = []
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'foo.txt'), os.path.join(self.test_dir, 'bar.txt')))
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'bar.txt'), os.path.join(self.test_dir, 'baz.txt')))
    
        def test_c_observers_shall_be_detachable(cls):
        cls.s.detach(cls.dec_obs)
        # hex viewer shall be remaining if dec viewer is detached first
        cls.assertEqual(isinstance(cls.s._observers[0], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.detach(cls.hex_obs)
        cls.assertEqual(len(cls.s._observers), 0)
    
        def test_cat_eng_localization(self):
        self.assertEqual(self.e.get('cat'), 'cat')
    
        def test_initial_am_station(self):
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
        def __init__(self, param):
        # simple test to validate param value
        if param in self._class_method_choices:
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
        def insert(self):
        print('Inserting the execution begin status in the Database')
        time.sleep(0.1)
        # Following code is to simulate a communication from DB to TC
        if random.randrange(1, 4) == 3:
            return -1
    
    ### OUTPUT ###
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# HexViewer: Subject Data 1 has data 0xa
# Setting Data 2 = 15
# HexViewer: Subject Data 2 has data 0xf
# DecimalViewer: Subject Data 2 has data 15
# Setting Data 1 = 3
# DecimalViewer: Subject Data 1 has data 3
# HexViewer: Subject Data 1 has data 0x3
# Setting Data 2 = 5
# HexViewer: Subject Data 2 has data 0x5
# DecimalViewer: Subject Data 2 has data 5
# Detach HexViewer from data1 and data2.
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# Setting Data 2 = 15
# DecimalViewer: Subject Data 2 has data 15
