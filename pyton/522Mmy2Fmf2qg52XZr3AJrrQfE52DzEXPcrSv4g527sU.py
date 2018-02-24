
        
        
@bp.route('/add', methods=['POST'])
def add_entry():
    if not session.get('logged_in'):
        abort(401)
    db = get_db()
    db.execute('insert into entries (title, text) values (?, ?)',
               [request.form['title'], request.form['text']])
    db.commit()
    flash('New entry was successfully posted')
    return redirect(url_for('flaskr.show_entries'))
    
    
@app.route('/')
def index():
    return render_template('index.html')
    
    
def login(client, username, password):
    '''Helper function to login'''
    return client.post('/login', data={
        'username': username,
        'password': password
    }, follow_redirects=True)
    
    
@keras_test
def test_masking():
    np.random.seed(1337)
    x = np.array([[[1], [1]],
                  [[0], [0]]])
    model = Sequential()
    model.add(Masking(mask_value=0, input_shape=(2, 1)))
    model.add(TimeDistributed(Dense(1, kernel_initializer='one')))
    model.compile(loss='mse', optimizer='sgd')
    y = np.array([[[1], [1]],
                  [[1], [1]]])
    loss = model.train_on_batch(x, y)
    assert loss == 0
    
        for strides in [(1, 1), (2, 2)]:
        layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': 3,
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_last'},
                   input_shape=(num_samples, num_row, num_col, stack_size))
    
    
def assert_doc_style(name, member, doc):
    lines = doc.split('\n')
    first_line = lines[0]
    if len(first_line.strip()) == 0:
        raise ValueError('{} the documentation should be on the first line.'.format(name),
                         member.__module__)
    if first_line.strip()[-1] != '.':
        raise ValueError('{} first line should end with a '.''.format(name),
                         member.__module__)
    
    # combine the 3 images into a single Keras tensor
input_tensor = K.concatenate([base_image,
                              style_reference_image,
                              combination_image], axis=0)
    
    
@keras_test
def test_min_max_norm():
    array = get_example_array()
    for m in get_test_values():
        norm_instance = constraints.min_max_norm(min_value=m, max_value=m * 2)
        normed = norm_instance(K.variable(array))
        value = K.eval(normed)
        l2 = np.sqrt(np.sum(np.square(value), axis=0))
        assert not l2[l2 < m]
        assert not l2[l2 > m * 2 + 1e-5]
    
        # Transform sequences and labels into 'one-hot' encoding
    x = np.zeros((len(sentences), sequence_length, number_of_chars), dtype=np.bool)
    y = np.zeros((len(sentences), number_of_chars), dtype=np.bool)
    for i, sentence in enumerate(sentences):
        for t, char in enumerate(sentence):
            x[i, t, ord(char) - ord('a')] = 1
        y[i, ord(next_chars[i]) - ord('a')] = 1
    
        # test concatenation
    model_concat = models.Model([input_a, input_b], [merged_concat])
    model_concat.compile(loss='mse', optimizer='sgd')
    model_concat.fit([rand(2, 3), rand(2, 3)], [rand(2, 6)], epochs=1)
    
        model = Sequential()
    model.add(Merge([intermediate, righter], mode='sum'))
    model.add(Dense(num_classes))
    model.add(Activation('softmax'))
    model.compile(loss='categorical_crossentropy', optimizer='rmsprop')
    
    from scrapy.utils.conf import arglist_to_dict
from scrapy.exceptions import UsageError
    
        def short_desc(self):
        return 'Run quick benchmark test'
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
        
        When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup[query]
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
    
    
class GroupChat(Chat):
    
    from mrjob.job import MRJob
    
        def test_timeout(self):
        self.assertTrue(self.timeout.timeout)
        self.assertFalse(self.invalid.timeout)
    
        def cleanup_from_tests(self):
        '''Performs any necessary cleanup from running plugin tests'''
    
        @mock.patch('certbot.display.enhancements.util')
    def test_redirect(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 1)
        self.assertTrue(self._call('redirect'))
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    def test_smtp_success(self, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.connect.call_count, 1)
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
    
        def prepare(self, **kwargs):
        content = get_content(self.url)
        self.title = match1(content, r'<title>([^<]+)</title>')
        s = match1(content, r'P\.s\s*=\s*\'([^\']+)\'')
        scp = match1(content, r'InfoQConstants\.scp\s*=\s*\'([^\']+)\'')
        scs = match1(content, r'InfoQConstants\.scs\s*=\s*\'([^\']+)\'')
        sck = match1(content, r'InfoQConstants\.sck\s*=\s*\'([^\']+)\'')
    
    __all__ = ['kugou_download']
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
    
site_info = 'mtv81.com'
download = mtv81_download
download_playlist = playlist_not_supported('mtv81')

    
    from ..common import *
from ..extractor import VideoExtractor
    
        # 优先获取执行文件目录的配置文件
    here = sys.path[0]
    for file in os.listdir(here):
        if re.match(r'(.+)\.json', file):
            file_name = os.path.join(here, file)
            with open(file_name, 'r') as f:
                print('Load config file from {}'.format(file_name))
                return json.load(f)