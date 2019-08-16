
        
            def add_user(self, user_id, name, pass_hash):
        pass
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
        if test_config is None:
        # load the instance config, if it exists, when not testing
        app.config.from_pyfile('config.py', silent=True)
    else:
        # load the test config if passed in
        app.config.update(test_config)
    
            if triple is None:
            detail = 'no match'
        else:
            detail = 'found (%r)' % (triple[1] or '<string>')
            total_found += 1
        info.append('       -> %s' % detail)
    
            for srcobj, loader in self._iter_loaders(template):
            try:
                rv = loader.get_source(environment, template)
                if trv is None:
                    trv = rv
            except TemplateNotFound:
                rv = None
            attempts.append((loader, srcobj, rv))
    
            ::
    
        @blue.route('/decorator')
    def blue_deco_test():
        raise MyDecoratorException()
    
        class Module:
        @staticmethod
        def create_app(foo, bar):
            return Flask('appname2')
    
        from site_app import app
    
            def to_python(self, value):
            return Foo(value)
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
    
def _implementation():
    '''Return a dict with the Python implementation and version.
    
    This module provides the capabilities for the Requests hooks system.
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
            with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(b'hehehe, not received')
            sock.close()
    
        def __init__(self):
        #: HTTP verb to send to the server.
        self.method = None
        #: HTTP URL to send the request to.
        self.url = None
        #: dictionary of HTTP headers.
        self.headers = None
        # The `CookieJar` used to create the Cookie header will be stored here
        # after prepare_cookies is called
        self._cookies = None
        #: request body to send to the server.
        self.body = None
        #: dictionary of callback hooks, for internal usage.
        self.hooks = default_hooks()
        #: integer denoting starting position of a readable file-like body.
        self._body_position = None
    
    HAS_HEROKU = False
HEROKU_IMP_ERR = None
try:
    import heroku3
    HAS_HEROKU = True
except ImportError:
    HEROKU_IMP_ERR = traceback.format_exc()
    
            request_body = regexp_extraction(self.management_url, EXPRESSION, 1)
        for k in values_mapping.keys():
            if values[str(k)]:
                request_body = request_body + str(values_mapping[k]) + '=1'
            else:
                request_body = request_body + str(values_mapping[k]) + '=0'
    
            severity_list = filter(lambda x: x.name == issue_severity, project.list_severities())
        if len(severity_list) != 1:
            return (False, changed, 'Unable to find severity %s for project %s' % (issue_severity, project_name), {})
        severity_id = severity_list[0].id
    
            if resource['scopeUris'] is None or set(resource['scopeUris']) != set(scope_uris):
            state['ansible_facts'][fact_name] = self.resource_client.patch(resource['uri'], **operation_data)
            state['changed'] = True
            state['msg'] = self.MSG_UPDATED
    
        module.exit_json(changed=ldap.passwd_set())
    
    RETURN = '''
records:
    description: list containing all records
    returned: success
    type: complex
    contains:
        name:
            description: the record name
            returned: success
            type: str
            sample: fancy-hostname
        type:
            description: the record type
            returned: succcess
            type: str
            sample: A
        value:
            description: the record destination
            returned: success
            type: str
            sample: 127.0.0.1
        priority:
            description: the record priority (only relevant if type=MX)
            returned: success
            type: int
            sample: 0
        id:
            description: internal id of the record
            returned: success
            type: int
            sample: 12345
'''
    
    DOCUMENTATION = '''
---
author: 'Jan Christian Grünhage (@jcgruenhage)'
module: matrix
short_description: Send notifications to matrix
description:
    - This module sends html formatted notifications to matrix rooms.
version_added: '2.8'
options:
    msg_plain:
        description:
            - Plain text form of the message to send to matrix, usually markdown
        required: true
    msg_html:
        description:
            - HTML form of the message to send to matrix
        required: true
    room_id:
        description:
            - ID of the room to send the notification to
        required: true
    hs_url:
        description:
            - URL of the homeserver, where the CS-API is reachable
        required: true
    token:
        description:
            - Authentication token for the API call. If provided, user_id and password are not required
    user_id:
        description:
            - The user id of the user
    password:
        description:
            - The password to log in with
requirements:
    -  matrix-client (Python library)
'''
    
    import traceback
    
    
if __name__ == '__main__':
    main()

    
        module = AnsibleModule(
        argument_spec,
        supports_check_mode=True,
    )