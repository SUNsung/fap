
        
            def describe_stack_events(self, stack_name):
        try:
            func = partial(self.client.describe_stack_events, StackName=stack_name)
            return self.paginated_response(func, 'StackEvents')
        except Exception as e:
            self.module.fail_json(msg='Error describing stack events - ' + str(e), exception=traceback.format_exc())
    
        def _rule_matches_aws(self):
        '''Checks if the local rule data matches AWS'''
        aws_rule_data = self.rule.describe()
    
        for index in all_indexes:
        validate_index(index, module)
    
        addresses = camel_dict_to_snake_dict(response)['addresses']
    for address in addresses:
        if 'tags' in address:
            address['tags'] = boto3_tag_list_to_ansible_dict(address['tags'])
    return addresses
    
        module = AnsibleModule(
        argument_spec=argument_spec,
    )
    
    - name: create a VPC with dedicated tenancy and a couple of tags
  ec2_vpc_net:
    name: Module_dev2
    cidr_block: 10.10.0.0/16
    region: us-east-1
    tags:
      module: ec2_vpc_net
      this: works
    tenancy: dedicated
'''
    
    - name: set-policy as string
  ecs_ecr:
    name: needs-policy-string
    policy: '{{ lookup('template', 'policy.json.j2') }}'
    
    
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
    
        if state == 'present':
        for required in ['name', 'description', 'subnets']:
            if not module.params.get(required):
                module.fail_json(msg=str('Parameter %s required for state='present'' % required))
    else:
        for not_allowed in ['description', 'subnets']:
            if module.params.get(not_allowed):
                module.fail_json(msg=str('Parameter %s not allowed for state='absent'' % not_allowed))
    
        cert_name = module.params.get('name')
    results = get_server_certs(iam, cert_name)
    module.exit_json(results=results)
    
        cognito = _cognito(cloud)
    # Workaround for bug in Warrant. PR with fix:
    # https://github.com/capless/warrant/pull/82
    cognito.add_base_attributes()
    try:
        cognito.register(email, password)
    except ClientError as err:
        raise _map_aws_exception(err)
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.actiontec/
'''
import logging
import re
import telnetlib
from collections import namedtuple
import voluptuous as vol
    
            self.last_results = {}
        self.refresh_token()
        self.mac2name = None
        self.success_init = self.token is not None
    
        dispatcher_connect(hass, SIGNAL_VEHICLE_SEEN, see_vehicle)
    dispatcher_send(hass, SIGNAL_VEHICLE_SEEN, vehicle)