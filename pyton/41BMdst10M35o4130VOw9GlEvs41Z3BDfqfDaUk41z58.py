
        
        author: Willem van Ketwich (@wilvk)
    
            try:
            # If the CallerReference is a value already sent in a previous identity request
            # the returned value is that of the original request
            result = self.client.update_cloud_front_origin_access_identity(
                CloudFrontOriginAccessIdentityConfig=new_config,
                Id=origin_access_identity_id,
                IfMatch=e_tag,
            )
        except (ClientError, BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Error updating Origin Access Identity.')
    
    import traceback
from ansible.module_utils._text import to_native
from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import HAS_BOTO3, camel_dict_to_snake_dict, boto3_conn, ec2_argument_spec, get_aws_connection_info
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import ec2_argument_spec, get_aws_connection_info, boto3_conn, camel_dict_to_snake_dict
from ansible.module_utils._text import to_text
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['stableinterface'],
                    'supported_by': 'certified'}
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            autoscaling_group_name=dict(required=True, type='str'),
            lifecycle_hook_name=dict(required=True, type='str'),
            transition=dict(type='str', choices=['autoscaling:EC2_INSTANCE_TERMINATING', 'autoscaling:EC2_INSTANCE_LAUNCHING']),
            role_arn=dict(type='str'),
            notification_target_arn=dict(type='str'),
            notification_meta_data=dict(type='str'),
            heartbeat_timeout=dict(type='int'),
            default_result=dict(default='ABANDON', choices=['ABANDON', 'CONTINUE']),
            state=dict(default='present', choices=['present', 'absent'])
        )
    )
    
            if domain == 'vpc':
            unassociated_addresses = [a for a in all_addresses
                                      if not a.association_id]
        else:
            unassociated_addresses = [a for a in all_addresses
                                      if not a.instance_id]
        if unassociated_addresses:
            return unassociated_addresses[0], False
    
        region, ec2_url, aws_connect_params = get_aws_connection_info(
        module, boto3=True)
    
            try:
            if changed:
                connection.create_scaling_policy(policy)
                policy = connection.get_all_policies(as_group=asg_name, policy_names=[sp_name])[0]
            module.exit_json(changed=changed, name=policy.name, arn=policy.policy_arn, as_name=policy.as_name, scaling_adjustment=policy.scaling_adjustment,
                             cooldown=policy.cooldown, adjustment_type=policy.adjustment_type, min_adjustment_step=policy.min_adjustment_step)
        except BotoServerError as e:
            module.fail_json(msg=str(e))