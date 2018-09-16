
        
          - name: create WAF size condition
    aws_waf_condition:
      name: my_size_condition
      filters:
        - field_to_match: query_string
          size: 300
          comparison: GT
      type: size
    
    
def create_rule_lookup(client, module):
    try:
        rules = list_rules_with_backoff(client)
        return dict((rule['Name'], rule) for rule in rules)
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Could not list rules')
    
        for stack_description in service_mgr.describe_stacks(module.params.get('stack_name')):
        facts = {'stack_description': stack_description}
        stack_name = stack_description.get('StackName')
    
        desc_log_group = describe_log_group(client=logs,
                                        log_group_name=module.params['log_group_name'],
                                        module=module)
    final_log_group_snake = []
    
    RETURN = '''
images:
  description: a list of images
  returned: always
  type: complex
  contains:
    architecture:
      description: The architecture of the image
      returned: always
      type: string
      sample: x86_64
    block_device_mappings:
      description: Any block device mapping entries
      returned: always
      type: complex
      contains:
        device_name:
          description: The device name exposed to the instance
          returned: always
          type: string
          sample: /dev/sda1
        ebs:
          description: EBS volumes
          returned: always
          type: complex
    creation_date:
      description: The date and time the image was created
      returned: always
      type: string
      sample: '2017-10-16T19:22:13.000Z'
    description:
      description: The description of the AMI
      returned: always
      type: string
      sample: ''
    ena_support:
      description: whether enhanced networking with ENA is enabled
      returned: always
      type: bool
      sample: true
    hypervisor:
      description: The hypervisor type of the image
      returned: always
      type: string
      sample: xen
    image_id:
      description: The ID of the AMI
      returned: always
      type: string
      sample: ami-5b466623
    image_location:
      description: The location of the AMI
      returned: always
      type: string
      sample: 408466080000/Webapp
    image_type:
      description: The type of image
      returned: always
      type: string
      sample: machine
    launch_permissions:
      description: launch permissions of the ami
      returned: when image is owned by calling account and describe_image_attributes is yes
      type: complex
      sample: [{'group': 'all'}, {'user_id': '408466080000'}]
    name:
      description: The name of the AMI that was provided during image creation
      returned: always
      type: string
      sample: Webapp
    owner_id:
      description: The AWS account ID of the image owner
      returned: always
      type: string
      sample: '408466080000'
    public:
      description: whether the image has public launch permissions
      returned: always
      type: bool
      sample: true
    root_device_name:
      description: The device name of the root device
      returned: always
      type: string
      sample: /dev/sda1
    root_device_type:
      description: The type of root device used by the AMI
      returned: always
      type: string
      sample: ebs
    sriov_net_support:
      description: whether enhanced networking is enabled
      returned: always
      type: string
      sample: simple
    state:
      description: The current state of the AMI
      returned: always
      type: string
      sample: available
    tags:
      description: Any tags assigned to the image
      returned: always
      type: complex
    virtualization_type:
      description: The type of virtualization of the AMI
      returned: always
      type: string
      sample: hvm
'''
    
    try:
    import boto3
    HAS_BOTO3 = True
except ImportError:
    HAS_BOTO3 = False
    
    # List all EIP addresses for several VMs.
- ec2_eip_facts:
    filters:
       instance-id:
         - i-123456789
         - i-987654321
  register: my_vms_eips
    
        interface_info = {'id': interface.id,
                      'subnet_id': interface.subnet_id,
                      'vpc_id': interface.vpc_id,
                      'description': interface.description,
                      'owner_id': interface.owner_id,
                      'status': interface.status,
                      'mac_address': interface.mac_address,
                      'private_ip_address': interface.private_ip_address,
                      'source_dest_check': interface.source_dest_check,
                      'groups': dict((group.id, group.name) for group in interface.groups),
                      'private_ip_addresses': private_addresses
                      }
    
        key = find_key_pair(module, ec2_client, name)
    if key:
        if not module.check_mode:
            try:
                ec2_client.delete_key_pair(KeyName=name)
            except ClientError as err:
                module.fail_json_aws(err, msg='error deleting key')
        if not finish_task:
            return
        module.exit_json(changed=True, key=None, msg='key deleted')
    module.exit_json(key=None, msg='key did not exist')
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        region=dict(required=True, aliases=['aws_region', 'ec2_region']),
        name_regex=dict(required=True),
        sort_order=dict(required=False, default='ascending', choices=['ascending', 'descending']),
        limit=dict(required=False, type='int'),
    )
    )
    
    import os, json, imp
here = os.path.abspath(os.path.dirname(__file__))
proj_info = json.loads(open(os.path.join(here, PROJ_METADATA), encoding='utf-8').read())
try:
    README = open(os.path.join(here, 'README.rst'), encoding='utf-8').read()
except:
    README = ''
CHANGELOG = open(os.path.join(here, 'CHANGELOG.rst'), encoding='utf-8').read()
VERSION = imp.load_source('version', os.path.join(here, 'src/%s/version.py' % PACKAGE_NAME)).__version__
    
    def acfun_download_by_vid(vid, title, output_dir='.', merge=True, info_only=False, **kwargs):
    '''str, str, str, bool, bool ->None
    
    from ..common import *
from ..extractor import VideoExtractor
    
    
def get_title_and_urls(json_data):
    title = legitimize(re.sub('[\s*]', '_', json_data['title']))
    video_info = json_data['file_versions']['html5']['video']
    if 'high' not in video_info:
        if 'med' not in video_info:
            video_url = video_info['low']['url']
        else:
            video_url = video_info['med']['url']
    else:
        video_url = video_info['high']['url']
    audio_info = json_data['file_versions']['html5']['audio']
    if 'high' not in audio_info:
        if 'med' not in audio_info:
            audio_url = audio_info['low']['url']
        else:
            audio_url = audio_info['med']['url']
    else:
        audio_url = audio_info['high']['url']
    return title, video_url, audio_url
    
        print_info(site_info, title, mime, size)
    if not info_only:
        download_urls([real_url], title, ext, size, output_dir=output_dir, merge=merge)
    
            # here s the parser...
        stream_types = dilidili_parser_data_to_stream_types(typ, vid, hd2, sign, tmsign, ulk)
        
        #get best
        best_id = max([i['id'] for i in stream_types])
        
        parse_url = 'http://player.005.tv/parse.php?xmlurl=null&type={typ}&vid={vid}&hd={hd2}&sign={sign}&tmsign={tmsign}&userlink={ulk}'.format(typ = typ, vid = vid, hd2 = best_id, sign = sign, tmsign = tmsign, ulk = ulk)
        
        another_url = 'https://newplayer.jfrft.com/parse.php?xmlurl=null&type={typ}&vid={vid}&hd={hd2}&sign={sign}&tmsign={tmsign}&userlink={ulk}'.format(typ = typ, vid = vid, hd2 = hd2, sign = sign, tmsign = tmsign, ulk = ulk)
    
    
  def Start( self ):
    request_data = BuildRequestData()
    if self._extra_data:
      request_data.update( self._extra_data )
    self._response = self.PostDataToHandler( request_data,
                                             'debug_info',
                                             display_message = False )
    
    SYNTAX_ARGUMENT_REGEX = re.compile(
  r'^\w+=.*$' )
    
    
@patch( 'ycm.vimsupport.GetVariableValue',
        GetVariableValue_CompleteItemIs( 'Test', user_data='0' ) )
def GetCompletionsUserMayHaveCompleted_UseUserData0_test( *args ):
  # Identical completions but we specify the first one via user_data.
  completions = [
    BuildCompletionNamespace( 'namespace1' ),
    BuildCompletionNamespace( 'namespace2' )
  ]