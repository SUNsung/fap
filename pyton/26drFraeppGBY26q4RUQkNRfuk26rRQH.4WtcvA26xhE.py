
        
            with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
    
def assertRegexpMatches(self, text, regexp, msg=None):
    if hasattr(self, 'assertRegexp'):
        return self.assertRegexp(text, regexp, msg)
    else:
        m = re.match(regexp, text)
        if not m:
            note = 'Regexp didn\'t match: %r not found' % (regexp)
            if len(text) < 1000:
                note += ' in %r' % text
            if msg is None:
                msg = note
            else:
                msg = note + ', ' + msg
            self.assertTrue(m, msg)
    
            formats = [
            {
                'format_id': f['type'],
                'filesize': int(f['filesize']),
                'url': f['url']
            } for f in info['rfiles']
        ]
        self._sort_formats(formats)
    
        self._source_dim = self._linked_feature_dims['sources']
    self._target_dim = self._linked_feature_dims['targets']
    
      def testNormalFixedFeaturesAreDifferentiable(self):
    component_spec = spec_pb2.ComponentSpec()
    text_format.Parse('''
        name: 'test'
        network_unit {
          registered_name: 'IdentityNetwork'
        }
        fixed_feature {
          name: 'fixed' embedding_dim: 32 size: 1
          pretrained_embedding_matrix { part {} }
          vocab { part {} }
        }
        component_builder {
          registered_name: 'bulk_component.BulkFeatureExtractorComponentBuilder'
        }
        ''', component_spec)
    comp = bulk_component.BulkFeatureExtractorComponentBuilder(
        self.master, component_spec)
    
      def testGraphConstructionWithSigmoidLoss(self):
    component_spec = spec_pb2.ComponentSpec()
    text_format.Parse('''
        name: 'test'
        network_unit {
          registered_name: 'IdentityNetwork'
        }
        fixed_feature {
          name: 'fixed' embedding_dim: 32 size: 1
        }
        component_builder {
          registered_name: 'component.DynamicComponentBuilder'
          parameters {
            key: 'loss_function'
            value: 'sigmoid_cross_entropy'
          }
        }
        ''', component_spec)
    comp = component.DynamicComponentBuilder(self.master, component_spec)
    comp.build_greedy_training(self.master_state, self.network_states)
    
      # Compute matrices of 0/1 indicators for valid arcs as the outer product of
  # the valid token indicator vector with itself.
  valid_arc_bxmxm = tf.matmul(
      tf.expand_dims(valid_token_bxm, 2), tf.expand_dims(valid_token_bxm, 1))
    
        # Restore the graph from the checkpoint into a new Graph object.
    restored_graph = tf.Graph()
    restoration_config = tf.ConfigProto(
        log_device_placement=False,
        intra_op_parallelism_threads=10,
        inter_op_parallelism_threads=10)
    
      Args:
    hyperparams: a GridPoint proto containing optimizer spec, particularly
      learning_method to determine optimizer class to use.
    learning_rate_var: a `tf.Tensor`, the learning rate.
    step_var: a `tf.Variable`, global training step.
    
      def testCreateLexiconContext(self):
    expected_context = task_spec_pb2.TaskSpec()
    text_format.Parse(_EXPECTED_CONTEXT, expected_context)
    self.assertProtoEquals(
        lexicon.create_lexicon_context('/tmp'), expected_context)
    
        return inner
    
                sock2.connect(address)
            sock2.sendall(second_request)
            sock2.close()
    
    
class TooManyRedirects(RequestException):
    '''Too many redirects.'''
    
        from urllib3.packages.ordered_dict import OrderedDict
    
            # .netrc might have more auth for us on our new host.
        new_auth = get_netrc_auth(url) if self.trust_env else None
        if new_auth is not None:
            prepared_request.prepare_auth(new_auth)
    
        def test_conflicting_post_params(self, httpbin):
        url = httpbin('post')
        with open('Pipfile') as f:
            pytest.raises(ValueError, 'requests.post(url, data='[{\'some\': \'data\'}]', files={'some': f})')
            pytest.raises(ValueError, 'requests.post(url, data=u('[{\'some\': \'data\'}]'), files={'some': f})')
    
    
class ExponentialBackoffStrategyTestCase(unittest.TestCase):
    def test_no_retries(self):
        strategy = _exponential_backoff(retries=0)
        result = list(strategy())
        self.assertEquals(result, [], 'list should be empty')
    
        def test(self):
        ajvars = AnsibleJ2Vars(None, None)
        print(ajvars)
    
    
class ArgumentSpec(object):
    def __init__(self):
        self.supports_check_mode = True
        argument_spec = dict(
            name=dict(required=True),
            gateway=dict(),
            network=dict(),
            description=dict(),
            partition=dict(
                default='Common',
                fallback=(env_fallback, ['F5_PARTITION'])
            ),
            state=dict(
                default='present',
                choices=['present', 'absent']
            )
        )
        self.argument_spec = {}
        self.argument_spec.update(f5_argument_spec)
        self.argument_spec.update(argument_spec)
    
        fixture_data[path] = data
    return data
    
        filenames = []
    for (dirpath, dnames, fnames) in os.walk(path):
        for fname in fnames:
            if fname.endswith('.md'):
                filenames.append(os.sep.join([dirpath, fname]))