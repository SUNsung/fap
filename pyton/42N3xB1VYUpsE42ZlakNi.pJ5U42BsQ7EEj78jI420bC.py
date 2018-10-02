
        
            def __init__(self):
        self.users_by_id = {}  # key: user id, value: User
    
    
class Categorizer(object):
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def crawl(self):
        while True:
            page = self.data_store.extract_max_priority_page()
            if page is None:
                break
            if self.data_store.crawled_similar(page.signature):
                self.data_store.reduce_priority_link_to_crawl(page.url)
            else:
                self.crawl_page(page)
            page = self.data_store.extract_max_priority_page()

    
        return throughput_changed or global_indexes_changed
    
    - name: associate new elastic IPs with each of the instances
  ec2_eip:
    device_id: '{{ item }}'
  with_items: '{{ ec2.instance_ids }}'
    
        if 'encrypted' in volume:
        return_object['Ebs']['Encrypted'] = volume.get('encrypted')
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import (AnsibleAWSError, HAS_BOTO, connect_to_aws, ec2_argument_spec,
                                      get_aws_connection_info)
    
    
def list_ec2_snapshots(connection, module):