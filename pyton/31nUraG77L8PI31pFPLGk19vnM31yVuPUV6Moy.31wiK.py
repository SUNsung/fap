
        
        
def get_config(env_var, config_var):
    result = os.getenv(env_var)
    if not result:
        result = get_from_rhc_config(config_var)
    if not result:
        sys.exit('failed=True msg='missing %s'' % env_var)
    return result
    
        try:
        s1 = os.lstat(path)
    except OSError:
        # the OSError should be handled with more care
        # it could be a 'permission denied' but path is still a mount
        return False
    else:
        # A symlink can never be a mount point
        if os.path.stat.S_ISLNK(s1.st_mode):
            return False
    
        result = response.json()
    
        indent = None
    if format:
        indent = 4
    
    
def sort_groups(groups):
    return sorted(groups, key=lambda g: (g.depth, g.priority, g.name))
    
        def construct_mapping(self, node, deep=False):
        # Most of this is from yaml.constructor.SafeConstructor.  We replicate
        # it here so that we can warn users when they have duplicate dict keys
        # (pyyaml silently allows overwriting keys)
        if not isinstance(node, MappingNode):
            raise ConstructorError(None, None,
                                   'expected a mapping node, but found %s' % node.id,
                                   node.start_mark)
        self.flatten_mapping(node)
        mapping = AnsibleMapping()
    
        def getChild(self, request, name):
        return self
    
        # default settings to be used for this command instead of global defaults
    default_settings = {}
    
        default_settings = {
        'LOG_LEVEL': 'INFO',
        'LOGSTATS_INTERVAL': 1,
        'CLOSESPIDER_TIMEOUT': 10,
    }
    
    
def _create_testcase(method, desc):
    spider = method.__self__.name
    
        def handleResponse(self, response):
        if self.factory.method.upper() == b'HEAD':
            self.factory.page(b'')
        elif self.length is not None and self.length > 0:
            self.factory.noPage(self._connection_lost_reason)
        else:
            self.factory.page(response)
        self.transport.loseConnection()
    
        def process_request(self, request, spider):
        auth = getattr(self, 'auth', None)
        if auth and b'Authorization' not in request.headers:
            request.headers[b'Authorization'] = auth

    
        def spider_opened(self, spider):
        self.user_agent = getattr(spider, 'user_agent', self.user_agent)
    
        def close(self, reason):  # can return a deferred
        pass
    
    
class Scientist(AbstractExpert):
    
        def test_a_observer_list_shall_be_empty_initially(cls):
        cls.assertEqual(len(cls.s._observers), 0)
    
        def test_items_recoil(self):
        with ObjectPool(self.sample_queue, True) as pool:
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
    from __future__ import print_function
    
        @property
    def data(self):
        return self._data
    
        return True

    
        pass
