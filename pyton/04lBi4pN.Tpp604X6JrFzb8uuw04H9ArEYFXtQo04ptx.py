
        
            # Check urllib3 for compatibility.
    major, minor, patch = urllib3_version  # noqa: F811
    major, minor, patch = int(major), int(minor), int(patch)
    # urllib3 >= 1.21.1, <= 1.23
    assert major == 1
    assert minor >= 21
    assert minor <= 23
    
    
class InvalidHeader(RequestException, ValueError):
    '''The header value provided was somehow invalid.'''
    
        # Redirection.
    300: ('multiple_choices',),
    301: ('moved_permanently', 'moved', '\\o-'),
    302: ('found',),
    303: ('see_other', 'other'),
    304: ('not_modified',),
    305: ('use_proxy',),
    306: ('switch_proxy',),
    307: ('temporary_redirect', 'temporary_moved', 'temporary'),
    308: ('permanent_redirect',
          'resume_incomplete', 'resume',),  # These 2 to be removed in 3.0
    
        def list_regex_patterns(self):
        # at time of writing(2017-11-20) no regex pattern paginator exists
        regex_patterns = []
        params = {}
        while True:
            try:
                response = self.list_regex_patterns_with_backoff(**params)
            except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
                self.module.fail_json_aws(e, msg='Could not list regex patterns')
            regex_patterns.extend(response['RegexPatternSets'])
            if 'NextMarker' in response:
                params['NextMarker'] = response['NextMarker']
            else:
                break
        return regex_patterns
    
        existing_conditions = dict((condition_type, dict()) for condition_type in MATCH_LOOKUP)
    desired_conditions = dict((condition_type, dict()) for condition_type in MATCH_LOOKUP)
    all_conditions = dict()
    
    DOCUMENTATION = '''
module: aws_waf_web_acl
short_description: create and delete WAF Web ACLs
description:
  - Read the AWS documentation for WAF
    U(https://aws.amazon.com/documentation/waf/)
version_added: '2.5'
    
    RETURN = '''
invalidation:
  description: The invalidation's information.
  returned: always
  type: complex
  contains:
    create_time:
      description: The date and time the invalidation request was first made.
      returned: always
      type: string
      sample: '2018-02-01T15:50:41.159000+00:00'
    id:
      description: The identifier for the invalidation request.
      returned: always
      type: string
      sample: I2G9MOWJZFV612
    invalidation_batch:
      description: The current invalidation information for the batch request.
      returned: always
      type: complex
      contains:
        caller_reference:
          description: The value used to uniquely identify an invalidation request.
          returned: always
          type: string
          sample: testing 123
        paths:
          description: A dict that contains information about the objects that you want to invalidate.
          returned: always
          type: complex
          contains:
            items:
              description: A list of the paths that you want to invalidate.
              returned: always
              type: list
              sample:
              - /testpathtwo/test2.js
              - /testpathone/test1.css
              - /testpaththree/test3.ss
            quantity:
              description: The number of objects that you want to invalidate.
              returned: always
              type: int
              sample: 3
    status:
      description: The status of the invalidation request.
      returned: always
      type: string
      sample: Completed
location:
  description: The fully qualified URI of the distribution and invalidation batch request.
  returned: always
  type: string
  sample: https://cloudfront.amazonaws.com/2017-03-25/distribution/E1ZID6KZJECZY7/invalidation/I2G9MOWJZFV622
'''
    
    try:
    import botocore
except ImportError:
    pass  # will be detected by imported HAS_BOTO3
    
        if pipeline_field(client, dp_id, field='@pipelineState') in DP_ACTIVE_STATES:
        changed = False
    else:
        try:
            client.activate_pipeline(pipelineId=dp_id)
        except ClientError as e:
            if e.response['Error']['Code'] == 'InvalidRequestException':
                module.fail_json(msg='You need to populate your pipeline before activation.')
        try:
            pipeline_status_timeout(client, dp_id, status=DP_ACTIVE_STATES,
                                    timeout=timeout)
        except TimeOutException:
            if pipeline_field(client, dp_id, field='@pipelineState') == 'FINISHED':
                # activated but completed more rapidly than it was checked
                pass
            else:
                module.fail_json(msg=('Data Pipeline {0} failed to activate '
                                      'within timeout {1} seconds').format(dp_name, timeout))
        changed = True
    
        argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            image_ids=dict(default=[], type='list', aliases=['image_id']),
            filters=dict(default={}, type='dict'),
            owners=dict(default=[], type='list', aliases=['owner']),
            executable_users=dict(default=[], type='list', aliases=['executable_user']),
            describe_image_attributes=dict(default=False, type='bool')
        )
    )
    
        for hook in all_hooks['LifecycleHooks']:
        if hook['LifecycleHookName'] == lch_name:
            lch_params = {
                'LifecycleHookName': lch_name,
                'AutoScalingGroupName': asg_name
            }
    
        # If we're in check mode, nothing else to do
    if not check_mode:
        if isinstance:
            if address.domain == 'vpc':
                res = ec2.associate_address(device_id,
                                            allocation_id=address.allocation_id,
                                            private_ip_address=private_ip_address,
                                            allow_reassociation=allow_reassociation)
            else:
                res = ec2.associate_address(device_id,
                                            public_ip=address.public_ip,
                                            private_ip_address=private_ip_address,
                                            allow_reassociation=allow_reassociation)
        else:
            res = ec2.associate_address(network_interface_id=device_id,
                                        allocation_id=address.allocation_id,
                                        private_ip_address=private_ip_address,
                                        allow_reassociation=allow_reassociation)
        if not res:
            raise EIPException('association failed')
    
        name = module.params['name']
    state = module.params.get('state')
    key_material = module.params.get('key_material')
    force = module.params.get('force')
    
    # Encrypted Snapshot copy
- ec2_snapshot_copy:
    source_region: eu-central-1
    region: eu-west-1
    source_snapshot_id: snap-xxxxxxx
    encrypted: yes
    
        @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
        def test_phones(self):
        self.assertEqual(('1234',), self.reg.phones)
    
        def test_rollback_error(self):
        self.config.reverter.rollback_checkpoints = mock.Mock(
            side_effect=errors.ReverterError)
        self.assertRaises(errors.PluginError, self.config.rollback_checkpoints)
    
    from certbot import errors