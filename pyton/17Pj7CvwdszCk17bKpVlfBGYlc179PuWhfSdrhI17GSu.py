
        
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
    
    # Get summary information about a stack
- cloudformation_facts:
    stack_name: my-cloudformation-stack
    
            # Identify targets that need to be added or updated on AWS
        targets_to_put = self._targets_to_put()
        if targets_to_put:
            self.rule.put_targets(targets_to_put)
    
    
# Find the most recent snapshot
def _get_snapshot_starttime(snap):
    return datetime.datetime.strptime(snap.start_time, '%Y-%m-%dT%H:%M:%S.000Z')
    
                        if original_policy:
                        original_policy = sort_json_policy_dict(original_policy)
    
        def describe_services(self, cluster, services):
        fn_args = dict()
        if cluster and cluster is not None:
            fn_args['cluster'] = cluster
        fn_args['services'] = services
        try:
            response = self.describe_services_with_backoff(**fn_args)
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Couldn't describe ECS services')
        running_services = [self.extract_service_from(service) for service in response.get('services', [])]
        services_not_running = response.get('failures', [])
        return running_services, services_not_running
    
        changed = False
    try:
        cert_action(module, iam, name, path, new_name, new_path, state,
                    cert, key, cert_chain, orig_cert_names, orig_cert_bodies, dup_ok)
    except boto.exception.BotoServerError as err:
        module.fail_json(changed=changed, msg=str(err), debug=[cert, key])
    
    
def IsInitializerList(clean_lines, linenum):
  '''Check if current line is inside constructor initializer list.