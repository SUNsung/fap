
        
                video_info = self._download_json(
            'http://feeds.cbsn.cbsnews.com/rundown/story', display_id, query={
                'device': 'desktop',
                'dvr_slug': display_id,
            })
    
            return {
            'id': video_id,
            'display_id': display_id,
            'title': title,
            'description': description,
            'thumbnails': thumbnails,
            'timestamp': timestamp,
            'duration': duration,
            'series': f.get('title'),
            'season_number': int_or_none(info.get('season')),
            'episode_number': int_or_none(info.get('episode')),
            'episode': title,
            'formats': formats,
        }
    
                videos = try_get(
                video_list, lambda x: x['result']['videoList'], list)
            if not videos:
                break
    
        _TESTS = [{
        'url': 'http://www.southpark.nl/full-episodes/s18e06-freemium-isnt-free',
        'info_dict': {
            'title': 'Freemium Isn\'t Free',
            'description': 'Stan is addicted to the new Terrance and Phillip mobile game.',
        },
        'playlist_mincount': 3,
    }]
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
    from test.helper import try_rm
    
            urls=[]
        for i in self.stream_urls[stream_id]:
            vlink=i['l']
            if not vlink.startswith('/'):
                #vlink is encode
                vlink=getVrsEncodeCode(vlink)
            key=getDispathKey(vlink.split('/')[-1].split('.')[0])
            baseurl = [x for x in self.baseurl]
            baseurl.insert(-1,key)
            url='/'.join(baseurl)+vlink+'?su='+self.gen_uid+'&qyid='+uuid4().hex+'&client=&z=&bt=&ct=&tn='+str(randint(10000,20000))
            urls.append(json.loads(get_content(url))['l'])
        #download should be complete in 10 minutes
        #because the url is generated before start downloading
        #and the key may be expired after 10 minutes
        self.streams[stream_id]['src'] = urls
'''
    
        test_suite = 'tests',
    
                if stream_id not in self.streams:
                log.e('[Error] Invalid video format.')
                log.e('Run \'-i\' command with no specific video format to view all available formats.')
                exit(2)
        else:
            # Extract stream with the best quality
            stream_id = self.streams_sorted[0]['id']
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
    #----------------------------------------------------------------------
def ckplayer_download_by_xml(ckinfo, output_dir = '.', merge = False, info_only = False, **kwargs):
    #Info XML
    video_info = ckplayer_get_info_by_xml(ckinfo)
    
    try:
        title = kwargs['title']
    except:
        title = ''
    type_ = ''
    size = 0
    
    if len(video_info['links']) > 0:  #has link
        type_, _ext, size = url_info(video_info['links'][0])  #use 1st to determine type, ext
    
    if 'size' in video_info:
        size = int(video_info['size'])
    else:
        for i in video_info['links'][1:]:  #save 1st one
            size += url_info(i)[2]
    
    print_info(site_info, title, type_, size)
    if not info_only:
        download_urls(video_info['links'], title, _ext, size, output_dir=output_dir, merge=merge)
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
    __all__ = ['ehow_download']
    
        def prepare(self, **kwargs):
        if re.search(r'imgur\.com/a/', self.url):
            # album
            content = get_content(self.url)
            album = match1(content, r'album\s*:\s*({.*}),') or \
                    match1(content, r'image\s*:\s*({.*}),')
            album = json.loads(album)
            count = album['album_images']['count']
            images = album['album_images']['images']
            ext = images[0]['ext']
            self.streams = {
                'original': {
                    'src': ['http://i.imgur.com/%s%s' % (i['hash'], ext)
                            for i in images],
                    'size': sum([i['size'] for i in images]),
                    'container': ext[1:]
                },
                'thumbnail': {
                    'src': ['http://i.imgur.com/%ss%s' % (i['hash'], '.jpg')
                            for i in images],
                    'container': 'jpg'
                }
            }
            self.title = album['title']
    
    
if __name__ == '__main__':
    main()
    
    
if __name__ == '__main__':
    main()
    
    
class TestSetOfStacks(object):
    
            print('Test: Two or more element stack (general case)')
        num_items = 10
        numbers = [randint(0, 10) for x in range(num_items)]
        sorted_stack = self.get_sorted_stack(stack, numbers)
        sorted_numbers = []
        for _ in range(num_items):
            sorted_numbers.append(sorted_stack.pop())
        assert_equal(sorted_numbers, sorted(numbers, reverse=True))
    
        # TODO: It would be better if we had unit tests for each
    # method in addition to the following end-to-end test
    def test_end_to_end(self):
        print('Test: Empty stack')
        stack = Stack()
        assert_equal(stack.peek(), None)
        assert_equal(stack.pop(), None)
    
    		def InOrder (node):
			if node is not None:
				InOrder(node.leftChild)
				inOrder.append(node.data)
				InOrder(node.rightChild)
    
    
		print('Test: insert checking with pre order traversal')
		expectVal = [50, 30, 10, 7, 25, 40, 38, 70, 60, 80]
		assert_equal(myTree.printPreOrder(), expectVal)
		expectVal = [1, 11, 21, 31, 41, 51, 61, 71, 81, 91]
		assert_equal(myTree2.printPreOrder(), expectVal)
    
        def __init__(self):
        self.array = []
    
      cand_indexes = []
  for (i, token) in enumerate(tokens):
    if token == '[CLS]' or token == '[SEP]':
      continue
    # Whole Word Masking means that if we mask all of the wordpieces
    # corresponding to an original word. When a word has been split into
    # WordPieces, the first token does not have any marker and any subsequence
    # tokens are prefixed with ##. So whenever we see the ## token, we
    # append it to the previous set of word indexes.
    #
    # Note that Whole Word Masking does *not* change the training code
    # at all -- we still predict each WordPiece independently, softmaxed
    # over the entire vocabulary.
    if (FLAGS.do_whole_word_mask and len(cand_indexes) >= 1 and
        token.startswith('##')):
      cand_indexes[-1].append(i)
    else:
      cand_indexes.append([i])
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
        tf.logging.info('**** Trainable Variables ****')
    for var in tvars:
      init_string = ''
      if var.name in initialized_variable_names:
        init_string = ', *INIT_FROM_CKPT*'
      tf.logging.info('  name = %s, shape = %s%s', var.name, var.shape,
                      init_string)
    
    csv_file_object = csv.reader(open('train.csv', 'rb'))       # Load in the csv file
header = csv_file_object.next()                             # Skip the fist line as it is a header
data=[]                                                     # Create a variable to hold the data
    
    # All the missing Fares -> assume median of their respective class
if len(test_df.Fare[ test_df.Fare.isnull() ]) > 0:
    median_fare = np.zeros(3)
    for f in range(0,3):                                              # loop 0 to 2
        median_fare[f] = test_df[ test_df.Pclass == f+1 ]['Fare'].dropna().median()
    for f in range(0,3):                                              # loop 0 to 2
        test_df.loc[ (test_df.Fare.isnull()) & (test_df.Pclass == f+1 ), 'Fare'] = median_fare[f]
    
        # Block 5
    x = Convolution2D(512, 3, 3, activation='relu', border_mode='same', name='block5_conv1')(x)
    x = Convolution2D(512, 3, 3, activation='relu', border_mode='same', name='block5_conv2')(x)
    x = Convolution2D(512, 3, 3, activation='relu', border_mode='same', name='block5_conv3')(x)
    x = Convolution2D(512, 3, 3, activation='relu', border_mode='same', name='block5_conv4')(x)
    x = MaxPooling2D((2, 2), strides=(2, 2), name='block5_pool')(x)
    
    
import numpy
from six.moves import xrange
    
    # define a cost variable to optimize
cost = sequence_categorical_crossentropy(logreg_layer.p_y_given_x,
                                         x[1:],
                                         mask[1:]) / batch_size
    
    polynomial = components[-1]
calculate_polynomial = theano.function(inputs=[coefficients, x],
                                       outputs=polynomial,
                                       updates=updates)
    
    output, updates = theano.scan(fn=step,
                              outputs_info=[probabilities, None],
                              n_steps=nb_samples)
    
        LOGPATS  = r'(\S+) (\S+) \[(.*?)\] (\S+) (\S+) ' \
               r'(\S+) (\S+) (\S+) ('([^']+)'|-) ' \
               r'(\S+) (\S+) (\S+) (\S+) (\S+) (\S+) ' \
               r'('([^']+)'|-) ('([^']+)'|-)'
    NUM_ENTRIES_PER_LINE = 17
    logpat = re.compile(LOGPATS)
    
            tree = estimator.tree_
        
        if tree.feature[i] == 0:
            plt.plot([tree.threshold[i], tree.threshold[i]], ylim, '-k')
            plot_boundaries(tree.children_left[i],
                            [xlim[0], tree.threshold[i]], ylim)
            plot_boundaries(tree.children_right[i],
                            [tree.threshold[i], xlim[1]], ylim)
        
        elif tree.feature[i] == 1:
            plt.plot(xlim, [tree.threshold[i], tree.threshold[i]], '-k')
            plot_boundaries(tree.children_left[i], xlim,
                            [ylim[0], tree.threshold[i]])
            plot_boundaries(tree.children_right[i], xlim,
                            [tree.threshold[i], ylim[1]])
            
    if boundaries:
        plot_boundaries(0, plt.xlim(), plt.ylim())