
        
            def _remote_state(self):
        '''Returns the remote state from AWS'''
        description = self.rule.describe()
        if not description:
            return
        return description['state']
    
        for app in module.params['apps']:
        if app not in client.apps():
            module.fail_json(msg='App {0} does not exist'.format(app))
    
    
def main():
    HostModule().run_module()
    
        gateway = vca.get_gateway(vdc_name, gateway_name)
    if not gateway:
        module.fail_json(msg='Not able to find the gateway %s, please check '
                             'the gateway_name param' % gateway_name)
    
        if not pyodbc_found:
        module.fail_json(msg='The python pyodbc module is required.')
    
        module = AnsibleModule(
        argument_spec=dict(
            role=dict(required=True, aliases=['name']),
            assigned_roles=dict(default=None, aliases=['assigned_role']),
            state=dict(default='present', choices=['absent', 'present']),
            db=dict(default=None),
            cluster=dict(default='localhost'),
            port=dict(default='5433'),
            login_user=dict(default='dbadmin'),
            login_password=dict(default=None, no_log=True),
        ), supports_check_mode=True)
    
    
def main():
    argument_spec = ipa_argument_spec()
    argument_spec.update(zone_name=dict(type='str', required=True),
                         state=dict(type='str', default='present', choices=['present', 'absent']),
                         )
    
    
def unfollow_log(module, le_path, logs):
    ''' Unfollows one or more logs if followed. '''
    
    
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.