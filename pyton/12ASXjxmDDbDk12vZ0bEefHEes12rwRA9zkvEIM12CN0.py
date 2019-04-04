
        
            Args:
      session: The current TensorFlow session.
      num_steps: The number of steps in each epoch.
    
        Returns:
      A list of lists, the internal list is the return for the ops for each
      session.run() call.  The outer list collects over the epoch.
    '''
    hps = self.hps
    all_name_example_idx_pairs = \
        self.shuffle_and_flatten_datasets(datasets, kind)
    
      plt.subplot(nrows,2,9+subplot_cidx)
  plot_time_series(model_vals['gen_states'], bidx, n_to_plot=n_to_plot,
                   color='g', scale=1.0, title=col_title + ' Generator State')
    
    from utils import write_datasets
from synthetic_data_utils import normalize_rates
from synthetic_data_utils import get_train_n_valid_inds, nparray_and_transpose
from synthetic_data_utils import spikify_data, split_list_by_inds
    
    
def evaluate_ensemble(test_data_name, number_of_lms):
  ensemble = EnsembleLM(test_data_name)
  model_list = ['lm{:02d}'.format(i+1) for i in range(number_of_lms)]
  for model_name in model_list:
    ensemble.add_single_model(model_name)
  accuracy = ensemble.evaluate()
  print('Accuracy of {} LM(s) on {} = {}'.format(
      number_of_lms, test_data_name, accuracy))
    
    
def _read_words(filename, use_prefix=True):
  all_words = []
  sequence_example = tf.train.SequenceExample()
  for r in tf.python_io.tf_record_iterator(filename):
    sequence_example.ParseFromString(r)
    
            # init attention
        attention = _init_attention(encoder_state)
      else:
        # construct attention
        attention = attention_construct_fn(cell_output, attention_keys,
                                           attention_values)
        cell_output = attention
    
        # Perform keypoint detectionon the transformed image
    im_ar = image_utils.aspect_ratio_rel(im, aspect_ratio)
    boxes_ar = box_utils.aspect_ratio(boxes, aspect_ratio)
    
    
def add_bbox_regression_targets(roidb):
    '''Add information needed to train bounding-box regressors.'''
    for entry in roidb:
        entry['bbox_targets'] = compute_bbox_regression_targets(entry)
    
    
def bottleneck_transformation(
    model,
    blob_in,
    dim_in,
    dim_out,
    stride,
    prefix,
    dim_inner,
    dilation=1,
    group=1
):
    '''Add a bottleneck transformation to the model.'''
    # In original resnet, stride=2 is on 1x1.
    # In fb.torch resnet, stride=2 is on 3x3.
    (str1x1, str3x3) = (stride, 1) if cfg.RESNETS.STRIDE_1X1 else (1, stride)
    
    '''Optimization operator graph construction.'''
    
        # rois are in [[batch_idx, x0, y0, x1, y2], ...] format
    # Combine predictions across all levels and retain the top scoring
    rois = np.concatenate([blob.data for blob in roi_inputs])
    scores = np.concatenate([blob.data for blob in score_inputs]).squeeze()
    inds = np.argsort(-scores)[:post_nms_topN]
    rois = rois[inds, :]
    return rois
    
    logger = logging.getLogger(__name__)
    
    
# octave and aspect fields are only used on RetinaNet. Octave corresponds to the
# scale of the anchor and aspect denotes which aspect ratio is used in the range
# of aspect ratios
FieldOfAnchors = namedtuple(
    'FieldOfAnchors', [
        'field_of_anchors', 'num_cell_anchors', 'stride', 'field_size',
        'octave', 'aspect'
    ]
)
    
        Returns:
        bbox_target_data (ndarray): N x 4K blob of regression targets
        bbox_inside_weights (ndarray): N x 4K blob of loss weights
    '''
    num_bbox_reg_classes = cfg.MODEL.NUM_CLASSES
    if cfg.MODEL.CLS_AGNOSTIC_BBOX_REG:
        num_bbox_reg_classes = 2  # bg and fg
    
        roi_data_loader.register_sigint_handler()
    roi_data_loader.start(prefill=True)
    total_time = 0
    for i in range(opts.num_batches):
        start_t = time.time()
        for _ in range(opts.x_factor):
            workspace.RunNetOnce(net)
        total_time += (time.time() - start_t) / opts.x_factor
        logger.info(
            '{:d}/{:d}: Averge dequeue time: {:.3f}s  [{:d}/{:d}]'.format(
                i + 1, opts.num_batches, total_time / (i + 1),
                roi_data_loader._minibatch_queue.qsize(),
                cfg.DATA_LOADER.MINIBATCH_QUEUE_SIZE
            )
        )
        # Sleep to simulate the time taken by running a little network
        time.sleep(opts.sleep_time)
        # To inspect:
        # blobs = workspace.FetchBlobs(all_blobs)
        # from IPython import embed; embed()
    logger.info('Shutting down data loader...')
    roi_data_loader.shutdown()
    
    from __future__ import print_function
from socket import timeout