
        
            else:
        sys.stdout.write('.')
    sys.stdout.flush()
    
        infile, outfile = args
    
    if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
        outfile, = args
    
        def test_cmdline_umlauts(self):
        p = subprocess.Popen(
            [sys.executable, 'youtube_dl/__main__.py', encodeArgument('ä'), '--version'],
            cwd=rootDir, stdout=_DEV_NULL, stderr=subprocess.PIPE)
        _, stderr = p.communicate()
        self.assertFalse(stderr)
    
            If `sign` is incorrect, /validate call throws an HTTP 556 error
        '''
        logger = WarningLogger()
        ie = IqiyiIEWithCredentials(FakeYDL({'logger': logger}))
        ie._login()
        self.assertTrue('unable to log in:' in logger.messages[0])
    
        elif args.form and not args.files:
        # If sending files, `requests` will set
        # the `Content-Type` for us.
        default_headers['Content-Type'] = FORM_CONTENT_TYPE
    return default_headers
    
        http://docs.python-requests.org/en/latest/user/advanced/#transport-adapters
    
        def register(self, *plugins):
        for plugin in plugins:
            self._plugins.append(plugin)
    
        '''
    abbrevs = [
        (1 << 50, 'PB'),
        (1 << 40, 'TB'),
        (1 << 30, 'GB'),
        (1 << 20, 'MB'),
        (1 << 10, 'kB'),
        (1, 'B')
    ]
    
    
@pytest.mark.parametrize('argument_name', ['--auth-type', '-A'])
def test_digest_auth(httpbin_both, argument_name):
    r = http(argument_name + '=digest', '--auth=user:password',
             'GET', httpbin_both.url + '/digest-auth/auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        def test_POST_with_data_auto_JSON_headers(self, httpbin):
        r = http('POST', httpbin.url + '/post', 'a=b')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        assert r.json['headers']['Content-Type'] == 'application/json'
    
        def load(self):
        super(Config, self).load()
        self._migrate_implicit_content_type()
    
        if last_snapshot_min_age > 0:
        try:
            current_snapshots = ec2.get_all_snapshots(filters={'volume_id': volume_id})
        except boto.exception.BotoServerError as e:
            module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
        try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        iam = boto3_conn(module, conn_type='client', resource='iam', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Boto3 Client Error - ' + str(e.msg))
    
            try:
            lambda_facts.update(function_list=client.list_functions(**params)['Functions'])
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(function_list=[])
            else:
                module.fail_json_aws(e, msg='Trying to get function list')
    
        module : AnsibleModule object
    oneandone_conn: authenticated oneandone object
    '''
    try:
        mp_id = module.params.get('name')
        monitoring_policy_id = get_monitoring_policy(oneandone_conn, mp_id)
        if module.check_mode:
            if monitoring_policy_id is None:
                _check_mode(module, False)
            _check_mode(module, True)
        monitoring_policy = oneandone_conn.delete_monitoring_policy(monitoring_policy_id)
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.six.moves.urllib.parse import urlencode
from ansible.module_utils._text import to_native
from ansible.module_utils.urls import fetch_url
    
        if module.check_mode:
        device = dict(
            model_handle=None,
            address=device_ip,
            landscape='0x%x' % int(module.params.get('landscape'), 16))
        module.exit_json(changed=True, device=device)
    
        if temperature_unit != ha_unit:
        temperature = convert_temperature(
            temperature, temperature_unit, ha_unit)