
        
        
class Hand(object):
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup.get(query)
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        def receive_friend_request(self, friend_id):
        pass
    
        def take_spot(self, spot):
        self.spots_taken.append(spot)
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
    
def with_confirmation(proc, TIMEOUT):
    '''Ensures that command can be fixed when confirmation enabled.'''
    _set_confirmation(proc, True)
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    history_not_changed(proc, TIMEOUT)
    
    
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_zshrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'zsh')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
    apt_get_help = b'''apt 1.0.10.2ubuntu1 for amd64 compiled on Oct  5 2015 15:55:05
Usage: apt-get [options] command
       apt-get [options] install|remove pkg1 [pkg2 ...]
       apt-get [options] source pkg1 [pkg2 ...]
    
    
@pytest.mark.parametrize('script, output', [
    ('brew link sshfs', output),
    ('cat output', output),
    ('brew install sshfs', '')])
def test_not_match(script, output):
    command = Command(script, output)
    assert not match(command)
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        function_name = module.params.get('function_name')
    if function_name:
        lambda_facts[function_name] = {}
        lambda_facts[function_name].update(config_details(client, module)[function_name])
        lambda_facts[function_name].update(alias_details(client, module)[function_name])
        lambda_facts[function_name].update(policy_details(client, module)[function_name])
        lambda_facts[function_name].update(version_details(client, module)[function_name])
        lambda_facts[function_name].update(mapping_details(client, module)[function_name])
    else:
        lambda_facts.update(config_details(client, module))
    
            if module.check_mode:
            firewall_policy_id = get_firewall_policy(oneandone_conn, firewall_id)
            if (firewall_rules and firewall_policy_id):
                return True
            return False
    
            for _process in processes:
            monitoring_policy_process = oneandone.client.Process(
                process=_process['process'],
                alert_if=_process['alert_if'],
                email_notification=_process['email_notification']
            )
            monitoring_policy_processes.append(monitoring_policy_process)
    
        try:
        client.login(username=module.params['ipa_user'],
                     password=module.params['ipa_pass'])
        changed, hbacrule = ensure(module, client)
        module.exit_json(changed=changed, hbacrule=hbacrule)
    except Exception as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    
        elif not running and state == 'monitored':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('monitor')
        if status not in ['not monitored']:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not monitored' % name, status=status)
    
        if device is None:
        module.exit_json(changed=False)