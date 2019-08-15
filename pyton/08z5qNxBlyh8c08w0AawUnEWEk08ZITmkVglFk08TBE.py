
        
            def __init__(self, module):
        '''
        Construct module
        '''
        self.module = module
        if not CLC_FOUND:
            self.module.fail_json(msg=missing_required_lib('clc-sdk'), exception=CLC_IMP_ERR)
        if not REQUESTS_FOUND:
            self.module.fail_json(msg=missing_required_lib('requests'), exception=REQUESTS_IMP_ERR)
        if requests.__version__ and LooseVersion(
                requests.__version__) < LooseVersion('2.5.0'):
            self.module.fail_json(
                msg='requests library  version should be >= 2.5.0')
    
    #
#  Requires the clc-python-sdk.
#  sudo pip install clc-sdk
#
CLC_IMP_ERR = None
try:
    import clc as clc_sdk
    from clc import APIFailedResponse
except ImportError:
    CLC_IMP_ERR = traceback.format_exc()
    CLC_FOUND = False
    clc_sdk = None
else:
    CLC_FOUND = True
    
    
DOCUMENTATION = '''
module: clc_modify_server
short_description: modify servers in CenturyLink Cloud.
description:
  - An Ansible module to modify servers in CenturyLink Cloud.
version_added: '2.0'
options:
  server_ids:
    description:
      - A list of server Ids to modify.
    required: True
  cpu:
    description:
      - How many CPUs to update on the server
  memory:
    description:
      - Memory (in GB) to set to the server.
  anti_affinity_policy_id:
    description:
      - The anti affinity policy id to be set for a hyper scale server.
        This is mutually exclusive with 'anti_affinity_policy_name'
  anti_affinity_policy_name:
    description:
      - The anti affinity policy name to be set for a hyper scale server.
        This is mutually exclusive with 'anti_affinity_policy_id'
  alert_policy_id:
    description:
      - The alert policy id to be associated to the server.
        This is mutually exclusive with 'alert_policy_name'
  alert_policy_name:
    description:
      - The alert policy name to be associated to the server.
        This is mutually exclusive with 'alert_policy_id'
  state:
    description:
      - The state to insure that the provided resources are in.
    default: 'present'
    choices: ['present', 'absent']
  wait:
    description:
      - Whether to wait for the provisioning tasks to finish before returning.
    type: bool
    default: 'yes'
requirements:
    - python = 2.7
    - requests >= 2.5.0
    - clc-sdk
author: 'CLC Runner (@clc-runner)'
notes:
    - To use this module, it is required to set the below environment variables which enables access to the
      Centurylink Cloud
          - CLC_V2_API_USERNAME, the account login id for the centurylink cloud
          - CLC_V2_API_PASSWORD, the account password for the centurylink cloud
    - Alternatively, the module accepts the API token and account alias. The API token can be generated using the
      CLC account login and password via the HTTP api call @ https://api.ctl.io/v2/authentication/login
          - CLC_V2_API_TOKEN, the API token generated from https://api.ctl.io/v2/authentication/login
          - CLC_ACCT_ALIAS, the account alias associated with the centurylink cloud
    - Users can set CLC_V2_API_URL to specify an endpoint for pointing to a different CLC environment.
'''
    
    RETURN = '''
'''
import traceback
    
    - name: Disable HTTP and increase session timeout to max value 10800 secs
  imc_rest:
    hostname: '{{ imc_host }}'
    username: '{{ imc_username }}'
    password: '{{ imc_password }}'
    validate_certs: no
    timeout: 120
    content: |
        <configConfMo><inConfig>
          <commHttp dn='sys/svc-ext/http-svc' adminState='disabled'/>
        </inConfig></configConfMo>
    
    import traceback
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            name=dict(required=True),
            port=dict(default=623, type='int'),
            state=dict(required=True, choices=['on', 'off', 'shutdown', 'reset', 'boot']),
            user=dict(required=True, no_log=True),
            password=dict(required=True, no_log=True),
            timeout=dict(default=300, type='int'),
        ),
        supports_check_mode=True,
    )
    
    
def main():
    object_dict = dict(
        module=dict(type='str', required=True),
        class_name=dict(type='str', aliases=['class'], required=True),
        properties=dict(type='dict', required=True),
        children=dict(type='list'),
    )
    argument_spec = ucs_argument_spec
    argument_spec.update(
        objects=dict(type='list', elements='dict', options=object_dict, required=True),
        state=dict(type='str', choices=['present', 'absent'], default='present'),
    )
    
        def decode(self, value):
        if value != self.value:
            raise jose.DeserializationError('Expected {0!r}'.format(self.value))
        return self.value
    
    
class Header(jose.Header):
    '''ACME-specific JOSE Header. Implements nonce, kid, and url.
    '''
    nonce = jose.Field('nonce', omitempty=True, encoder=jose.encode_b64jose)
    kid = jose.Field('kid', omitempty=True)
    url = jose.Field('url', omitempty=True)
    
            :param str domain: The domain to use to look up the managed zone.
        :param str record_name: The record name (typically beginning with '_acme-challenge.').
        :param str record_content: The record content (typically the challenge validation).
        :param int record_ttl: The record TTL (number of seconds that the record may be cached).
        :raises certbot.errors.PluginError: if an error occurs communicating with the Google API
        '''
    
        additional_args = []
    if misc.get_certbot_version() >= LooseVersion('0.30.0'):
        additional_args.append('--no-random-sleep-on-renew')
    
        result = False
    try:
        ret = urlopen(url, timeout=2)
        result = (ret.code == 200)
    except HTTPError as e:
        print(e, file=sys.stderr)
    except URLError as e:
        print(e, file=sys.stderr)
    except timeout as e:
        print(e, file=sys.stderr)
    except Exception as e:
        print(e, file=sys.stderr)