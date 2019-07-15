
        
                # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
            def get_auth(self, username=None, password=None):
            assert self.raw_auth == USERNAME + SEP_CREDENTIALS + PASSWORD
            assert username == USERNAME
            assert password == PASSWORD
            return basic_auth()
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        def test_print_only_body_when_stdout_redirected_by_default(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('GET', httpbin.url + '/get', env=env)
        assert 'HTTP/' not in r
    
            plugin = plugin_manager.get_auth_plugin(auth['type'])()
    
    
def fw_rules_to_dict(rules):
    fw_rules = list()
    for rule in rules:
        fw_rules.append(
            dict(
                dest_port=rule.get_DestinationPortRange().lower(),
                dest_ip=rule.get_DestinationIp().lower().lower(),
                source_port=rule.get_SourcePortRange().lower(),
                source_ip=rule.get_SourceIp().lower(),
                protocol=protocol_to_string(rule.get_Protocols()).lower(),
                policy=rule.get_Policy().lower(),
                is_enable=rule.get_IsEnabled(),
                enable_logging=rule.get_EnableLogging(),
                description=rule.get_Description()
            )
        )
    return fw_rules
    
        # Build the common request body
    body = dict()
    for k in ('component', 'version', 'hosts'):
        v = module.params[k]
        if v is not None:
            body[k] = v
    
    EXAMPLES = '''
- honeybadger_deployment:
    token: AAAAAA
    environment: staging
    user: ansible
    revision: b6826b8
    repo: 'git@github.com:user/repo.git'
'''
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        def add_containers(self):
        ''' Add the paned window containers that
            hold each main area of the gui '''
        logger.debug('Adding containers')
        maincontainer = tk.PanedWindow(self,
                                       sashrelief=tk.RAISED,
                                       orient=tk.VERTICAL)
        maincontainer.pack(fill=tk.BOTH, expand=True)
    
        new_shape = shape[:3] + [int(shape[3] / (scale ** 2))]
    var_x = initializer(new_shape, dtype)
    var_x = tf.transpose(var_x, perm=[2, 0, 1, 3])
    var_x = tf.image.resize_nearest_neighbor(var_x, size=(shape[0] * scale, shape[1] * scale))
    var_x = tf.space_to_depth(var_x, block_size=scale)
    var_x = tf.transpose(var_x, perm=[1, 2, 0, 3])
    return var_x
    
                bwd_inputs = [t for op in bwd_ops for t in op.inputs]
            # list of tensors in forward graph that is in input to bwd graph
            ts_filtered = list(set(bwd_inputs).intersection(ts_all))
            debug_print('Using tensors {}'.format(ts_filtered))
    
        def get_option_values(self, command=None):
        ''' Return all or single command control titles
            with the associated tk_var value '''
        ctl_dict = dict()
        for cmd, opts in self.opts.items():
            if command and command != cmd:
                continue
            cmd_dict = dict()
            for opt in opts:
                cmd_dict[opt['control_title']] = opt['value'].get()
            ctl_dict[cmd] = cmd_dict
        logger.debug('command: '%s', ctl_dict: '%s'', command, ctl_dict)
        return ctl_dict
    
            input_shape = K.int_shape(inputs)
        if len(input_shape) != 4:
            raise ValueError('Inputs should have rank ' +
                             str(4) +
                             '; Received input shape:', str(input_shape))
    
        # list of integers
    result = s.iloc[[0, 2, 3, 4, 5]]
    expected = s.reindex(s.index[[0, 2, 3, 4, 5]])
    assert_series_equal(result, expected)
    
        Returns
    -------
    y : scalar or array_like
        The result, of length R or length M or M by R,
    
            with p1 as string, p2 as fspath:
            mypath = CustomFSPath(fspath)
            df.to_hdf(mypath, key='bar')
            df.to_hdf(string, key='bar')