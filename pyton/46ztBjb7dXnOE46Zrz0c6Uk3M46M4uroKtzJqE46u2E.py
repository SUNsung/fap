
        
            def mapper(self, _, line):
        yield line, 1
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.map[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(query, results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        def _call(self, req):
        if isinstance(req, compat_basestring):
            req = sanitized_Request(req)
        # Authorizing manually since GitHub does not response with 401 with
        # WWW-Authenticate header set (see
        # https://developer.github.com/v3/#basic-authentication)
        b64 = base64.b64encode(
            ('%s:%s' % (self._username, self._password)).encode('utf-8')).decode('ascii')
        req.add_header('Authorization', 'Basic %s' % b64)
        response = self._opener.open(req).read().decode('utf-8')
        return json.loads(response)
    
    versions_info = json.load(open('update/versions.json'))
versions = list(versions_info['versions'].keys())
versions.sort()
    
    
from youtube_dl import YoutubeDL
    
    from __future__ import unicode_literals
    
    from __future__ import unicode_literals
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
        '''
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return requests.auth.HTTPDigestAuth(username, password)

    
        # Output processing
    def get_formatters(self):
        return [plugin for plugin in self
                if issubclass(plugin, FormatterPlugin)]
    
    
# bdist_wheel
extras_require = {
    # http://wheel.readthedocs.io/en/latest/#defining-conditional-dependencies
    'python_version == '3.0' or python_version == '3.1'': ['argparse>=1.2.1'],
    ':sys_platform == 'win32'': ['colorama>=0.2.4'],
}
    
    
with open(BIN_FILE_PATH, 'rb') as f:
    BIN_FILE_CONTENT = f.read()
    
            def get_auth(self, username=None, password=None):
            assert username is None
            assert password is None
            assert self.raw_auth == BASIC_AUTH_HEADER_VALUE
            return basic_auth(self.raw_auth)
    
        config['implicit_content_type'] = 'json'
    config.save()
    config.load()
    assert 'implicit_content_type' not in config
    assert not config['default_options']
    
    Commands:%s
    
    DDB_STREAMS = {}
    
            Data is given as multipart form submission bytes, and file name is
        replace according to Amazon S3 documentation for Post uploads:
        http://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectPOST.html
    '''
    _, params = cgi.parse_header(headers.get('Content-Type', ''))
    
            response = self.client.post('{0}/functions/{1}/aliases'.format(lambda_api.PATH_ROOT, self.FUNCTION_NAME),
                                    data=data)
        result = json.loads(response.get_data())
    
    
def bucket_name(bucket_arn):
    return bucket_arn.split(':::')[-1]