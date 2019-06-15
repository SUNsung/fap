
        
                (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
            (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
        def _hash_function(self, key):
        return key % self.size
    
        def move_to_front(self, node):
        ...
    
      # Predict the labels
  pred = model.predict(session, instances)
    
    
def gen_encoder_seq2seq_nas(hparams):
  '''Returns the NAS Variable name to MaskGAN Variable
  dictionary mapping.  This is a highly restrictive function just for testing.
  This is for the *unidirecitional* seq2seq_nas encoder.
    
    
def filter_options(readme):
    ret = ''
    in_options = False
    for line in readme.split('\n'):
        if line.startswith('# '):
            if line[2:].startswith('OPTIONS'):
                in_options = True
            else:
                in_options = False
    
        def test_precedence(self):
        jsi = JSInterpreter('''
        function x() {
            var a = [10, 20, 30, 40, 50];
            var b = 6;
            a[0]=a[b%a.length];
            return a;
        }''')
        self.assertEqual(jsi.call_function('x'), [20, 20, 30, 40, 50])
    
        def prepare(self, **kwargs):
    
    class BokeCC(VideoExtractor):
    name = 'BokeCC'
    
        if '_text' in dictified['video'][0]['size'][0]:  #size exists for 1 piece
        video_dict['size'] = sum([int(i['size'][0]['_text']) for i in dictified['video']])
    
    # (api_key, method, ext, page)
tmpl_api_call = (
    'https://api.flickr.com/services/rest?'
    '&format=json&nojsoncallback=1'
    # UNCOMMENT FOR TESTING
    #'&per_page=5'
    '&per_page=500'
    # this parameter CANNOT take control of 'flickr.galleries.getPhotos'
    # though the doc said it should.
    # it's always considered to be 500
    '&api_key=%s'
    '&method=flickr.%s'
    '&extras=url_sq,url_q,url_t,url_s,url_n,url_m,url_z,url_c,url_l,url_h,url_k,url_o,media'
    '%s&page=%d'
)
    
    site_info = 'Giphy.com'
download = giphy_download
download_playlist = playlist_not_supported('giphy')

    
    site_info = 'ifeng.com'
download = ifeng_download
download_playlist = playlist_not_supported('ifeng')

    
        def prepare(self, **kwargs):
        content = get_content(self.url)
        self.title = match1(content, r'<title>([^<]+)</title>')
        s = match1(content, r'P\.s\s*=\s*\'([^\']+)\'')
        scp = match1(content, r'InfoQConstants\.scp\s*=\s*\'([^\']+)\'')
        scs = match1(content, r'InfoQConstants\.scs\s*=\s*\'([^\']+)\'')
        sck = match1(content, r'InfoQConstants\.sck\s*=\s*\'([^\']+)\'')
    
        return masks_c
    
                    for k in range(boxes.shape[0]):
                    score = boxes[k, -1]
                    mask = masks[:, :, k]
                    pngname = os.path.join(
                        'results',
                        basename + '_' + clss + '_{}.png'.format(k))
                    # write txt
                    fid_txt.write('{} {} {}\n'.format(pngname, clss_id, score))
                    # save mask
                    cv2.imwrite(os.path.join(output_dir, pngname), mask * 255)
    logger.info('Evaluating...')
    cityscapes_eval.main([])
    return None

    
    
def get_raw_dir(name):
    '''Retrieve the raw dir for the dataset.'''
    return _DATASETS[name][_RAW_DIR]

    
        def _distribute_rois_over_fpn_levels(rois_blob_name):
        '''Distribute rois over the different FPN levels.'''
        # Get target level for each roi
        # Recall blob rois are in (batch_idx, x1, y1, x2, y2) format, hence take
        # the box coordinates from columns 1:5
        target_lvls = fpn.map_rois_to_fpn_levels(
            blobs[rois_blob_name][:, 1:5], lvl_min, lvl_max
        )
        # Add per FPN level roi blobs named like: <rois_blob_name>_fpn<lvl>
        fpn.add_multilevel_roi_blobs(
            blobs, rois_blob_name, blobs[rois_blob_name], target_lvls, lvl_min,
            lvl_max
        )
    
    from lxml import html
    
        ('smaller', None, '10pt'),
    ('smaller', '18pt', '15pt'),
    ('larger', None, '{pt:f}pt'.format(pt=14.4)),
    ('larger', '15pt', '18pt'),
])
def test_css_relative_font_size(size, relative_to, resolved):
    if relative_to is None:
        inherited = None
    else:
        inherited = {'font-size': relative_to}
    assert_resolves('font-size: {size}'.format(size=size),
                    {'font-size': resolved}, inherited=inherited)

    
    
def FormatDebugInfoResponse( response ):
  if not response:
    return 'Server errored, no debug info from server\n'
  message = _FormatYcmdDebugInfo( response )
  completer = response[ 'completer' ]
  if completer:
    message += _FormatCompleterDebugInfo( completer )
  return message
    
    
def _HandlePollResponse( response, diagnostics_handler ):
  if isinstance( response, list ):
    for notification in response:
      if 'message' in notification:
        PostVimMessage( notification[ 'message' ],
                        warning = False,
                        truncate = True )
      elif 'diagnostics' in notification:
        diagnostics_handler.UpdateWithNewDiagnosticsForFile(
          notification[ 'filepath' ],
          notification[ 'diagnostics' ] )
  elif response is False:
    # Don't keep polling for this file
    return False
  # else any truthy response means 'nothing to see here; poll again in a
  # while'
    
    
def HandlePollResponse_NoMessages_test():
  assert_that( _HandlePollResponse( True, None ), equal_to( True ) )
    
    accepted_chars = re.compile(r'[\u4E00-\u9FD5]+')
    
    
def viterbi(obs, states, start_p, trans_p, emit_p):
    V = [{}]  # tabular
    path = {}
    for y in states:  # init
        V[0][y] = start_p[y] + emit_p[y].get(obs[0], MIN_FLOAT)
        path[y] = [y]
    for t in xrange(1, len(obs)):
        V.append({})
        newpath = {}
        for y in states:
            em_p = emit_p[y].get(obs[t], MIN_FLOAT)
            (prob, state) = max(
                [(V[t - 1][y0] + trans_p[y0].get(y, MIN_FLOAT) + em_p, y0) for y0 in PrevStatus[y]])
            V[t][y] = prob
            newpath[y] = path[state] + [y]
        path = newpath
    
    file_name = args[0]
    
            print('Test: Multiple dequeue in a row')
        assert_equal(queue.dequeue(), 1)
        assert_equal(queue.dequeue(), 2)
    
    		PostOrder(self.root)
		return postOrder
    
    		print('Test: insert checking with post order traversal')
		expectVal = [7, 25, 10, 38, 40, 30, 60, 80, 70, 50]
		assert_equal(myTree.printPostOrder(), expectVal)
		expectVal = [91, 81, 71, 61, 51, 41, 31, 21, 11, 1]
		assert_equal(myTree2.printPostOrder(), expectVal)
    
            print('Test: set on an empty hash table index')
        hash_table.set(0, 'foo')
        assert_equal(hash_table.get(0), 'foo')
        hash_table.set(1, 'bar')
        assert_equal(hash_table.get(1), 'bar')