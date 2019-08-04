
        
        
def render_function(function, method=True):
    subblocks = []
    signature = get_function_signature(function, method=method)
    if method:
        signature = signature.replace(
            clean_module_name(function.__module__) + '.', '')
    subblocks.append('### ' + function.__name__ + '\n')
    subblocks.append(code_snippet(signature))
    docstring = function.__doc__
    if docstring:
        if ('backend' in signature and
                '{{np_implementation}}' in docstring):
            docstring = add_np_implementation(function, docstring)
        subblocks.append(process_docstring(docstring))
    return '\n\n'.join(subblocks)
    
    for i, (input_text, target_text) in enumerate(zip(input_texts, target_texts)):
    for t, char in enumerate(input_text):
        encoder_input_data[i, t, input_token_index[char]] = 1.
    for t, char in enumerate(target_text):
        # decoder_target_data is ahead of decoder_input_data by one timestep
        decoder_input_data[i, t, target_token_index[char]] = 1.
        if t > 0:
            # decoder_target_data will be ahead by one timestep
            # and will not include the start character.
            decoder_target_data[i, t - 1, target_token_index[char]] = 1.
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
            cells = [MinimalRNNCell(32), MinimalRNNCell(64)]
        x = keras.Input((None, 5))
        layer = RNN(cells)
        y = layer(x)
    ```
    ''',
    'result': '''Base class for recurrent layers.
    
    
@pytest.fixture
def fake_downloaded_boston_path(monkeypatch):
    num_rows = 100
    num_cols = 10
    rng = np.random.RandomState(123)
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_normal(tensor_shape):
    _runner(initializers.RandomNormal(mean=0, stddev=1), tensor_shape,
            target_mean=0., target_std=1)
    
        # Returns
        A string, either `'channels_first'` or `'channels_last'`
    
        def get_config(self):
        config = {'input_dim': self.input_dim,
                  'output_dim': self.output_dim,
                  'embeddings_initializer':
                      initializers.serialize(self.embeddings_initializer),
                  'embeddings_regularizer':
                      regularizers.serialize(self.embeddings_regularizer),
                  'activity_regularizer':
                      regularizers.serialize(self.activity_regularizer),
                  'embeddings_constraint':
                      constraints.serialize(self.embeddings_constraint),
                  'mask_zero': self.mask_zero,
                  'input_length': self.input_length}
        base_config = super(Embedding, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))

    
    Input may optionally be reversed, shown to increase performance in many tasks in:
'Learning to Execute'
http://arxiv.org/abs/1410.4615
and
'Sequence to Sequence Learning with Neural Networks'
http://papers.nips.cc/paper/5346-sequence-to-sequence-learning-with-neural-networks.pdf
Theoretically it introduces shorter term dependencies between source and target.
    
        headers['Accept'] = 'application/json'
    headers['Content-Type'] = 'application/json'
    
    - name: Deploy package
  clc_blueprint_package:
        server_ids:
            - UC1TEST-SERVER1
            - UC1TEST-SERVER2
        package_id: 77abb844-579d-478d-3955-c69ab4a7ba1a
        package_params: {}
'''
    
    ---
- name: Create Server Group
  hosts: localhost
  gather_facts: False
  connection: local
  tasks:
    - name: Create / Verify a Server Group at CenturyLink Cloud
      clc_group:
        name: My Cool Server Group
        parent: Default Group
        state: present
      register: clc
    
    RETURN = '''
server_ids:
    description: The list of server ids that are changed
    returned: success
    type: list
    sample:
        [
            'UC1TEST-SVR01',
            'UC1TEST-SVR02'
        ]
'''
    
        if state == 'present' and not pool:
        create_pool(module, system)
    elif state == 'present' and pool:
        update_pool(module, system, pool)
    elif state == 'absent' and pool:
        delete_pool(module, pool)
    elif state == 'absent' and not pool:
        module.exit_json(changed=False)
    
        def fetch_balancer_page(self):
        ''' Returns the balancer management html page as a string for later parsing.'''
        page = fetch_url(self.module, str(self.url))
        if page[1]['status'] != 200:
            self.module.fail_json(msg='Could not get balancer page! HTTP status response: ' + str(page[1]['status']))
        else:
            content = page[0].read()
            apache_version = regexp_extraction(content.upper(), APACHE_VERSION_EXPRESSION, 1)
            if apache_version:
                if not re.search(pattern=r'2\.4\.[\d]*', string=apache_version):
                    self.module.fail_json(msg='This module only acts on an Apache2 2.4+ instance, current Apache2 version: ' + str(apache_version))
                return content
            else:
                self.module.fail_json(msg='Could not get the Apache server version from the balancer-manager')
    
            issue = {
            'project': project_name,
            'subject': issue_subject,
            'priority': issue_priority,
            'status': issue_status,
            'type': issue_type,
            'severity': issue_severity,
            'description': issue_description,
            'tags': issue_tags,
        }
    
    
def main():
    module = AnsibleModule(
        argument_spec=gen_specs(
            attributes=dict(default={}, type='dict'),
            objectClass=dict(type='raw'),
            params=dict(type='dict'),
            state=dict(default='present', choices=['present', 'absent']),
        ),
        supports_check_mode=True,
    )
    
        HAS_LDAP = True
except ImportError:
    LDAP_IMP_ERR = traceback.format_exc()
    HAS_LDAP = False
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    - name: Configure IMC using multiple XML fragments
  imc_rest:
    hostname: '{{ imc_hostname }}'
    username: '{{ imc_username }}'
    password: '{{ imc_password }}'
    validate_certs: no
    timeout: 120
    content: |
      <!-- Configure Serial-on-LAN -->
      <configConfMo><inConfig>
        <solIf dn='sys/rack-unit-1/sol-if' adminState='enable' speed=='115200' comport='com0'/>
      </inConfig></configConfMo>
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    from copy import deepcopy
import json
from ansible.module_utils.basic import AnsibleModule, missing_required_lib
from ansible.module_utils.remote_management.ucs import UCSModule, ucs_argument_spec
    
        strings = []
    with open(filepath, 'r') as f:
    
        def setUp(self):
        from acme.errors import MissingNonce
        self.response = mock.MagicMock(headers={})
        self.response.request.method = 'FOO'
        self.error = MissingNonce(self.response)
    
    
# -- Options for Texinfo output -------------------------------------------
    
            self.vhost1b = VirtualHost(
            'filep', 'vh_path', set([self.addr1]), False, False, 'localhost')
    
        config = configobj.ConfigObj()
    
        entry_points={
        'console_scripts': [
            'certbot = certbot.main:main',
        ],
        'certbot.plugins': [
            'manual = certbot.plugins.manual:Authenticator',
            'null = certbot.plugins.null:Installer',
            'standalone = certbot.plugins.standalone:Authenticator',
            'webroot = certbot.plugins.webroot:Authenticator',
        ],
    },
)

    
    .. code-block:: ini
   :name: credentials.ini
   :caption: Example credentials file:
    
    
@pytest.fixture()
def context(request):
    # Fixture request is a built-in pytest fixture describing current test request.
    integration_test_context = nginx_context.IntegrationTestsContext(request)
    try:
        yield integration_test_context
    finally:
        integration_test_context.cleanup()