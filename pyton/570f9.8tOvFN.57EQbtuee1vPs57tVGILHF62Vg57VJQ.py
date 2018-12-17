
        
            # By default the `-a` argument is parsed for `username:password`.
    # Set this to `False` to disable the parsing and error handling.
    auth_parse = True
    
    import requests.auth
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            BASIC_AUTH_HEADER_VALUE,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        def __init__(self, directory=DEFAULT_CONFIG_DIR):
        super(Config, self).__init__()
        self.update(self.DEFAULTS)
        self.directory = directory
    
    RETURN = '''
gateway.customer_gateways:
    description: details about the gateway that was created.
    returned: success
    type: complex
    contains:
        bgp_asn:
            description: The Border Gateway Autonomous System Number.
            returned: when exists and gateway is available.
            sample: 65123
            type: string
        customer_gateway_id:
            description: gateway id assigned by amazon.
            returned: when exists and gateway is available.
            sample: cgw-cb6386a2
            type: string
        ip_address:
            description: ip address of your gateway device.
            returned: when exists and gateway is available.
            sample: 1.2.3.4
            type: string
        state:
            description: state of gateway.
            returned: when gateway exists and is available.
            state: available
            type: string
        tags:
            description: any tags on the gateway.
            returned: when gateway exists and is available, and when tags exist.
            state: available
            type: string
        type:
            description: encryption type.
            returned: when gateway exists and is available.
            sample: ipsec.1
            type: string
'''
    
    RETURN = '''
block_device_mapping:
    description: Block device mapping for the instances of launch configuration
    type: list
    returned: always
    sample: '[{
        'device_name': '/dev/xvda':,
        'ebs': {
            'delete_on_termination': true,
            'volume_size': 8,
            'volume_type': 'gp2'
    }]'
classic_link_vpc_security_groups:
    description: IDs of one or more security groups for the VPC specified in classic_link_vpc_id
    type: string
    returned: always
    sample:
created_time:
    description: The creation date and time for the launch configuration
    type: string
    returned: always
    sample: '2016-05-27T13:47:44.216000+00:00'
ebs_optimized:
    description: EBS I/O optimized (true ) or not (false )
    type: bool
    returned: always
    sample: true,
image_id:
    description: ID of the Amazon Machine Image (AMI)
    type: string
    returned: always
    sample: 'ami-12345678'
instance_monitoring:
    description: Launched with detailed monitoring or not
    type: dict
    returned: always
    sample: '{
        'enabled': true
    }'
instance_type:
    description: Instance type
    type: string
    returned: always
    sample: 't2.micro'
kernel_id:
    description: ID of the kernel associated with the AMI
    type: string
    returned: always
    sample:
key_name:
    description: Name of the key pair
    type: string
    returned: always
    sample: 'user_app'
launch_configuration_arn:
    description: Amazon Resource Name (ARN) of the launch configuration
    type: string
    returned: always
    sample: 'arn:aws:autoscaling:us-east-1:666612345678:launchConfiguration:ba785e3a-dd42-6f02-4585-ea1a2b458b3d:launchConfigurationName/lc-app'
launch_configuration_name:
    description: Name of the launch configuration
    type: string
    returned: always
    sample: 'lc-app'
ramdisk_id:
    description: ID of the RAM disk associated with the AMI
    type: string
    returned: always
    sample:
security_groups:
    description: Security groups to associated
    type: list
    returned: always
    sample: '[
        'web'
    ]'
user_data:
    description: User data available
    type: string
    returned: always
    sample:
'''
    }
    
    
DOCUMENTATION = '''
---
module: ec2_snapshot
short_description: creates a snapshot from an existing volume
description:
    - creates an EC2 snapshot from an existing EBS volume
version_added: '1.5'
options:
  volume_id:
    description:
      - volume from which to take the snapshot
    required: false
  description:
    description:
      - description to be applied to the snapshot
    required: false
  instance_id:
    description:
    - instance that has the required volume to snapshot mounted
    required: false
  device_name:
    description:
    - device name of a mounted volume to be snapshotted
    required: false
  snapshot_tags:
    description:
      - a hash/dictionary of tags to add to the snapshot
    required: false
    version_added: '1.6'
  wait:
    description:
      - wait for the snapshot to be ready
    type: bool
    required: false
    default: yes
    version_added: '1.5.1'
  wait_timeout:
    description:
      - how long before wait gives up, in seconds
      - specify 0 to wait forever
    required: false
    default: 0
    version_added: '1.5.1'
  state:
    description:
      - whether to add or create a snapshot
    required: false
    default: present
    choices: ['absent', 'present']
    version_added: '1.9'
  snapshot_id:
    description:
      - snapshot id to remove
    required: false
    version_added: '1.9'
  last_snapshot_min_age:
    description:
      - If the volume's most recent snapshot has started less than `last_snapshot_min_age' minutes ago, a new snapshot will not be created.
    required: false
    default: 0
    version_added: '2.0'
    
    
try:
    import botocore
except ImportError:
    pass  # handled by AnsibleAWSModule
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True, type='str'),
            state=dict(required=True, type='str', choices=['present', 'absent', 'copy']),
            replication_id=dict(type='str'),
            cluster_id=dict(type='str'),
            target=dict(type='str'),
            bucket=dict(type='str'),
        )
    )
    
    
if __name__ == '__main__':
    main()

    
            for server_cert in server_certs:
            if not name:
                server_cert = iam.get_server_certificate(ServerCertificateName=server_cert['ServerCertificateName'])['ServerCertificate']
            cert_md = server_cert['ServerCertificateMetadata']
            results[cert_md['ServerCertificateName']] = {
                'certificate_body': server_cert['CertificateBody'],
                'server_certificate_id': cert_md['ServerCertificateId'],
                'server_certificate_name': cert_md['ServerCertificateName'],
                'arn': cert_md['Arn'],
                'path': cert_md['Path'],
                'expiration': cert_md['Expiration'].isoformat(),
                'upload_date': cert_md['UploadDate'].isoformat(),
            }
    
        function_name = module.params.get('function_name')
    if function_name:
        try:
            # get_policy returns a JSON string so must convert to dict before reassigning to its key
            lambda_facts.update(policy=json.loads(client.get_policy(FunctionName=function_name)['Policy']))
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(policy={})
            else:
                module.fail_json_aws(e, msg='Trying to get {0} policy'.format(function_name))
    else:
        module.fail_json(msg='Parameter function_name required for query=policy.')
    
        creds, params = get_google_cloud_credentials(module)
    pubsub_client = pubsub.Client(project=params['project_id'], credentials=creds, use_gax=False)
    pubsub_client.user_agent = 'ansible-pubsub-0.1'
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
                # Perform any configuration updates
            self._config()
    
    
def commit_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/commit/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'commit ' + text, refuri=ref, **options)
    return [node], []
    
        inproject = inside_project()
    cmds = _get_commands_dict(settings, inproject)
    cmdname = _pop_command_name(argv)
    parser = optparse.OptionParser(formatter=optparse.TitledHelpFormatter(), \
        conflict_handler='resolve')
    if not cmdname:
        _print_commands(settings, inproject)
        sys.exit(0)
    elif cmdname not in cmds:
        _print_unknown_command(settings, cmdname, inproject)
        sys.exit(2)
    
        def help(self):
        '''An extensive help for the command. It will be shown when using the
        'help' command. It can contain newlines, since not post-formatting will
        be applied to its contents.
        '''
        return self.long_desc()
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
            # Request requires callback argument as callable or None, not string
        request = Request(url, None)
        _start_requests = lambda s: [self.prepare_request(s, request, opts)]
        self.spidercls.start_requests = _start_requests
    
        requires_project = False
    default_settings = {'SPIDER_LOADER_WARN_ONLY': True}
    
        def _get_handler(self, scheme):
        '''Lazy-load the downloadhandler for a scheme
        only on the first request for that scheme.
        '''
        if scheme in self._handlers:
            return self._handlers[scheme]
        if scheme in self._notconfigured:
            return None
        if scheme not in self._schemes:
            self._notconfigured[scheme] = 'no handler available for that scheme'
            return None