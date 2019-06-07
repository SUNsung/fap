
        
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

    
        def _colision_resolution(self, key, data=None):
        new_key = self.hash_function(key + 1)
    
    def getBlock(bitString):
	'''[summary]
	Iterator:
		Returns by each call a list of length 16 with the 32 bit
		integer blocks. 
    
        # with a probability of 1, always throw errors
    config.DYNAMODB_ERROR_PROBABILITY = 1.0
    assert_raises(ClientError, table.put_item, Item={PARTITION_KEY: short_uid(), 'data': 'foobar123'})
    
    
def get_or_create_file(config_file):
    if os.path.exists(config_file):
        return config_file
    try:
        save_file(config_file, '{}')
        return config_file
    except Exception:
        pass
    
            params = apigateway_listener.extract_path_params('/foo/bar/baz', '/foo/{proxy+}')
        self.assertEqual(params, {'proxy+': 'bar/baz'})
    
        return getattr(command_class, command)
    
    
def is_ubuntu():
    return platform.system() == 'Linux' and platform.linux_distribution()[0] == 'Ubuntu'
    
    
def get_source_name_from_network_mode(network_mode, source_type):
    if not network_mode:
        return
    
    
def update_init_py_version(version):
    path = os.path.join(REPO_ROOT, 'compose', '__init__.py')
    with open(path, 'r') as f:
        contents = f.read()
    contents = re.sub(r'__version__ = '[0-9a-z.-]+'', '__version__ = '{}''.format(version), contents)
    with open(path, 'w') as f:
        f.write(contents)
    
    
class ResilienceTest(DockerClientTestCase):
    def setUp(self):
        self.db = self.create_service(
            'db',
            volumes=[VolumeSpec.parse('/var/db')],
            command='top')
        self.project = Project('composetest', [self.db], self.client)
    
        def assert_produces(self, reader, expectations):
        split = split_buffer(reader())