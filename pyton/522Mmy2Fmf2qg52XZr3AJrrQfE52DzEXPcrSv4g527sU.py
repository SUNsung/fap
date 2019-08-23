
        
        # Change to [0.5, 0.75, 1.0, 1.25, 1.5, 1.75] for multi-scale test.
flags.DEFINE_multi_float('eval_scales', [1.0],
                         'The scales to resize images for evaluation.')
    
      def remove_punc(text):
    exclude = set(string.punctuation)
    return ''.join(ch for ch in text if ch not in exclude)
    
      def after_create_session(self, session, coord):
    '''Initialize the iterator after the session has been created.'''
    del coord
    self.iterator_initializer_fn(session)
    
    
def main(argv):
  if len(argv) > 1:
    raise RuntimeError('Too many command-line arguments.')
    
          start = time.clock()
      for i in range(num_images):
        query_image_name = query_list[i]
        input_image_filename = os.path.join(cmd_args.images_dir,
                                            query_image_name + _IMAGE_EXTENSION)
        output_feature_filename = os.path.join(
            cmd_args.output_features_dir, query_image_name + _DELF_EXTENSION)
        if tf.gfile.Exists(output_feature_filename):
          tf.logging.info('Skipping %s', query_image_name)
          continue
    
      # Find nearest-neighbor matches using a KD tree.
  d1_tree = spatial.cKDTree(descriptors_1)
  _, indices = d1_tree.query(
      descriptors_2, distance_upper_bound=_DISTANCE_THRESHOLD)
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
        mime, ext, size = url_info(real_url)
    
            if 'title' not in kwargs:
            url = 'http://pv.funshion.com/v5/video/profile/?id={}&cl=mweb&uc=111'.format(self.vid)
            meta = json.loads(get_content(url))
            self.title = meta['name']
        else:
            self.title = kwargs['title']
    
        m3u8_url = get_m3u8_url(stream_id)
    
            elif re.search(r'i\.imgur\.com/', self.url):
            # direct image
            _, container, size = url_info(self.url)
            self.streams = {
                'original': {
                    'src': [self.url],
                    'size': size,
                    'container': container
                }
            }
            self.title = r1(r'i\.imgur\.com/([^./]*)', self.url)