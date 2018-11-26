
        
            def test_POST_no_data_no_auto_headers(self, httpbin):
        # JSON headers shouldn't be automatically set for POST with no data.
        r = http('POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert ''Accept': '*/*'' in r
        assert ''Content-Type': 'application/json' not in r
    
    from utils import TESTS_ROOT
    
        validation_mgr = CloudFrontInvalidationValidationManager(module)
    service_mgr = CloudFrontInvalidationServiceManager(module)
    
        def ensure_absent(self):
        '''Ensures the rule and targets are absent'''
        rule_description = self.rule.describe()
        if not rule_description:
            # Rule doesn't exist so don't need to delete
            return
        self.rule.delete()
    
        return matched_asgs
    
    # List all EIP addresses for several VMs.
- ec2_eip_facts:
    filters:
       instance-id:
         - i-123456789
         - i-987654321
  register: my_vms_eips
    
    
DOCUMENTATION = '''
---
module: ec2_lc_find
short_description: Find AWS Autoscaling Launch Configurations
description:
  - Returns list of matching Launch Configurations for a given name, along with other useful information
  - Results can be sorted and sliced
  - It depends on boto
  - Based on the work by Tom Bamford (https://github.com/tombamford)
    
    
def get_vpc(module, connection, vpc_id):
    # wait for vpc to be available
    try:
        connection.get_waiter('vpc_available').wait(VpcIds=[vpc_id])
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Unable to wait for VPC {0} to be available.'.format(vpc_id))
    
        def delete_repository(self, registry_id, name):
        if not self.check_mode:
            repo = self.ecr.delete_repository(
                repositoryName=name, **build_kwargs(registry_id))
            self.changed = True
            return repo
        else:
            repo = self.get_repository(registry_id, name)
            if repo:
                self.skipped = True
                return repo
            return None
    
    
def copy(module, connection, name, target, bucket):
    ''' Copy an Elasticache backup. '''
    try:
        response = connection.copy_snapshot(SourceSnapshotName=name,
                                            TargetSnapshotName=target,
                                            TargetBucket=bucket)
        changed = True
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Unable to copy the snapshot.', exception=traceback.format_exc())
    return response, changed
    
        state = module.params.get('state')
    group_name = module.params.get('name').lower()
    group_description = module.params.get('description')
    group_subnets = module.params.get('subnets') or {}
    
    EXAMPLES = '''
# Create a Redshift subnet group
- local_action:
    module: redshift_subnet_group
    state: present
    group_name: redshift-subnet
    group_description: Redshift subnet
    group_subnets:
        - 'subnet-aaaaa'
        - 'subnet-bbbbb'
    
            return True
    
        def close(self):
        self.fd.close()
    
        def get(self):
        n = random.randint(2, 3)
        ws = []
        for i in range(0, n):
            w = self.slice.get()
            ws.append(w)
    
    # tree.RewriteRuleElementStream
# tree.RewriteRuleSubtreeStream
# tree.RewriteRuleTokenStream
# CharStream
# DFA
# TokenSource
    
            raise NotImplementedError
    
    
        def test_relpath_bytes(self):
        (real_getcwdb, os.getcwdb) = (os.getcwdb, lambda: br'/home/user/bar')
        try:
            curdir = os.path.split(os.getcwdb())[-1]
            self.assertRaises(ValueError, posixpath.relpath, b'')
            self.assertEqual(posixpath.relpath(b'a'), b'a')
            self.assertEqual(posixpath.relpath(posixpath.abspath(b'a')), b'a')
            self.assertEqual(posixpath.relpath(b'a/b'), b'a/b')
            self.assertEqual(posixpath.relpath(b'../a/b'), b'../a/b')
            self.assertEqual(posixpath.relpath(b'a', b'../b'),
                             b'../'+curdir+b'/a')
            self.assertEqual(posixpath.relpath(b'a/b', b'../c'),
                             b'../'+curdir+b'/a/b')
            self.assertEqual(posixpath.relpath(b'a', b'b/c'), b'../../a')
            self.assertEqual(posixpath.relpath(b'a', b'a'), b'.')
            self.assertEqual(posixpath.relpath(b'/foo/bar/bat', b'/x/y/z'), b'../../../foo/bar/bat')
            self.assertEqual(posixpath.relpath(b'/foo/bar/bat', b'/foo/bar'), b'bat')
            self.assertEqual(posixpath.relpath(b'/foo/bar/bat', b'/'), b'foo/bar/bat')
            self.assertEqual(posixpath.relpath(b'/', b'/foo/bar/bat'), b'../../..')
            self.assertEqual(posixpath.relpath(b'/foo/bar/bat', b'/x'), b'../foo/bar/bat')
            self.assertEqual(posixpath.relpath(b'/x', b'/foo/bar/bat'), b'../../../x')
            self.assertEqual(posixpath.relpath(b'/', b'/'), b'.')
            self.assertEqual(posixpath.relpath(b'/a', b'/a'), b'.')
            self.assertEqual(posixpath.relpath(b'/a/b', b'/a/b'), b'.')
    
        def test_bad_params(self):
        # Test invalid parameter combinations.
        self.assertRaises(ValueError,
                          self.open, self.filename, 'wbt')
        self.assertRaises(ValueError,
                          self.open, self.filename, 'xbt')
        self.assertRaises(ValueError,
                          self.open, self.filename, 'rb', encoding='utf-8')
        self.assertRaises(ValueError,
                          self.open, self.filename, 'rb', errors='ignore')
        self.assertRaises(ValueError,
                          self.open, self.filename, 'rb', newline='\n')
    
    def worker(input, output):
    for func, args in iter(input.get, 'STOP'):
        result = calculate(func, args)
        output.put(result)
    
        '''catalog of multiple class methods that are executed depending on an init
    
    
def count_to(count):
    '''Counts by word numbers, up to a maximum of five'''
    numbers = ['one', 'two', 'three', 'four', 'five']
    for number in numbers[:count]:
        yield number
    
    ### OUTPUT ###
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# HexViewer: Subject Data 1 has data 0xa
# Setting Data 2 = 15
# HexViewer: Subject Data 2 has data 0xf
# DecimalViewer: Subject Data 2 has data 15
# Setting Data 1 = 3
# DecimalViewer: Subject Data 1 has data 3
# HexViewer: Subject Data 1 has data 0x3
# Setting Data 2 = 5
# HexViewer: Subject Data 2 has data 0x5
# DecimalViewer: Subject Data 2 has data 5
# Detach HexViewer from data1 and data2.
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# Setting Data 2 = 15
# DecimalViewer: Subject Data 2 has data 15

    
    ### OUTPUT ###
# jim got cartoon
# jack got music
# gee got movie
# jim got cartoon
# jim got cartoon
# gee got movie

    
        REGISTRY = {}
    
        strat0.execute()
    strat1.execute()
    strat2.execute()
    
        def __get__(self, obj, type_):
        if obj is None:
            return self
        val = self.function(obj)
        obj.__dict__[self.function.__name__] = val
        return val
    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
    
class UnsupportedTransition(BaseException):
    pass