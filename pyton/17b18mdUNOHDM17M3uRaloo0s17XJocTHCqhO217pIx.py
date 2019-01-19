
        
        
# Import youtube_dl
ROOT_DIR = os.path.join(os.path.dirname(__file__), '..')
sys.path.insert(0, ROOT_DIR)
import youtube_dl
    
        return ret
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import boto3_conn, camel_dict_to_snake_dict
from ansible.module_utils.ec2 import ec2_argument_spec, get_aws_connection_info
    
    
def get_spanner_configuration_name(config_name, project_name):
    config_name = 'projects/%s/instanceConfigs/regional-%s' % (project_name,
                                                               config_name)
    return config_name
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            auth_token=dict(
                type='str',
                default=os.environ.get('ONEANDONE_AUTH_TOKEN')),
            api_url=dict(
                type='str',
                default=os.environ.get('ONEANDONE_API_URL')),
            name=dict(type='str'),
            firewall_policy=dict(type='str'),
            description=dict(type='str'),
            rules=dict(type='list', default=[]),
            add_server_ips=dict(type='list', default=[]),
            remove_server_ips=dict(type='list', default=[]),
            add_rules=dict(type='list', default=[]),
            remove_rules=dict(type='list', default=[]),
            wait=dict(type='bool', default=True),
            wait_timeout=dict(type='int', default=600),
            wait_interval=dict(type='int', default=5),
            state=dict(type='str', default='present', choices=['present', 'absent', 'update']),
        ),
        supports_check_mode=True
    )
    
    
def get_configuration_facts(cursor, parameter_name=''):
    facts = {}
    cursor.execute('''
        select c.parameter_name, c.current_value, c.default_value
        from configuration_parameters c
        where c.node_name = 'ALL'
        and (? = '' or c.parameter_name ilike ?)
    ''', parameter_name, parameter_name)
    while True:
        rows = cursor.fetchmany(100)
        if not rows:
            break
        for row in rows:
            facts[row.parameter_name.lower()] = {
                'parameter_name': row.parameter_name,
                'current_value': row.current_value,
                'default_value': row.default_value}
    return facts
    
    EXAMPLES = '''
- name: creating a new vertica role
  vertica_role: name=role_name db=db_name state=present
    
    # Ensure role with certain details
- ipa_role:
    name: another-role
    description: Just another role
    group:
    - editors
    host:
    - host01.example.com
    hostgroup:
    - hostgroup01
    privilege:
    - Group Administrators
    - User Administrators
    service:
    - service01
    
    EXAMPLES = '''
# Create groups based on the machine architecture
- group_by:
    key: machine_{{ ansible_machine }}
    
        module = AnsibleModule(
        argument_spec=dict(
            token=dict(required=True, no_log=True),
            environment=dict(required=True),
            user=dict(required=False),
            repo=dict(required=False),
            revision=dict(required=False),
            url=dict(required=False, default='https://api.honeybadger.io/v1/deploys'),
            validate_certs=dict(default='yes', type='bool'),
        ),
        supports_check_mode=True
    )
    
        def parse_current(parts):
        if len(parts) > 2 and parts[2].lower() == 'process' and parts[0] == name:
            return ''.join(parts[1]).lower()
        else:
            return ''
    
    
def cleanup_files(files):
    for file in files:
        os.remove(file)
    
        url = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'<meta property='og:video:secure_url' content='(.*?)'>', html)
    ]))