
        
          Args:
    cm: The confusion matrix.
    labels: The class names.
  '''
  columnwidth = 10
  empty_cell = ' ' * columnwidth
  short_labels = [label[:12].rjust(10, ' ') for label in labels]
    
    spiking_data_e = spikify_data(truth_data_e, rng, dt=FLAGS.dt,
                              max_firing_rate=FLAGS.max_firing_rate)
train_inds, valid_inds = get_train_n_valid_inds(E, train_percentage,
                                                nreplications)
    
        for word in self._id_to_word:
      chars_set |= set(word)
    
      # Pad to shape [height, width]
  # where height is a multiple of batch_size
  # and width is a multiple of num_timesteps
  nrow = int(np.ceil(len(preprocessed) * 1.0 / batch_size))
  ncol = int(np.ceil(max_len * 1.0 / num_timesteps))
  height, width = nrow * batch_size, ncol * num_timesteps + 1
  preprocessed = [sent + [PAD] * (width - len(sent)) for sent in preprocessed]
  preprocessed += [[PAD] * width] * (height - len(preprocessed))
    
    
def create_critic(hparams, sequence, is_training, reuse=None):
  '''Create the Critic model specified by the FLAGS and hparams.
    
    
def create_gen_train_op(hparams, learning_rate, gen_loss, global_step, mode):
  '''Create Generator train op.'''
  del hparams
  with tf.name_scope('train_generator'):
    if FLAGS.generator_optimizer == 'sgd':
      gen_optimizer = tf.train.GradientDescentOptimizer(learning_rate)
    elif FLAGS.generator_optimizer == 'adam':
      gen_optimizer = tf.train.AdamOptimizer(learning_rate)
    else:
      raise NotImplementedError
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    print('Optimizing Generator vars.')
    for v in gen_vars:
      print(v)
    if mode == 'MINIMIZE':
      gen_grads = tf.gradients(gen_loss, gen_vars)
    elif mode == 'MAXIMIZE':
      gen_grads = tf.gradients(-gen_loss, gen_vars)
    else:
      raise ValueError('Must be one of 'MINIMIZE' or 'MAXIMIZE'')
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    gen_train_op = gen_optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    return gen_train_op, gen_grads_clipped, gen_vars
    
      for t in ngrams_list:
    key = hash_function(t)
    if key in counts:
      counts[key] += 1
    else:
      counts[key] = 1
  return counts
    
        def save(self, session_key, session_dict, expire_date):
        s = self.model(session_key, self.encode(session_dict), expire_date)
        if session_dict:
            s.save()
        else:
            s.delete()  # Clear sessions with no data.
        return s
    
        lastmod = None
    all_sites_lastmod = True
    urls = []
    for site in maps:
        try:
            if callable(site):
                site = site()
            urls.extend(site.get_urls(page=page, site=req_site,
                                      protocol=req_protocol))
            if all_sites_lastmod:
                site_lastmod = getattr(site, 'latest_lastmod', None)
                if site_lastmod is not None:
                    site_lastmod = (
                        site_lastmod.utctimetuple() if isinstance(site_lastmod, datetime.datetime)
                        else site_lastmod.timetuple()
                    )
                    lastmod = site_lastmod if lastmod is None else max(lastmod, site_lastmod)
                else:
                    all_sites_lastmod = False
        except EmptyPage:
            raise Http404('Page %s empty' % page)
        except PageNotAnInteger:
            raise Http404('No page '%s'' % page)
    response = TemplateResponse(request, template_name, {'urlset': urls},
                                content_type=content_type)
    if all_sites_lastmod and lastmod is not None:
        # if lastmod is defined for all sites, set header so as
        # ConditionalGetMiddleware is able to send 304 NOT MODIFIED
        response['Last-Modified'] = http_date(timegm(lastmod))
    return response

    
    
@html_safe
class BoundField:
    'A Field plus data'
    def __init__(self, form, field, name):
        self.form = form
        self.field = field
        self.name = name
        self.html_name = form.add_prefix(name)
        self.html_initial_name = form.add_initial_prefix(name)
        self.html_initial_id = form.add_initial_prefix(self.auto_id)
        if self.field.label is None:
            self.label = pretty_name(name)
        else:
            self.label = self.field.label
        self.help_text = field.help_text or ''
    
    import cv2
import logging
import os
import uuid
    
    
def cityscapes_to_coco_with_rider(cityscapes_id):
    lookup = {
        0: 0,  # ... background
        1: 2,  # bicycle
        2: 3,  # car
        3: 1,  # person
        4: 7,  # train
        5: 8,  # truck
        6: 4,  # motorcycle
        7: 6,  # bus
        8: 1,  # rider ('person', *rider has human right!*)
    }
    return lookup[cityscapes_id]
    
    
def add_roi_Xconv1fc_gn_head(model, blob_in, dim_in, spatial_scale):
    '''Add a X conv + 1fc head, with GroupNorm'''
    hidden_dim = cfg.FAST_RCNN.CONV_HEAD_DIM
    roi_size = cfg.FAST_RCNN.ROI_XFORM_RESOLUTION
    roi_feat = model.RoIFeatureTransform(
        blob_in, 'roi_feat',
        blob_rois='rois',
        method=cfg.FAST_RCNN.ROI_XFORM_METHOD,
        resolution=roi_size,
        sampling_ratio=cfg.FAST_RCNN.ROI_XFORM_SAMPLING_RATIO,
        spatial_scale=spatial_scale
    )
    
    The design is as follows:
    
        # ==========================================================================
    # bbox tower if not sharing features with the classification tower with
    # logits and prob prediction
    # ==========================================================================
    if not cfg.RETINANET.SHARE_CLS_BBOX_TOWER:
        for lvl in range(k_min, k_max + 1):
            bl_in = blobs_in[k_max - lvl]  # blobs_in is in reversed order
            for nconv in range(cfg.RETINANET.NUM_CONVS):
                suffix = 'n{}_fpn{}'.format(nconv, lvl)
                dim_in, dim_out = dim_in, dim_in
                if lvl == k_min:
                    bl_out = model.Conv(
                        bl_in,
                        'retnet_bbox_conv_' + suffix,
                        dim_in,
                        dim_out,
                        3,
                        stride=1,
                        pad=1,
                        weight_init=('GaussianFill', {
                            'std': 0.01
                        }),
                        bias_init=('ConstantFill', {
                            'value': 0.
                        })
                    )
                else:
                    bl_out = model.ConvShared(
                        bl_in,
                        'retnet_bbox_conv_' + suffix,
                        dim_in,
                        dim_out,
                        3,
                        stride=1,
                        pad=1,
                        weight='retnet_bbox_conv_n{}_fpn{}_w'.format(
                            nconv, k_min
                        ),
                        bias='retnet_bbox_conv_n{}_fpn{}_b'.format(
                            nconv, k_min
                        )
                    )
                bl_in = model.Relu(bl_out, bl_out)
                # Add octave scales and aspect ratio
                # At least 1 convolution for dealing different aspect ratios
                bl_feat = bl_in
            bbox_feat_list.append(bl_feat)
    # Depending on the features [shared/separate] for bbox, add prediction layer
    for i, lvl in enumerate(range(k_min, k_max + 1)):
        bbox_pred = 'retnet_bbox_pred_fpn{}'.format(lvl)
        bl_feat = bbox_feat_list[i]
        if lvl == k_min:
            model.Conv(
                bl_feat,
                bbox_pred,
                dim_in,
                bbox_regr_dim * A,
                3,
                pad=1,
                stride=1,
                weight_init=('GaussianFill', {
                    'std': 0.01
                }),
                bias_init=('ConstantFill', {
                    'value': 0.
                })
            )
        else:
            model.ConvShared(
                bl_feat,
                bbox_pred,
                dim_in,
                bbox_regr_dim * A,
                3,
                pad=1,
                stride=1,
                weight='retnet_bbox_pred_fpn{}_w'.format(k_min),
                bias='retnet_bbox_pred_fpn{}_b'.format(k_min)
            )
    
        ind_kp = gt_inds[roidb['box_to_gt_ind_map']]
    within_box = _within_box(gt_keypoints[ind_kp, :, :], roidb['boxes'])
    vis_kp = gt_keypoints[ind_kp, 2, :] > 0
    is_visible = np.sum(np.logical_and(vis_kp, within_box), axis=1) > 0
    kp_fg_inds = np.where(
        np.logical_and(max_overlaps >= cfg.TRAIN.FG_THRESH, is_visible)
    )[0]
    
        def test_forward_and_gradient(self):
        A = np.random.randn(2, 3, 5, 7).astype(np.float32)
        I = np.array([0, 1], dtype=np.int32)
        self._run_op_test(A, I, check_grad=True)