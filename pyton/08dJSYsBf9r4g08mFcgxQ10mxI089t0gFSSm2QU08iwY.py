
        
        # Tests.
cc_test(
    name = 'syntaxnet_component_test',
    srcs = ['syntaxnet_component_test.cc'],
    data = [':testdata'],
    deps = [
        ':syntaxnet_component',
        '//dragnn/core:input_batch_cache',
        '//dragnn/core/test:generic',
        '//dragnn/core/test:mock_transition_state',
        '//dragnn/io:sentence_input_batch',
        '//syntaxnet:base',
        '//syntaxnet:sentence_proto_cc',
        '//syntaxnet:test_main',
    ],
)
    
      def testBulkFeatureIdExtractorOkWithOneFixedFeature(self):
    component_spec = spec_pb2.ComponentSpec()
    text_format.Parse('''
        name: 'test'
        network_unit {
          registered_name: 'IdentityNetwork'
        }
        fixed_feature {
          name: 'fixed' embedding_dim: -1 size: 1
        }
        ''', component_spec)
    comp = bulk_component.BulkFeatureIdExtractorComponentBuilder(
        self.master, component_spec)
    
    
class ComponentTest(test_util.TensorFlowTestCase):
    
                              [[[  8,  19,  37],
                            [ 18,  43,  85],
                            [ 28,  67, 133]],
                           [[ 27,  65, 131],
                            [ 17,  41,  83],
                            [  7,  17,  35]]])  # pyformat: disable
    
      NB: The format of the shortened resource paths should be considered an
  implementation detail and may change.
    
    
_DUMMY_GOLD_SENTENCE = '''
token {
  word: 'sentence' start: 0 end: 7 tag: 'NN' category: 'NOUN' label: 'ROOT'
}
token {
  word: '0' start: 9 end: 9 head: 0 tag: 'CD' category: 'NUM' label: 'num'
}
token {
  word: '.' start: 10 end: 10 head: 0 tag: '.' category: '.' label: 'punct'
}
'''
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
        def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
        def __repr__(self):
        return '<%s %s>' % (self.__class__.__name__, dict.__repr__(self))

    
        def get_cookie_secure(self, app):
        '''Returns True if the cookie should be secure.  This currently
        just returns the value of the ``SESSION_COOKIE_SECURE`` setting.
        '''
        return app.config['SESSION_COOKIE_SECURE']
    
        def get_source(self, environment, template):
        if self.app.config['EXPLAIN_TEMPLATE_LOADING']:
            return self._get_source_explained(environment, template)
        return self._get_source_fast(environment, template)
    
    
def test_get_namespace():
    app = flask.Flask(__name__)
    app.config['FOO_OPTION_1'] = 'foo option 1'
    app.config['FOO_OPTION_2'] = 'foo option 2'
    app.config['BAR_STUFF_1'] = 'bar stuff 1'
    app.config['BAR_STUFF_2'] = 'bar stuff 2'
    foo_options = app.config.get_namespace('FOO_')
    assert 2 == len(foo_options)
    assert 'foo option 1' == foo_options['option_1']
    assert 'foo option 2' == foo_options['option_2']
    bar_options = app.config.get_namespace('BAR_', lowercase=False)
    assert 2 == len(bar_options)
    assert 'bar stuff 1' == bar_options['STUFF_1']
    assert 'bar stuff 2' == bar_options['STUFF_2']
    foo_options = app.config.get_namespace('FOO_', trim_namespace=False)
    assert 2 == len(foo_options)
    assert 'foo option 1' == foo_options['foo_option_1']
    assert 'foo option 2' == foo_options['foo_option_2']
    bar_options = app.config.get_namespace('BAR_', lowercase=False, trim_namespace=False)
    assert 2 == len(bar_options)
    assert 'bar stuff 1' == bar_options['BAR_STUFF_1']
    assert 'bar stuff 2' == bar_options['BAR_STUFF_2']
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'password')
def test_password_prompt(httpbin):
    r = http('--auth', 'user',
             'GET', httpbin.url + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_binary_stdin(self, httpbin):
        with open(BIN_FILE_PATH, 'rb') as stdin:
            env = MockEnvironment(
                stdin=stdin,
                stdin_isatty=False,
                stdout_isatty=False
            )
            r = http('--print=B', 'POST', httpbin.url + '/post', env=env)
            assert r == BIN_FILE_CONTENT
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        def test_verbose_json(self, httpbin):
        r = http('--verbose',
                 'POST', httpbin.url + '/post', 'foo=bar', 'baz=bar')
        assert HTTP_OK in r
        assert ''baz': 'bar'' in r
    
        def construct_yaml_seq(self, node):
        data = AnsibleSequence()
        yield data
        data.extend(self.construct_sequence(node))
        data.ansible_pos = self._node_position_info(node)
    
        def test_max_delay(self):
        strategy = _exponential_backoff(retries=7, delay=1, backoff=2, max_delay=60)
        result = list(strategy())
        self.assertEquals(result, [1, 2, 4, 8, 16, 32, 60])
    
    # Make coding more python3-ish
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
        def GoToListTest( command, response ):
      # Note: the detail of these called are tested by
      # GoToResponse_QuickFix_test, so here we just check that the right call is
      # made
      with patch( 'ycm.vimsupport.SetQuickFixList' ) as set_qf_list:
        with patch( 'ycm.vimsupport.OpenQuickFixList' ) as open_qf_list:
          request = CommandRequest( [ command ] )
          request._response = response
          request.RunPostCommandActionsIfNeeded( 'tab' )
          ok_( set_qf_list.called )
          ok_( open_qf_list.called )
    
    
# Emulates Vim buffer
# Used to store buffer related information like diagnostics, latest parse
# request. Stores buffer change tick at the parse request moment, allowing
# to effectively determine whether reparse is needed for the buffer.
class Buffer( object ):