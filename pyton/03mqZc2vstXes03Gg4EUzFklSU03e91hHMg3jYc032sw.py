
        
        # Get all stack information about a stack
- cloudformation_facts:
    stack_name: my-cloudformation-stack
    all_facts: true
    
        caller_reference = module.params.get('caller_reference')
    distribution_id = module.params.get('distribution_id')
    alias = module.params.get('alias')
    target_paths = module.params.get('target_paths')
    
        module = AnsibleAWSModule(argument_spec=argument_spec, supports_check_mode=True)
    
        if 'volume_type' in volume:
        return_object['Ebs']['VolumeType'] = volume.get('volume_type')
    
    
def get_placement_groups_details(connection, module):
    names = module.params.get('names')
    try:
        if len(names) > 0:
            response = connection.describe_placement_groups(
                Filters=[{
                    'Name': 'group-name',
                    'Values': names
                }])
        else:
            response = connection.describe_placement_groups()
    except (BotoCoreError, ClientError) as e:
        module.fail_json_aws(
            e,
            msg='Couldn't find placement groups named [%s]' % names)
    
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