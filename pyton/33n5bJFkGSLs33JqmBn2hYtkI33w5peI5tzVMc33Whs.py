
        
        
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    apt_get_help = b'''apt 1.0.10.2ubuntu1 for amd64 compiled on Oct  5 2015 15:55:05
Usage: apt-get [options] command
       apt-get [options] install|remove pkg1 [pkg2 ...]
       apt-get [options] source pkg1 [pkg2 ...]
    
    
@pytest.mark.parametrize('command', [
    Command('apt-cache search foo', ''),
    Command('aptitude search foo', ''),
    Command('apt search foo', ''),
    Command('apt-get install foo', ''),
    Command('apt-get source foo', ''),
    Command('apt-get clean', ''),
    Command('apt-get remove', ''),
    Command('apt-get update', ''),
    Command('sudo apt update', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
    You can download from:
  https://osxfuse.github.io/
Error: An unsatisfied requirement failed this build.'''
    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
    
@parametrize_extensions
@parametrize_filename
@parametrize_script
def test_match(ext, tar_error, filename, unquoted, quoted, script, fixed):
    tar_error(unquoted.format(ext))
    assert match(Command(script.format(filename.format(ext)), ''))
    
        state = module.params.get('state')
    group_name = module.params.get('name').lower()
    group_description = module.params.get('description')
    group_subnets = module.params.get('subnets') or {}
    
        return lambda_facts
    
            if update_processes:
            chk_changed = False
            for update_process in update_processes:
                if module.check_mode:
                    chk_changed |= _modify_process(module,
                                                   oneandone_conn,
                                                   monitoring_policy['id'],
                                                   update_process['id'],
                                                   update_process)
    
        def hbacrule_add(self, name, item):
        return self._post_json(method='hbacrule_add', name=name, item=item)
    
    EXAMPLES = '''
- honeybadger_deployment:
    token: AAAAAA
    environment: staging
    user: ansible
    revision: b6826b8
    repo: 'git@github.com:user/repo.git'
'''
    
        if module.check_mode:
        device = dict(
            model_handle=None,
            address=device_ip,
            landscape='0x%x' % int(module.params.get('landscape'), 16))
        module.exit_json(changed=True, device=device)
    
    
def send_deploy_event(module, key, revision_id, deployed_by='Ansible', deployed_to=None, repository=None):
    '''Send a deploy event to Stackdriver'''
    deploy_api = 'https://event-gateway.stackdriver.com/v1/deployevent'
    
        @staticmethod
    def import_linux_firefox_ca(common_name, ca_file):
        xlog.debug('Begin importing CA to Firefox')
        firefox_config_path = CertUtil.get_linux_firefox_path()
        if not firefox_config_path:
            #xlog.debug('Not found Firefox path')
            return False
    
        if sys.platform == 'win32':
        win32_lib = os.path.abspath( os.path.join(python_path, 'lib', 'win32'))
        sys.path.append(win32_lib)
    elif sys.platform.startswith('linux'):
        linux_lib = os.path.abspath( os.path.join(python_path, 'lib', 'linux'))
        sys.path.append(linux_lib)
    elif sys.platform == 'darwin':
        darwin_lib = os.path.abspath( os.path.join(python_path, 'lib', 'darwin'))
        sys.path.append(darwin_lib)
        extra_lib = '/System/Library/Frameworks/Python.framework/Versions/2.7/Extras/lib/python'
        sys.path.append(extra_lib)
    
    
def test_teredo(probe_nat=True, probe_server=True):
    if pteredor_is_running:
        return 'Script is running, please retry later.'
    
        if 'Content-Encoding' in headers:
        if headers['Content-Encoding'] == 'deflate':
            payload = zlib.decompress(payload, -zlib.MAX_WBITS)
            headers['Content-Length'] = str(len(payload))
            del headers['Content-Encoding']
    
            Using setter/getter methods is deprecated. Use o.line instead.'''
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)
