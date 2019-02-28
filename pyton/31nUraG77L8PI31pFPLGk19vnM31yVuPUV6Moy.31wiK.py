
        
          def predict_with_score(self, session, inputs):
    '''Predict the classification of the test set.
    
      return data_wxhx3

    
    model = IntegrationToBoundModel(N)
inputs_ph_t = [tf.placeholder(tf.float32,
                              shape=[None, 1]) for _ in range(ntimesteps)]
state = tf.zeros([batch_size, N])
saver = tf.train.Saver()
    
        us = np.zeros([1, ntime_steps])
    for t in range(ntime_steps):
      x_t = alpha*x_tm1 + np.dot(W,r_tm1) + b
      if input_time is not None and t == input_time:
        us[0,t] = input_magnitude
        x_t += Bin * us[0,t] # DCS is this what was used?
      r_t = np.tanh(x_t)
      x_tm1 = x_t
      r_tm1 = r_t
      rs[:,t] = r_t
    return rs, us
    
    
def _DumpEmb(vocab):
  '''Dump the softmax weights and word embeddings to files.
    
    
def create_discriminator(hparams,
                         sequence,
                         is_training,
                         reuse=None,
                         initial_state=None,
                         inputs=None,
                         present=None):
  '''Create the Discriminator model specified by the FLAGS and hparams.
    
      Args:
    hparams:  MaskGAN hyperparameters.
    learning_rate:  tf.Variable scalar learning rate.
    final_gen_objective:  Scalar final REINFORCE objective for the sequence.
    averages_op:  ExponentialMovingAverage apply average op to
      maintain the baseline.
    global_step:  global_step tf.Variable.
    
        elif FLAGS.discriminator_model == 'seq2seq_vd':
      load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
      print('Restoring Discriminator from %s.' % load_ckpt)
      tf.logging.info('Restoring Discriminator from %s.' % load_ckpt)
      dis_encoder_init_saver = init_savers['dis_encoder_init_saver']
      dis_decoder_init_saver = init_savers['dis_decoder_init_saver']
      dis_encoder_init_saver.restore(sess, load_ckpt)
      dis_decoder_init_saver.restore(sess, load_ckpt)
    
        def test_encode_override(self):
        self.assertEqual('y', self.field.encode('y'))
    
        :param str vhost_path: Augeas virtual host path
    
            # Make sure calls made to mocked function were correct
        self.assertEqual(
            mock_setup_cert.call_args_list[0], mock.call(self.achalls[0]))
        self.assertEqual(
            mock_setup_cert.call_args_list[1], mock.call(self.achalls[1]))
    
            # Put the blurred face region back into the frame image
        frame[top:bottom, left:right] = face_image
    
        if os.path.isdir(image_to_check):
        if cpus == 1:
            [test_image(image_file, model) for image_file in image_files_in_folder(image_to_check)]
        else:
            process_images_in_process_pool(image_files_in_folder(image_to_check), cpus, model)
    else:
        test_image(image_to_check, model)
    
            face_names = []
        for face_encoding in face_encodings:
            # See if the face is a match for the known face(s)
            matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
            name = 'Unknown'
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
    
def image_files_in_folder(folder):
    return [os.path.join(folder, f) for f in os.listdir(folder) if re.match(r'.*\.(jpg|jpeg|png)', f, flags=re.I)]
    
    with open('HISTORY.rst') as history_file:
    history = history_file.read()
    
    # coco (val5k)
# INFO roidb.py: 220: 1        person: 21296
# INFO roidb.py: 220: 2       bicycle: 628
# INFO roidb.py: 220: 3           car: 3818
# INFO roidb.py: 220: 4    motorcycle: 732
# INFO roidb.py: 220: 5      airplane: 286 <------ irrelevant
# INFO roidb.py: 220: 6           bus: 564
# INFO roidb.py: 220: 7         train: 380
# INFO roidb.py: 220: 8         truck: 828
    
    
def _do_matlab_eval(json_dataset, salt, output_dir='output'):
    import subprocess
    logger.info('-----------------------------------------------------')
    logger.info('Computing results with the official MATLAB eval code.')
    logger.info('-----------------------------------------------------')
    info = voc_info(json_dataset)
    path = os.path.join(
        cfg.ROOT_DIR, 'detectron', 'datasets', 'VOCdevkit-matlab-wrapper')
    cmd = 'cd {} && '.format(path)
    cmd += '{:s} -nodisplay -nodesktop '.format(cfg.MATLAB)
    cmd += '-r 'dbstop if error; '
    cmd += 'voc_eval(\'{:s}\',\'{:s}\',\'{:s}\',\'{:s}\'); quit;'' \
       .format(info['devkit_path'], 'comp4' + salt, info['image_set'],
               output_dir)
    logger.info('Running:\n{}'.format(cmd))
    subprocess.call(cmd, shell=True)
    
        conv_body_func(model)
    blobs_fpn, dim_fpn, spatial_scales_fpn = add_fpn(
        model, fpn_level_info_func()
    )
    
    
def add_keypoint_losses(model):
    '''Add Mask R-CNN keypoint specific losses.'''
    # Reshape input from (N, K, H, W) to (NK, HW)
    model.net.Reshape(
        ['kps_score'], ['kps_score_reshaped', '_kps_score_old_shape'],
        shape=(-1, cfg.KRCNN.HEATMAP_SIZE * cfg.KRCNN.HEATMAP_SIZE)
    )
    # Softmax across **space** (woahh....space!)
    # Note: this is not what is commonly called 'spatial softmax'
    # (i.e., softmax applied along the channel dimension at each spatial
    # location); This is softmax applied over a set of spatial locations (i.e.,
    # each spatial location is a 'class').
    kps_prob, loss_kps = model.net.SoftmaxWithLoss(
        ['kps_score_reshaped', 'keypoint_locations_int32', 'keypoint_weights'],
        ['kps_prob', 'loss_kps'],
        scale=cfg.KRCNN.LOSS_WEIGHT / cfg.NUM_GPUS,
        spatial=0
    )
    if not cfg.KRCNN.NORMALIZE_BY_VISIBLE_KEYPOINTS:
        # Discussion: the softmax loss above will average the loss by the sum of
        # keypoint_weights, i.e. the total number of visible keypoints. Since
        # the number of visible keypoints can vary significantly between
        # minibatches, this has the effect of up-weighting the importance of
        # minibatches with few visible keypoints. (Imagine the extreme case of
        # only one visible keypoint versus N: in the case of N, each one
        # contributes 1/N to the gradient compared to the single keypoint
        # determining the gradient direction). Instead, we can normalize the
        # loss by the total number of keypoints, if it were the case that all
        # keypoints were visible in a full minibatch. (Returning to the example,
        # this means that the one visible keypoint contributes as much as each
        # of the N keypoints.)
        model.StopGradient(
            'keypoint_loss_normalizer', 'keypoint_loss_normalizer'
        )
        loss_kps = model.net.Mul(
            ['loss_kps', 'keypoint_loss_normalizer'], 'loss_kps_normalized'
        )
    loss_gradients = blob_utils.get_loss_gradients(model, [loss_kps])
    model.AddLosses(loss_kps)
    return loss_gradients
    
    from caffe2.python import muji
    
        blobs['retnet_fg_num'], blobs['retnet_bg_num'] = 0.0, 0.0
    for im_i, entry in enumerate(roidb):
        scale = im_scales[im_i]
        im_height = np.round(entry['height'] * scale)
        im_width = np.round(entry['width'] * scale)
        gt_inds = np.where(
            (entry['gt_classes'] > 0) & (entry['is_crowd'] == 0))[0]
        assert len(gt_inds) > 0, \
            'Empty ground truth empty for image is not allowed. Please check.'