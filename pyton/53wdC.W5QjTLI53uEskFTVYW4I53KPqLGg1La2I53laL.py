
        
          Returns:
    The word embeddings IDs, paths and counts
  '''
  features = tf.parse_example(
      record, {
          'x_embedding_id': tf.FixedLenFeature([1], dtype=tf.int64),
          'y_embedding_id': tf.FixedLenFeature([1], dtype=tf.int64),
          'nc_embedding_id': tf.FixedLenFeature([1], dtype=tf.int64),
          'reprs': tf.FixedLenSequenceFeature(
              shape=(), dtype=tf.string, allow_missing=True),
          'counts': tf.FixedLenSequenceFeature(
              shape=(), dtype=tf.int64, allow_missing=True),
          'rel_id': tf.FixedLenFeature([1], dtype=tf.int64)
      })
    
        Args:
      x: The input tensor from which the mean and variance are computed,
        via a linear transformation of x.  I.e.
          mu = Wx + b, log(var) = Mx + c
      z_size: The size of the distribution.
      name:  The name to prefix to learned variables.
      var_min (optional): Minimal variance allowed.  This is an additional
        way to control the amount of information getting through the stochastic
        layer.
    '''
    size_bxn = tf.stack([tf.shape(x_bxu)[0], z_size])
    self.mean_bxn = mean_bxn = linear(x_bxu, z_size, name=(name+'/mean'))
    logvar_bxn = linear(x_bxu, z_size, name=(name+'/logvar'))
    if var_min > 0.0:
      logvar_bxn = tf.log(tf.exp(logvar_bxn) + var_min)
    self.logvar_bxn = logvar_bxn
    
        # STOCHASTIC LATENT VARIABLES, priors and posteriors
    # (initial conditions g0, and control inputs, u_t)
    # Note that zs represent all the stochastic latent variables.
    with tf.variable_scope('z', reuse=False):
      self.prior_zs_g0 = None
      self.posterior_zs_g0 = None
      self.g0s_val = None
      if ic_dim > 0:
        self.prior_zs_g0 = \
            LearnableDiagonalGaussian(batch_size, ic_dim, name='prior_g0',
                                      mean_init=0.0,
                                      var_min=hps.ic_prior_var_min,
                                      var_init=hps.ic_prior_var_scale,
                                      var_max=hps.ic_prior_var_max)
        ic_enc = tf.concat(axis=1, values=[ic_enc_fwd[-1], ic_enc_rev[0]])
        ic_enc = tf.nn.dropout(ic_enc, keep_prob)
        self.posterior_zs_g0 = \
            DiagonalGaussianFromInput(ic_enc, ic_dim, 'ic_enc_2_post_g0',
                                      var_min=hps.ic_post_var_min)
        if kind in ['train', 'posterior_sample_and_average',
                    'posterior_push_mean']:
          zs_g0 = self.posterior_zs_g0
        else:
          zs_g0 = self.prior_zs_g0
        if kind in ['train', 'posterior_sample_and_average', 'prior_sample']:
          self.g0s_val = zs_g0.sample
        else:
          self.g0s_val = zs_g0.mean
    
      # Convert from figure to an numpy array width x height x 3 (last for RGB)
  f.canvas.draw()
  data = np.fromstring(f.canvas.tostring_rgb(), dtype=np.uint8, sep='')
  data_wxhx3 = data.reshape(f.canvas.get_width_height()[::-1] + (3,))
  plt.close()
    
        if FLAGS.prefix_label and use_prefix:
      label = sequence_example.context.feature['class'].int64_list.value[0]
      review_words = [EOS_INDEX + 1 + label]
    else:
      review_words = []
    review_words.extend([
        f.int64_list.value[0]
        for f in sequence_example.feature_lists.feature_list['token_id'].feature
    ])
    all_words.append(review_words)
  return all_words
    
              if FLAGS.data_set == 'ptb':
            # Statefulness for *evaluation* Generator.
            for i, (c, h) in enumerate(model.eval_initial_state):
              eval_feed[c] = gen_initial_state_eval[i].c
              eval_feed[h] = gen_initial_state_eval[i].h
    
        for index, pred in zip(index_batch, pred_batch):
      indices_predictions.append([str(id_to_word[index]), pred])
    batch_of_indices_predictions.append(indices_predictions)
  return batch_of_indices_predictions
    
          else:
        raise NotImplementedError
    
        @property
    def suffixes(self):
        '''A list of the final component's suffixes, if any.'''
        name = self.name
        if name.endswith('.'):
            return []
        name = name.lstrip('.')
        return ['.' + suffix for suffix in name.split('.')[1:]]
    
        Note that not all entries are resources.  Specifically, directories are
    not considered resources.  Use `is_resource()` on each entry returned here
    to check if it is a resource or not.
    '''
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.contents()
    # Is the package a namespace package?  By definition, namespace packages
    # cannot have resources.  We could use _check_location() and catch the
    # exception, but that's extra work, so just inline the check.
    elif package.__spec__.origin is None or not package.__spec__.has_location:
        return ()
    else:
        package_directory = Path(package.__spec__.origin).parent
        return os.listdir(package_directory)

    
    dom = xml.dom.minidom.parseString(document)
    
        print('-' * 20)
    
    p = Point(4.0, -3.2)
    
        classifiers = proj_info['classifiers'],
    
    if __name__ == '__main__':
    main()

    
    from .theplatform import theplatform_download_by_pid
    
        if re.match(re_str, url):
        html = get_content(url)
        title = match1(html, r'<title>(.+)丨(.+)</title>')  #title
        
        # player loaded via internal iframe
        frame_url = re.search(r'<iframe src=\'(.+?)\'', html).group(1)
        logging.debug('dilidili_download: %s' % frame_url)
        
        #https://player.005.tv:60000/?vid=a8760f03fd:a04808d307&v=yun&sign=a68f8110cacd892bc5b094c8e5348432
        html = get_content(frame_url, headers=headers, decoded=False).decode('utf-8')
        
        match = re.search(r'(.+?)var video =(.+?);', html)
        vid = match1(html, r'var vid='(.+)'')
        hd2 = match1(html, r'var hd2='(.+)'')
        typ = match1(html, r'var typ='(.+)'')
        sign = match1(html, r'var sign='(.+)'')
        tmsign = match1(html, r'tmsign=([A-Za-z0-9]+)')
        ulk =  match1(html, r'var ulk='(.+)'')
    
    def get_orig_video_source(api_key, pid, secret):
    parsed = json.loads(get_content_headered(tmpl_api_call_video_info % (api_key, pid, secret)))
    for stream in parsed['streams']['stream']:
        if stream['type'] == 'orig':
            return stream['_content'].replace('\\', '')
    return None
    
            extractor = Funshion()
        for ep in meta['episodes']:
            title = '{}_{}_{}'.format(drama_name, ep['num'], ep['name'])
            extractor.download_by_vid(ep['id'], title=title, **kwargs)
    else:
        log.wtf('Unknown url pattern')
    
                if title is None:
                response = request.urlopen(request.Request(real_url))
                if response.headers['content-disposition']:
                    filename = parse.unquote(r1(r'filename='?(.+)'?', response.headers['content-disposition'])).split('.')
                    title = ''.join(filename[:-1])
        except: pass
    
        # Apply some eyeliner
    d.line(face_landmarks['left_eye'] + [face_landmarks['left_eye'][0]], fill=(0, 0, 0, 110), width=6)
    d.line(face_landmarks['right_eye'] + [face_landmarks['right_eye'][0]], fill=(0, 0, 0, 110), width=6)
    
        :param X_img_path: path to image to be recognized
    :param knn_clf: (optional) a knn classifier object. if not specified, model_save_path must be specified.
    :param model_path: (optional) path to a pickled knn classifier. if not specified, model_save_path must be knn_clf.
    :param distance_threshold: (optional) distance threshold for face classification. the larger it is, the more chance
           of mis-classifying an unknown person as a known one.
    :return: a list of names and face locations for the recognized faces in the image: [(name, bounding box), ...].
        For faces of unrecognized persons, the name 'unknown' will be returned.
    '''
    if not os.path.isfile(X_img_path) or os.path.splitext(X_img_path)[1][1:] not in ALLOWED_EXTENSIONS:
        raise Exception('Invalid image path: {}'.format(X_img_path))
    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        # Find all the faces and face enqcodings in the frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
    # Loop through each face found in the unknown image
for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
    # See if the face is a match for the known face(s)
    matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
    
        # 图片上传失败，输出以下html代码
    return '''
    <!doctype html>
    <title>Is this a picture of Obama?</title>
    <h1>Upload a picture and see if it's a picture of Obama!</h1>
    <form method='POST' enctype='multipart/form-data'>
      <input type='file' name='file'>
      <input type='submit' value='Upload'>
    </form>
    '''