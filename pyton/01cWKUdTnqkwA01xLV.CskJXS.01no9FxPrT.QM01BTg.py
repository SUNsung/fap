
        
            state = module.params.get('state')
    group_name = module.params.get('name').lower()
    group_description = module.params.get('description')
    group_subnets = module.params.get('subnets') or {}
    
        creds, params = get_google_cloud_credentials(module)
    pubsub_client = pubsub.Client(project=params['project_id'], credentials=creds, use_gax=False)
    pubsub_client.user_agent = 'ansible-pubsub-0.1'
    
    
def main():
    argument_spec = vca_argument_spec()
    argument_spec.update(
        dict(
            fw_rules=dict(required=True, type='list'),
            gateway_name=dict(default='gateway'),
            state=dict(default='present', choices=['present', 'absent'])
        )
    )
    
        if not purge_rules and not nat_rules:
        module.fail_json(msg='Must define purge_rules or nat_rules')
    
    
DOCUMENTATION = '''
---
module: vertica_configuration
version_added: '2.0'
short_description: Updates Vertica configuration parameters.
description:
    - Updates Vertica configuration parameters.
options:
  name:
    description:
        - Name of the parameter to update.
    required: true
    aliases: [parameter]
  value:
    description:
        - Value of the parameter to be set.
    required: true
  db:
    description:
        - Name of the Vertica database.
  cluster:
    description:
        - Name of the Vertica cluster.
    default: localhost
  port:
    description:
        - Vertica cluster port to connect to.
    default: 5433
  login_user:
    description:
        - The username used to authenticate with.
    default: dbadmin
  login_password:
    description:
        - The password used to authenticate with.
notes:
  - The default authentication assumes that you are either logging in as or sudo'ing
    to the C(dbadmin) account on the host.
  - This module uses C(pyodbc), a Python ODBC database adapter. You must ensure
    that C(unixODBC) and C(pyodbc) is installed on the host and properly configured.
  - Configuring C(unixODBC) for Vertica requires C(Driver = /opt/vertica/lib64/libverticaodbc.so)
    to be added to the C(Vertica) section of either C(/etc/odbcinst.ini) or C($HOME/.odbcinst.ini)
    and both C(ErrorMessagesPath = /opt/vertica/lib64) and C(DriverManagerEncoding = UTF-16)
    to be added to the C(Driver) section of either C(/etc/vertica.ini) or C($HOME/.vertica.ini).
requirements: [ 'unixODBC', 'pyodbc' ]
author: 'Dariusz Owczarek (@dareko)'
'''
    
    
def present(schema_facts, cursor, schema, usage_roles, create_roles, owner):
    schema_key = schema.lower()
    if schema_key not in schema_facts:
        query_fragments = ['create schema {0}'.format(schema)]
        if owner:
            query_fragments.append('authorization {0}'.format(owner))
        cursor.execute(' '.join(query_fragments))
        update_roles(schema_facts, cursor, schema, [], usage_roles, [], create_roles)
        schema_facts.update(get_schema_facts(cursor, schema))
        return True
    else:
        changed = False
        if owner and owner.lower() != schema_facts[schema_key]['owner'].lower():
            raise NotSupportedError((
                'Changing schema owner is not supported. '
                'Current owner: {0}.'
            ).format(schema_facts[schema_key]['owner']))
        if sorted(usage_roles) != sorted(schema_facts[schema_key]['usage_roles']) or \
           sorted(create_roles) != sorted(schema_facts[schema_key]['create_roles']):
    
        def run_command(command):
        '''Runs a monit command, and returns the new status.'''
        module.run_command('%s %s %s' % (MONIT, command, name), check_rc=True)
        return get_status()
    
        return strings

    
        def set_appid_not_exist(self, appid):
        self.logger.warn('APPID_manager, set_appid_not_exist %s', appid)
        with self.lock:
            if appid not in self.not_exist_appids:
                self.not_exist_appids.append(appid)
            try:
                self.config.GAE_APPIDS.remove(appid)
            except:
                pass
    
        def __init__(self):
        ca_certs = os.path.join(current_path, 'cacert.pem')
        openssl_context = SSLContext(
            logger, ca_certs=ca_certs,
            cipher_suites=['ALL', '!RC4-SHA', '!ECDHE-RSA-RC4-SHA', '!ECDHE-RSA-AES128-GCM-SHA256',
                           '!AES128-GCM-SHA256', '!ECDHE-RSA-AES128-SHA', '!AES128-SHA']
        )
        host_manager = HostManagerBase()
        connect_creator = ConnectCreator(logger, config, openssl_context, host_manager,
                                         debug=True)
        self.check_ip = CheckIp(logger, config, connect_creator)