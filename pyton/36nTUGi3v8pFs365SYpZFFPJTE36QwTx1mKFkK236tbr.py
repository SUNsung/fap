
        
            def _set_clc_credentials_from_env(self):
        '''
        Set the CLC Credentials on the sdk by reading environment variables
        :return: none
        '''
        env = os.environ
        v2_api_token = env.get('CLC_V2_API_TOKEN', False)
        v2_api_username = env.get('CLC_V2_API_USERNAME', False)
        v2_api_passwd = env.get('CLC_V2_API_PASSWD', False)
        clc_alias = env.get('CLC_ACCT_ALIAS', False)
        api_url = env.get('CLC_V2_API_URL', False)
    
        @staticmethod
    def _get_policy_id_from_response(response):
        '''
        Method to parse out the policy id from creation response
        :param response: response from firewall creation API call
        :return: policy_id: firewall policy id from creation call
        '''
        url = response.get('links')[0]['href']
        path = urlparse(url).path
        path_list = os.path.split(path)
        policy_id = path_list[-1]
        return policy_id
    
        @staticmethod
    def _alert_policy_exists(server, alert_policy_id):
        '''
        Checks if the alert policy exists for the server
        :param server: the clc server object
        :param alert_policy_id: the alert policy
        :return: True: if the given alert policy id associated to the server, False otherwise
        '''
        result = False
        alert_policies = server.alertPolicies
        if alert_policies:
            for alert_policy in alert_policies:
                if alert_policy.get('id') == alert_policy_id:
                    result = True
        return result
    
    - name: Delete Public IP from Server
  hosts: localhost
  gather_facts: False
  connection: local
  tasks:
    - name: Create Public IP For Servers
      clc_publicip:
        server_ids:
          - UC1TEST-SVR01
          - UC1TEST-SVR02
        state: absent
      register: clc
    
    
DOCUMENTATION = '''
---
module: apache2_mod_proxy
author: Olivier Boukili (@oboukili)
version_added: '2.2'
short_description: Set and/or get members' attributes of an Apache httpd 2.4 mod_proxy balancer pool
description:
  - Set and/or get members' attributes of an Apache httpd 2.4 mod_proxy balancer
    pool, using HTTP POST and GET requests. The httpd mod_proxy balancer-member
    status page has to be enabled and accessible, as this module relies on parsing
    this page. This module supports ansible check_mode, and requires BeautifulSoup
    python module.
options:
  balancer_url_suffix:
    description:
      - Suffix of the balancer pool url required to access the balancer pool
        status page (e.g. balancer_vhost[:port]/balancer_url_suffix).
    default: /balancer-manager/
  balancer_vhost:
    description:
      - (ipv4|ipv6|fqdn):port of the Apache httpd 2.4 mod_proxy balancer pool.
    required: true
  member_host:
    description:
      - (ipv4|ipv6|fqdn) of the balancer member to get or to set attributes to.
        Port number is autodetected and should not be specified here.
        If undefined, apache2_mod_proxy module will return a members list of
        dictionaries of all the current balancer pool members' attributes.
  state:
    description:
      - Desired state of the member host.
        (absent|disabled),drained,hot_standby,ignore_errors can be
        simultaneously invoked by separating them with a comma (e.g. state=drained,ignore_errors).
    choices: ['present', 'absent', 'enabled', 'disabled', 'drained', 'hot_standby', 'ignore_errors']
  tls:
    description:
      - Use https to access balancer management page.
    type: bool
    default: 'no'
  validate_certs:
    description:
      - Validate ssl/tls certificates.
    type: bool
    default: 'yes'
'''
    
    EXAMPLES = '''
# Add a user to a password file and ensure permissions are set
- htpasswd:
    path: /etc/nginx/passwdfile
    name: janedoe
    password: '9s36?;fyNp'
    owner: root
    group: www-data
    mode: 0640
    
            # Checks all keys in the second dict, looking for missing elements
        for key in resource2.keys():
            if key not in resource1:
                if resource2[key] is not None:
                    # Inexistent key is equivalent to exist with value None
                    self.module.log(self.MSG_DIFF_AT_KEY.format(key) + debug_resources)
                    return False
    
    - name: Make sure we have an admin user
  ldap_entry:
    dn: cn=admin,dc=example,dc=com
    objectClass:
      - simpleSecurityObject
      - organizationalRole
    attributes:
      description: An LDAP administrator
      userPassword: '{SSHA}tabyipcHzhwESzRaGA7oQ/SDoBZQOGND'
    
    # (c) 2018 Nicolai Buchwitz <nb@tipi-net.de>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
        if not matrix_found:
        module.fail_json(msg=missing_required_lib('matrix-client'), exception=MATRIX_IMP_ERR)
    
        # --- run command ---
    try:
        ipmi_cmd = command.Command(
            bmc=name, userid=user, password=password, port=port
        )
        module.debug('ipmi instantiated - name: '%s'' % name)
        current = ipmi_cmd.get_bootdev()
        # uefimode may not supported by BMC, so use desired value as default
        current.setdefault('uefimode', uefiboot)
        if state == 'present' and current != dict(bootdev=bootdev, persistent=persistent, uefimode=uefiboot):
            request = dict(bootdev=bootdev, uefiboot=uefiboot, persist=persistent)
        elif state == 'absent' and current['bootdev'] == bootdev:
            request = dict(bootdev='default')
        else:
            module.exit_json(changed=False, **current)
    
    RETURN = r'''
#
'''
    
    from __future__ import absolute_import
    
        assert not (error is not None and errors is not None)
    assert not (errors is not None and child_errors is not None), (
        'child_errors can only be tested in ' 'conjunction with the error parameter'
    )
    assert not (child_errors is not None and error is None)
    if error is not None:
        assert len(actual_errors) == 1
        assert_has_error(actual_errors, *error)
    
        :param name: The name of the new class.
    :type name: :class:`str`
    :param bases: Class(es) with additional and overriding attributes.
    :type bases: :class:`tuple` of or a single :term:`class`
    :param namespace: Attributes for the new class.
    :type namespace: :class:`dict`
    :return: The created class.
    '''
    Validator = get_Validator_class()
    
      learning_rate = tf.constant(value=init_lr, shape=[], dtype=tf.float32)
    
      When running eval/predict on the TPU, we need to pad the number of examples
  to be a multiple of the batch size, because the TPU requires a fixed batch
  size. The alternative is to drop the last batch, which is bad because it means
  the entire output data won't be generated.
    
          self.parent.assertAllEqual(
          result['sequence_output'].shape,
          [self.batch_size, self.seq_length, self.hidden_size])
    
    
def gather_indexes(sequence_tensor, positions):
  '''Gathers the vectors at the specific positions over a minibatch.'''
  sequence_shape = modeling.get_shape_list(sequence_tensor, expected_rank=3)
  batch_size = sequence_shape[0]
  seq_length = sequence_shape[1]
  width = sequence_shape[2]
    
      if FLAGS.do_predict:
    predict_examples = processor.get_test_examples(FLAGS.data_dir)
    if FLAGS.use_tpu:
      # Discard batch remainder if running on TPU
      n = len(predict_examples)
      predict_examples = predict_examples[:(n - n % FLAGS.predict_batch_size)]
    
      def convert_tokens_to_ids(self, tokens):
    return convert_by_vocab(self.vocab, tokens)
    
    
def read_examples(input_file):
  '''Read a list of `InputExample`s from an input file.'''
  examples = []
  unique_id = 0
  with tf.gfile.GFile(input_file, 'r') as reader:
    while True:
      line = tokenization.convert_to_unicode(reader.readline())
      if not line:
        break
      line = line.strip()
      text_a = None
      text_b = None
      m = re.match(r'^(.*) \|\|\| (.*)$', line)
      if m is None:
        text_a = line
      else:
        text_a = m.group(1)
        text_b = m.group(2)
      examples.append(
          InputExample(unique_id=unique_id, text_a=text_a, text_b=text_b))
      unique_id += 1
  return examples
    
    
class Repository(object):
    def __init__(self, root=None, gh_name=None):
        if root is None:
            root = REPO_ROOT
        if gh_name is None:
            gh_name = NAME
        self.git_repo = Repo(root)
        self.gh_client = Github(os.environ['GITHUB_TOKEN'])
        self.gh_repo = self.gh_client.get_repo(gh_name)
    
    from .const import LABEL_CONTAINER_NUMBER
from .const import LABEL_ONE_OFF
from .const import LABEL_PROJECT
from .const import LABEL_SERVICE
from .const import LABEL_SLUG
from .const import LABEL_VERSION
from .utils import truncate_id
from .version import ComposeVersion
    
    
class NetworkTest(unittest.TestCase):
    def test_check_remote_network_config_success(self):
        options = {'com.docker.network.driver.foo': 'bar'}
        ipam_config = {
            'driver': 'default',
            'config': [
                {'subnet': '172.0.0.1/16', },
                {
                    'subnet': '156.0.0.1/25',
                    'gateway': '156.0.0.1',
                    'aux_addresses': ['11.0.0.1', '24.25.26.27'],
                    'ip_range': '156.0.0.1-254'
                }
            ],
            'options': {
                'iface': 'eth0',
            }
        }
        labels = {
            'com.project.tests.istest': 'true',
            'com.project.sound.track': 'way out of here',
        }
        remote_labels = labels.copy()
        remote_labels.update({
            'com.docker.compose.project': 'compose_test',
            'com.docker.compose.network': 'net1',
        })
        net = Network(
            None, 'compose_test', 'net1', 'bridge',
            options, enable_ipv6=True, ipam=ipam_config,
            labels=labels
        )
        check_remote_network_config(
            {
                'Driver': 'bridge',
                'Options': options,
                'EnableIPv6': True,
                'Internal': False,
                'Attachable': True,
                'IPAM': {
                    'Driver': 'default',
                    'Config': [{
                        'Subnet': '156.0.0.1/25',
                        'Gateway': '156.0.0.1',
                        'AuxiliaryAddresses': ['24.25.26.27', '11.0.0.1'],
                        'IPRange': '156.0.0.1-254'
                    }, {
                        'Subnet': '172.0.0.1/16',
                        'Gateway': '172.0.0.1'
                    }],
                    'Options': {
                        'iface': 'eth0',
                    },
                },
                'Labels': remote_labels
            },
            net
        )
    
        >>> parse_repository_tag('user/repo@sha256:digest')
    ('user/repo', 'sha256:digest', '@')
    >>> parse_repository_tag('user/repo:v1')
    ('user/repo', 'v1', ':')
    '''
    tag_separator = ':'
    digest_separator = '@'