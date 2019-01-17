
        
            elif args.form and not args.files:
        # If sending files, `requests` will set
        # the `Content-Type` for us.
        default_headers['Content-Type'] = FORM_CONTENT_TYPE
    return default_headers
    
        def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'password')
def test_password_prompt(httpbin):
    r = http('--auth', 'user',
             'GET', httpbin.url + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
class TestAutoContentTypeAndAcceptHeaders:
    '''
    Test that Accept and Content-Type correctly defaults to JSON,
    but can still be overridden. The same with Content-Type when --form
    -f is used.
    
        def test_download_no_Content_Length(self, httpbin_both):
        devnull = open(os.devnull, 'w')
        downloader = Downloader(output_file=devnull, progress_file=devnull)
        downloader.start(Response(url=httpbin_both.url + '/'))
        time.sleep(1.1)
        downloader.chunk_downloaded(b'12345')
        downloader.finish()
        assert not downloader.interrupted
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
        def _get_path(self):
        return os.path.join(self.directory, self.name + '.json')
    
        def _targets_to_put(self):
        '''Returns a list of targets that need to be updated or added remotely'''
        remote_targets = self.rule.list_targets()
        return [t for t in self.targets if t not in remote_targets]
    
        mod_params = {}
    mod_params['state'] = module.params.get('state')
    mod_params['instance_id'] = module.params.get('instance_id')
    mod_params['database_name'] = module.params.get('database_name')
    mod_params['configuration'] = module.params.get('configuration')
    mod_params['node_count'] = module.params.get('node_count', None)
    mod_params['instance_display_name'] = module.params.get('instance_display_name')
    mod_params['force_instance_delete'] = module.params.get('force_instance_delete')
    
    # Ensure rule is absent
- ipa_hbacrule:
    name: rule_to_be_deleted
    state: absent
    ipa_host: ipa.example.com
    ipa_user: admin
    ipa_pass: topsecret
'''
    
        try:
        client.login(username=module.params['ipa_user'],
                     password=module.params['ipa_pass'])
        changed, role = ensure(module, client)
        module.exit_json(changed=changed, role=role)
    except Exception as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['stableinterface'],
                    'supported_by': 'core'}
    
    
DOCUMENTATION = '''
---
module: logentries
author: 'Ivan Vanderbyl (@ivanvanderbyl)'
short_description: Module for tracking logs via logentries.com
description:
    - Sends logs to LogEntries in realtime
version_added: '1.6'
options:
    path:
        description:
            - path to a log file
        required: true
    state:
        description:
            - following state of the log
        choices: [ 'present', 'absent' ]
        required: false
        default: present
    name:
        description:
            - name of the log
        required: false
    logtype:
        description:
            - type of the log
        required: false
    
        def _finish(self, request):
        self.concurrent -= 1
        if not request.finished and not request._disconnected:
            request.finish()
    
        if settings is None:
        settings = get_project_settings()
        # set EDITOR from environment if available
        try:
            editor = os.environ['EDITOR']
        except KeyError: pass
        else:
            settings['EDITOR'] = editor
    check_deprecated_settings(settings)
    
    
def getsize(filename):
    '''Return the size of a file, reported by os.stat().'''
    return os.stat(filename).st_size
    
        def testCompressChunks10(self):
        bz2c = BZ2Compressor()
        n = 0
        data = b''
        while True:
            str = self.TEXT[n*10:(n+1)*10]
            if not str:
                break
            data += bz2c.compress(str)
            n += 1
        data += bz2c.flush()
        self.assertEqual(ext_decompress(data), self.TEXT)
    
    DB_FILE = 'mydb'