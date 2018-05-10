
        
        
@keras_test
def test_conv2d_legacy_interface():
    old_layer = keras.layers.Convolution2D(5, 3, 3, name='conv')
    new_layer = keras.layers.Conv2D(5, (3, 3), name='conv')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    print('Building model...')
model = Sequential()
model.add(Dense(512, input_shape=(max_words,)))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
    
    print('-')
print('Vocab size:', vocab_size, 'unique words')
print('Story max length:', story_maxlen, 'words')
print('Query max length:', query_maxlen, 'words')
print('Number of training stories:', len(train_stories))
print('Number of test stories:', len(test_stories))
print('-')
print('Here\'s what a 'story' tuple looks like (input, query, answer):')
print(train_stories[0])
print('-')
print('Vectorizing the word sequences...')
    
            # Sample a token
        sampled_token_index = np.argmax(output_tokens[0, -1, :])
        sampled_char = reverse_target_char_index[sampled_token_index]
        decoded_sentence += sampled_char
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    
    
def test_io_utils(in_tmpdir):
    '''Tests the HDF5Matrix code using the sample from @jfsantos at
    https://gist.github.com/jfsantos/e2ef822c744357a4ed16ec0c885100a3
    '''
    h5_path = 'test.h5'
    create_dataset(h5_path)
    
    
def test_serialization():
    all_activations = ['max_norm', 'non_neg',
                       'unit_norm', 'min_max_norm']
    for name in all_activations:
        fn = constraints.get(name)
        ref_fn = getattr(constraints, name)()
        assert fn.__class__ == ref_fn.__class__
        config = constraints.serialize(fn)
        fn = constraints.deserialize(config)
        assert fn.__class__ == ref_fn.__class__
    
        def shuffle(self):
        pass

    
        def __init__(self, id, name):
        self.id = id
        self.name = name
        self.friend_ids = []
    
            Emit key value pairs of the form:
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup.get(query)
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
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        def __init__(self, message_id, message, timestamp):
        self.message_id = message_id
        self.message = message
        self.timestamp = timestamp
    
    from enum import Enum
    
        def test_cat_adapter_shall_make_noise(self):
        cat = Cat()
        cat_adapter = Adapter(cat, make_noise=cat.meow)
        noise = cat_adapter.make_noise()
        expected_noise = 'meow!'
        self.assertEqual(noise, expected_noise)
    
        def test_sales_manager_shall_respond_through_proxy_with_delay(cls):
        cls.p.busy = 'Yes'
        start_time = time()
        cls.p.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
Sales Manager is busy\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
    
@contextmanager
def suppress_stdout():
    try:
        stdout, sys.stdout = sys.stdout, open(os.devnull, 'w')
        yield
    finally:
        sys.stdout = stdout
    
        @property
    def data(self):
        return self._data