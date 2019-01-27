
        
        
class CloudWatchEventRule(object):
    def __init__(self, module, name, client, schedule_expression=None,
                 event_pattern=None, description=None, role_arn=None):
        self.name = name
        self.client = client
        self.changed = False
        self.schedule_expression = schedule_expression
        self.event_pattern = event_pattern
        self.description = description
        self.role_arn = role_arn
        self.module = module
    
        :returns True on success, raises ValueError on type error.
    :rtype ``bool``
    '''
    errmsg = ''
    if not isinstance(instance.node_count, int):
        errmsg = 'node_count must be an integer %s (%s)' % (
            instance.node_count, type(instance.node_count))
    if instance.display_name and not isinstance(instance.display_name,
                                                string_types):
        errmsg = 'instance_display_name must be an string %s (%s)' % (
            instance.display_name, type(instance.display_name))
    if errmsg:
        raise ValueError(errmsg)
    
        if state == 'absent':
        if not module.params.get('name'):
            module.fail_json(
                msg=''name' parameter is required to delete a firewall policy.')
        try:
            (changed, firewall_policy) = remove_firewall_policy(module, oneandone_conn)
        except Exception as e:
            module.fail_json(msg=str(e))
    
    #example for a DNAT
- hosts: localhost
  connection: local
  tasks:
   - vca_nat:
       instance_id: 'b15ff1e5-1024-4f55-889f-ea0209726282'
       vdc_name: 'benz_ansible'
       state: 'present'
       nat_rules:
         - rule_type: DNAT
           original_ip: 203.0.113.23
           original_port: 22
           translated_ip: 192.0.2.42
           translated_port: 22
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils._text import to_native
    
        try:
        dsn = (
            'Driver=Vertica;'
            'Server={0};'
            'Port={1};'
            'Database={2};'
            'User={3};'
            'Password={4};'
            'ConnectionLoadBalance={5}'
        ).format(module.params['cluster'], module.params['port'], db,
                 module.params['login_user'], module.params['login_password'], 'true')
        db_conn = pyodbc.connect(dsn, autocommit=True)
        cursor = db_conn.cursor()
    except Exception as e:
        module.fail_json(msg='Unable to connect to database: {0}.'.format(to_native(e)))
    
    def os_constant(key):
    # XXX TODO: In the future, this could return different constants
    #           based on what OS we are running under.  To see an
    #           approach to how to handle different OSes, see the
    #           apache version of this file.  Currently, we do not
    #           actually have any OS-specific constants on Nginx.
    '''
    Get a constant value for operating system
    
            :raises .errors.PluginError: If there was an error in Augeas, in
            an attempt to save the configuration, or an error creating a
            checkpoint
    
        def test_basic_ifdefine(self):
        self.assertEqual(len(self.parser.find_dir('VAR_DIRECTIVE')), 2)
        self.assertEqual(len(self.parser.find_dir('INVALID_VAR_DIRECTIVE')), 0)
    
        def test_get_addrs_default(self):
        self.sni.configurator.choose_vhost = mock.Mock(
            return_value=obj.VirtualHost(
                'path', 'aug_path',
                set([obj.Addr.fromstring('_default_:443')]),
                False, False)
        )
    
            self._is_down = click_type == pyflic.ClickType.ButtonDown
        self.schedule_update_ha_state()
    
        def _update_info(self):
        '''Ensure the information from the router is up to date.
    
    For more details about this platform, please refer to the documentation
https://home-assistant.io/components/demo/
'''
import random
    
            self.hosts = config[CONF_HOSTS]
        self.exclude = config[CONF_EXCLUDE]
        minutes = config[CONF_HOME_INTERVAL]
        self._options = config[CONF_OPTIONS]
        self.home_interval = timedelta(minutes=minutes)
    
            self.username = config[CONF_USERNAME]
        self.password = config[CONF_PASSWORD]
    
    from aiohttp import web