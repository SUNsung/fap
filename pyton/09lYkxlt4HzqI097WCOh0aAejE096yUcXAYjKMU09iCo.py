
        
            def add_user(self, user):
        pass
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
      Returns:
     The total loss for a batch of data.
  '''
  with tf.variable_scope(
      tf.get_variable_scope(), reuse=True if reuse_variable else None):
    _build_deeplab(iterator, {common.OUTPUT_TYPE: num_of_classes}, ignore_label)
    
    from delf import datum_io
    
          return vlad
    
      Returns:
    List of subtoken sets, where subtokens in set i have the same length=i.
  '''
  # Create list of buckets, where subtokens in bucket i have length i.
  subtoken_buckets = []
  for subtoken, count in six.iteritems(subtoken_counts):
    if count < min_count:  # Filter out subtokens that don't appear enough
      continue
    while len(subtoken_buckets) <= len(subtoken):
      subtoken_buckets.append(set())
    subtoken_buckets[len(subtoken)].add(subtoken)
  return subtoken_buckets
    
    
def _metric_max_over_ground_truths(metric_fn, prediction, ground_truths):
  '''Computes the max over all metric scores.'''
  scores_for_ground_truths = []
  for ground_truth in ground_truths:
    score = metric_fn(prediction, ground_truth)
    scores_for_ground_truths.append(score)
  return max(scores_for_ground_truths)
    
      # Find nearest-neighbor matches using a KD tree.
  index_image_tree = spatial.cKDTree(index_image_descriptors)
  _, indices = index_image_tree.query(
      query_descriptors, distance_upper_bound=_FEATURE_DISTANCE_THRESHOLD)
    
      # Perform geometric verification using RANSAC.
  _, inliers = measure.ransac((locations_1_to_use, locations_2_to_use),
                              transform.AffineTransform,
                              min_samples=3,
                              residual_threshold=20,
                              max_trials=1000)
    
    for face_location in face_locations:
    
    
def detect_faces_in_image(file_stream):
    # Pre-calculated face encoding of Obama generated with face_recognition.face_encodings(img)
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
    
            # empty python list
        faces_to_compare = []
    
            Use attention **before** lstm:
            ```
            tf.reset_default_graph()
    
        with tf.variable_scope(name or 'conv2d', reuse=reuse):
        W, b = get_wb(kernel_shape)
    
            with tf.variable_scope('transform'):
            W_T, b_T = get_wb([n_input, n_input], b_initializer=tf.initializers.constant(carry_bias))
    
            # similarity matrix
        S = tf.reshape(tf.einsum('ntjd,do->ntjo', h_u_hu, W_s), [-1, T, J])  # [N, T, J]
        # 以上操作等价于
        # S = tf.reshape(tf.matmul(tf.reshape(h_u_hu, [-1, 3*d]), W_s), [-1, T, J])
    
            try:
            idp = IdentityProvider.objects.get(
                external_id=integration.external_id,
                type='slack',
            )
        except IdentityProvider.DoesNotExist:
            raise Http404
    
            message = 'Background workers haven't checked in recently. '
        if backlogged:
            message += 'It seems that you have a backlog of %d tasks. Either your workers aren't running or you need more capacity.' % size
        else:
            message += 'This is likely an issue with your configuration or the workers aren't running.'
    
            # Removing index on 'EventTag', fields ['group_id', 'key', 'value']
        db.delete_index(u'tagstore_eventtag', ['group_id', 'key_id', 'value_id'])
    
        complete_apps = ['tagstore']

    
        This is currenlty only used for ``in_next_release`` resolutions.
    '''
    try:
        release = Release.objects.get_from_cache(
            id=release_id,
        )
    except Release.DoesNotExist:
        return
    
            for job in job_list:
            logger.debug('Sending scheduled job %s with payload %r', job.name, job.payload)
            app.send_task(job.name, kwargs=job.payload)
            job.delete()
