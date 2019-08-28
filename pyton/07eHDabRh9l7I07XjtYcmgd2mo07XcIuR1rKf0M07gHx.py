
        
            response, info = fetch_url(module=module, url=url, headers=headers, data=rawdata, method=method)
    status = info['status']
    content = ''
    if response:
        content = response.read()
    if status == 204:
        return True, content
    elif status == 200 or status == 201:
        return True, json.loads(content)
    else:
        return False, str(status) + ': ' + content
    
            if aa_policy_id and aa_policy_id != current_aa_policy_id:
            self._modify_aa_policy(
                self.clc,
                self.module,
                acct_alias,
                server.id,
                aa_policy_id)
            changed = True
        return changed
    
    # Add a user to a password file suitable for use by libpam-pwdfile
- htpasswd:
    path: /etc/mail/passwords
    name: alex
    password: oedu2eGh
    crypt_scheme: md5_crypt
'''
    
        def resource_scopes_set(self, state, fact_name, scope_uris):
        '''
        Generic implementation of the scopes update PATCH for the OneView resources.
        It checks if the resource needs to be updated with the current scopes.
        This method is meant to be run after ensuring the present state.
        :arg dict state: Dict containing the data from the last state results in the resource.
            It needs to have the 'msg', 'changed', and 'ansible_facts' entries.
        :arg str fact_name: Name of the fact returned to the Ansible.
        :arg list scope_uris: List with all the scope URIs to be added to the resource.
        :return: A dictionary with the expected arguments for the AnsibleModule.exit_json
        '''
        if scope_uris is None:
            scope_uris = []
        resource = state['ansible_facts'][fact_name]
        operation_data = dict(operation='replace', path='/scopeUris', value=scope_uris)
    
        # create a client object
    client = MatrixClient(module.params['hs_url'])
    if module.params['token'] is not None:
        client.api.token = module.params['token']
    else:
        client.login(module.params['user_id'], module.params['password'], sync=False)
    
    
def post_sendgrid_api(module, username, password, from_address, to_addresses,
                      subject, body, api_key=None, cc=None, bcc=None, attachments=None,
                      html_body=False, from_name=None, headers=None):
    
    
DOCUMENTATION = '''
---
module: ipmi_power
short_description: Power management for machine
description:
  - Use this module for power management
version_added: '2.2'
options:
  name:
    description:
      - Hostname or ip address of the BMC.
    required: true
  port:
    description:
      - Remote RMCP port.
    default: 623
  user:
    description:
      - Username to use to connect to the BMC.
    required: true
  password:
    description:
      - Password to connect to the BMC.
    required: true
  state:
    description:
      - Whether to ensure that the machine in desired state.
    required: true
    choices:
        - on -- Request system turn on
        - off -- Request system turn off without waiting for OS to shutdown
        - shutdown -- Have system request OS proper shutdown
        - reset -- Request system reset without waiting for OS
        - boot -- If system is off, then 'on', else 'reset'
  timeout:
    description:
      - Maximum number of seconds before interrupt request.
    default: 300
requirements:
  - 'python >= 2.6'
  - pyghmi
author: 'Bulat Gaifullin (@bgaifullin) <gaifullinbf@gmail.com>'
'''
    
    - name: Remove Boot Policy Using JSON objects list
  ucs_managed_objects:
    hostname: 172.16.143.150
    username: admin
    password: password
    objects:
    - {
          'module': 'ucsmsdk.mometa.lsboot.LsbootPolicy',
          'class': 'LsbootPolicy',
          'properties': {
              'parent_mo_or_dn': 'org-root',
              'name': 'Python_SDS'
          }
      }
    state: absent
    
            data2 = (b'--------------------------3c48c744237517ac\r\nContent-Disposition: form-data; name='key'\r\n\r\n'
                 b'uploads/20170826T181315.679087009Z/upload/pixel.png\r\n--------------------------3c48c744237517ac'
                 b'--\r\n')
    
            # put object
        object_key = 'key-by-hostname'
        self.s3_client.put_object(Bucket=bucket_name, Key=object_key, Body='something')
        url = self.s3_client.generate_presigned_url(
            'get_object', Params={'Bucket': bucket_name, 'Key': object_key}
        )
    
    # file paths by API
API_FILE_PATHS = {}
    
    
def test_elasticsearch_get_document():
    article_path = '{}/{}/employee/{}?pretty'.format(
        ES_URL, TEST_INDEX, TEST_DOC_ID)
    resp = requests.get(article_path, headers=COMMON_HEADERS)
    
            # Disable TTL for given table
        response = testutil.send_update_dynamodb_ttl_request(TEST_DDB_TABLE_NAME_3, False)
        assert response.status_code == 200
        assert json.loads(response._content)['TimeToLiveSpecification']['Enabled'] is False
    
    from tornado.concurrent import Future
from tornado import gen
from tornado.ioloop import IOLoop
from tornado.netutil import Resolver, is_valid_ip