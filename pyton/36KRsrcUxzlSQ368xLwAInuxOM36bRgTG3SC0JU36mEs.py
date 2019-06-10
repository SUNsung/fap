
        
        
@pytest.fixture(autouse=True)
def shell(mocker):
    shell = mocker.patch('thefuck.entrypoints.not_configured.shell',
                         new_callable=MagicMock)
    shell.get_history.return_value = []
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=True)
    return shell
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
        invocations = dict(
        aliases='alias_details',
        all='all_details',
        config='config_details',
        mappings='mapping_details',
        policy='policy_details',
        versions='version_details',
    )
    
    
if __name__ == '__main__':
    main()

    
        def role_del(self, name):
        return self._post_json(method='role_del', name=name)
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.urls import fetch_url
from ansible.module_utils.six.moves.urllib.parse import urlencode
    
            change_applied = False
        if self.state == 'present':
            if rc != 0:
                self.module.fail_json(msg='Failed to %s feature %s.'
                                          ' icinga2 command returned %s' % (feature_enable_str,
                                                                            self.feature_name,
                                                                            out))
    
            if not query_log_status(module, le_path, log):
            module.fail_json(msg='failed to follow '%s': %s' % (log, err.strip()))
    
    
def delete(resource):
    return request(resource, xml=None, method='DELETE')
    
    
def send_deploy_event(module, key, revision_id, deployed_by='Ansible', deployed_to=None, repository=None):
    '''Send a deploy event to Stackdriver'''
    deploy_api = 'https://event-gateway.stackdriver.com/v1/deployevent'
    
        def test_weak_etag_match(self):
        computed_etag = ''xyzzy1''
        etags = 'W/'xyzzy1''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=304)
    
    define('ioloop', type=str, default=None)
    
    from tornado.options import options, define, parse_command_line
from tornado.template import Template
    
    if __name__ == '__main__':
    # This sys.path manipulation must come before our imports (as much
    # as possible - if we introduced a tornado.sys or tornado.os
    # module we'd be in trouble), or else our imports would become
    # relative again despite the future import.
    #
    # There is a separate __main__ block at the end of the file to call main().
    if sys.path[0] == os.path.dirname(__file__):
        del sys.path[0]
    
            :arg httputil.HTTPServerRequest request: current HTTP request.
        :arg kwargs: additional keyword arguments passed by routing implementation.
        :returns: an instance of `~.httputil.HTTPMessageDelegate` that will be used to
            process the request.
        '''
        raise NotImplementedError()
    
            # This timeout needs to be fairly generous for pypy due to jit
        # warmup costs.
        for i in range(40):
            if autoreload_proc.poll() is not None:
                break
            time.sleep(0.1)
        else:
            autoreload_proc.kill()
            raise Exception('subprocess failed to terminate')