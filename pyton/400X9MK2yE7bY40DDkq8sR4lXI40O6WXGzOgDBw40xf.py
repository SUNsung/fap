
        
        
@pytest.fixture
def app():
    '''Create and configure a new app instance for each test.'''
    # create a temporary file to isolate the database for each test
    db_fd, db_path = tempfile.mkstemp()
    # create the app with common test config
    app = create_app({
        'TESTING': True,
        'DATABASE': db_path,
    })
    
    
@pytest.mark.parametrize('path', (
    '/create',
    '/1/update',
    '/1/delete',
))
def test_login_required(client, path):
    response = client.post(path)
    assert response.headers['Location'] == 'http://localhost/auth/login'
    
        def record_once(self, func):
        '''Works like :meth:`record` but wraps the function in another
        function that will ensure the function is only called once.  If the
        blueprint is registered a second time on the application, the
        function passed is not called.
        '''
        def wrapper(state):
            if state.first_registration:
                func(state)
        return self.record(update_wrapper(wrapper, func))
    
        def __get__(self, obj, type=None):
        if obj is None:
            return self
        rv = obj.config[self.__name__]
        if self.get_converter is not None:
            rv = self.get_converter(rv)
        return rv
    
        def __repr__(self):
        top = _app_ctx_stack.top
        if top is not None:
            return '<flask.g of %r>' % top.app.name
        return object.__repr__(self)
    
            return list(result)
    
                try:
                environ = builder.get_environ()
            finally:
                builder.close()
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=False),
        )
    )
    module = AnsibleAWSModule(argument_spec=argument_spec, supports_check_mode=True)
    
        def validate_etag_from_origin_access_identity_id(self, origin_access_identity_id):
        try:
            if origin_access_identity_id is None:
                return
            oai = self.__cloudfront_facts_mgr.get_origin_access_identity(origin_access_identity_id)
            if oai is not None:
                return oai.get('ETag')
        except (ClientError, BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Error getting etag from origin_access_identity.')
    
        if state == 'present':
        if not all((replication_id, cluster_id)):
            module.fail_json(msg='The state 'present' requires options: 'replication_id' and 'cluster_id'')
        response, changed = create(module, connection, replication_id, cluster_id, name)
    elif state == 'absent':
        response, changed = delete(module, connection, name)
    elif state == 'copy':
        if not all((target, bucket)):
            module.fail_json(msg='The state 'copy' requires options: 'target' and 'bucket'.')
        response, changed = copy(module, connection, name, target, bucket)
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    
@AWSRetry.exponential_backoff()
def list_iam_attached_role_policies_with_backoff(client, role_name):
    paginator = client.get_paginator('list_attached_role_policies')
    return paginator.paginate(RoleName=role_name).build_full_result()['AttachedPolicies']
    
    RETURN = '''
server_certificate_id:
    description: The 21 character certificate id
    returned: success
    type: str
    sample: 'ADWAJXWTZAXIPIMQHMJPO'
certificate_body:
    description: The asn1der encoded PEM string
    returned: success
    type: str
    sample: '-----BEGIN CERTIFICATE-----\nbunch of random data\n-----END CERTIFICATE-----'
server_certificate_name:
    description: The name of the server certificate
    returned: success
    type: str
    sample: 'server-cert-name'
arn:
    description: The Amazon resource name of the server certificate
    returned: success
    type: str
    sample: 'arn:aws:iam::911277865346:server-certificate/server-cert-name'
path:
    description: The path of the server certificate
    returned: success
    type: str
    sample: '/'
expiration:
    description: The date and time this server certificate will expire, in ISO 8601 format.
    returned: success
    type: str
    sample: '2017-06-15T12:00:00+00:00'
upload_date:
    description: The date and time this server certificate was uploaded, in ISO 8601 format.
    returned: success
    type: str
    sample: '2015-04-25T00:36:40+00:00'
'''