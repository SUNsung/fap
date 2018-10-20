
        
            web_acls = list_web_acls(client, module)
    name = module.params['name']
    if name:
        web_acls = [web_acl for web_acl in web_acls if
                    web_acl['Name'] == name]
        if not web_acls:
            module.fail_json(msg='WAF named %s not found' % name)
    module.exit_json(wafs=[get_web_acl(client, module, web_acl['WebACLId'])
                           for web_acl in web_acls])
    
        caller_reference = module.params.get('caller_reference')
    distribution_id = module.params.get('distribution_id')
    alias = module.params.get('alias')
    target_paths = module.params.get('target_paths')
    
        if state == 'present':
        if origin_access_identity_id is not None and e_tag is not None:
            result, changed = service_mgr.update_origin_access_identity(caller_reference, comment, origin_access_identity_id, e_tag)
        else:
            result = service_mgr.create_origin_access_identity(caller_reference, comment)
            changed = True
    elif(state == 'absent' and origin_access_identity_id is not None and
         e_tag is not None):
        result = service_mgr.delete_origin_access_identity(origin_access_identity_id, e_tag)
        changed = True
    
            try:
            response = self.client.delete_rule(Name=self.name)
        except (botocore.exceptions.BotoCoreError, botocore.exceptions.ClientError) as e:
            self.module.fail_json_aws(e, msg='Could not delete rule %s' % self.name)
        self.changed = True
        return response
    
    import traceback
from ansible.module_utils._text import to_native
from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import HAS_BOTO3, camel_dict_to_snake_dict, boto3_conn, ec2_argument_spec, get_aws_connection_info
    
    RETURN = '''
services:
    description: When details is false, returns an array of service ARNs, otherwise an array of complex objects as described below.
    returned: success
    type: complex
    contains:
        clusterArn:
            description: The Amazon Resource Name (ARN) of the of the cluster that hosts the service.
            returned: always
            type: string
        desiredCount:
            description: The desired number of instantiations of the task definition to keep running on the service.
            returned: always
            type: int
        loadBalancers:
            description: A list of load balancer objects
            returned: always
            type: complex
            contains:
                loadBalancerName:
                    description: the name
                    returned: always
                    type: string
                containerName:
                    description: The name of the container to associate with the load balancer.
                    returned: always
                    type: string
                containerPort:
                    description: The port on the container to associate with the load balancer.
                    returned: always
                    type: int
        pendingCount:
            description: The number of tasks in the cluster that are in the PENDING state.
            returned: always
            type: int
        runningCount:
            description: The number of tasks in the cluster that are in the RUNNING state.
            returned: always
            type: int
        serviceArn:
            description: The Amazon Resource Name (ARN) that identifies the service. The ARN contains the arn:aws:ecs namespace, followed by the region of the service, the AWS account ID of the service owner, the service namespace, and then the service name. For example, arn:aws:ecs:region :012345678910 :service/my-service .
            returned: always
            type: string
        serviceName:
            description: A user-generated string used to identify the service
            returned: always
            type: string
        status:
            description: The valid values are ACTIVE, DRAINING, or INACTIVE.
            returned: always
            type: string
        taskDefinition:
            description: The ARN of a task definition to use for tasks in the service.
            returned: always
            type: string
        deployments:
            description: list of service deployments
            returned: always
            type: list of complex
        events:
            description: list of service events
            returned: when events is true
            type: list of complex
'''  # NOQA
    
                # if region is not provided, then get default profile/session region
            if not self.region:
                self.region = self.resource_client['lambda'].meta.region_name
    
        def is_dir(self):
        '''
        Whether this path is a directory.
        '''
        try:
            return S_ISDIR(self.stat().st_mode)
        except OSError as e:
            if e.errno not in _IGNORED_ERROS:
                raise
            # Path doesn't exist or is a broken symlink
            # (see https://bitbucket.org/pitrou/pathlib/issue/12/)
            return False
        except ValueError:
            # Non-encodable path
            return False
    
    
class LocaleConfigurationTests(_LocaleHandlingTestCase):
    # Test explicit external configuration via the process environment
    
        def test_xdev(self):
        # sys.flags.dev_mode
        code = 'import sys; print(sys.flags.dev_mode)'
        out = self.run_xdev('-c', code, xdev=False)
        self.assertEqual(out, 'False')
        out = self.run_xdev('-c', code)
        self.assertEqual(out, 'True')
    
    expected_virtualattribute_pattern3 = '''
Help on class Class2 in module %s:
    
    import os
import smtplib
# For guessing MIME type based on file name extension
import mimetypes
    
    ans = input('View full message?')
if ans.lower()[0] == 'n':
    sys.exit()
    
    def worker(input, output):
    for func, args in iter(input.get, 'STOP'):
        result = calculate(func, args)
        output.put(result)