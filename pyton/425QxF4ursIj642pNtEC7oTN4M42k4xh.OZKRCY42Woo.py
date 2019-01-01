
        
            def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
    
class Cache(object):
    
        volume_id = module.params.get('volume_id')
    snapshot_id = module.params.get('snapshot_id')
    description = module.params.get('description')
    instance_id = module.params.get('instance_id')
    device_name = module.params.get('device_name')
    wait = module.params.get('wait')
    wait_timeout = module.params.get('wait_timeout')
    last_snapshot_min_age = module.params.get('last_snapshot_min_age')
    snapshot_tags = module.params.get('snapshot_tags')
    state = module.params.get('state')
    
    
def get_spanner_configuration_name(config_name, project_name):
    config_name = 'projects/%s/instanceConfigs/regional-%s' % (project_name,
                                                               config_name)
    return config_name
    
        if state == 'absent':
        if not module.params.get('name'):
            module.fail_json(
                msg=''name' parameter is required to delete a firewall policy.')
        try:
            (changed, firewall_policy) = remove_firewall_policy(module, oneandone_conn)
        except Exception as e:
            module.fail_json(msg=str(e))
    
    
def _check_mode(module, result):
    if module.check_mode:
        module.exit_json(
            changed=result
        )
    
    
def check(configuration_facts, parameter_name, current_value):
    parameter_key = parameter_name.lower()
    if current_value and current_value.lower() != configuration_facts[parameter_key]['current_value'].lower():
        return False
    return True
    
    EXAMPLES = '''
# Create groups based on the machine architecture
- group_by:
    key: machine_{{ ansible_machine }}
    
        if running and state == 'stopped':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('stop')
        if status in ['not monitored'] or 'stop pending' in status:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not stopped' % name, status=status)
    
        publicKey, privateKey = generateKey(keySize)
    print('\nWriting public key to file %s_pubkey.txt...' % name)
    with open('%s_pubkey.txt' % name, 'w') as fo:
        fo.write('%s,%s,%s' % (keySize, publicKey[0], publicKey[1]))
    
            while self.values[new_key] is not None \
                and self.values[new_key] != key:
    
            return