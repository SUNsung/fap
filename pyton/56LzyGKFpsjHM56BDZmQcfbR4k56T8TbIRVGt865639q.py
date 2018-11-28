
        
        
def check_alphabetical(lines):
    '''
    checks if all entries per section are in alphabetical order based in entry title
    '''
    sections = {}
    section_line_num = {}
    for line_num, line in enumerate(lines):
        if line.startswith(anchor):
            category = line.split(anchor)[1].strip()
            sections[category] = []
            section_line_num[category] = line_num
            continue
        if not line.startswith('|') or line.startswith('|---'):
            continue
        raw_title = [x.strip() for x in line.split('|')[1:-1]][0]
        title_re_match = link_re.match(raw_title)
        if title_re_match:
            sections[category].append(title_re_match.group(1).upper())
    
    EXAMPLES = '''
- name: obtain all WAF facts
  aws_waf_facts:
    
        distribution_id = validation_mgr.validate_distribution_id(distribution_id, alias)
    valid_target_paths = validation_mgr.validate_invalidation_batch(target_paths, caller_reference)
    valid_pascal_target_paths = snake_dict_to_camel_dict(valid_target_paths, True)
    result, changed = service_mgr.create_invalidation(distribution_id, valid_pascal_target_paths)
    
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
    
        if not HAS_BOTOCORE:
        module.fail_json(msg='botocore is required.')
    
        task_mgr = EcsServiceManager(module)
    if show_details:
        if module.params['service']:
            services = module.params['service']
        else:
            services = task_mgr.list_services(module.params['cluster'])['services']
        ecs_facts = dict(services=[], services_not_running=[])
        for chunk in chunks(services, 10):
            running_services, services_not_running = task_mgr.describe_services(module.params['cluster'], chunk)
            ecs_facts['services'].extend(running_services)
            ecs_facts['services_not_running'].extend(services_not_running)
    else:
        ecs_facts = task_mgr.list_services(module.params['cluster'])
    
    RETURN = '''
server_certificate_id:
    description: The 21 character certificate id
    returned: success
    type: str
    sample: 'ADWAJXWTZAXIPIMQHMJPO'
certificate_body:
    description: The asn1der encoded PEM string
    returned: success
    type: str
    sample: '-----BEGIN CERTIFICATE-----\nbunch of random data\n-----END CERTIFICATE-----'
server_certificate_name:
    description: The name of the server certificate
    returned: success
    type: str
    sample: 'server-cert-name'
arn:
    description: The Amazon resource name of the server certificate
    returned: success
    type: str
    sample: 'arn:aws:iam::911277865346:server-certificate/server-cert-name'
path:
    description: The path of the server certificate
    returned: success
    type: str
    sample: '/'
expiration:
    description: The date and time this server certificate will expire, in ISO 8601 format.
    returned: success
    type: str
    sample: '2017-06-15T12:00:00+00:00'
upload_date:
    description: The date and time this server certificate was uploaded, in ISO 8601 format.
    returned: success
    type: str
    sample: '2015-04-25T00:36:40+00:00'
'''
    
        for snapshot in results:
        try:
            snapshot['Tags'] = boto3_tag_list_to_ansible_dict(conn.list_tags_for_resource(ResourceName=snapshot['%sArn' % prefix],
                                                                                          aws_retry=True)['TagList'])
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, 'Couldn't get tags for snapshot %s' % snapshot['%sIdentifier' % prefix])
    
    EXAMPLES = '''
# Add or change a subnet group
- rds_subnet_group:
    state: present
    name: norwegian-blue
    description: My Fancy Ex Parrot Subnet Group
    subnets:
      - subnet-aaaaaaaa
      - subnet-bbbbbbbb
    
                    if record.get('delegation_set_id') is not None:
                    params['DelegationSetId'] = record['delegation_set_id']
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
      def InAsmBlock(self):
    '''Check if we are currently one level inside an inline ASM block.
    
        Snippets without code (only comments) or containing lines starting with ??? should not yeld files,
    but the counter for naming snippets should still increment.
    '''
    parser = argparse.ArgumentParser(description='Split md file into plain text and code blocks')
    parser.add_argument('sourcefile',
                        help='which file to read')
    parser.add_argument('targetfile',
                        help='where to put plain text')
    parser.add_argument('codedir',
                        help='where to put codeblocks')
    args = parser.parse_args()