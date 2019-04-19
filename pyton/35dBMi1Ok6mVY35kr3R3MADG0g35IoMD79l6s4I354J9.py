
        
            return epoch_total_cost, epoch_recon_cost, epoch_kl_cost, \
        kl_weight, l2_cost, l2_weight
    
    x0s = []
condition_labels = []
condition_number = 0
for c in range(C):
  x0 = FLAGS.x0_std * rng.randn(N, 1)
  x0s.append(np.tile(x0, nreplications))
  for ns in range(nreplications):
    condition_labels.append(condition_number)
  condition_number += 1
x0s = np.concatenate(x0s, axis=1)
    
      Args:
    datasets: The dictionary of dataset structures.
    npcs:  The number of pcs for each, basically like lfads factors.
    nsamples (optional): Number of samples to take for each dataset.
    ntime (optional): Number of time steps to take in each sample.
    
      print ('loading data from ' + data_path + ' with stem ' + data_fname_stem)
  for fname in fnames:
    if fname.startswith(data_fname_stem):
      data_dict = read_data(os.path.join(data_path,fname))
      idx = len(data_fname_stem) + 1
      key = fname[idx:]
      data_dict['data_dim'] = data_dict['train_data'].shape[2]
      data_dict['num_steps'] = data_dict['train_data'].shape[1]
      dataset_dict[key] = data_dict
    
      inputs = np.zeros([batch_size, num_steps], np.int32)
  char_inputs = np.zeros([batch_size, num_steps, max_word_length], np.int32)
  global_word_ids = np.zeros([batch_size, num_steps], np.int32)
  targets = np.zeros([batch_size, num_steps], np.int32)
  weights = np.ones([batch_size, num_steps], np.float32)
    
        fname = os.path.join(FLAGS.save_dir, 'lstm_emb_step_%d.npy' % i)
    with tf.gfile.Open(fname, mode='w') as f:
      np.save(f, lstm_emb)
    sys.stderr.write('LSTM embedding step %d file saved\n' % i)
    
      Returns:
    wasserstein_loss:  Scalar tf.float32 loss.
    
    from models import bidirectional_zaremba
from models import cnn
from models import critic_vd
from models import feedforward
from models import rnn
from models import rnn_nas
from models import rnn_vd
from models import rnn_zaremba
from models import seq2seq
from models import seq2seq_nas
from models import seq2seq_vd
from models import seq2seq_zaremba
    
    
  Args:
    hparams:  MaskGAN hyperparameters.
    log_probs:  tf.float32 Tensor of log probailities of the tokens selected by
      the Generator.  Shape [batch_size, sequence_length].
    dis_predictions:  tf.float32 Tensor of the predictions from the
      Discriminator.  Shape [batch_size, sequence_length].
    present:  tf.bool Tensor indicating which tokens are present.  Shape
      [batch_size, sequence_length].
    estimated_values:  tf.float32 Tensor of estimated state values of tokens.
      Shape [batch_size, sequence_length]
    
      Args:
    FLAGS:  Flags for the model.
    hparams:  Hyperparameters for the MaskGAN.
    
        # ensure the instance folder exists
    try:
        os.makedirs(app.instance_path)
    except OSError:
        pass
    
    
@pytest.fixture
def auth(client):
    return AuthActions(client)

    
    
@pytest.mark.parametrize(('username', 'password', 'message'), (
    ('a', 'test', b'Incorrect username.'),
    ('test', 'a', b'Incorrect password.'),
))
def test_login_validate_input(auth, username, password, message):
    response = auth.login(username, password)
    assert message in response.data
    
            #: A dictionary with URL defaults that is added to each and every
        #: URL that was defined with the blueprint.
        self.url_defaults = dict(self.blueprint.url_values_defaults)
        self.url_defaults.update(self.options.get('url_defaults', ()))
    
    
# context locals
_request_ctx_stack = LocalStack()
_app_ctx_stack = LocalStack()
current_app = LocalProxy(_find_app)
request = LocalProxy(partial(_lookup_req_object, 'request'))
session = LocalProxy(partial(_lookup_req_object, 'session'))
g = LocalProxy(partial(_lookup_app_object, 'g'))

    
        def default(self, o):
        '''Implement this method in a subclass such that it returns a
        serializable object for ``o``, or calls the base implementation (to
        raise a :exc:`TypeError`).
    
        It is what ends up as :class:`~flask.request`.  If you want to replace
    the request object used you can subclass this and set
    :attr:`~flask.Flask.request_class` to your subclass.
    
        def __eq__(self, other):
        return (
            isinstance(other, self.__class__) and
            self.keys == other.keys and
            self.messages == other.messages and
            self.strict == other.strict
        )
    
    
class Session(AbstractBaseSession):
    '''
    Django provides full support for anonymous sessions. The session
    framework lets you store and retrieve arbitrary data on a
    per-site-visitor basis. It stores data on the server side and
    abstracts the sending and receiving of cookies. Cookies contain a
    session ID -- not the data itself.
    
        @cached_property
    def initial(self):
        data = self.form.get_initial_for_field(self.field, self.name)
        # If this is an auto-generated default date, nix the microseconds for
        # standardized handling. See #22502.
        if (isinstance(data, (datetime.datetime, datetime.time)) and
                not self.field.widget.supports_microseconds):
            data = data.replace(microsecond=0)
        return data
    
    In both cases, only 10% of the features are informative.
'''
import numpy as np
import gc
from time import time
from sklearn.datasets.samples_generator import make_regression
    
    
def fixed_batch_size_comparison(data):
    all_features = [i.astype(int) for i in np.linspace(data.shape[1] // 10,
                                                       data.shape[1], num=5)]
    batch_size = 1000
    # Compare runtimes and error for fixed batch size
    all_times = defaultdict(list)
    all_errors = defaultdict(list)
    for n_components in all_features:
        pca = PCA(n_components=n_components)
        ipca = IncrementalPCA(n_components=n_components, batch_size=batch_size)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('ipca', ipca)]}
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    The dataset is the Boston Housing dataset (resp. 20 Newsgroups) for
regression (resp. classification).
    
    fit_data = data[np.argsort(model.row_labels_)]
fit_data = fit_data[:, np.argsort(model.column_labels_)]
    
    # Import datasets, classifiers and performance metrics
from sklearn import datasets, svm, metrics
    
    ms = MeanShift(bandwidth=bandwidth, bin_seeding=True)
ms.fit(X)
labels = ms.labels_
cluster_centers = ms.cluster_centers_
    
        def __get__(self, obj, type_):
        if obj is None:
            return self
        val = self.function(obj)
        obj.__dict__[self.function.__name__] = val
        return val
    
    *TL;DR80
Decouples an abstraction from its implementation.
'''
    
        def show_item_information(self, item_name):
        try:
            item_info = self.model.get(item_name)
        except Exception:
            item_type = self.model.item_type
            self.view.item_not_found(item_type, item_name)
        else:
            item_type = self.model.item_type
            self.view.show_item_information(item_type, item_name, item_info)
    
    
class NoTalkProxy(Proxy):
    def talk(self):
        print('Proxy checking for Sales Manager availability')
        time.sleep(0.1)
        print('This Sales Manager will not talk to you', 'whether he/she is busy or not')
    
        def test_relatives_after_access(self):
        print(u'John's relatives: {0}'.format(self.John.relatives))
        self.assertIn('relatives', self.John.__dict__)
    
        def test_frozen_pool(self):
        with ObjectPool(self.sample_queue) as pool:
            self.assertEqual(pool, 'first')
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
    # mapping coco categories to cityscapes (our converted json) id
# cityscapes
# INFO roidb.py: 220: 1       bicycle: 7286
# INFO roidb.py: 220: 2           car: 53684
# INFO roidb.py: 220: 3        person: 35704
# INFO roidb.py: 220: 4         train: 336
# INFO roidb.py: 220: 5         truck: 964
# INFO roidb.py: 220: 6    motorcycle: 1468
# INFO roidb.py: 220: 7           bus: 758
# INFO roidb.py: 220: 8         rider: 3504
    
        # For other levels add top-down and lateral connections
    for i in range(num_backbone_stages - 1):
        add_topdown_lateral_module(
            model,
            output_blobs[i],             # top-down blob
            lateral_input_blobs[i + 1],  # lateral blob
            output_blobs[i + 1],         # next output blob
            fpn_dim,                     # output dimension
            fpn_dim_lateral[i + 1]       # lateral input dimension
        )
    
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
    
    logger = logging.getLogger(__name__)
    
    
def get_minibatch_blob_names(is_training=True):
    '''Return blob names in the order in which they are read by the data loader.
    '''
    # data blob: holds a batch of N images, each with 3 channels
    blob_names = ['data']
    if cfg.RPN.RPN_ON:
        # RPN-only or end-to-end Faster R-CNN
        blob_names += rpn_roi_data.get_rpn_blob_names(is_training=is_training)
    elif cfg.RETINANET.RETINANET_ON:
        blob_names += retinanet_roi_data.get_retinanet_blob_names(
            is_training=is_training
        )
    else:
        # Fast R-CNN like models trained on precomputed proposals
        blob_names += fast_rcnn_roi_data.get_fast_rcnn_blob_names(
            is_training=is_training
        )
    return blob_names
    
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