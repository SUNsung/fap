
        
                '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
    
def get_unique_filename(filename, exists=os.path.exists):
    attempt = 0
    while True:
        suffix = '-' + str(attempt) if attempt > 0 else ''
        try_filename = trim_filename_if_needed(filename, extra=len(suffix))
        try_filename += suffix
        if not exists(try_filename):
            return try_filename
        attempt += 1
    
        name = 'Basic HTTP auth'
    auth_type = 'basic'
    
        '''
    group_name = 'colors'
    
    
def maybe_restore_pretrained_model(sess, saver_for_restore, model_dir):
  '''Restores pretrained model if there is no ckpt model.'''
  ckpt = tf.train.get_checkpoint_state(FLAGS.train_dir)
  checkpoint_exists = ckpt and ckpt.model_checkpoint_path
  if checkpoint_exists:
    tf.logging.info('Checkpoint exists in FLAGS.train_dir; skipping '
                    'pretraining restore')
    return
    
      def testSimple(self):
    labels = [9, 3, 0]
    records = [self._record(labels[0], 0, 128, 255),
               self._record(labels[1], 255, 0, 1),
               self._record(labels[2], 254, 255, 0)]
    contents = b''.join([record for record, _ in records])
    expected = [expected for _, expected in records]
    filename = os.path.join(self.get_temp_dir(), 'cifar')
    open(filename, 'wb').write(contents)
    
    from six.moves import StringIO
    
        final_timestep = label_seq[-1]
    eos_id = len(seq) - 1
    self.assertAllEqual(final_timestep.tokens, [eos_id, eos_id])
    self.assertEqual(final_timestep.label, 1)
    self.assertEqual(final_timestep.weight, 1.0)
    
      datasets = [dataset]
  if include_unlabeled:
    if dataset == 'train':
      datasets.append('unlab')
  for dset in datasets:
    with open(os.path.join(FLAGS.rcv1_input_dir, dset + '.csv')) as db_f:
      reader = csv.reader(db_f)
      for row in reader:
        # 10% of the data is randomly held out
        is_validation = random.randint(1, 10) == 1
        if is_validation and not include_validation:
          continue
    
    Computational time:
  2 days to train 100000 steps on 1 layer 1024 hidden units LSTM,
  256 embeddings, 400 truncated BP, 256 minibatch and on single GPU (Pascal
  Titan X, cuDNNv5).
'''
from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      task_params = utils.Foo(num_actions=4, step_size=4, num_steps=0,
                          batch_size=32, room_seed=0, base_class='Building',
                          task='mapping', n_ori=6, data_augment=data_augment,
                          output_transform_to_global_map=False,
                          output_canonical_map=False,
                          output_incremental_transform=False,
                          output_free_space=False, move_type='shortest_path',
                          toy_problem=0)
    
    
class Budget(object):
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
        def reducer_identity(self, key, value):
        yield key, value
    
    from mrjob.job import MRJob
    
        def __init__(self, user_id, name, pass_hash):
        self.user_id = user_id
        self.name = name
        self.pass_hash = pass_hash
        self.friends_by_id = {}  # key: friend id, value: User
        self.friend_ids_to_private_chats = {}  # key: friend id, value: private chats
        self.group_chats_by_id = {}  # key: chat id, value: GroupChat
        self.received_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
        self.sent_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
    
        def __init__(self, pages, data_store, reverse_index_queue, doc_index_queue):
        self.pages = pages
        self.data_store = data_store
        self.reverse_index_queue = reverse_index_queue
        self.doc_index_queue = doc_index_queue
    
    
    {
def extract_json_data(url, **params):
    url = construct_url(url, **params)
    html = get_content(url, headers=fake_headers)
    json_string = match1(html, r'app.page\['board'\] = (.*?});')
    json_data = json.loads(json_string)
    return json_data
    
    import ssl
    
        def extract(self, **kwargs):
        for i in self.streams:
            # for each available stream
            s = self.streams[i]
            # fill in 'container' field and 'size' field (optional)
            _, s['container'], s['size'] = url_info(s['url'])
            # 'src' field is a list of processed urls for direct downloading
            # usually derived from 'url'
            s['src'] = [s['url']]
    
                if point.name == 'p':
                link = point.find('a')
                if link is not None:
                    link = clean_pdf_link(link.attrs['href'])
                    ext = get_extension(link)
                    print(ext)
                    if not ext in forbidden_extensions:
                        print(shorten_title(point.text) + ' (' + link + ')')
                        try:
                            name = clean_text(point.text.split('[' + ext + ']')[0])
                            fullname = '.'.join((name, ext))
                            if not os.path.exists('/'.join((current_directory, fullname)) ):
                                download_pdf(link, current_directory, '.'.join((name, ext)))
                        except KeyboardInterrupt:
                            try:
                                print('Press Ctrl-C in 1 second to quit')
                                time.sleep(1)
                            except KeyboardInterrupt:
                                print('Cancelling..')
                                break
                        except:
                            failures.append(point.text)
                        
        point = point.next_sibling          
    
        def __init__(self, blackboard):
        self.blackboard = blackboard
    
        @classmethod
    def setUpClass(cls):
        ''' Class scope setup. '''
        cls.p = Proxy()
    
        def test_pool_behavior_with_single_object_inside(self):
        sample_queue = queue.Queue()
        sample_queue.put('yam')
        with ObjectPool(sample_queue) as obj:
            # print('Inside with: {}'.format(obj))
            self.assertEqual(obj, 'yam')
        self.assertFalse(sample_queue.empty())
        self.assertTrue(sample_queue.get() == 'yam')
        self.assertTrue(sample_queue.empty())
        
    
            def __init__(self, *args, **kwargs):
            pass
    
        def test_cat_greek_localization(self):
        self.assertEqual(self.g.get('cat'), 'γάτα')
    
        def test_tc3_output(self):
        self.tc3.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc3)
    
    class TimeDisplay(object):
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(time_provider_stub), expected_time)
    
    '''
http://www.dabeaz.com/coroutines/
'''
    
        def tearDown(self):
        if not self._bProblem:
            print('Tearing down')
            time.sleep(0.1)
            self._tm.publishReport()
        else:
            print('Test not executed. No tear down required.')
    
        def __init__(self, value):
        self.value = value