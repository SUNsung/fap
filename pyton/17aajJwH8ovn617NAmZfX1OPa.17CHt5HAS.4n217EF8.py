        Operator:                  '#582800',   # class: 'o'
        Operator.Word:             'bold #004461',   # class: 'ow' - like keywords
    
    try:
    import simplejson as json
except ImportError:
    import json
    
        with server as (host, port):
        url = u'http://{}:{}'.format(host, port)
        r = requests.get(url=url, allow_redirects=True)
        assert r.status_code == 200
        assert len(r.history) == 1
        assert r.history[0].status_code == 301
        assert redirect_request[0].startswith(b'GET /' + expected_path + b' HTTP/1.1')
        assert r.url == u'{}/{}'.format(url, expected_path.decode('ascii'))
    
            with Server(handler) as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
            sock.sendall(question)
            text = sock.recv(1000)
            assert text == answer
            sock.close()
    
    def _init():
    for code, titles in _codes.items():
        for title in titles:
            setattr(codes, title, code)
            if not title.startswith(('\\', '/')):
                setattr(codes, title.upper(), code)
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import HAS_BOTO, ec2_argument_spec, get_aws_connection_info
    
        try:
        desired_rules = validate_fw_rules(fw_rules)
    except VcaError as e:
        module.fail_json(msg=e.message)
    
        result['delete_rule'] = list()
    result['delete_rule_rc'] = list()
    for rule in current_rules:
        if rule not in desired_rules:
            deletions += 1
            if not module.check_mode:
                result['delete_rule'].append(rule)
                rc = gateway.del_nat_rule(**rule)
                result['delete_rule_rc'].append(rc)
            result['changed'] = True
    result['rules_deleted'] = deletions
    
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
    
    EXAMPLES = '''
- name: creating a new vertica schema
  vertica_schema: name=schema_name db=db_name state=present
    
    # Ensure that dns zone is removed
- ipa_dnszone:
    zone_name: example.com
    ipa_host: localhost
    ipa_user: admin
    ipa_pass: topsecret
    state: absent
'''
    
            # If feature is already in good state, just exit
        if (re.search('Disabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'absent') or \
                (re.search('Enabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'present'):
            self.module.exit_json(changed=False)
    
            admin_command = '''osascript -e 'do shell script '%s' with administrator privileges' ''' % exec_command
        cmd = admin_command.encode('utf-8')
        xlog.info('try auto import CA command:%s', cmd)
        os.system(cmd)
    
    
class Log(object):
    def __init__(self):
        self.fd = open(log_file, 'a')
    
                        s = snext
                    input.consume()
                    continue
    
            elif isinstance(e, MismatchedRangeException):
            msg = 'mismatched character ' \
                  + self.getCharErrorDisplay(e.c) \
                  + ' expecting set ' \
                  + self.getCharErrorDisplay(e.a) \
                  + '..' \
                  + self.getCharErrorDisplay(e.b)
    
            You don't have to implement but it's nice to know where a Token
        comes from if you have include files etc... on the input.'''
    
        def test_paren_evaluation(self):
        self.assertEqual(16 // (4 // 2), 8)
        self.assertEqual((16 // 4) // 2, 2)
        self.assertEqual(16 // 4 // 2, 2)
        x = 2
        y = 3
        self.assertTrue(False is (x is y))
        self.assertFalse((False is x) is y)
        self.assertFalse(False is x is y)
    
            If an enum member name is used twice, an error is raised; duplicate
        values are not checked for.
    
        @unittest.skipUnless(support.FS_NONASCII, 'need support.FS_NONASCII')
    def test_non_ascii(self):
        # Test handling of non-ascii data
        command = ('assert(ord(%r) == %s)'
                   % (support.FS_NONASCII, ord(support.FS_NONASCII)))
        assert_python_ok('-c', command)
    
    --Pepé
''')
    
    def handlePoints(points):
    print('<ul>')
    for point in points:
        handlePoint(point)
    print('</ul>')