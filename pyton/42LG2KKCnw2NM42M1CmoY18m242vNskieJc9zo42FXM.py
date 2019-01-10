
        
        
def load_all_pairs(records):
  '''Reads TensorFlow examples from a RecordReader and returns the word pairs.
    
      def predict(self, session, inputs):
    '''Predict the classification of the test set.
    
      plt.plot(vals_txn[:,0:n_to_plot] + scale*np.array(range(n_to_plot)),
           color=color, lw=1.0)
  plt.axis('tight')
  if title:
    plt.title(title)
    
    
def ptb_raw_data(data_path=None):
  '''Load PTB raw data from data directory 'data_path'.
  Reads PTB text files, converts strings to integer ids,
  and performs mini-batching of the inputs.
  The PTB dataset comes from Tomas Mikolov's webpage:
  http://www.fit.vutbr.cz/~imikolov/rnnlm/simple-examples.tgz
  Args:
    data_path: string path to the directory where simple-examples.tgz has
      been extracted.
  Returns:
    tuple (train_data, valid_data, test_data, vocabulary)
    where each of the data objects can be passed to PTBIterator.
  '''
    
      for key, _ in gen_ngrams_dict.iteritems():
    if key in train_ngrams_dict:
      unique_ngrams_in_train += 1
  return float(unique_ngrams_in_train) / float(total_ngrams_produced)

    
      # Dictionary mapping.
  if model == 'gen':
    variable_mapping = {
        'Model/embeddings/input_embedding':
            embedding,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_h_mat':
            lstm_w_0,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_inputs_mat':
            lstm_b_0,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_h_mat':
            lstm_w_1,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_inputs_mat':
            lstm_b_1,
        'Model/softmax_b':
            softmax_b
    }
  else:
    variable_mapping = {
        'Model/embeddings/input_embedding':
            embedding,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_h_mat':
            lstm_w_0,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_inputs_mat':
            lstm_b_0,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_h_mat':
            lstm_w_1,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_inputs_mat':
            lstm_b_1
    }
    
        @staticmethod
    def get_streams_by_id(account_number, video_id):
        '''
        int, int->list
        
        Get the height of the videos.
        
        Since brightcove is using 3 kinds of links: rtmp, http and https,
        we will be using the HTTPS one to make it secure.
        
        If somehow akamaihd.net is blocked by the Great Fucking Wall,
        change the 'startswith https' to http.
        '''
        endpoint = 'https://edge.api.brightcove.com/playback/v1/accounts/{account_number}/videos/{video_id}'.format(account_number = account_number, video_id = video_id)
        fake_header_id = fake_headers
        #is this somehow related to the time? Magic....
        fake_header_id['Accept'] ='application/json;pk=BCpkADawqM1cc6wmJQC2tvoXZt4mrB7bFfi6zGt9QnOzprPZcGLE9OMGJwspQwKfuFYuCjAAJ53JdjI8zGFx1ll4rxhYJ255AXH1BQ10rnm34weknpfG-sippyQ'
    
    
def cntv_download(url, **kwargs):
    if re.match(r'http://tv\.cntv\.cn/video/(\w+)/(\w+)', url):
        rid = match1(url, r'http://tv\.cntv\.cn/video/\w+/(\w+)')
    elif re.match(r'http://tv\.cctv\.com/\d+/\d+/\d+/\w+.shtml', url):
        rid = r1(r'var guid = '(\w+)'', get_content(url))
    elif re.match(r'http://\w+\.cntv\.cn/(\w+/\w+/(classpage/video/)?)?\d+/\d+\.shtml', url) or \
         re.match(r'http://\w+.cntv.cn/(\w+/)*VIDE\d+.shtml', url) or \
         re.match(r'http://(\w+).cntv.cn/(\w+)/classpage/video/(\d+)/(\d+).shtml', url) or \
         re.match(r'http://\w+.cctv.com/\d+/\d+/\d+/\w+.shtml', url) or \
         re.match(r'http://\w+.cntv.cn/\d+/\d+/\d+/\w+.shtml', url): 
        page = get_content(url)
        rid = r1(r'videoCenterId','(\w+)'', page)
        if rid is None:
            guid = re.search(r'guid\s*=\s*'([0-9a-z]+)'', page).group(1)
            rid = guid
    elif re.match(r'http://xiyou.cntv.cn/v-[\w-]+\.html', url):
        rid = r1(r'http://xiyou.cntv.cn/v-([\w-]+)\.html', url)
    else:
        raise NotImplementedError(url)
    
        print_info(site_info, title, mime, size)
    if not info_only:
        download_urls([real_url], title, ext, size, output_dir=output_dir, merge=merge)
    
    
'''
http://open.iqiyi.com/lib/player.html
'''
iqiyi_patterns = [r'(?:\'|\')(https?://dispatcher\.video\.qiyi\.com\/disp\/shareplayer\.swf\?.+?)(?:\'|\')',
                  r'(?:\'|\')(https?://open\.iqiyi\.com\/developer\/player_js\/coopPlayerIndex\.html\?.+?)(?:\'|\')']
    
    
def fantasy_download_by_id_channelId(id = 0, channelId = 0, output_dir = '.', merge = True, info_only = False,
                                     **kwargs):
    api_url = 'http://www.fantasy.tv/tv/playDetails.action?' \
              'myChannelId=1&id={id}&channelId={channelId}&t={t}'.format(id = id,
                                                                         channelId = channelId,
                                                                         t = str(random.random())
                                                                         )
    html = get_content(api_url)
    html = json.loads(html)
    
    #----------------------------------------------------------------------
def makeMimi(upid):
    '''From http://cdn37.atwikiimg.com/sitescript/pub/dksitescript/FC2.site.js
    Also com.hps.util.fc2.FC2EncrptUtil.makeMimiLocal
    L110'''
    strSeed = 'gGddgPfeaf_gzyr'
    prehash = upid + '_' + strSeed
    return md5(prehash.encode('utf-8')).hexdigest()
    
        type = 'video/mp4'
    ext = 'mp4'
    
    if __name__ == '__main__':
    main()

    
    def longestSub(ARRAY): 			#This function is recursive
	
	ARRAY_LENGTH = len(ARRAY)
	if(ARRAY_LENGTH <= 1):  	#If the array contains only one element, we return it (it's the stop condition of recursion)
		return ARRAY
								#Else
	PIVOT=ARRAY[0]
	isFound=False
	i=1
	LONGEST_SUB=[]
	while(not isFound and i<ARRAY_LENGTH):
		if (ARRAY[i] < PIVOT):
			isFound=True
			TEMPORARY_ARRAY = [ element for element in ARRAY[i:] if element >= ARRAY[i] ]
			TEMPORARY_ARRAY = longestSub(TEMPORARY_ARRAY)
			if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
				LONGEST_SUB = TEMPORARY_ARRAY
		else:
			i+=1
    
    
class SubArray:
    
        for j in range(int(s/2), -1, -1):
        if dp[n][j] == True:
            diff = s-2*j
            break;
    
            best_split = 0
        min_error = self.mean_squared_error(X,np.mean(y)) * 2
    
    from matplotlib import pyplot as plt
def plot_heterogeneity(heterogeneity, k):
    plt.figure(figsize=(7,4))
    plt.plot(heterogeneity, linewidth=4)
    plt.xlabel('# Iterations')
    plt.ylabel('Heterogeneity')
    plt.title('Heterogeneity of clustering over time, K={0:d}'.format(k))
    plt.rcParams.update({'font.size': 16})
    plt.show()
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
        # For a definition of each point index, see https://cdn-images-1.medium.com/max/1600/1*AbEg31EgkbXSQehuNJBlWg.png
    if model == 'large':
        return [{
            'chin': points[0:17],
            'left_eyebrow': points[17:22],
            'right_eyebrow': points[22:27],
            'nose_bridge': points[27:31],
            'nose_tip': points[31:36],
            'left_eye': points[36:42],
            'right_eye': points[42:48],
            'top_lip': points[48:55] + [points[64]] + [points[63]] + [points[62]] + [points[61]] + [points[60]],
            'bottom_lip': points[54:60] + [points[48]] + [points[60]] + [points[67]] + [points[66]] + [points[65]] + [points[64]]
        } for points in landmarks_as_tuples]
    elif model == 'small':
        return [{
            'nose_tip': [points[4]],
            'left_eye': points[2:4],
            'right_eye': points[0:2],
        } for points in landmarks_as_tuples]
    else:
        raise ValueError('Invalid landmarks model type. Supported models are ['small', 'large'].')
    
    # Get a reference to webcam #0 (the default one)
video_capture = cv2.VideoCapture(0)
    
    # Load a sample picture and learn how to recognize it.
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
        # Every 128 frames (the default batch size), batch process the list of frames to find faces
    if len(frames) == 128:
        batch_of_face_locations = face_recognition.batch_face_locations(frames, number_of_times_to_upsample=0)
    
    
def detect_faces_in_image(file_stream):
    # 用face_recognition.face_encodings(img)接口提前把奥巴马人脸的编码录入
    known_face_encoding = [-0.09634063,  0.12095481, -0.00436332, -0.07643753,  0.0080383,
                            0.01902981, -0.07184699, -0.09383309,  0.18518871, -0.09588896,
                            0.23951106,  0.0986533 , -0.22114635, -0.1363683 ,  0.04405268,
                            0.11574756, -0.19899382, -0.09597053, -0.11969153, -0.12277931,
                            0.03416885, -0.00267565,  0.09203379,  0.04713435, -0.12731361,
                           -0.35371891, -0.0503444 , -0.17841317, -0.00310897, -0.09844551,
                           -0.06910533, -0.00503746, -0.18466514, -0.09851682,  0.02903969,
                           -0.02174894,  0.02261871,  0.0032102 ,  0.20312519,  0.02999607,
                           -0.11646006,  0.09432904,  0.02774341,  0.22102901,  0.26725179,
                            0.06896867, -0.00490024, -0.09441824,  0.11115381, -0.22592428,
                            0.06230862,  0.16559327,  0.06232892,  0.03458837,  0.09459756,
                           -0.18777156,  0.00654241,  0.08582542, -0.13578284,  0.0150229 ,
                            0.00670836, -0.08195844, -0.04346499,  0.03347827,  0.20310158,
                            0.09987706, -0.12370517, -0.06683611,  0.12704916, -0.02160804,
                            0.00984683,  0.00766284, -0.18980607, -0.19641446, -0.22800779,
                            0.09010898,  0.39178532,  0.18818057, -0.20875394,  0.03097027,
                           -0.21300618,  0.02532415,  0.07938635,  0.01000703, -0.07719778,
                           -0.12651891, -0.04318593,  0.06219772,  0.09163868,  0.05039065,
                           -0.04922386,  0.21839413, -0.02394437,  0.06173781,  0.0292527 ,
                            0.06160797, -0.15553983, -0.02440624, -0.17509389, -0.0630486 ,
                            0.01428208, -0.03637431,  0.03971229,  0.13983178, -0.23006812,
                            0.04999552,  0.0108454 , -0.03970895,  0.02501768,  0.08157793,
                           -0.03224047, -0.04502571,  0.0556995 , -0.24374914,  0.25514284,
                            0.24795187,  0.04060191,  0.17597422,  0.07966681,  0.01920104,
                           -0.01194376, -0.02300822, -0.17204897, -0.0596558 ,  0.05307484,
                            0.07417042,  0.07126575,  0.00209804]
    
        def setTC(self, tc):
        self._tc = tc
    
        fftv.publish('cartoon')
    fftv.publish('music')
    fftv.publish('ads')
    fftv.publish('movie')
    fftv.publish('cartoon')
    fftv.publish('cartoon')
    fftv.publish('movie')
    fftv.publish('blank')
    
    
class Person(object):
    def __init__(self, name, occupation):
        self.name = name
        self.occupation = occupation
        self.call_count2 = 0
    
        blackboard.add_expert(Student(blackboard))
    blackboard.add_expert(Scientist(blackboard))
    blackboard.add_expert(Professor(blackboard))
    
            if start == end:
            return path
        shortest = None
        for node in self.graph.get(start, []):
            if node not in path:
                newpath = self.find_shortest_path(node, end, path[:])
                if newpath:
                    if not shortest or len(newpath) < len(shortest):
                        shortest = newpath
        return shortest