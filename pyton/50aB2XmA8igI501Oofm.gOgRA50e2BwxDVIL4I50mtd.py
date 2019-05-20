
        
        
def check_format(filename):
    '''
    validates that each line is formatted correctly,
    appending to error list as needed
    '''
    with open(filename) as fp:
        lines = list(line.rstrip() for line in fp)
    check_alphabetical(lines)
    # START Check Entries
    num_in_category = min_entries_per_section + 1
    category = ''
    category_line = 0
    for line_num, line in enumerate(lines):
        if section_title_re.match(line):
            title_links.append(section_title_re.match(line).group(1))
        # check each section for the minimum number of entries
        if line.startswith(anchor):
            match = anchor_re.match(line)
            if match:
                if match.group(1) not in title_links:
                    add_error(line_num, 'section header ({}) not added as a title link'.format(match.group(1)))
            else:
                add_error(line_num, 'section header is not formatted correctly')
            if num_in_category < min_entries_per_section:
                add_error(category_line, '{} section does not have the minimum {} entries (only has {})'.format(
                    category, min_entries_per_section, num_in_category))
            category = line.split(' ')[1]
            category_line = line_num
            num_in_category = 0
            continue
        # skips lines that we do not care about
        if not line.startswith('|') or line.startswith('|---'):
            continue
        num_in_category += 1
        segments = line.split('|')[1:-1]
        if len(segments) < num_segments:
            add_error(line_num, 'entry does not have all the required sections (have {}, need {})'.format(
                len(segments), num_segments))
            continue
        # START Global
        for segment in segments:
            # every line segment should start and end with exactly 1 space
            if len(segment) - len(segment.lstrip()) != 1 or len(segment) - len(segment.rstrip()) != 1:
                add_error(line_num, 'each segment must start and end with exactly 1 space')
        # END Global
        segments = [seg.strip() for seg in segments]
        check_entry(line_num, segments)
    # END Check Entries
    
          # Finally, divide by the total number of paths.
      # The number of paths for each pair has a shape [batch_size, 1],
      # We duplicate it output_dim times along the second axis.
      self.num_paths = tf.clip_by_value(
          tf.reduce_sum(self.path_counts, 1), 1, np.inf)
      self.num_paths = tf.tile(tf.expand_dims(self.num_paths, -1),
                               [1, self.path_dim])
    
      # Retrieve k-best scoring paths for each relation
  for relation_index, relation in enumerate(classes):
    curr_paths = sorted(prediction_per_relation[relation_index],
                        key=lambda item: item[1], reverse=True)
    above_t = [(p, s) for (p, s) in curr_paths if s >= threshold]
    top_k = curr_paths[k+1]
    relation_paths = above_t if len(above_t) > len(top_k) else top_k
    
        # External inputs (not changing by dataset, by definition).
    if hps.ext_input_dim > 0:
      self.ext_input = tf.placeholder(tf.float32,
                                      [None, num_steps, ext_input_dim],
                                      name='ext_input')
    else:
      self.ext_input = None
    ext_input_bxtxi = self.ext_input
    
    
def _read_words(filename, use_prefix=True):
  all_words = []
  sequence_example = tf.train.SequenceExample()
  for r in tf.python_io.tf_record_iterator(filename):
    sequence_example.ParseFromString(r)
    
        # Create the supervisor.  It will take care of initialization, summaries,
    # checkpoints, and recovery.
    sv = tf.Supervisor(
        logdir=log_dir,
        is_chief=is_chief,
        saver=model.saver,
        global_step=model.global_step,
        recovery_wait_secs=30,
        summary_op=None,
        init_fn=init_fn)
    
      Args:
    session:  Current tf.Session.
    percent_real_update: tf.assign operation.
    new_rate: tf.placeholder for the new rate.
    current_rate: Percent of tokens that are currently real.  Fake tokens
      are the ones being imputed by the Generator.
  '''
  session.run(percent_real_update, feed_dict={new_rate: current_rate})
    
    
def test_kernel_regularization():
    x_train, y_train = get_data()
    for reg in [regularizers.l1(),
                regularizers.l2(),
                regularizers.l1_l2()]:
        model = create_model(kernel_regularizer=reg)
        model.compile(loss='categorical_crossentropy', optimizer='sgd')
        assert len(model.losses) == 1
        model.train_on_batch(x_train, y_train)
    
        # Deduplicate output names to handle Siamese networks.
    occurrences = {}
    for n in model.output_names:
        if n not in occurrences:
            occurrences[n] = 1
        else:
            occurrences[n] += 1
    conflict_counter = {n: 0 for n, count in occurrences.items() if count > 1}
    output_names = []
    for n in model.output_names:
        if n in conflict_counter:
            conflict_counter[n] += 1
            n += '_%d' % conflict_counter[n]
        output_names.append(n)
    
    x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
    # Display the 1st 8 corrupted and denoised images
rows, cols = 10, 30
num = rows * cols
imgs = np.concatenate([x_test[:num], x_test_noisy[:num], x_decoded[:num]])
imgs = imgs.reshape((rows * 3, cols, image_size, image_size))
imgs = np.vstack(np.split(imgs, rows, axis=1))
imgs = imgs.reshape((rows * 3, -1, image_size, image_size))
imgs = np.vstack([np.hstack(i) for i in imgs])
imgs = (imgs * 255).astype(np.uint8)
plt.figure()
plt.axis('off')
plt.title('Original images: top rows, '
          'Corrupted Input: middle rows, '
          'Denoised Input:  third rows')
plt.imshow(imgs, interpolation='none', cmap='gray')
Image.fromarray(imgs).save('corrupted_and_denoised.png')
plt.show()

    
    Reaches 0.93 train/test accuracy after 900 epochs
(which roughly corresponds to 1687500 steps in the original paper.)
'''
    
        # Returns
        A Keras model instance (compiled).
    '''
    model = Sequential()
    model.add(Dense(dense_units, input_shape=(max_words,),
                    kernel_initializer=kernel_initializer))
    model.add(Activation(activation))
    model.add(dropout(dropout_rate))
    
    
def test_invalid_convert_kernel():
    with pytest.raises(ValueError):
        conv_utils.convert_kernel(np.zeros((10, 20)))
    
        function_name = module.params.get('function_name')
    if function_name:
        params = dict()
        if module.params.get('max_items'):
            params['MaxItems'] = module.params.get('max_items')
    
        if not HAS_GOOGLE_CLOUD_PUBSUB:
        module.fail_json(msg='Please install google-cloud-pubsub library.')
    
    try:
    from pyvcloud.schema.vcd.v1_5.schemas.vcloud.networkType import FirewallRuleType
    from pyvcloud.schema.vcd.v1_5.schemas.vcloud.networkType import ProtocolsType
except ImportError:
    # normally set a flag here but it will be caught when testing for
    # the existence of pyvcloud (see module_utils/vca.py).  This just
    # protects against generating an exception at runtime
    pass
    
    EXAMPLES = '''
# Ensure dns zone is present
- ipa_dnszone:
    ipa_host: spider.example.com
    ipa_pass: Passw0rd!
    state: present
    zone_name: example.com
    
    
def is_setting_index(node):
    if node.tagname == 'index':
        # index entries for setting directives look like:
        # [(u'pair', u'SETTING_NAME; setting', u'std:setting-SETTING_NAME', '')]
        entry_type, info, refid = node['entries'][0][:3]
        return entry_type == 'pair' and info.endswith('; setting')
    return False
    
        def parse(self, response):
        pass

    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
                          help='only list contracts, without checking them')
        parser.add_option('-v', '--verbose', dest='verbose', default=False, action='store_true',
                          help='print contract tests for all spiders')
    
            spidercls = DefaultSpider
        spider_loader = self.crawler_process.spider_loader
        if opts.spider:
            spidercls = spider_loader.load(opts.spider)
        else:
            spidercls = spidercls_for_request(spider_loader, request, spidercls)
        self.crawler_process.crawl(spidercls, start_requests=lambda: [request])
        self.crawler_process.start()

    
        try:
        import boto.auth
    except ImportError:
        _S3Connection = _v19_S3Connection
    else:
        _S3Connection = _v20_S3Connection
    
            # set Content-Length based len of body
        if self.body is not None:
            self.headers['Content-Length'] = len(self.body)
            # just in case a broken http/1.1 decides to keep connection alive
            self.headers.setdefault('Connection', 'close')
        # Content-Length must be specified in POST method even with no body
        elif self.method == b'POST':
            self.headers['Content-Length'] = 0
    
            # extract cookies from Set-Cookie and drop invalid/expired cookies
        cookiejarkey = request.meta.get('cookiejar')
        jar = self.jars[cookiejarkey]
        jar.extract_cookies(response, request)
        self._debug_set_cookie(response, spider)
    
    
FILEPATH = os.path.join(
    os.path.abspath(os.path.dirname(os.path.dirname(__file__))), 'blns.txt')
'''Path to the file'''
    
    
@asyncio.coroutine
def test_if_fires_on_hass_start(hass):
    '''Test the firing when HASS starts.'''
    calls = async_mock_service(hass, 'test', 'automation')
    hass.state = CoreState.not_running
    config = {
        automation.DOMAIN: {
            'alias': 'hello',
            'trigger': {
                'platform': 'homeassistant',
                'event': 'start',
            },
            'action': {
                'service': 'test.automation',
            }
        }
    }