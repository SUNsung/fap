
        
        
def main():
    argument_spec = vmware_argument_spec()
    argument_spec.update(dict(
        switch=dict(type='str', required=True, aliases=['switch_name']),
        name=dict(type='str', required=True),
        state=dict(type='str', required=True, choices=['present', 'absent']),
        session_type=dict(type='str', default='dvPortMirror', choices=['dvPortMirror',
                                                                       'encapsulatedRemoteMirrorSource',
                                                                       'remoteMirrorDest',
                                                                       'remoteMirrorSource']),
        enabled=dict(type='bool', default=True),
        description=dict(type='str'),
        source_port_transmitted=dict(type='str'),
        source_port_received=dict(type='str'),
        destination_port=dict(type='str'),
        encapsulation_vlan_id=dict(type='int'),
        strip_original_vlan=dict(type='bool'),
        mirrored_packet_length=dict(type='int'),
        normal_traffic_allowed=dict(type='bool'),
        sampling_rate=dict(type='int'),
        source_vm_transmitted=dict(type='dict',
                                   options=dict(
                                       name=dict(type='str'),
                                       nic_label=dict(type='str'))),
        source_vm_received=dict(type='dict',
                                options=dict(
                                    name=dict(type='str'),
                                    nic_label=dict(type='str'))),
        destination_vm=dict(type='dict',
                            options=dict(
                                name=dict(type='str'),
                                nic_label=dict(type='str'))),
    ))
    module = AnsibleModule(argument_spec=argument_spec, supports_check_mode=False)
    session = VMwareVspanSession(module)
    session.process_operation()
    
            spec = dict(
            region=dict(type='str', default='na'),
            mcp_user=dict(type='str', required=False),
            mcp_password=dict(type='str', required=False, no_log=True),
            location=dict(type='str', required=True),
            validate_certs=dict(type='bool', required=False, default=True)
        )
    
    EXAMPLES = '''
# Note - You must set the CLC_V2_API_USERNAME And CLC_V2_API_PASSWD Environment variables before running these examples
    
            if not CLC_FOUND:
            self.module.fail_json(msg=missing_required_lib('clc-sdk'), exception=CLC_IMP_ERR)
        if not REQUESTS_FOUND:
            self.module.fail_json(msg=missing_required_lib('requests'), exception=REQUESTS_IMP_ERR)
        if requests.__version__ and LooseVersion(
                requests.__version__) < LooseVersion('2.5.0'):
            self.module.fail_json(
                msg='requests library  version should be >= 2.5.0')
    
    EXAMPLES = '''
# Add a user to a password file and ensure permissions are set
- htpasswd:
    path: /etc/nginx/passwdfile
    name: janedoe
    password: '9s36?;fyNp'
    owner: root
    group: www-data
    mode: 0640
    
    from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
    
    def predict(self, input):
        '''
        From the input stream, predict what alternative will succeed
	using this DFA (representing the covering regular approximation
	to the underlying CFL).  Return an alternative number 1..n.  Throw
	 an exception upon error.
	'''
        mark = input.mark()
        s = 0 # we always start at s0
        try:
            for _ in xrange(50000):
                #print '***Current state = %d' % s
                
                specialState = self.special[s]
                if specialState >= 0:
                    #print 'is special'
                    s = self.specialStateTransition(specialState, input)
                    if s == -1:
                        self.noViableAlt(s, input)
                        return 0
                    input.consume()
                    continue
    
            The recognizer attempts to recover from single missing
        symbols. But, actions might refer to that missing symbol.
        For example, x=ID {f($x);}. The action clearly assumes
        that there has been an identifier matched previously and that
        $x points at that token. If that token is missing, but
        the next token in the stream is what we want we assume that
        this token is missing and we keep going. Because we
        have to return some token to replace the missing token,
        we have to conjure one up. This method gives the user control
        over the tokens returned for missing tokens. Mostly,
        you will want to create something special for identifier
        tokens. For literals such as '{' and ',', the default
        action in the parser or tree parser works. It simply creates
        a CommonToken of the appropriate type. The text will be the token.
        If you change what tokens must be created by the lexer,
        override this method to create the appropriate tokens.
        '''
    }
    
    
def deserialize_event(event):
    # Deserialize into Python dictionary and extract the 'NewImage' (the new version of the full ddb document)
    ddb = event.get('dynamodb')
    if ddb:
        result = {
            '__action_type': event.get('eventName'),
        }
    
            def forward_request(self, method, path, data, headers):
            sleep_time = int(path.replace('/', ''))
            time.sleep(sleep_time)
            response = Response()
            response.status_code = 200
            response._content = ('%s' % sleep_time) * file_length
            return response
    
    
def get_handler_file_from_name(handler_name, runtime=LAMBDA_DEFAULT_RUNTIME):
    # TODO: support Java Lambdas in the future
    delimiter = '.'
    if runtime.startswith(LAMBDA_RUNTIME_NODEJS):
        file_ext = '.js'
    elif runtime.startswith(LAMBDA_RUNTIME_GOLANG):
        file_ext = ''
    elif runtime.startswith(LAMBDA_RUNTIME_DOTNETCORE2) or runtime.startswith(LAMBDA_RUNTIME_DOTNETCORE21):
        file_ext = '.dll'
        delimiter = ':'
    elif runtime.startswith(LAMBDA_RUNTIME_RUBY):
        file_ext = '.rb'
    elif runtime.startswith(LAMBDA_RUNTIME_CUSTOM_RUNTIME):
        file_ext = '.sh'
    else:
        file_ext = '.py'
    return '%s%s' % (handler_name.split(delimiter)[0], file_ext)
    
        def return_response(self, method, path, data, headers, response):
        if response.status_code >= 400:
            LOG.debug('Error response from CloudFormation (%s) %s %s: %s' %
                      (response.status_code, method, path, response.content))
        if response._content:
            aws_stack.fix_account_id_in_arns(response)
    
        def test_extract_query_params(self):
        path, query_params = apigateway_listener.extract_query_string_params(
            '/foo/bar?foo=foo&bar=bar&bar=baz'
        )
        self.assertEqual(path, '/foo/bar')
        self.assertEqual(query_params, {'foo': 'foo', 'bar': ['bar', 'baz']})
    
            self.assertEqual(response.headers['content-length'], '0')
        # clean up
        self._delete_bucket(bucket_name, [object_key])
    
    INSTALL_DIR_INFRA = '%s/infra' % ROOT_PATH
INSTALL_DIR_NPM = '%s/node_modules' % ROOT_PATH
INSTALL_DIR_ES = '%s/elasticsearch' % INSTALL_DIR_INFRA
INSTALL_DIR_DDB = '%s/dynamodb' % INSTALL_DIR_INFRA
INSTALL_DIR_KCL = '%s/amazon-kinesis-client' % INSTALL_DIR_INFRA
INSTALL_DIR_STEPFUNCTIONS = '%s/stepfunctions' % INSTALL_DIR_INFRA
INSTALL_DIR_ELASTICMQ = '%s/elasticmq' % INSTALL_DIR_INFRA
INSTALL_PATH_LOCALSTACK_FAT_JAR = '%s/localstack-utils-fat.jar' % INSTALL_DIR_INFRA
URL_LOCALSTACK_FAT_JAR = ('https://repo1.maven.org/maven2/' +
    'cloud/localstack/localstack-utils/{v}/localstack-utils-{v}-fat.jar').format(v=LOCALSTACK_MAVEN_VERSION)
    
    
def stop_infra():
    if common.INFRA_STOPPED:
        return
    common.INFRA_STOPPED = True
    
        # set basic CLI commands
    config.CLI_COMMANDS['infra'] = {
        'description': 'Commands to manage the infrastructure',
        'function': cli.cmd_infra
    }
    config.CLI_COMMANDS['start'] = {
        'description': 'Shorthand to start the infrastructure',
        'function': cli.cmd_infra
    }
    config.CLI_COMMANDS['web'] = {
        'description': 'Commands to manage the Web dashboard',
        'function': cli.cmd_web
    }
    config.CLI_COMMANDS['ssh'] = {
        'description': 'Shorthand to obtain a shell in the running container',
        'function': cli.cmd_ssh
    }