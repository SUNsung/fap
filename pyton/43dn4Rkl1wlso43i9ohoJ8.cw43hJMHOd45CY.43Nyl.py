
        
            def __repr__(self):
        return '<{0} {1}>'.format(type(self).__name__, str(self))

    
            request_line = '{method} {path}{query} HTTP/1.1'.format(
            method=self._orig.method,
            path=url.path or '/',
            query='?' + url.query if url.query else ''
        )
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
        def test_print_overridable_when_stdout_redirected(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=h', 'GET', httpbin.url + '/get', env=env)
        assert HTTP_OK in r

    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
    
def test_unicode_raw_json_item(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
    
class CaseInsensitiveDict(MutableMapping):
    '''A case-insensitive ``dict``-like object.
    
        if implementation == 'CPython':
        implementation_version = platform.python_version()
    elif implementation == 'PyPy':
        implementation_version = '%s.%s.%s' % (sys.pypy_version_info.major,
                                               sys.pypy_version_info.minor,
                                               sys.pypy_version_info.micro)
        if sys.pypy_version_info.releaselevel != 'final':
            implementation_version = ''.join([
                implementation_version, sys.pypy_version_info.releaselevel
            ])
    elif implementation == 'Jython':
        implementation_version = platform.python_version()  # Complete Guess
    elif implementation == 'IronPython':
        implementation_version = platform.python_version()  # Complete Guess
    else:
        implementation_version = 'Unknown'
    
            # try to wait for enableDnsSupport and enableDnsHostnames to match
        wait_for_vpc_attribute(connection, module, vpc_id, 'enableDnsSupport', dns_support)
        wait_for_vpc_attribute(connection, module, vpc_id, 'enableDnsHostnames', dns_hostnames)
    
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
    
        return node_value
    
    RETURN = '''
subnet_group:
    description: Dictionary of DB subnet group values
    returned: I(state=present)
    type: complex
    contains:
        name:
            description: The name of the DB subnet group
            returned: I(state=present)
            type: string
        description:
            description: The description of the DB subnet group
            returned: I(state=present)
            type: string
        vpc_id:
            description: The VpcId of the DB subnet group
            returned: I(state=present)
            type: string
        subnet_ids:
            description: Contains a list of Subnet IDs
            returned: I(state=present)
            type: array
        status:
            description: The status of the DB subnet group
            returned: I(state=present)
            type: string
'''
    
        state = module.params.get('state')
    group_name = module.params.get('group_name')
    group_description = module.params.get('group_description')
    group_subnets = module.params.get('group_subnets')
    
    
# I have written my code naively same as definition of primitive root
# however every time I run this program, memory exceeded...
# so I used 4.80 Algorithm in Handbook of Applied Cryptography(CRC Press, ISBN : 0-8493-8523-7, October 1996)
# and it seems to run nicely!
def primitiveRoot(p_val):
    print('Generating primitive root of p')
    while True:
        g = random.randrange(3,p_val)
        if pow(g, 2, p_val) == 1:
            continue
        if pow(g, p_val, p_val) == 1:
            continue
        return g
    
            print('step {0}'.format(step_ord))
        print([i for i in range(len(self.values))])
        print(self.values)
    
    
class QuadraticProbing(HashTable):
    '''
        Basic Hash Table example with open addressing using Quadratic Probing 
    '''
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
    
    '''
The number of partitions of a number n into at least k parts equals the number of partitions into exactly k parts
plus the number of partitions into at least k-1 parts. Subtracting 1 from each part of a partition of n into k parts
gives a partition of n-k into k parts. These two facts together are used for this algorithm.
'''
def partition(m):
	memo = [[0 for _ in xrange(m)] for _ in xrange(m+1)]
	for i in xrange(m+1):
		memo[i][0] = 1
    
    	Arguments:
		bitString {[string]} -- [binary string]
	
	Returns:
		[string] -- [binary string]
	'''
    
                
if __name__ == '__main__':
    main()