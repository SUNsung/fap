
        
            '''Get an elasticache connection'''
    try:
        conn = connect_to_region(region_name=region, **aws_connect_kwargs)
    except boto.exception.NoAuthHandlerFound as e:
        module.fail_json(msg=e.message)
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        name=dict(type='str'),
    ))
    
            elif desired_state == 'offline':
            if current_state == HOST_ABSENT:
                self.fail(msg='absent host cannot be placed in offline state')
            elif current_state in [HOST_STATES.MONITORED, HOST_STATES.DISABLED]:
                if one.host.status(host.ID, HOST_STATUS.OFFLINE):
                    self.wait_for_host_state(host, [HOST_STATES.OFFLINE])
                    result['changed'] = True
                else:
                    self.fail(msg='could not set host offline')
            elif current_state in [HOST_STATES.OFFLINE]:
                pass
            else:
                self.fail(msg='unknown host state %s, cowardly refusing to change state to offline' % current_state_name)
    
        try:
        client.login(username=module.params['ipa_user'],
                     password=module.params['ipa_pass'])
        changed, role = ensure(module, client)
        module.exit_json(changed=changed, role=role)
    except Exception as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())