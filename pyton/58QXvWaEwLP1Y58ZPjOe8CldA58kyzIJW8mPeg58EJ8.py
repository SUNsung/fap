
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
        def test_get_aliases(self, shell):
        assert shell.get_aliases() == {'fuck': 'eval $(thefuck $(fc -ln -1))',
                                       'l': 'ls -CF',
                                       'la': 'ls -A',
                                       'll': 'ls -alF'}
    
        def test_app_alias_alter_history(self, settings, shell):
        settings.alter_history = True
        assert 'builtin history delete' in shell.app_alias('FUCK')
        assert 'builtin history merge' in shell.app_alias('FUCK')
        settings.alter_history = False
        assert 'builtin history delete' not in shell.app_alias('FUCK')
        assert 'builtin history merge' not in shell.app_alias('FUCK')
    
        def test_get_aliases(self, shell):
        assert shell.get_aliases() == {}
    
        import sys
    from mymodule import entry_function
    sys.exit(entry_function())
    
    
@eager
def _parse_apt_operations(help_text_lines):
    is_commands_list = False
    for line in help_text_lines:
        line = line.decode().strip()
        if is_commands_list and line:
            yield line.split()[0]
        elif line.startswith('Basic commands:') \
                or line.startswith('Most used commands:'):
            is_commands_list = True
    
    packages = ['requests']
    
        def test_lower_items(self):
        assert list(self.case_insensitive_dict.lower_items()) == [('accept', 'application/json')]
    
        def test_basic_response(self):
        '''the basic response server returns an empty http response'''
        with Server.basic_response_server() as (host, port):
            r = requests.get('http://{}:{}'.format(host, port))
            assert r.status_code == 200
            assert r.text == u''
            assert r.headers['Content-Length'] == '0'
    
            # Region and location are common to all Dimension Data modules.
        region = self.module.params['region']
        self.region = 'dd-{0}'.format(region)
        self.location = self.module.params['location']
    
        def ensure_package_installed(self, server_ids, package_id, package_params):
        '''
        Ensure the package is installed in the given list of servers
        :param server_ids: the server list where the package needs to be installed
        :param package_id: the blueprint package id
        :param package_params: the package arguments
        :return: (changed, server_ids, request_list)
                    changed: A flag indicating if a change was made
                    server_ids: The list of servers modified
                    request_list: The list of request objects from clc-sdk
        '''
        changed = False
        request_list = []
        servers = self._get_servers_from_clc(
            server_ids,
            'Failed to get servers from CLC')
        for server in servers:
            if not self.module.check_mode:
                request = self.clc_install_package(
                    server,
                    package_id,
                    package_params)
                request_list.append(request)
            changed = True
        return changed, server_ids, request_list
    
    RETURN = '''
---
name:
  description: Name of the jenkins job.
  returned: success
  type: str
  sample: test-job
state:
  description: State of the jenkins job.
  returned: success
  type: str
  sample: present
enabled:
  description: Whether the jenkins job is enabled or not.
  returned: success
  type: bool
  sample: true
user:
  description: User used for authentication.
  returned: success
  type: str
  sample: admin
url:
  description: Url to connect to the Jenkins server.
  returned: success
  type: str
  sample: https://jenkins.mydomain.com
'''
    
    
DOCUMENTATION = '''
---
module: taiga_issue
short_description: Creates/deletes an issue in a Taiga Project Management Platform
description:
  - Creates/deletes an issue in a Taiga Project Management Platform (U(https://taiga.io)).
  - An issue is identified by the combination of project, issue subject and issue type.
  - This module implements the creation or deletion of issues (not the update).
version_added: '2.0'
options:
  taiga_host:
    description:
      - The hostname of the Taiga instance.
    default: https://api.taiga.io
  project:
    description:
      - Name of the project containing the issue. Must exist previously.
    required: True
  subject:
    description:
      - The issue subject.
    required: True
  issue_type:
    description:
      - The issue type. Must exist previously.
    required: True
  priority:
    description:
      - The issue priority. Must exist previously.
    default: Normal
  status:
    description:
      - The issue status. Must exist previously.
    default: New
  severity:
    description:
      - The issue severity. Must exist previously.
    default: Normal
  description:
    description:
      - The issue description.
    default: ''
  attachment:
    description:
      - Path to a file to be attached to the issue.
  attachment_description:
    description:
      - A string describing the file to be attached to the issue.
    default: ''
  tags:
    description:
      - A lists of tags to be assigned to the issue.
    default: []
  state:
    description:
      - Whether the issue should be present or not.
    choices: ['present', 'absent']
    default: present
author: Alejandro Guirao (@lekum)
requirements: [python-taiga]
notes:
- The authentication is achieved either by the environment variable TAIGA_TOKEN or by the pair of environment variables TAIGA_USERNAME and TAIGA_PASSWORD
'''
    
        Attributes:
       msg (str): Exception message.
    '''
    pass
    
    
DOCUMENTATION = '''
---
module: ldap_entry
short_description: Add or remove LDAP entries.
description:
  - Add or remove LDAP entries. This module only asserts the existence or
    non-existence of an LDAP entry, not its attributes. To assert the
    attribute values of an entry, see M(ldap_attr).
notes:
  - The default authentication settings will attempt to use a SASL EXTERNAL
    bind over a UNIX domain socket. This works well with the default Ubuntu
    install for example, which includes a cn=peercred,cn=external,cn=auth ACL
    rule allowing root to modify the server configuration. If you need to use
    a simple bind to access your server, pass the credentials in I(bind_dn)
    and I(bind_pw).
version_added: '2.3'
author:
  - Jiri Tyr (@jtyr)
requirements:
  - python-ldap
options:
  attributes:
    description:
      - If I(state=present), attributes necessary to create an entry. Existing
        entries are never modified. To assert specific attribute values on an
        existing entry, use M(ldap_attr) module instead.
  objectClass:
    description:
      - If I(state=present), value or list of values to use when creating
        the entry. It can either be a string or an actual list of
        strings.
  params:
    description:
      - List of options which allows to overwrite any of the task or the
        I(attributes) options. To remove an option, set the value of the option
        to C(null).
  state:
    description:
      - The target state of the entry.
    choices: [present, absent]
    default: present
extends_documentation_fragment: ldap.documentation
'''
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            api_key=dict(required=True, no_log=True),
            api_password=dict(required=True, no_log=True),
            customer_id=dict(required=True, type='int'),
    
            if channel in channels_by_tag:
            target = channels_by_tag[channel]
        else:
            module.fail_json(msg='Channel '%s' not found. Available channels: '%s'' % (channel, '', ''.join(channels_by_tag.keys())))
    
    RETURN = r'''
aaLogin:
  description: Cisco IMC XML output for the login, translated to JSON using Cobra convention
  returned: success
  type: dict
  sample: |
    'attributes': {
        'cookie': '',
        'outCookie': '1498902428/9de6dc36-417c-157c-106c-139efe2dc02a',
        'outPriv': 'admin',
        'outRefreshPeriod': '600',
        'outSessionId': '114',
        'outVersion': '2.0(13e)',
        'response': 'yes'
    }
configConfMo:
  description: Cisco IMC XML output for any configConfMo XML fragments, translated to JSON using Cobra convention
  returned: success
  type: dict
  sample: |
elapsed:
  description: Elapsed time in seconds
  returned: always
  type: int
  sample: 31
response:
  description: HTTP response message, including content length
  returned: always
  type: str
  sample: OK (729 bytes)
status:
  description: The HTTP response status code
  returned: always
  type: dict
  sample: 200
error:
  description: Cisco IMC XML error output for last request, translated to JSON using Cobra convention
  returned: failed
  type: dict
  sample: |
    'attributes': {
        'cookie': '',
        'errorCode': 'ERR-xml-parse-error',
        'errorDescr': 'XML PARSING ERROR: Element 'computeRackUnit', attribute 'admin_Power': The attribute 'admin_Power' is not allowed. ',
        'invocationResult': '594',
        'response': 'yes'
    }
error_code:
  description: Cisco IMC error code
  returned: failed
  type: str
  sample: ERR-xml-parse-error
error_text:
  description: Cisco IMC error message
  returned: failed
  type: str
  sample: |
    XML PARSING ERROR: Element 'computeRackUnit', attribute 'admin_Power': The attribute 'admin_Power' is not allowed.
input:
  description: RAW XML input sent to the Cisco IMC, causing the error
  returned: failed
  type: str
  sample: |
    <configConfMo><inConfig><computeRackUnit dn='sys/rack-unit-1' admin_Power='down'/></inConfig></configConfMo>
output:
  description: RAW XML output eceived from the Cisco IMC, with error details
  returned: failed
  type: str
  sample: >
    <error cookie=''
      response='yes'
      errorCode='ERR-xml-parse-error'
      invocationResult='594'
      errorDescr='XML PARSING ERROR: Element 'computeRackUnit', attribute 'admin_Power': The attribute 'admin_Power' is not allowed.\n'/>
'''
    
                return True
        except SmhiForecastException:
            # The API will throw an exception if faulty location
            pass
    
        with patch('regenmaschine.login',
               return_value=mock_coro(exception=RainMachineError)):
        result = await flow.async_step_user(user_input=conf)
        assert result['errors'] == {CONF_PASSWORD: 'invalid_credentials'}
    
        # Set out of zone again so we can trigger call
    hass.states.async_set('geo_location.entity', 'hello', {
        'latitude': 32.881011,
        'longitude': -117.234758
    })
    await hass.async_block_till_done()
    
    
async def test_config_already_registered_not_passed_to_config_entry(hass):
    '''Test that an already registered accesspoint does not get imported.'''
    with patch.object(hass, 'config_entries') as mock_config_entries, \
            patch.object(hmipc, 'configured_haps', return_value=['ABC123']):
        assert await async_setup_component(hass, hmipc.DOMAIN, {
            hmipc.DOMAIN: {
                hmipc.CONF_ACCESSPOINT: 'ABC123',
                hmipc.CONF_AUTHTOKEN: '123',
                hmipc.CONF_NAME: 'name',
            }
        }) is True
    
            self.hass.states.set('test.indoorhumidity', '20',
                             {ATTR_UNIT_OF_MEASUREMENT: '%'})
        self.hass.block_till_done()
        moldind = self.hass.states.get('sensor.mold_indicator')
        assert moldind
        assert moldind.state == '23'