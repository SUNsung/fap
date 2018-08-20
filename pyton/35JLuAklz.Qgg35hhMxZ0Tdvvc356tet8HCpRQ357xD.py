
        
        cc_test(
    name = 'mst_solver_test',
    size = 'small',
    srcs = ['mst_solver_test.cc'],
    deps = [
        ':mst_solver',
        '//dragnn/core/test:generic',
        '//syntaxnet:base',
        '//syntaxnet:test_main',
        '@org_tensorflow//tensorflow/core:test',
    ],
)
    
      def _get_root_bias(self):
    '''Pre-computes the product of the root embedding and source weights.'''
    weights_source = self._component.get_variable('weights_source')
    root = self._component.get_variable('root')
    name = self._component.name + '/root_bias'
    with tf.name_scope(None):
      return tf.matmul(
          tf.expand_dims(root, 0), tf.expand_dims(weights_source, 1), name=name)
    
    
class MockNetwork(object):
    
      def testBulkFeatureIdExtractorOkWithMultipleFixedFeatures(self):
    component_spec = spec_pb2.ComponentSpec()
    text_format.Parse('''
        name: 'test'
        network_unit {
          registered_name: 'IdentityNetwork'
        }
        fixed_feature {
          name: 'fixed1' embedding_dim: -1 size: 1
        }
        fixed_feature {
          name: 'fixed2' embedding_dim: -1 size: 1
        }
        fixed_feature {
          name: 'fixed3' embedding_dim: -1 size: 1
        }
        ''', component_spec)
    comp = bulk_component.BulkFeatureIdExtractorComponentBuilder(
        self.master, component_spec)
    
      Returns:
    [B,N] matrix R of root-selection potentials as defined above.  The dtype of
    R is the same as that of the arguments.
  '''
  # All arguments must have statically-known rank.
  check.Eq(root.get_shape().ndims, 1, 'root must be a vector')
  check.Eq(tokens.get_shape().ndims, 3, 'tokens must be rank 3')
  check.Eq(weights_arc.get_shape().ndims, 2, 'weights_arc must be a matrix')
  check.Eq(weights_source.get_shape().ndims, 1,
           'weights_source must be a vector')
    
    from google.protobuf import text_format
from dragnn.protos import spec_pb2
from dragnn.python import dragnn_model_saver_lib as saver_lib
    
      Returns:
    Dict mapping from shortened resource path to original resource path.
  '''
  for component_spec in master_spec.component:
    for feature_spec in component_spec.fixed_feature:
      feature_spec.ClearField('pretrained_embedding_matrix')
      feature_spec.ClearField('vocab')
    
          averaged_hook_name, non_averaged_hook_name, cell_subgraph_hook_name = (
          self.GetHookNodeNames(master_spec))
    
          # Check SetTracing is called after GetSession but before AttachDataReader.
      self.checkOpOrder('annotations', anno['annotations'], [
          'GetSession', 'SetTracing', 'AttachDataReader', 'ReleaseSession'
      ])
    
    
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
        def test_binary_included_and_correct_when_suitable(self):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('GET', self.url, env=env)
        assert r == self.bindata

    
    from httpie.input import ParseError
from utils import MockEnvironment, http, HTTP_OK
from fixtures import FILE_PATH, FILE_CONTENT
    
    # Components that match a numeric or alphanumeric begin:end or begin:end:step
# range expression inside square brackets.
    
            if unsafe:
            ret = wrap_var(ret)
    
        '''
    
            :module:          AnsibleModule, instance of AnsibleModule
        :action_args:     tuple, args to pass for the action to take place
        :zone:            str,  firewall zone
        :desired_state:   str,  the desired state (enabled, disabled, etc)
        :permanent:       bool, action should be permanent
        :immediate:       bool, action should take place immediately
        :enabled_values:  str[], acceptable values for enabling something (default: enabled)
        :disabled_values: str[], acceptable values for disabling something (default: disabled)
        '''
    
            self.ipv4_source = Ipv4RangeSource(
            logger, self.config,
            os.path.join(current_path, 'ip_range.txt'),
            os.path.join(module_data_path, 'ip_range.txt')
        )
        self.ipv6_source = Ipv6PoolSource(
            logger, self.config,
            os.path.join(current_path, 'ipv6_list.txt')
        )
        self.ip_source = IpCombineSource(
            logger, self.config,
            self.ipv4_source, self.ipv6_source
        )
        self.ip_manager = IpManager(
            logger, self.config, self.ip_source, check_local_network,
            self.check_ip,
            None,
            os.path.join(module_data_path, 'good_ip.txt'),
            scan_ip_log=None)
    
    
def state_pp():
    return 'Developing'
    
    \note Please be warned that the line numbers in the API documentation do not
match the real locations in the source code of the package. This is an
unintended artifact of doxygen, which I could only convince to use the
correct module names by concatenating all files from the package into a single
module file...
    
    
    
        def __init__(self, type=None, text=None, channel=DEFAULT_CHANNEL,
                 oldToken=None
                 ):
        Token.__init__(self)
        
        if oldToken is not None:
            self.text = oldToken.text
            self.type = oldToken.type
            self.line = oldToken.line
            self.charPositionInLine = oldToken.charPositionInLine
            self.channel = oldToken.channel
            
        self.text = text
        self.type = type
        self.line = None
        self.charPositionInLine = None
        self.channel = channel
        self.index = None
    
        t = r1(r'type=(\w+)', flashvars)
    id = r1(r'vid=([^']+)', flashvars)
    if t == 'youku':
        youku_download_by_vid(id, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif t == 'tudou':
        tudou_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif t == 'sina' or t == 'video':
        fake_headers['Referer'] = url
        url = 'http://www.miomio.tv/mioplayer/mioplayerconfigfiles/sina.php?vid=' + id
        xml_data = get_content(url, headers=fake_headers, decoded=True)
        url_list = sina_xml_to_url_list(xml_data)
    
    from ..common import *
from ..extractor import VideoExtractor