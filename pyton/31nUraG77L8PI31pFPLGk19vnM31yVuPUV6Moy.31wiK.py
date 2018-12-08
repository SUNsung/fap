
        
            def _escalate_call(self):
        self.call.state = CallState.READY
        call = self.call
        self.call = None
        self.call_center.notify_call_escalated(call)
    
        def __init__(self, results):
        self.results = results
        self.next = next
    
        def reducer(self, key, values):
        '''Sum values for each key.
    
    
class RemoveDuplicateUrls(MRJob):
    
        def bfs(self, source, dest):
        if source is None:
            return False
        queue = deque()
        queue.append(source)
        source.visit_state = State.visited
        while queue:
            node = queue.popleft()
            print(node)
            if dest is node:
                return True
            for adjacent_node in node.adj_nodes.values():
                if adjacent_node.visit_state == State.unvisited:
                    queue.append(adjacent_node)
                    adjacent_node.visit_state = State.visited
        return False
    
    # List all EIP addresses for several VMs.
- ec2_eip_facts:
    filters:
       instance-id:
         - i-123456789
         - i-987654321
  register: my_vms_eips
    
        create_snapshot(
        module=module,
        state=state,
        description=description,
        wait=wait,
        wait_timeout=wait_timeout,
        ec2=ec2,
        volume_id=volume_id,
        instance_id=instance_id,
        snapshot_id=snapshot_id,
        device_name=device_name,
        snapshot_tags=snapshot_tags,
        last_snapshot_min_age=last_snapshot_min_age
    )
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import ec2_argument_spec, AWSRetry
    
    
@AWSRetry.exponential_backoff()
def list_iam_role_policies_with_backoff(client, role_name):
    paginator = client.get_paginator('list_role_policies')
    return paginator.paginate(RoleName=role_name).build_full_result()['PolicyNames']
    
    
DOCUMENTATION = '''
---
module: iam_server_certificate_facts
short_description: Retrieve the facts of a server certificate
description:
  - Retrieve the attributes of a server certificate
version_added: '2.2'
author: 'Allen Sanabria (@linuxdynasty)'
requirements: [boto3, botocore]
options:
  name:
    description:
      - The name of the server certificate you are retrieving attributes for.
    required: true
extends_documentation_fragment:
    - aws
    - ec2
'''
    
        state = module.params.get('state')
    group_name = module.params.get('group_name')
    group_description = module.params.get('group_description')
    group_subnets = module.params.get('group_subnets')
    
        test_suite = 'tests',
    
    _options = [
    'help',
    'version',
    'gui',
    'force',
    'playlists',
]
_short_options = 'hVgfl'
    
        #if dictify(e)['ckplayer']['info'][0]['title'][0]['_text'].strip():  #duration
        #video_dict['title'] = dictify(e)['ckplayer']['info'][0]['title'][0]['_text'].strip()
    
    import json
import re
    
            #type_, ext, size = url_info(url)
        #print_info(site_info, title, type_, size)
        #if not info_only:
            #download_urls([url], title, ext, total_size=None, output_dir=output_dir, merge=merge)
    
    def flickr_download_main(url, output_dir = '.', merge = False, info_only = False, **kwargs):
    urls = None
    size = 'o' # works for collections only
    title = None
    if 'stream_id' in kwargs:
        size = kwargs['stream_id']
    if match1(url, pattern_url_single_photo):
        url, title = get_single_photo_url(url)
        urls = [url]
    else:
        urls, title = fetch_photo_url_list(url, size)
    index = 0
    for url in urls:
        mime, ext, size = url_info(url)
        print_info('Flickr.com', title, mime, size)
        if not info_only:
            suffix = '[%d]' % index
            download_urls([url], title + suffix, ext, False, output_dir, None, False, False)
            index = index + 1