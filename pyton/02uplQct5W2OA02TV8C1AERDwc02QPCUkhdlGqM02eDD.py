
        
          # Parse AggregationConfig proto, and select output extension.
  config = aggregation_config_pb2.AggregationConfig()
  with tf.gfile.GFile(aggregation_config_path, 'r') as f:
    text_format.Merge(f.read(), config)
  output_extension = '.'
  if config.use_regional_aggregation:
    output_extension += 'r'
  if config.aggregation_type == _VLAD:
    output_extension += _VLAD_EXTENSION_SUFFIX
  elif config.aggregation_type == _ASMK:
    output_extension += _ASMK_EXTENSION_SUFFIX
  elif config.aggregation_type == _ASMK_STAR:
    output_extension += _ASMK_STAR_EXTENSION_SUFFIX
  else:
    raise ValueError('Invalid aggregation type: %d' % config.aggregation_type)
    
      fig, ax = plt.subplots(1)
  ax.imshow(image)
  for i, box in enumerate(boxes):
    scaled_box = [
        box[0] * height, box[1] * width, box[2] * height, box[3] * width
    ]
    rect = patches.Rectangle([scaled_box[1], scaled_box[0]],
                             scaled_box[3] - scaled_box[1],
                             scaled_box[2] - scaled_box[0],
                             linewidth=3,
                             edgecolor=_BOX_EDGE_COLORS[i %
                                                        len(_BOX_EDGE_COLORS)],
                             facecolor='none')
    ax.add_patch(rect)
    
        (locations_out, descriptors_out, feature_scales_out,
     attention_out) = sess.run(
         [locations, descriptors, feature_scales, attention],
         feed_dict={
             input_image: resized_image,
             input_score_threshold: config.delf_local_config.score_threshold,
             input_image_scales: list(config.image_scales),
             input_max_feature_num: config.delf_local_config.max_feature_num
         })
    rescaled_locations_out = locations_out / scale_factor
    
      Args:
    predictions: Dict mapping test image ID to a dict with keys 'class'
      (integer) and 'score' (float).
    recognition_solution: Dict mapping test image ID to list of ground-truth
      landmark IDs.
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
    	for video in tab.childNodes:
		if re.search(contentid, video.attributes['link'].value):
			url = video.attributes['flv'].value
			break
    
    def ifeng_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
# old pattern /uuid.shtml
# now it could be #uuid
    id = r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', url)
    if id:
        return ifeng_download_by_id(id, None, output_dir = output_dir, merge = merge, info_only = info_only)
    
            # cookie handler
        ssl_context = request.HTTPSHandler(
            context=ssl.SSLContext(ssl.PROTOCOL_TLSv1))
        cookie_handler = request.HTTPCookieProcessor()
        opener = request.build_opener(ssl_context, cookie_handler)
        opener.addheaders = [
            ('Referer', self.url),
            ('Cookie',
             'CloudFront-Policy=%s;CloudFront-Signature=%s;CloudFront-Key-Pair-Id=%s' % (scp, scs, sck))
        ]
        request.install_opener(opener)
    
        def test_same_server(self):
        from certbot_apache.obj import VirtualHost
        no_name1 = VirtualHost(
            'fp', 'vhp', set([self.addr1]), False, False, None)
        no_name2 = VirtualHost(
            'fp', 'vhp', set([self.addr2]), False, False, None)
        no_name3 = VirtualHost(
            'fp', 'vhp', set([self.addr_default]),
            False, False, None)
        no_name4 = VirtualHost(
            'fp', 'vhp', set([self.addr2, self.addr_default]),
            False, False, None)
    
        :param dict values: A map of values to write.
    :param str path: Where to write the values.
    '''
    
        def _get_obs(self):
        return (np.array([float(self.wealth)]), self.rounds_elapsed, self.wins,
                self.losses, np.array([float(self.max_ever_wealth)]))
    
            if not self.has_object:
            achieved_goal = grip_pos.copy()
        else:
            achieved_goal = np.squeeze(object_pos.copy())
        obs = np.concatenate([
            grip_pos, object_pos.ravel(), object_rel_pos.ravel(), gripper_state, object_rot.ravel(),
            object_velp.ravel(), object_velr.ravel(), grip_velp, gripper_vel,
        ])
    
        def viewer_setup(self):
        self.viewer.cam.trackbodyid = 2
        self.viewer.cam.distance = self.model.stat.extent * 0.5
        self.viewer.cam.lookat[2] = 1.15
        self.viewer.cam.elevation = -20

    
        def _move(self, movement):
        named = self.MOVEMENTS[movement]
        x, y = self.read_head_position
        if named == 'left':
            x -= 1
        elif named == 'right':
            x += 1
        elif named == 'up':
            y -= 1
        elif named == 'down':
            y += 1
        else:
            raise ValueError('Unrecognized direction: {}'.format(named))
        self.read_head_position = x, y
    
            obs = np.zeros( (FIELD_H,FIELD_W,3), dtype=np.uint8 )
        obs[:,:,:] = self.bg_color
        obs[FIELD_H-5:FIELD_H,:,:] = self.wall_color
        obs[FIELD_H-5:FIELD_H, self.hole_x-HOLE_WIDTH//2:self.hole_x+HOLE_WIDTH//2+1, :] = self.bg_color
        obs[self.cube_y-1:self.cube_y+2, self.cube_x-1:self.cube_x+2, :] = self.cube_color
        if self.use_black_screen and self.step_n > 4:
            obs[:] = np.zeros((3,), dtype=np.uint8)
    
            for obj in self.particles:
            obj.ttl -= 0.15
            obj.color1 = (max(0.2,0.2+obj.ttl), max(0.2,0.5*obj.ttl), max(0.2,0.5*obj.ttl))
            obj.color2 = (max(0.2,0.2+obj.ttl), max(0.2,0.5*obj.ttl), max(0.2,0.5*obj.ttl))