
        
            def ensure_present(self, enabled=True):
        '''Ensures the rule and targets are present and synced'''
        rule_description = self.rule.describe()
        if rule_description:
            # Rule exists so update rule, targets and state
            self._sync_rule(enabled)
            self._sync_targets()
            self._sync_state(enabled)
        else:
            # Rule does not exist, so create new rule and targets
            self._create(enabled)
    
    
def copy(module, connection, name, target, bucket):
    ''' Copy an Elasticache backup. '''
    try:
        response = connection.copy_snapshot(SourceSnapshotName=name,
                                            TargetSnapshotName=target,
                                            TargetBucket=bucket)
        changed = True
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Unable to copy the snapshot.', exception=traceback.format_exc())
    return response, changed
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        lambda_facts = dict()
    
    
if __name__ == '__main__':
    main()

    
            for _port in ports:
            monitoring_policy_port = oneandone.client.Port(
                protocol=_port['protocol'],
                port=_port['port'],
                alert_if=_port['alert_if'],
                email_notification=_port['email_notification']
            )
            monitoring_policy_ports.append(monitoring_policy_port)
    
    
DOCUMENTATION = '''
---
module: vertica_facts
version_added: '2.0'
short_description: Gathers Vertica database facts.
description:
  - Gathers Vertica database facts.
options:
  cluster:
    description:
      - Name of the cluster running the schema.
    default: localhost
  port:
    description:
      Database port to connect to.
    default: 5433
  db:
    description:
      - Name of the database running the schema.
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
    
        try:
        client.login(
            username=module.params['ipa_user'],
            password=module.params['ipa_pass']
        )
        changed, zone = ensure(module, client)
        module.exit_json(changed=changed, zone=zone)
    except Exception as e:
        module.fail_json(msg=to_native(e))
    
    - bigpanda:
    component: myapp
    version: '1.3'
    token: '{{ bigpanda_token }}'
    state: finished
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.six.moves.urllib.parse import urlencode
from ansible.module_utils._text import to_native
from ansible.module_utils.urls import fetch_url
    
    # Check whether nginx is running
- name: check nginx process
  sensu_check:
    name: nginx_running
    command: /etc/sensu/plugins/processes/check-procs.rb -f /var/run/nginx.pid
    handlers: default
    subscribers: nginx
    interval: 60