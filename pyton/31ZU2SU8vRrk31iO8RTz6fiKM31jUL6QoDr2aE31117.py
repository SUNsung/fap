
        
            def __init__(self, employee_id, name, rank, call_center):
        self.employee_id = employee_id
        self.name = name
        self.rank = rank
        self.call = None
        self.call_center = call_center
    
        def __init__(self, vehicle_size, license_plate, spot_size):
        self.vehicle_size = vehicle_size
        self.license_plate = license_plate
        self.spot_size
        self.spots_taken = []
    
    
class DefaultCategories(Enum):
    
    
class LookupService(object):
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
        Returns:
      the labels of these instances.
    '''
    return session.run(self.labels_to_load,
                       feed_dict={self.instances_to_load: instances})
    
        for i, word in enumerate(self._id_to_word):
      if i == self.bos:
        self._word_char_ids[i] = self.bos_chars
      elif i == self.eos:
        self._word_char_ids[i] = self.eos_chars
      else:
        self._word_char_ids[i] = self._convert_word_to_char_ids(word)
    
      if epoch_size == 0:
    raise ValueError('epoch_size == 0, decrease batch_size or num_steps')
    
    # Dependency imports
    
                elif opt in ('-V', '--version'):
                # Display version.
                log.println('you-get:', log.BOLD)
                log.println('    version:  {}'.format(__version__))
                if head is not None:
                    log.println('    branch:   {}\n    commit:   {}'.format(*head))
                else:
                    log.println('    branch:   {}\n    commit:   {}'.format('(stable)', '(tag v{})'.format(__version__)))
    
        #call extractor decided by sourceId
    if sourceType == 'sina':
        sina_download_by_vid(sourceId, title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif sourceType == 'youku':
        youku_download_by_vid(sourceId, title=title, output_dir=output_dir, merge=merge, info_only=info_only, **kwargs)
    elif sourceType == 'tudou':
        tudou_download_by_iid(sourceId, title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif sourceType == 'qq':
        qq_download_by_vid(sourceId, title, True, output_dir=output_dir, merge=merge, info_only=info_only)
    elif sourceType == 'letv':
        letvcloud_download_by_vu(sourceId, '2d8c027396', title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif sourceType == 'zhuzhan':
        #As in Jul.28.2016, Acfun is using embsig to anti hotlink so we need to pass this
#In Mar. 2017 there is a dedicated ``acfun_proxy'' in youku cloud player
#old code removed
        url = 'http://www.acfun.cn/v/ac' + vid
        yk_streams = youku_acfun_proxy(info['sourceId'], info['encode'], url)
        seq = ['mp4hd3', 'mp4hd2', 'mp4hd', 'flvhd']
        for t in seq:
            if yk_streams.get(t):
                preferred = yk_streams[t]
                break
#total_size in the json could be incorrect(F.I. 0)
        size = 0
        for url in preferred[0]:
            _, _, seg_size = url_info(url)
            size += seg_size
#fallback to flvhd is not quite possible
        print_info(site_info, title, 'mp4', size)
        if not info_only:
            download_urls(preferred[0], title, 'mp4', size, output_dir=output_dir, merge=merge)
    else:
        raise NotImplementedError(sourceType)
    
    from ..common import *
from ..extractor import VideoExtractor
    
    site_info = 'CNTV.com'
download = cntv_download
download_playlist = playlist_not_supported('cntv')

    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
        # Try harder, check all iframes
    if 'recur_lv' not in kwargs or kwargs['recur_lv'] < recur_limit:
        r = kwargs.get('recur_lv')
        if r is None:
            r = 1
        else:
            r += 1
        iframes = matchall(content, [r'<iframe.+?src=(?:\'|\')(.+?)(?:\'|\')'])
        for iframe in iframes:
            if not iframe.startswith('http'):
                src = urllib.parse.urljoin(url, iframe)
            else:
                src = iframe
            found = embed_download(src, output_dir=output_dir, merge=merge, info_only=info_only, recur_lv=r, **kwargs)
            if found:
                return True
    
        sd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'sd_src_no_ratelimit:'([^']*)'', html)
    ]))
    hd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'hd_src_no_ratelimit:'([^']*)'', html)
    ]))
    urls = hd_urls if hd_urls else sd_urls
    
        title = html['data']['tv']['title']
    
    #----------------------------------------------------------------------
def makeMimi(upid):
    '''From http://cdn37.atwikiimg.com/sitescript/pub/dksitescript/FC2.site.js
    Also com.hps.util.fc2.FC2EncrptUtil.makeMimiLocal
    L110'''
    strSeed = 'gGddgPfeaf_gzyr'
    prehash = upid + '_' + strSeed
    return md5(prehash.encode('utf-8')).hexdigest()
    
    def get_single_photo_url(url):
    page = get_html(url)
    pid = get_photo_id(url, page)
    title = match1(page, pattern_inline_title)
    if match1(page, pattern_inline_video_mark):
        api_key = get_api_key(page)
        reply = get_content(tmpl_api_call_photo_info % (api_key, get_photo_id(url, page)))
        secret = json.loads(reply)['photo']['secret']
        return get_orig_video_source(api_key, pid, secret), title
    #last match always has the best resolution
    match = match1(page, pattern_inline_img_url)
    return 'https:' + match.replace('\\', ''), title
    
        :param img: An image (as a numpy array)
    :param number_of_times_to_upsample: How many times to upsample the image looking for faces. Higher numbers find smaller faces.
    :param model: Which face detection model to use. 'hog' is less accurate but faster on CPUs. 'cnn' is a more accurate
                  deep-learning model which is GPU/CUDA accelerated (if available). The default is 'hog'.
    :return: A list of tuples of found face locations in css (top, right, bottom, left) order
    '''
    if model == 'cnn':
        return [_trim_css_to_bounds(_rect_to_css(face.rect), img.shape) for face in _raw_face_locations(img, number_of_times_to_upsample, 'cnn')]
    else:
        return [_trim_css_to_bounds(_rect_to_css(face), img.shape) for face in _raw_face_locations(img, number_of_times_to_upsample, model)]
    
            # Draw a box around the face
        cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)
    
    
def test_image(image_to_check, known_names, known_face_encodings, tolerance=0.6, show_distance=False):
    unknown_image = face_recognition.load_image_file(image_to_check)