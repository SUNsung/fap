
        
        
def print_host(host):
    data = get_serf_members_data()
    meta = get_meta(data)
    print(json.dumps(meta['hostvars'][host]))
    
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
    
            # load data path for resource usage
        this_dir, this_filename = os.path.split(__file__)
        type_path = 'container_enabled' if getattr(self.options, 'container_enabled', False) else 'default'
        self.DATA_PATH = os.path.join(this_dir, 'data', type_path)
    
            display.debug('Validate TLS certificates: %s' % self._validate_certs)
    
            # no location in URL
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/targetHttpProxies/mytargetproxy/setUrlMap'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertFalse('global' in actual)
        self.assertEquals('targetHttpProxies', actual['resource_name'])
        self.assertEquals('mytargetproxy', actual['entity_name'])
        self.assertEquals('setUrlMap', actual['method_name'])
    
        def syntax(self):
        return '[options] <spider>'
    
        def post_process(self, output):
        occurrences = 0
        for x in output:
            if isinstance(x, self.obj_type):
                occurrences += 1