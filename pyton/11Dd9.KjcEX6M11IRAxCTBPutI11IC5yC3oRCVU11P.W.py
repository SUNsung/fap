
        
                if matched_name and matched_tags:
            asg = camel_dict_to_snake_dict(asg)
            # compatibility with ec2_asg module
            asg['launch_config_name'] = asg['launch_configuration_name']
            # workaround for https://github.com/ansible/ansible/pull/25015
            if 'target_group_ar_ns' in asg:
                asg['target_group_arns'] = asg['target_group_ar_ns']
                del(asg['target_group_ar_ns'])
            if asg.get('target_group_arns'):
                if elbv2:
                    try:
                        tg_paginator = elbv2.get_paginator('describe_target_groups')
                        tg_result = tg_paginator.paginate(TargetGroupArns=asg['target_group_arns']).build_full_result()
                        asg['target_group_names'] = [tg['TargetGroupName'] for tg in tg_result['TargetGroups']]
                    except ClientError as e:
                        if e.response['Error']['Code'] == 'TargetGroupNotFound':
                            asg['target_group_names'] = []
            else:
                asg['target_group_names'] = []
            matched_asgs.append(asg)
    
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
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import (connect_to_aws,
                                      boto3_conn,
                                      ec2_argument_spec,
                                      get_aws_connection_info)
try:
    from botocore.exceptions import (BotoCoreError, ClientError)
except ImportError:
    pass  # caught by imported HAS_BOTO3
    
        required = [volume_id, snapshot_id, instance_id]
    if required.count(None) != len(required) - 1:  # only 1 must be set
        module.fail_json(msg='One and only one of volume_id or instance_id or snapshot_id must be specified')
    if instance_id and not device_name or device_name and not instance_id:
        module.fail_json(msg='Instance ID and device name must both be specified')
    
    DOCUMENTATION = '''
module: elasticache_facts
short_description: Retrieve facts for AWS Elasticache clusters
description:
  - Retrieve facts from AWS Elasticache clusters
version_added: '2.5'
options:
  name:
    description:
      - The name of an Elasticache cluster
    
    
def describe_iam_roles(module, client):
    name = module.params['name']
    path_prefix = module.params['path_prefix']
    if name:
        try:
            roles = [client.get_role(RoleName=name)['Role']]
        except botocore.exceptions.ClientError as e:
            if e.response['Error']['Code'] == 'NoSuchEntity':
                return []
            else:
                module.fail_json_aws(e, msg='Couldn't get IAM role %s' % name)
        except botocore.exceptions.BotoCoreError as e:
            module.fail_json_aws(e, msg='Couldn't get IAM role %s' % name)
    else:
        params = dict()
        if path_prefix:
            if not path_prefix.startswith('/'):
                path_prefix = '/' + path_prefix
            if not path_prefix.endswith('/'):
                path_prefix = path_prefix + '/'
            params['PathPrefix'] = path_prefix
        try:
            roles = list_iam_roles_with_backoff(client, **params)['Roles']
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, msg='Couldn't list IAM roles')
    return [camel_dict_to_snake_dict(describe_iam_role(module, client, role)) for role in roles]
    
    RETURN = '''
---
alias_arn:
    description: Full ARN of the function, including the alias
    returned: success
    type: string
    sample: arn:aws:lambda:us-west-2:123456789012:function:myFunction:dev
description:
    description: A short description of the alias
    returned: success
    type: string
    sample: The development stage for my hot new app
function_version:
    description: The qualifier that the alias refers to
    returned: success
    type: string
    sample: $LATEST
name:
    description: The name of the alias assigned
    returned: success
    type: string
    sample: dev
'''
    
        if zone_in in [z['Name'] for z in matching_zones]:
        if hosted_zone_id:
            changed, result = delete_hosted_id(module, client, hosted_zone_id, matching_zones)
        else:
            if private_zone:
                changed, result = delete_private(module, client, matching_zones, vpc_id, vpc_region)
            else:
                changed, result = delete_public(module, client, matching_zones)
    else:
        changed = False
        result = 'No zone to delete.'
    
    RETURN = '''
index_document:
    description: index document
    type: complex
    returned: always
    contains:
        suffix:
            description: suffix that is appended to a request that is for a directory on the website endpoint
            returned: success
            type: string
            sample: index.html
error_document:
    description: error document
    type: complex
    returned: always
    contains:
        key:
            description:  object key name to use when a 4XX class error occurs
            returned: when error_document parameter set
            type: string
            sample: error.html
redirect_all_requests_to:
    description: where to redirect requests
    type: complex
    returned: always
    contains:
        host_name:
            description: name of the host where requests will be redirected.
            returned: when redirect all requests parameter set
            type: string
            sample: ansible.com
routing_rules:
    description: routing rules
    type: complex
    returned: always
    contains:
        routing_rule:
            host_name:
                description: name of the host where requests will be redirected.
                returned: when host name set as part of redirect rule
                type: string
                sample: ansible.com
        condition:
            key_prefix_equals:
            description: object key name prefix when the redirect is applied. For example, to redirect requests for ExamplePage.html, the key prefix will be
                     ExamplePage.html
            returned: when routing rule present
            type: string
            sample: docs/
        redirect:
            replace_key_prefix_with:
                description: object key prefix to use in the redirect request
                returned: when routing rule present
                type: string
                sample: documents/
'''
    
    
def do_upgrade(module, image):
    args = ['atomic', 'update', '--force', image]
    rc, out, err = module.run_command(args, check_rc=False)
    if rc != 0:  # something went wrong emit the msg
        module.fail_json(rc=rc, msg=err)
    elif 'Image is up to date' in out:
        return False
    
        CLIENT_MINIMUM_VERSION = '0.22.0'
    if not check_min_pkg_version('google-cloud-pubsub', CLIENT_MINIMUM_VERSION):
        module.fail_json(msg='Please install google-cloud-pubsub library version %s' % CLIENT_MINIMUM_VERSION)
    
    
    def init_augeas(self):
        ''' Initialize the actual Augeas instance '''
        import augeas
        self.aug = augeas.Augeas(
            # specify a directory to load our preferred lens from
            loadpath=constants.AUGEAS_LENS_DIR,
            # Do not save backup (we do it ourselves), do not load
            # anything by default
            flags=(augeas.Augeas.NONE |
                   augeas.Augeas.NO_MODL_AUTOLOAD |
                   augeas.Augeas.ENABLE_SPAN))
        # See if any temporary changes need to be recovered
        # This needs to occur before VirtualHost objects are setup...
        # because this will change the underlying configuration and potential
        # vhosts
        self.recovery_routine()
    
                # If equal and set is not empty... assume same server
            if self.name is not None or self.aliases:
                return True
        # If we're looking for a generic vhost,
        # don't return one with a ServerName
        elif self.name:
            return False
    
        def test_bad_save_finalize_checkpoint(self):
        self.config.reverter.finalize_checkpoint = mock.Mock(
            side_effect=errors.ReverterError)
        self.config.parser.add_dir(
            self.vh_truth[0].path, 'Test', 'bad_save_ckpt')
        self.assertRaises(errors.PluginError, self.config.save, 'Title')
    
            self.vhosts.append(
            obj.VirtualHost(
                'path', 'aug_path', set([obj.Addr.fromstring('*:80')]),
                False, False,
                'wildcard.com', set(['*.wildcard.com'])))
    
        def setUp(self):
        from certbot_apache.obj import Addr
        from certbot_apache.obj import VirtualHost