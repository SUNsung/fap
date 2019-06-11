
        
            if state == 'present':
        cwe_rule_manager.ensure_present()
    elif state == 'disabled':
        cwe_rule_manager.ensure_disabled()
    elif state == 'absent':
        cwe_rule_manager.ensure_absent()
    else:
        module.fail_json(msg='Invalid state '{0}' provided'.format(state))
    
        try:
        changed = False
        exists = False
    
        if state == 'present':
        rc, out, err = module.run_command('%s followed %s' % (le_path, path))
        if rc == 0:
            return True
    
        if running and state == 'stopped':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('stop')
        if status in ['not monitored'] or 'stop pending' in status:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not stopped' % name, status=status)
    
        def process_appid_not_exist(self, appid, ip):
        ret = self.check_api(ip, 'xxnet-1')
        if ret and ret.ok:
            self.set_appid_not_exist(appid)
        else:
            self.logger.warn('process_appid_not_exist, remove ip:%s', ip)
    
            content = response.read()
        if self.config.check_ip_content not in content:
            self.logger.warn('app check content:%s', content)
            return False
    
        # for convenience in actions
    HIDDEN = HIDDEN_CHANNEL