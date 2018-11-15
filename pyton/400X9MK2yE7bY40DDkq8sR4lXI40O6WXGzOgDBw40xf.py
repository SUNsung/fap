
        
            Returns:
      The likelihood of p_t under the model at time t. i.e.
        p(z_t|z_tm1) = N(z_tm1 * phis, eps^2)
    
        # if fewer than batch_size provided, pad to batch_size
    hps = self.hps
    batch_size = hps.batch_size
    E, _, _ = data_bxtxd.shape
    if E < hps.batch_size:
      data_bxtxd = np.pad(data_bxtxd, ((0, hps.batch_size-E), (0, 0), (0, 0)),
                          mode='constant', constant_values=0)
      if ext_input_bxtxi is not None:
        ext_input_bxtxi = np.pad(ext_input_bxtxi,
                                 ((0, hps.batch_size-E), (0, 0), (0, 0)),
                                 mode='constant', constant_values=0)
    
    ## Sample Generation.
## Binary and setup FLAGS.
tf.app.flags.DEFINE_enum('sample_mode', 'TRAIN',
                         [SAMPLE_TRAIN, SAMPLE_VALIDATION],
                         'Dataset to sample from.')
tf.app.flags.DEFINE_string('output_path', '/tmp', 'Model output directory.')
tf.app.flags.DEFINE_boolean(
    'output_masked_logs', False,
    'Whether to display for human evaluation (show masking).')
tf.app.flags.DEFINE_integer('number_epochs', 1,
                            'The number of epochs to produce.')
    
      for ind_batch, pred_batch, crossent_batch in zip(indices, predictions,
                                                   cross_entropy):
    metrics = []
    
    
# TODO(adai): IMDB labels placeholder to model.
def create_generator(hparams,
                     inputs,
                     targets,
                     present,
                     is_training,
                     is_validating,
                     reuse=None):
  '''Create the Generator model specified by the FLAGS and hparams.
    
            status_line = 'HTTP/{version} {status} {reason}'.format(
            version=version,
            status=original.status,
            reason=original.reason
        )
        headers = [status_line]
        try:
            # `original.msg` is a `http.client.HTTPMessage` on Python 3
            # `_headers` is a 2-tuple
            headers.extend(
                '%s: %s' % header for header in original.msg._headers)
        except AttributeError:
            # and a `httplib.HTTPMessage` on Python 2.x
            # `headers` is a list of `name: val<CRLF>`.
            headers.extend(h.strip() for h in original.msg.headers)
    
        package_name = '(builtin)'
    
    
def test_auth_plugin_parse_auth_false(httpbin):
    
    
def test_migrate_implicit_content_type():
    config = MockEnvironment().config
    
        def test_POST_explicit_JSON_auto_JSON_accept(self, httpbin):
        r = http('--json', 'POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        # Make sure Content-Type gets set even with no data.
        # https://github.com/jakubroztocil/httpie/issues/137
        assert 'application/json' in r.json['headers']['Content-Type']
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
        def test_request_body_from_file_by_path_with_explicit_content_type(
            self, httpbin):
        r = http('--verbose',
                 'POST', httpbin.url + '/post', '@' + FILE_PATH_ARG,
                 'Content-Type:text/plain; charset=utf8')
        assert HTTP_OK in r
        assert FILE_CONTENT in r
        assert 'Content-Type: text/plain; charset=utf8' in r
    
    - name: gather facts about all AMIs with tag key Name and value webapp
  ec2_ami_facts:
    filters:
      'tag:Name': webapp
    
        try:
        if sort and sort_start and sort_end:
            snaked_launch_configs = snaked_launch_configs[int(sort_start):int(sort_end)]
        elif sort and sort_start:
            snaked_launch_configs = snaked_launch_configs[int(sort_start):]
        elif sort and sort_end:
            snaked_launch_configs = snaked_launch_configs[:int(sort_end)]
    except TypeError:
        module.fail_json(msg='Please supply numeric values for sort_start and/or sort_end')
    
        if max_snapshot_age_secs is not None:
        if snapshot_age.total_seconds() > max_snapshot_age_secs:
            return None
    
        @AWSRetry.backoff(tries=5, delay=5, backoff=2.0)
    def list_services_with_backoff(self, **kwargs):
        paginator = self.ecs.get_paginator('list_services')
        try:
            return paginator.paginate(**kwargs).build_full_result()
        except botocore.exceptions.ClientError as e:
            if e.response['Error']['Code'] == 'ClusterNotFoundException':
                self.module.fail_json_aws(e, 'Could not find cluster to list services')
            else:
                raise
    
        # Retrieve any AWS settings from the environment.
    region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
    if not region:
        module.fail_json(msg=str('Either region or AWS_REGION or EC2_REGION environment variable or boto config aws_region or ec2_region must be set.'))
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import boto3_conn, get_aws_connection_info, ec2_argument_spec, AWSRetry
from ansible.module_utils.ec2 import camel_dict_to_snake_dict
    
            if wait:
            wait_success, wait_msg, current_stream = (
                wait_for_status(
                    client, stream_name, 'ACTIVE', wait_timeout,
                    check_mode=check_mode
                )
            )
            if not wait_success:
                return wait_success, changed, wait_msg
        else:
            stream_found, stream_msg, current_stream = (
                find_stream(client, stream_name, check_mode=check_mode)
            )
            if stream_found and current_stream['StreamStatus'] != 'ACTIVE':
                err_msg = (
                    'Number of shards for {0} is in the process of updating'
                    .format(stream_name)
                )
                return success, changed, err_msg
    
        function_name = module.params['function_name']
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
                if len(face_bounding_boxes) != 1:
                # If there are no people (or too many people) in a training image, skip the image.
                if verbose:
                    print('Image {} not suitable for training: {}'.format(img_path, 'Didn't find a face' if len(face_bounding_boxes) < 1 else 'Found more than one face'))
            else:
                # Add face encoding for current image to the training set
                X.append(face_recognition.face_encodings(image, known_face_locations=face_bounding_boxes)[0])
                y.append(class_dir)
    
    while True:
    print('Capturing image.')
    # Grab a single frame of video from the RPi camera as a numpy array
    camera.capture(output, format='rgb')