
        
        
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        def test_repr(self):
        assert repr(self.case_insensitive_dict) == '{'Accept': 'application/json'}'
    
            #: File-like object representation of response (for advanced usage).
        #: Use of ``raw`` requires that ``stream=True`` be set on the request.
        # This requirement does not apply for use internally to Requests.
        self.raw = None
    
    - cloudwatchevent_rule:
    name: MyDisabledCronTask
    schedule_expression: 'rate(5 minutes)'
    description: Run my disabled scheduled task
    state: disabled
    targets:
      - id: MyOtherTargetId
        arn: arn:aws:lambda:us-east-1:123456789012:function:MyFunction
        input: '{'foo': 'bar'}'
    
            elif desired_state == 'disabled':
            if current_state == HOST_ABSENT:
                self.fail(msg='absent host cannot be put in disabled state')
            elif current_state in [HOST_STATES.MONITORED, HOST_STATES.OFFLINE]:
                if one.host.status(host.ID, HOST_STATUS.DISABLED):
                    self.wait_for_host_state(host, [HOST_STATES.DISABLED])
                    result['changed'] = True
                else:
                    self.fail(msg='could not disable host')
            elif current_state in [HOST_STATES.DISABLED]:
                pass
            else:
                self.fail(msg='unknown host state %s, cowardly refusing to change state to disable' % current_state_name)
    
        vca = vca_login(module)
    
    
def rule_to_string(rule):
    strings = list()
    for key, value in rule.items():
        strings.append('%s=%s' % (key, value))
    return ', '.join(strings)
    
    # Ensure role is absent
- ipa_role:
    name: dba
    state: absent
    ipa_host: ipa.example.com
    ipa_user: admin
    ipa_pass: topsecret
'''
    
        # Insert state-specific attributes to body
    if state == 'started':
        for k in ('source_system', 'env', 'owner', 'description'):
            v = module.params[k]
            if v is not None:
                body[k] = v
    
        def manage(self):
        rc, out = self._exec(['list'])
        if rc != 0:
            self.module.fail_json(msg='Unable to list icinga2 features. '
                                      'Ensure icinga2 is installed and present in binary path.')
    
            running_status = get_status()
        while running_status == '' or 'pending' in running_status or 'initializing' in running_status:
            if time.time() >= timeout_time:
                module.fail_json(
                    msg='waited too long for 'pending', or 'initiating' status to go away ({0})'.format(
                        running_status
                    ),
                    state=state
                )
    
    
def main():
    global module
    module = AnsibleModule(
        argument_spec=dict(
            device=dict(required=True, aliases=['host', 'name']),
            landscape=dict(required=True),
            state=dict(choices=['present', 'absent'], default='present'),
            community=dict(required=True, no_log=True),
            agentport=dict(type='int', default=161),
            url=dict(required=True, aliases=['oneclick_url']),
            url_username=dict(required=True, aliases=['oneclick_user']),
            url_password=dict(required=True, no_log=True, aliases=['oneclick_password']),
            use_proxy=dict(type='bool', default='yes'),
            validate_certs=dict(type='bool', default='yes'),
        ),
        required_if=[('state', 'present', ['community'])],
        supports_check_mode=True
    )
    
            self.assertEqual(jws, JWS.from_json(jws.to_json()))
    
            self.vhost1b = VirtualHost(
            'filep', 'vh_path', set([self.addr1]), False, False, 'localhost')
    
    setup(
    name='itchat',