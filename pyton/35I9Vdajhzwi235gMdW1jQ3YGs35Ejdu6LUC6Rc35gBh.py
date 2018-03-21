
        
        
def init_linear(in_size, out_size, do_bias=True, mat_init_value=None,
                bias_init_value=None, alpha=1.0, identity_if_possible=False,
                normalized=False, name=None, collections=None, trainable=True):
  '''Linear (affine) transformation, y = x W + b, for a variety of
  configurations.
    
          # Start input enqueue threads.
      coord = tf.train.Coordinator()
      threads = tf.train.start_queue_runners(sess=sess, coord=coord)
      start = time.clock()
      for i in range(num_images):
        # Write to log-info once in a while.
        if i == 0:
          tf.logging.info('Starting to extract DELF features from images...')
        elif i % _STATUS_CHECK_ITERATIONS == 0:
          elapsed = (time.clock() - start)
          tf.logging.info('Processing image %d out of %d, last %d '
                          'images took %f seconds', i, num_images,
                          _STATUS_CHECK_ITERATIONS, elapsed)
          start = time.clock()
    
    
def CalculateKeypointCenters(boxes):
  '''Helper function to compute feature centers, from RF boxes.
    
        exp_boxes = [[-145.0, -145.0, 145.0, 145.0], [-113.0, -145.0, 177.0, 145.0]]
    exp_feature_scales = [1.0, 1.0]
    exp_features = np.array(
        np.concatenate(
            (np.tile([[-1.0, 127.0 / 128.0, 127.0 / 128.0], [-1.0, -1.0, -0.75]
                     ], [1, 341]), np.zeros([2, 1])),
            axis=1))
    exp_scores = [[1.723042], [1.600781]]
    
        serialized = feature_io.SerializeToString(locations, scales, descriptors,
                                              attention, orientations)
    parsed_data = feature_io.ParseFromString(serialized)
    
    import os
    
    flags = tf.app.flags
    
        # Compute logits (1 per class).
    logits = tf.layers.dense(net, params['n_classes'], activation=None)
    
      def testBuildLMSeq(self):
    seq = self._buildDummySequence()
    lm_seq = data.build_lm_sequence(seq)
    for i, ts in enumerate(lm_seq):
      # For end of sequence, the token and label should be same, and weight
      # should be 0.0.
      if i == len(lm_seq) - 1:
        self.assertEqual(ts.token, i)
        self.assertEqual(ts.label, i)
        self.assertEqual(ts.weight, 0.0)
      else:
        self.assertEqual(ts.token, i)
        self.assertEqual(ts.label, i + 1)
        self.assertEqual(ts.weight, 1.0)
    
    
def _build_random_vocabulary(vocab_size=100):
  '''Builds and returns a dict<term, id>.'''
  vocab = set()
  while len(vocab) < (vocab_size - 1):
    rand_word = ''.join(
        random.choice(string.ascii_lowercase)
        for _ in range(random.randint(1, 10)))
    vocab.add(rand_word)
    
        # not a test, but looks like a test
    'scrapy/utils/testsite.py',
    
            if opts.pdb:
            failure.startDebugMode()
    
        def short_desc(self):
        return 'Run a spider'
    
        def _list_templates(self):
        print('Available templates:')
        for filename in sorted(os.listdir(self.templates_dir)):
            if filename.endswith('.tmpl'):
                print('  %s' % splitext(filename)[0])
    
                @wraps(cb)
            def wrapper(response):
                output = list(iterate_spider_output(cb(response)))
                try:
                    results.startTest(self.testcase_post)
                    self.post_process(output)
                    results.stopTest(self.testcase_post)
                except AssertionError:
                    results.addFailure(self.testcase_post, sys.exc_info())
                except Exception:
                    results.addError(self.testcase_post, sys.exc_info())
                else:
                    results.addSuccess(self.testcase_post)
                finally:
                    return output
    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        def remaining_cards(self):
        return len(self.cards) - self.deal_index
    
        def prepare(self, **kwargs):
        content = get_content(self.url)
        self.title = match1(content, r'<title>([^<]+)</title>')
        s = match1(content, r'P\.s\s*=\s*\'([^\']+)\'')
        scp = match1(content, r'InfoQConstants\.scp\s*=\s*\'([^\']+)\'')
        scs = match1(content, r'InfoQConstants\.scs\s*=\s*\'([^\']+)\'')
        sck = match1(content, r'InfoQConstants\.sck\s*=\s*\'([^\']+)\'')
    
    def kugou_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    if url.lower().find('5sing')!=-1:
        #for 5sing.kugou.com
        html=get_html(url)
        ticket=r1(r''ticket':\s*'(.*)'',html)
        j=loads(str(b64decode(ticket),encoding='utf-8'))
        url=j['file']
        title=j['songName']
        songtype, ext, size = url_info(url)
        print_info(site_info, title, songtype, size)
        if not info_only:
            download_urls([url], title, ext, size, output_dir, merge=merge)
    else:
        #for the www.kugou.com/
        return kugou_download_playlist(url, output_dir=output_dir, merge=merge, info_only=info_only)
        # raise NotImplementedError(url)       
    
        t = r1(r'type=(\w+)', flashvars)
    id = r1(r'vid=([^']+)', flashvars)
    if t == 'youku':
        youku_download_by_vid(id, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif t == 'tudou':
        tudou_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif t == 'sina' or t == 'video':
        fake_headers['Referer'] = url
        url = 'http://www.miomio.tv/mioplayer/mioplayerconfigfiles/sina.php?vid=' + id
        xml_data = get_content(url, headers=fake_headers, decoded=True)
        url_list = sina_xml_to_url_list(xml_data)
    
    def showroom_download_by_room_id(room_id, output_dir = '.', merge = False, info_only = False, **kwargs):
    '''Source: Android mobile'''
    while True:
        timestamp = str(int(time() * 1000))
        api_endpoint = 'https://www.showroom-live.com/api/live/streaming_url?room_id={room_id}&_={timestamp}'.format(room_id = room_id, timestamp = timestamp)
        html = get_content(api_endpoint)
        html = json.loads(html)
        #{'streaming_url_list': [{'url': 'rtmp://52.197.69.198:1935/liveedge', 'id': 1, 'label': 'original spec(low latency)', 'is_default': True, 'type': 'rtmp', 'stream_name': '7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed'}, {'url': 'http://52.197.69.198:1935/liveedge/7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed/playlist.m3u8', 'is_default': True, 'id': 2, 'type': 'hls', 'label': 'original spec'}, {'url': 'rtmp://52.197.69.198:1935/liveedge', 'id': 3, 'label': 'low spec(low latency)', 'is_default': False, 'type': 'rtmp', 'stream_name': '7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed_low'}, {'url': 'http://52.197.69.198:1935/liveedge/7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed_low/playlist.m3u8', 'is_default': False, 'id': 4, 'type': 'hls', 'label': 'low spec'}]}
        if len(html) >= 1:
            break
        log.w('The live show is currently offline.')
        sleep(1)