
        
        tf_proto_library_cc(
    name = 'export_proto',
    srcs = ['export.proto'],
    protodeps = [':spec_proto'],
)
    
    py_test(
    name = 'spec_builder_test',
    srcs = ['spec_builder_test.py'],
    deps = [
        ':spec_builder',
        '//dragnn/protos:spec_pb2_py',
        '//syntaxnet:load_parser_ops_py',
        '//syntaxnet:parser_ops',
        '//syntaxnet:parser_trainer',
        '@org_tensorflow//tensorflow:tensorflow_py',
    ],
)
    
      Raises:
    NotImplementedError: if a linked feature with source translator other than
        'identity' is configured.
    RuntimeError: if a recurrent linked feature is configured.
  '''
  if feature_spec.source_translator != 'identity':
    raise NotImplementedError(feature_spec.source_translator)
  if feature_spec.source_component == comp.name:
    raise RuntimeError(
        'Recurrent linked features are not supported in bulk extraction.')
  tf.logging.info('[%s] Adding linked feature '%s'', comp.name,
                  feature_spec.name)
  source = comp.master.lookup_component[feature_spec.source_component]
    
    Verifies that:
1. BulkFeatureExtractor and BulkAnnotator both raise NotImplementedError when
   non-identity translator configured.
2. BulkFeatureExtractor and BulkAnnotator both raise RuntimeError when
   recurrent linked features are configured.
3. BulkAnnotator raises RuntimeError when fixed features are configured.
4. BulkFeatureIdExtractor raises ValueError when linked features are configured,
   or when the fixed features are invalid.
'''
    
    '''Converter for DRAGNN checkpoint+master-spec files to TF SavedModels.
    
      Returns:
    Dict mapping from shortened resource path to original resource path.
  '''
  for component_spec in master_spec.component:
    for feature_spec in component_spec.fixed_feature:
      feature_spec.ClearField('pretrained_embedding_matrix')
      feature_spec.ClearField('vocab')
    
      def testSimpleTaggerLSTM(self):
    self.RunFullTrainingAndInference('simple-tagger-lstm',
                                     'simple_tagger_lstm_master_spec.textproto')
    
        def __init__(self, **kwargs):
        '''
        Use keyword arguments to overwrite
        any of the class attributes for this instance.
    
        package_name = '(builtin)'
    
        def load(self):
        super(Config, self).load()
        self._migrate_implicit_content_type()
    
        # noinspection PyUnboundLocalVariable
    return '%.*f %s' % (precision, n / factor, suffix)

    
        '''
    def _validate_crlf(self, msg):
        lines = iter(msg.splitlines(True))
        for header in lines:
            if header == CRLF:
                break
            assert header.endswith(CRLF), repr(header)
        else:
            assert 0, 'CRLF between headers and body not found in %r' % msg
        body = ''.join(lines)
        assert CRLF not in body
        return body
    
    from __future__ import print_function
    
    
class FullJitterBackoffStrategyTestCase(unittest.TestCase):
    def test_no_retries(self):
        strategy = _full_jitter_backoff(retries=0)
        result = list(strategy())
        self.assertEquals(result, [], 'list should be empty')
    
                        self.action_handler(
                        self.set_disabled_immediate,
                        self.action_args
                    )
                    self.changed = True
                if self.changed and self.disabled_msg:
                    self.msgs.append(self.disabled_msg)
    
        def update_on_device(self):
        params = self.changes.api_params()
        resource = self.client.api.tm.sys.management_routes.management_route.load(
            name=self.want.name,
            partition=self.want.partition
        )
        resource.modify(**params)
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        def test_str(self):
        self.assertTrue('FOO' in str(self.error))
        self.assertTrue('{}' in str(self.error))
    
        def copy_certs_and_keys(self, cert_path, key_path, chain_path=None):
        '''Copies certs and keys into the temporary directory'''
        cert_and_key_dir = os.path.join(self._temp_dir, 'certs_and_keys')
        if not os.path.isdir(cert_and_key_dir):
            os.mkdir(cert_and_key_dir)
    
    # The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'
    
    
MINIMUM = 80
    
    
def make_app():
    return tornado.web.Application([
        (r'/post', POSTHandler),
        (r'/(.*)', PUTHandler),
    ])
    
    
class PostModule(tornado.web.UIModule):
    def render(self, post):
        return self.render_string('modules/post.html', post=post)
    
    
@gen.coroutine
def c1():
    for i in range(10):
        yield c2()
    
    from tornado.options import options, define, parse_command_line
from tornado.template import Template