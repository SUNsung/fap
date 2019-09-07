
        
        __all__ = ['kugou_download']
    
    PROJ_NAME = 'you-get'
PACKAGE_NAME = 'you_get'
    
            return link_list
    
    # I don't know how to call the player directly so I just put it here
# just in case anyone touchs it -- Beining@Aug.24.2016
#download = site.download_by_url
#download_playlist = site.download_by_url
    
    def dailymotion_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads Dailymotion videos by URL.
    '''
    
    	html = get_html(url)
	contentid = r1(r'<meta name='contentid' scheme='DMINSTR2' content='([^']+)' />', html)
	vid = r1(r''demand_ehow_videoid':'([^']+)'', html)
	assert vid
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
    
def funshion_download(url, **kwargs):
    if re.match(r'http://www.fun.tv/vplay/v-(\w+)', url):
        vid = re.search(r'http://www.fun.tv/vplay/v-(\w+)', url).group(1)
        Funshion().download_by_vid(vid, single_video=True, **kwargs)
    elif re.match(r'http://www.fun.tv/vplay/.*g-(\w+)', url):
        epid = re.search(r'http://www.fun.tv/vplay/.*g-(\w+)', url).group(1)
        url = 'http://pm.funshion.com/v5/media/episode?id={}&cl=mweb&uc=111'.format(epid)
        meta = json.loads(get_content(url))
        drama_name = meta['name']
    
        html = get_content(url)
    uuid_pattern = r''([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})''
    id = r1(r'var vid='([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})'', html)
    if id is None:
        video_pattern = r''vid'\s*:\s*' + uuid_pattern
        id = match1(html, video_pattern)
    assert id, 'can't find video info'
    return ifeng_download_by_id(id, None, output_dir = output_dir, merge = merge, info_only = info_only)
    
    def python_implementation():
    
            This method is likely to be removed at some point.  Use qsize() >= n
        as a direct substitute, but be aware that either approach risks a race
        condition where a queue can shrink before the result of full() or
        qsize() can be used.
        '''
        with self.mutex:
            return 0 < self.maxsize <= self._qsize()
    
        @support.requires_resource('cpu')
    def test_threads(self):
        try:
            # Write out many bytes with exactly the same number of 0's,
            # 1's... 255's. This will help us check that concurrent reading
            # doesn't duplicate or forget contents.
            N = 1000
            l = list(range(256)) * N
            random.shuffle(l)
            s = bytes(bytearray(l))
            with self.open(support.TESTFN, 'wb') as f:
                f.write(s)
            with self.open(support.TESTFN, self.read_mode, buffering=0) as raw:
                bufio = self.tp(raw, 8)
                errors = []
                results = []
                def f():
                    try:
                        # Intra-buffer read then buffer-flushing read
                        for n in cycle([1, 19]):
                            s = bufio.read(n)
                            if not s:
                                break
                            # list.append() is atomic
                            results.append(s)
                    except Exception as e:
                        errors.append(e)
                        raise
                threads = [threading.Thread(target=f) for x in range(20)]
                with support.start_threads(threads):
                    time.sleep(0.02) # yield
                self.assertFalse(errors,
                    'the following exceptions were caught: %r' % errors)
                s = b''.join(results)
                for i in range(256):
                    c = bytes(bytearray([i]))
                    self.assertEqual(s.count(c), N)
        finally:
            support.unlink(support.TESTFN)
    
    
def dump_info(info, file=None):
    title = 'Python debug information'
    print(title)
    print('=' * len(title))
    print()
    
            'License :: OSI Approved :: MIT License',
    
          # Just adding the square of the weights to the loss function is *not*
      # the correct way of using L2 regularization/weight decay with Adam,
      # since that will interact with the m and v parameters in strange ways.
      #
      # Instead we want ot decay the weights in a manner that doesn't interact
      # with the m/v parameters. This is equivalent to adding the square
      # of the weights to the loss with plain (non-momentum) SGD.
      if self._do_use_weight_decay(param_name):
        update += self.weight_decay_rate * param
    
      validate_flags_or_throw(bert_config)
    
        unreachable_ops = []
    for op in graph.get_operations():
      is_unreachable = False
      all_names = [x.name for x in op.inputs] + [x.name for x in op.outputs]
      for name in all_names:
        if name not in seen_tensors:
          is_unreachable = True
      if is_unreachable:
        unreachable_ops.append(op)
    return unreachable_ops
    
      def _is_chinese_char(self, cp):
    '''Checks whether CP is the codepoint of a CJK character.'''
    # This defines a 'chinese character' as anything in the CJK Unicode block:
    #   https://en.wikipedia.org/wiki/CJK_Unified_Ideographs_(Unicode_block)
    #
    # Note that the CJK Unicode block is NOT all Japanese and Korean characters,
    # despite its name. The modern Korean Hangul alphabet is a different block,
    # as is Japanese Hiragana and Katakana. Those alphabets are used to write
    # space-separated words, so they are not treated specially and handled
    # like the all of the other languages.
    if ((cp >= 0x4E00 and cp <= 0x9FFF) or  #
        (cp >= 0x3400 and cp <= 0x4DBF) or  #
        (cp >= 0x20000 and cp <= 0x2A6DF) or  #
        (cp >= 0x2A700 and cp <= 0x2B73F) or  #
        (cp >= 0x2B740 and cp <= 0x2B81F) or  #
        (cp >= 0x2B820 and cp <= 0x2CEAF) or
        (cp >= 0xF900 and cp <= 0xFAFF) or  #
        (cp >= 0x2F800 and cp <= 0x2FA1F)):  #
      return True