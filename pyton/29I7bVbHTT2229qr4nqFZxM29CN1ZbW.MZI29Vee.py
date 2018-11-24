
        
        
with open(BIN_FILE_PATH, 'rb') as f:
    BIN_FILE_CONTENT = f.read()
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
    import pytest
    
    error_msg = None
    
    
def ensure_web_acl_present(client, module):
    changed = False
    result = None
    name = module.params['name']
    web_acl_id = get_web_acl_by_name(client, module, name)
    if web_acl_id:
        (changed, result) = find_and_update_web_acl(client, module, web_acl_id)
    else:
        metric_name = module.params['metric_name']
        if not metric_name:
            metric_name = re.sub(r'[^A-Za-z0-9]', '', module.params['name'])
        default_action = module.params['default_action'].upper()
        try:
            params = {'Name': name, 'MetricName': metric_name, 'DefaultAction': {'Type': default_action}}
            new_web_acl = run_func_with_change_token_backoff(client, module, params, client.create_web_acl)
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, msg='Could not create Web ACL')
        (changed, result) = find_and_update_web_acl(client, module, new_web_acl['WebACL']['WebACLId'])
    return changed, result
    
        def get_template(self, stack_name):
        try:
            response = self.client.get_template(StackName=stack_name)
            return response.get('TemplateBody')
        except Exception as e:
            self.module.fail_json(msg='Error getting stack template - ' + str(e), exception=traceback.format_exc())
    
        def create_client(self, resource):
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(self.module, boto3=True)
        self.client = boto3_conn(self.module, conn_type='client', resource=resource, region=region, endpoint=ec2_url, **aws_connect_kwargs)
    
    
if __name__ == '__main__':
    main()

    
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
    
    - name: delete-policy
  ecs_ecr:
    name: needs-no-policy
    delete_policy: yes
'''
    
        def extract_service_from(self, service):
        # some fields are datetime which is not JSON serializable
        # make them strings
        if 'deployments' in service:
            for d in service['deployments']:
                if 'createdAt' in d:
                    d['createdAt'] = str(d['createdAt'])
                if 'updatedAt' in d:
                    d['updatedAt'] = str(d['updatedAt'])
        if 'events' in service:
            if not self.module.params['events']:
                del service['events']
            else:
                for e in service['events']:
                    if 'createdAt' in e:
                        e['createdAt'] = str(e['createdAt'])
        return service
    
    # Fail if the server certificate name was not found
- iam_server_certificate_facts:
    name: production-cert
  register: server_cert
  failed_when: '{{ server_cert.results | length == 0 }}'
'''
    
        lambda_facts = dict()
    params = dict()
    function_name = module.params.get('function_name')