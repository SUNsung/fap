
        
            # Then we call the sorting method
    sort_blocks()
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    
    
def test_match():
    command = Command('brew install sshfs', output)
    assert match(command)
    
    
@parametrize_extensions
@parametrize_filename
@parametrize_script
def test_side_effect(ext, tar_error, filename, unquoted, quoted, script, fixed):
    tar_error(unquoted.format(ext))
    side_effect(Command(script.format(filename.format(ext)), ''), None)
    assert set(os.listdir('.')) == {unquoted.format(ext), 'd'}
    
    
if __name__ == '__main__':
    main()

    
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
    
    
def main():
    argument_spec = ipa_argument_spec()
    argument_spec.update(cn=dict(type='str', required=True, aliases=['name']),
                         description=dict(type='str'),
                         host=dict(type='list'),
                         hostcategory=dict(type='str', choices=['all']),
                         hostgroup=dict(type='list'),
                         service=dict(type='list'),
                         servicecategory=dict(type='str', choices=['all']),
                         servicegroup=dict(type='list'),
                         sourcehost=dict(type='list'),
                         sourcehostcategory=dict(type='str', choices=['all']),
                         sourcehostgroup=dict(type='list'),
                         state=dict(type='str', default='present', choices=['present', 'absent', 'enabled', 'disabled']),
                         user=dict(type='list'),
                         usercategory=dict(type='str', choices=['all']),
                         usergroup=dict(type='list'))
    
        module = AnsibleModule(
        argument_spec=dict(
            token=dict(required=True, no_log=True),
            environment=dict(required=True),
            user=dict(required=False),
            repo=dict(required=False),
            revision=dict(required=False),
            url=dict(required=False, default='https://api.airbrake.io/deploys.txt'),
            validate_certs=dict(default='yes', type='bool'),
        ),
        supports_check_mode=True
    )
    
        token = module.params['token']
    state = module.params['state']
    url = module.params['url']
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            path=dict(required=True),
            state=dict(default='present', choices=['present', 'followed', 'absent', 'unfollowed']),
            name=dict(required=False, default=None, type='str'),
            logtype=dict(required=False, default=None, type='str', aliases=['type'])
        ),
        supports_check_mode=True
    )
    
        Code is a simple port of what is already in the /scripts directory