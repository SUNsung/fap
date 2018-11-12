
        
        from httpie.plugins.base import AuthPlugin
    
    
with open(BIN_FILE_PATH, 'rb') as f:
    BIN_FILE_CONTENT = f.read()
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
    
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
        def test_download_no_Content_Length(self, httpbin_both):
        devnull = open(os.devnull, 'w')
        downloader = Downloader(output_file=devnull, progress_file=devnull)
        downloader.start(Response(url=httpbin_both.url + '/'))
        time.sleep(1.1)
        downloader.chunk_downloaded(b'12345')
        downloader.finish()
        assert not downloader.interrupted
    
        def test_cert_pem(self, httpbin_secure):
        r = http(httpbin_secure + '/get',
                 '--cert', CLIENT_PEM)
        assert HTTP_OK in r
    
    
def test_unicode_raw_json_item_verbose(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
    # convert class vectors to binary class matrices
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
    
    
def test_boston_housing():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = boston_housing.load_data()
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
    
        def get_config(self):
        config = {
            'units': self.units,
            'kernel_initializer': initializers.serialize(self.kernel_initializer),
            'recurrent_initializer':
                initializers.serialize(self.recurrent_initializer),
            'bias_initializer': initializers.serialize(self.bias_initializer),
            'unit_forget_bias': self.unit_forget_bias,
            'kernel_regularizer': regularizers.serialize(self.kernel_regularizer),
            'recurrent_regularizer':
                regularizers.serialize(self.recurrent_regularizer),
            'bias_regularizer': regularizers.serialize(self.bias_regularizer),
            'activity_regularizer':
                regularizers.serialize(self.activity_regularizer),
            'kernel_constraint': constraints.serialize(self.kernel_constraint),
            'recurrent_constraint': constraints.serialize(self.recurrent_constraint),
            'bias_constraint': constraints.serialize(self.bias_constraint)}
        base_config = super(CuDNNLSTM, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))

    
        # Example
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=4,
          validation_data=[x_test, y_test])

    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True),
            metric_name=dict(),
            state=dict(default='present', choices=['present', 'absent']),
            conditions=dict(type='list'),
            purge_conditions=dict(type='bool', default=False)
        ),
    )
    module = AnsibleAWSModule(argument_spec=argument_spec)
    state = module.params.get('state')
    
        # Purge rules before adding new ones in case a deletion shares the same
    # priority as an insertion.
    params = {
        'WebACLId': acl['WebACLId'],
        'DefaultAction': acl['DefaultAction']
    }
    change_tokens = []
    if deletions:
        try:
            params['Updates'] = deletions
            result = run_func_with_change_token_backoff(client, module, params, client.update_web_acl)
            change_tokens.append(result['ChangeToken'])
            get_waiter(
                client, 'change_token_in_sync',
            ).wait(
                ChangeToken=result['ChangeToken']
            )
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, msg='Could not update Web ACL')
    if insertions:
        try:
            params['Updates'] = insertions
            result = run_func_with_change_token_backoff(client, module, params, client.update_web_acl)
            change_tokens.append(result['ChangeToken'])
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, msg='Could not update Web ACL')
    if change_tokens:
        for token in change_tokens:
            get_waiter(
                client, 'change_token_in_sync',
            ).wait(
                ChangeToken=token
            )
    if changed:
        acl = get_web_acl(client, module, web_acl_id)
    return changed, acl
    
        argument_spec.update(dict(
        state=dict(choices=['present', 'absent'], default='present'),
        origin_access_identity_id=dict(),
        caller_reference=dict(),
        comment=dict(),
    ))
    
        def _targets_to_put(self):
        '''Returns a list of targets that need to be updated or added remotely'''
        remote_targets = self.rule.list_targets()
        return [t for t in self.targets if t not in remote_targets]
    
            if matched_name and matched_tags:
            asg = camel_dict_to_snake_dict(asg)
            # compatibility with ec2_asg module
            asg['launch_config_name'] = asg['launch_configuration_name']
            # workaround for https://github.com/ansible/ansible/pull/25015
            if 'target_group_ar_ns' in asg:
                asg['target_group_arns'] = asg['target_group_ar_ns']
                del(asg['target_group_ar_ns'])
            if asg.get('target_group_arns'):
                if elbv2:
                    try:
                        tg_paginator = elbv2.get_paginator('describe_target_groups')
                        tg_result = tg_paginator.paginate(TargetGroupArns=asg['target_group_arns']).build_full_result()
                        asg['target_group_names'] = [tg['TargetGroupName'] for tg in tg_result['TargetGroups']]
                    except ClientError as e:
                        if e.response['Error']['Code'] == 'TargetGroupNotFound':
                            asg['target_group_names'] = []
            else:
                asg['target_group_names'] = []
            matched_asgs.append(asg)
    
    try:
    import botocore
except ImportError:
    pass  # handled by AnsibleAWSModule
    
        connection = boto3_conn(module, conn_type='client', resource='iam', region=region, endpoint=ec2_url, **aws_connect_params)
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
    headers = {
    'DNT': '1',
    'Accept-Encoding': 'gzip, deflate, sdch, br',
    'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/49.0.2623.75 Safari/537.36',
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
    'Cache-Control': 'max-age=0',
    'Referer': 'http://www.dilidili.com/',
    'Connection': 'keep-alive',
    'Save-Data': 'on',
}
    
        def test_commonprefix(self):
        commonprefix = self.pathmodule.commonprefix
        self.assertEqual(
            commonprefix([]),
            ''
        )
        self.assertEqual(
            commonprefix(['/home/swenson/spam', '/home/swen/spam']),
            '/home/swen'
        )
        self.assertEqual(
            commonprefix(['/home/swen/spam', '/home/swen/eggs']),
            '/home/swen/'
        )
        self.assertEqual(
            commonprefix(['/home/swen/spam', '/home/swen/spam']),
            '/home/swen/spam'
        )
        self.assertEqual(
            commonprefix(['home:swenson:spam', 'home:swen:spam']),
            'home:swen'
        )
        self.assertEqual(
            commonprefix([':home:swen:spam', ':home:swen:eggs']),
            ':home:swen:'
        )
        self.assertEqual(
            commonprefix([':home:swen:spam', ':home:swen:spam']),
            ':home:swen:spam'
        )
    
                if '0x0' in main:
                # XXX Fix on Windows (and other platforms): something
                # is going on with the pointers in Programs/_testembed.c.
                # interp.interp is 0x0 and interp.modules is the same
                # between interpreters.
                raise unittest.SkipTest('platform prints pointers as 0x0')
    
        # Initialize and populate our database.
    conn = sqlite3.connect(':memory:')
    cursor = conn.cursor()
    cursor.execute('CREATE TABLE memos(key INTEGER PRIMARY KEY, task TEXT)')
    tasks = (
        'give food to fish',
        'prepare group meeting',
        'fight with a zebra',
        )
    for task in tasks:
        cursor.execute('INSERT INTO memos VALUES(NULL, ?)', (task,))
    
    # Proxy type for generator objects
class GeneratorProxy(BaseProxy):
    _exposed_ = ['__next__']
    def __iter__(self):
        return self
    def __next__(self):
        return self._callmethod('__next__')