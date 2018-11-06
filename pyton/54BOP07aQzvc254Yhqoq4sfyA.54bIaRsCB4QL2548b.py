
        
        DOCUMENTATION = '''
module: aws_waf_facts
short_description: Retrieve facts for WAF ACLs, Rule , Conditions and Filters.
description:
  - Retrieve facts for WAF ACLs, Rule , Conditions and Filters.
version_added: '2.4'
requirements: [ boto3 ]
options:
  name:
    description:
      - The name of a Web Application Firewall
    
    
def get_rule(client, module, rule_id):
    try:
        return client.get_rule(RuleId=rule_id)['Rule']
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Could not get WAF rule')
    
    
if __name__ == '__main__':
    main()

    
        elif module.params['state'] == 'absent':
        if existing['CustomerGateways']:
            existing['CustomerGateway'] = existing['CustomerGateways'][0]
            results['gateway'] = existing
            if not module.check_mode:
                results['gateway'] = gw_mgr.ensure_cgw_absent(
                    existing['CustomerGateway']['CustomerGatewayId']
                )
            results['changed'] = True
    
        required = [volume_id, snapshot_id, instance_id]
    if required.count(None) != len(required) - 1:  # only 1 must be set
        module.fail_json(msg='One and only one of volume_id or instance_id or snapshot_id must be specified')
    if instance_id and not device_name or device_name and not instance_id:
        module.fail_json(msg='Instance ID and device name must both be specified')
    
            try:
            matching_groups = conn.describe_cache_subnet_groups(group_name, max_records=100)
            exists = len(matching_groups) > 0
        except BotoServerError as e:
            if e.error_code != 'CacheSubnetGroupNotFoundFault':
                module.fail_json(msg=e.error_message)
    
    EXAMPLES = '''
---
# Simple example to create a lambda function and publish a version
- hosts: localhost
  gather_facts: no
  vars:
    state: present
    project_folder: /path/to/deployment/package
    deployment_package: lambda.zip
    account: 123456789012
    production_version: 5
  tasks:
  - name: AWS Lambda Function
    lambda:
      state: '{{ state | default('present') }}'
      name: myLambdaFunction
      publish: True
      description: lambda function description
      code_s3_bucket: package-bucket
      code_s3_key: 'lambda/{{ deployment_package }}'
      local_path: '{{ project_folder }}/{{ deployment_package }}'
      runtime: python2.7
      timeout: 5
      handler: lambda.handler
      memory_size: 128
      role: 'arn:aws:iam::{{ account }}:role/API2LambdaExecRole'
    
            fn = os.path.join(current_path, 'appids.txt')
        self.public_appid = RandomGetSlice(fn, 60)
    
            fn = os.path.join(current_path, 'sni_slice.txt')
        self.slice = RandomGetSlice(fn, 20, '|')
    
    
def SendEventNotificationAsync( event_name,
                                buffer_number = None,
                                extra_data = None ):
  event = EventNotification( event_name, buffer_number, extra_data )
  event.Start()

    
        raise RuntimeError( 'Path in 'g:ycm_server_python_interpreter' option '
                        'does not point to a valid Python 2.7 or 3.4+.' )
    
      # Ignore 'contained' argument in first position.
  if words[ 0 ] == 'contained':
    words = words[ 1: ]