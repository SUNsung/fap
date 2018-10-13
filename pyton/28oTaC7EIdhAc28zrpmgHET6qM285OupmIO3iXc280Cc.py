
        
            # Then we call the sorting method
    sort_blocks()
    
    
class ContentDecodingError(RequestException, BaseHTTPError):
    '''Failed to decode response content'''
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
        def __init__(self, handler=None, host='localhost', port=0, requests_to_handle=1, wait_to_close_event=None):
        super(Server, self).__init__()
    
                if files:
                raise NotImplementedError('Streamed bodies and files are mutually exclusive.')
    
        def update_origin_access_identity(self, caller_reference, comment, origin_access_identity_id, e_tag):
        changed = False
        new_config = {
            'CallerReference': caller_reference,
            'Comment': comment
        }
    
        argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            image_ids=dict(default=[], type='list', aliases=['image_id']),
            filters=dict(default={}, type='dict'),
            owners=dict(default=[], type='list', aliases=['owner']),
            executable_users=dict(default=[], type='list', aliases=['executable_user']),
            describe_image_attributes=dict(default=False, type='bool')
        )
    )
    
    
if __name__ == '__main__':
    main()

    
    
if __name__ == '__main__':
    main()

    
    
DOCUMENTATION = '''
---
module: elb_classic_lb_facts
short_description: Gather facts about EC2 Elastic Load Balancers in AWS
description:
    - Gather facts about EC2 Elastic Load Balancers in AWS
version_added: '2.0'
author:
  - 'Michael Schultz (github.com/mjschultz)'
  - 'Fernando Jose Pando (@nand0p)'
options:
  names:
    description:
      - List of ELB names to gather facts about. Pass this option to gather facts about a set of ELBs, otherwise, all ELBs are returned.
    aliases: ['elb_ids', 'ec2_elbs']
extends_documentation_fragment:
    - aws
    - ec2
requirements:
  - botocore
  - boto3
'''
    
    # describe all roles matching a path prefix
- iam_role_facts:
    path_prefix: /application/path
'''
    
        def report_not_exist(self, appid, ip):
        self.logger.debug('report_not_exist:%s %s', appid, ip)
        th = threading.Thread(target=self.process_appid_not_exist, args=(appid, ip))
        th.start()
    
    
def best_server(probe_nat=False):
    best_server = None
    prober = new_pteredor(probe_nat=probe_nat)
    prober.qualified = True
    if not probe_nat:
        prober.nat_type = 'unknown'
        prober.rs_cone_flag = 0
    
        def __init__(self, logger):
        self.logger = logger
    
    URLFETCH_MAX = 2
URLFETCH_MAXSIZE = 4*1024*1024
URLFETCH_DEFLATE_MAXSIZE = 4*1024*1024
URLFETCH_TIMEOUT = 60
    
        def __str__(self):
        #return 'MismatchedTokenException('+self.expecting+')'
        return 'MismatchedTokenException(%r!=%r)' % (
            self.getUnexpectedType(), self.expecting
            )
    __repr__ = __str__
    
        def setInputStream(self, input):
        pass
    
    def download_pdf(link, location, name):
    try:
        response = requests.get(link)
        with open(os.path.join(location, name), 'wb') as f:
        	f.write(response.content)
        	f.close()
    except HTTPError:
        print('>>> Error 404: cannot be downloaded!\n') 
        raise   
    except socket.timeout:
        print(' '.join(('can't download', link, 'due to connection timeout!')) )
        raise