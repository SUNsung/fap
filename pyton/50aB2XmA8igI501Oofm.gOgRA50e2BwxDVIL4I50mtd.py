
        
                # Insert the import statement to setup.py if not present
        with open(setup_path, 'a+') as setup:
            setup.seek(0)
            setup_content = setup.read()
            if not 'import fastentrypoints' in setup_content:
                setup.seek(0)
                setup.truncate()
                setup.write('import fastentrypoints\n' + setup_content)
    
    shells.shell = shells.Generic()
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
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
    
        try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        autoscaling = boto3_conn(module, conn_type='client', resource='autoscaling', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except ClientError as e:
        module.fail_json(msg=e.message, **camel_dict_to_snake_dict(e.response))
    
        def tag_cgw_name(self, gw_id, name):
        response = self.ec2.create_tags(
            DryRun=False,
            Resources=[
                gw_id,
            ],
            Tags=[
                {
                    'Key': 'Name',
                    'Value': name
                },
            ]
        )
        return response
    
    
RETURN = '''
addresses:
  description: Properties of all Elastic IP addresses matching the provided filters. Each element is a dict with all the information related to an EIP.
  returned: on success
  type: list
  sample: [{
        'allocation_id': 'eipalloc-64de1b01',
        'association_id': 'eipassoc-0fe9ce90d6e983e97',
        'domain': 'vpc',
        'instance_id': 'i-01020cfeb25b0c84f',
        'network_interface_id': 'eni-02fdeadfd4beef9323b',
        'network_interface_owner_id': '0123456789',
        'private_ip_address': '10.0.0.1',
        'public_ip': '54.81.104.1',
        'tags': {
            'Name': 'test-vm-54.81.104.1'
        }
    }]
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=False, default=[], type='list'),
            sort=dict(required=False, default=None,
                      choices=['launch_configuration_name', 'image_id', 'created_time', 'instance_type', 'kernel_id', 'ramdisk_id', 'key_name']),
            sort_order=dict(required=False, default='ascending',
                            choices=['ascending', 'descending']),
            sort_start=dict(required=False),
            sort_end=dict(required=False),
        )
    )
    
    
def vpc_exists(module, vpc, name, cidr_block, multi):
    '''Returns None or a vpc object depending on the existence of a VPC. When supplied
    with a CIDR, it will check for matching tags to determine if it is a match
    otherwise it will assume the VPC does not exist and thus return None.
    '''
    try:
        matching_vpcs = vpc.describe_vpcs(Filters=[{'Name': 'tag:Name', 'Values': [name]}, {'Name': 'cidr-block', 'Values': cidr_block}])['Vpcs']
        # If an exact matching using a list of CIDRs isn't found, check for a match with the first CIDR as is documented for C(cidr_block)
        if not matching_vpcs:
            matching_vpcs = vpc.describe_vpcs(Filters=[{'Name': 'tag:Name', 'Values': [name]}, {'Name': 'cidr-block', 'Values': [cidr_block[0]]}])['Vpcs']
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Failed to describe VPCs')
    
    
def get_elasticache_clusters(client, module, region):
    try:
        clusters = describe_cache_clusters_with_backoff(client, cluster_id=module.params.get('name'))
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Couldn't obtain cache cluster info')
    
    
DOCUMENTATION = '''
---
module: elasticache_snapshot
short_description: Manage cache snapshots in Amazon Elasticache.
description:
  - Manage cache snapshots in Amazon Elasticache.
  - Returns information about the specified snapshot.
version_added: '2.3'
author: 'Sloane Hertel (@s-hertel)'
extends_documentation_fragment:
  - aws
  - ec2
requirements: [ boto3, botocore ]
options:
  name:
    description:
      - The name of the snapshot we want to create, copy, delete
    required: yes
  state:
    description:
      - Actions that will create, destroy, or copy a snapshot.
    choices: ['present', 'absent', 'copy']
  replication_id:
    description:
      - The name of the existing replication group to make the snapshot.
  cluster_id:
    description:
      - The name of an existing cache cluster in the replication group to make the snapshot.
  target:
    description:
      - The name of a snapshot copy
  bucket:
    description:
      - The s3 bucket to which the snapshot is exported
'''
    
        if not HAS_BOTO:
        module.fail_json(msg='boto required for this module')
    
                try:
                if not module.check_mode:
                    results = client.create_alias(**api_params)
                changed = True
            except (ClientError, ParamValidationError, MissingParametersError) as e:
                module.fail_json(msg='Error creating function alias: {0}'.format(e))
    
        Call Acfun API, decide which site to use, and pass the job to its
    extractor.
    '''
    
    import urllib
    
    from ..common import *
    
    from ..common import get_content, r1, match1, playlist_not_supported
from ..extractor import VideoExtractor
    
    site_info = 'Dailymotion.com'
download = dailymotion_download
download_playlist = playlist_not_supported('dailymotion')

    
        for filename in filenames:
        fd = codecs.open(filename, mode='r', encoding='utf-8')
        for line in fd.readlines():
            refs = re.findall(r'(?<=<a href=')[^']*', markdown.markdown(line))
            for ref in refs:
                if ref not in urls:
                    urls.append(ref)