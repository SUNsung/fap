
        
            def format_headers(self, headers):
        for p in self.enabled_plugins:
            headers = p.format_headers(headers)
        return headers
    
            for chunk in self.msg.iter_body(self.CHUNK_SIZE):
            if not converter and b'\0' in chunk:
                converter = self.conversion.get_converter(self.mime)
                if not converter:
                    raise BinarySuppressedError()
            body.extend(chunk)
    
        # Set to `False` to make it possible to invoke this auth
    # plugin without requiring the user to specify credentials
    # through `--auth, -a`.
    auth_require = True
    
    UNICODE = FILE_CONTENT

    
        def inner(r):
        r.headers['Authorization'] = header
        return r
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
        def test_request_body_from_file_by_path_no_data_items_allowed(
            self, httpbin):
        env = MockEnvironment(stdin_isatty=False)
        r = http('POST', httpbin.url + '/post', '@' + FILE_PATH_ARG, 'foo=bar',
                 env=env, error_exit_ok=True)
        assert 'cannot be mixed' in r.stderr

    
        insertions = list()
    deletions = list()
    
        distribution_id = validation_mgr.validate_distribution_id(distribution_id, alias)
    valid_target_paths = validation_mgr.validate_invalidation_batch(target_paths, caller_reference)
    valid_pascal_target_paths = snake_dict_to_camel_dict(valid_target_paths, True)
    result, changed = service_mgr.create_invalidation(distribution_id, valid_pascal_target_paths)
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import (HAS_BOTO3, boto3_conn, camel_dict_to_snake_dict, ec2_argument_spec,
                                      get_aws_connection_info)
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import boto3_conn, get_aws_connection_info, ec2_argument_spec, camel_dict_to_snake_dict
    
    image = face_recognition.load_image_file('{}')
'''
    
    
def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS
    
                for face_location in face_locations:
                # Print the location of each face in this frame
                top, right, bottom, left = face_location
                print(' - A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))