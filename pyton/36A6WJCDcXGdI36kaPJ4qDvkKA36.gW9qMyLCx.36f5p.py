
        
            @get_item_parameters
    def test_getitem(self, key, value):
        assert self.lookup_dict[key] == value
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
    # Add any extra paths that contain custom files (such as robots.txt or
# .htaccess) here, relative to this directory. These files are copied
# directly to the root of the documentation.
#html_extra_path = []
    
        For example, ``headers['content-encoding']`` will return the
    value of a ``'Content-Encoding'`` response header, regardless
    of how the header name was originally stored.
    
            # Merge all the kwargs.
        proxies = merge_setting(proxies, self.proxies)
        stream = merge_setting(stream, self.stream)
        verify = merge_setting(verify, self.verify)
        cert = merge_setting(cert, self.cert)
    
        def setUp(self):
        super(AuthenticatorTest, self).setUp()
    
        def _get_digitalocean_client(self):
        return _DigitalOceanClient(self.credentials.conf('token'))
    
        def __init__(self, config, account_, auth, installer, acme=None):
        '''Initialize a client.'''
        self.config = config
        self.account = account_
        self.auth = auth
        self.installer = installer
    
        def setUp(self):
        from acme.errors import PollError
        self.timeout = PollError(
            exhausted=set([mock.sentinel.AR]),
            updated={})
        self.invalid = PollError(exhausted=set(), updated={
            mock.sentinel.AR: mock.sentinel.AR2})
    
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
    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
    
def huaban_download_board(url, output_dir, **kwargs):
    kwargs['merge'] = False
    board = extract_board_data(url)
    output_dir = os.path.join(output_dir, board.title)
    print_info(site_info, board.title, 'jpg', float('Inf'))
    for pin in board.pins:
        download_urls([pin.url], pin.id, pin.ext, float('Inf'),
                      output_dir=output_dir, faker=True, **kwargs)
    
            print_info(site_info, title, type_, size_full)
        if not info_only:
            download_urls(url_list, title, ext, total_size=size_full, output_dir=output_dir, merge=merge, headers=fake_headers)
    else:
        raise NotImplementedError(flashvars)
    
        # ordered list of supported stream types / qualities on this site
    # order: high quality -> low quality
    stream_types = [
        {'id': 'original'}, # contains an 'id' or 'itag' field at minimum
        {'id': 'small'},
    ]
    
        assert stream_url
    
      matched = Match(r'\s*(public|protected|private):', clean_lines.lines[linenum])
  if matched:
    # Issue warning if the line before public/protected/private was
    # not a blank line, but don't do this if the previous line contains
    # 'class' or 'struct'.  This can happen two ways:
    #  - We are at the beginning of the class.
    #  - We are forward-declaring an inner class that is semantically
    #    private, but needed to be public for implementation reasons.
    # Also ignores cases where the previous line ends with a backslash as can be
    # common when defining classes in C macros.
    prev_line = clean_lines.lines[linenum - 1]
    if (not IsBlankLine(prev_line) and
        not Search(r'\b(class|struct)\b', prev_line) and
        not Search(r'\\$', prev_line)):
      # Try a bit harder to find the beginning of the class.  This is to
      # account for multi-line base-specifier lists, e.g.:
      #   class Derived
      #       : public Base {
      end_class_head = class_info.starting_linenum
      for i in range(class_info.starting_linenum, linenum):
        if Search(r'\{\s*$', clean_lines.lines[i]):
          end_class_head = i
          break
      if end_class_head < linenum - 1:
        error(filename, linenum, 'whitespace/blank_line', 3,
              ''%s:' should be preceded by a blank line' % matched.group(1))
    }
    }
    
    
def keypoint_rcnn_frozen_features(model):
    logger.warn('Deprecated: use `TRAIN.FREEZE_CONV_BODY: True` instead')
    return build_generic_detection_model(
        model,
        get_func(cfg.MODEL.CONV_BODY),
        add_roi_box_head_func=get_func(cfg.FAST_RCNN.ROI_BOX_HEAD),
        add_roi_keypoint_head_func=get_func(cfg.KRCNN.ROI_KEYPOINTS_HEAD),
        freeze_conv_body=True
    )
    
            retinanet_blobs, fg_num, bg_num = _get_retinanet_blobs(
            foas, all_anchors, gt_rois, gt_classes, image_width, image_height)
        for i, foa in enumerate(foas):
            for k, v in retinanet_blobs[i].items():
                # the way it stacks is:
                # [[anchors for image1] + [anchors for images 2]]
                level = int(np.log2(foa.stride))
                key = '{}_fpn{}'.format(k, level)
                if k == 'retnet_roi_fg_bbox_locs':
                    v[:, 0] = im_i
                    # loc_stride: 80 * 4 if cls_specific else 4
                    loc_stride = 4  # 4 coordinate corresponding to bbox prediction
                    if cfg.RETINANET.CLASS_SPECIFIC_BBOX:
                        loc_stride *= (cfg.MODEL.NUM_CLASSES - 1)
                    anchor_ind = foa.octave * num_aspect_ratios + foa.aspect
                    # v[:, 1] is the class label [range 0-80] if we do
                    # class-specfic bbox otherwise it is 0. In case of class
                    # specific, based on the label, the location of current
                    # anchor is class_label * 4 and then we take into account
                    # the anchor_ind if the anchors
                    v[:, 1] *= 4
                    v[:, 1] += loc_stride * anchor_ind
                blobs[key].append(v)
        blobs['retnet_fg_num'] += fg_num
        blobs['retnet_bg_num'] += bg_num
    
            # Test bigger boxes
        b1 = random_boxes([10, 10, 110, 20], 20, 10)
        b2 = random_boxes([10, 10, 110, 20], 20, 10)
        _do_test(b1, b2)
    
            # Test: merge with converted type
        cfg2 = AttrDict()
        cfg2.TRAIN = AttrDict()
        cfg2.TRAIN.SCALES = [1]
        core_config.merge_cfg_from_cfg(cfg2)
        assert type(cfg.TRAIN.SCALES) is tuple
        assert cfg.TRAIN.SCALES[0] == 1