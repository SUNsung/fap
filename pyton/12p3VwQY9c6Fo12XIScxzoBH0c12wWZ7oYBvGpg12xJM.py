
        
        if __name__ == '__main__':
    main()

    
    '''
The number of partitions of a number n into at least k parts equals the number of partitions into exactly k parts
plus the number of partitions into at least k-1 parts. Subtracting 1 from each part of a partition of n into k parts
gives a partition of n-k into k parts. These two facts together are used for this algorithm.
'''
def partition(m):
	memo = [[0 for _ in xrange(m)] for _ in xrange(m+1)]
	for i in xrange(m+1):
		memo[i][0] = 1
    
    class Decision_Tree:
    def __init__(self, depth = 5, min_leaf_size = 5):
        self.depth = depth
        self.decision_boundary = 0
        self.left = None
        self.right = None
        self.min_leaf_size = min_leaf_size
        self.prediction = None
    
    def revise_centroids(data, k, cluster_assignment):
    new_centroids = []
    for i in range(k):
        # Select all data points that belong to cluster i. Fill in the blank (RHS only)
        member_data_points = data[cluster_assignment==i]
        # Compute the mean of the data points. Fill in the blank (RHS only)
        centroid = member_data_points.mean(axis=0)
        new_centroids.append(centroid)
    new_centroids = np.array(new_centroids)
    
    return new_centroids
    
        return res
    
    
# ALTERNATIVE METHODS  
# ctbi= characters that must be in password
# i= how many letters or characters the password length will be 
def password_generator(ctbi, i):
  # Password generator = full boot with random_number, random_letters, and random_character FUNCTIONS
  pass  # Put your code here...
    
                x = InputLayer(x)
            x = FlattenLayer(x)
            x = DenseLayer(x, n_units=1, act=tf.nn.sigmoid)
            o = x.outputs
    
        return g
    
        def __call__(self, x):
        '''
        Args:
            x: 注意 x.dtype == float32
        '''
        # x = tf.cast(x, dtype=tf.float32)  # 交给外部处理
        loss_regularization = 0.
        if self.l1:
            loss_regularization += tf.reduce_sum(self.l1 * tf.abs(x))
        if self.l2:
            loss_regularization += tf.reduce_sum(self.l2 * tf.square(x))
        return loss_regularization
    
    
def permute(x, perm):
    '''
    Examples:
        x.shape == [128, 32, 1]
        x = permute(x, [0, 2, 1])
        x.shape == [128, 1, 32]
    
        def backwards(self, orm):
        # Removing unique constraint on 'EnvironmentProject', fields ['project', 'environment']
        db.delete_unique('sentry_environmentproject', ['project_id', 'environment_id'])
    
            # Removing unique constraint on 'ProcessingIssue', fields ['project', 'checksum', 'type']
        db.delete_unique('sentry_processingissue', ['project_id', 'checksum', 'type'])
    
        def backwards(self, orm):
        # Removing unique constraint on 'ReleaseHeadCommit', fields ['repository_id', 'release']
        db.delete_unique('sentry_releaseheadcommit', ['repository_id', 'release_id'])
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding field 'UserOption.organization'
        db.add_column(
            'sentry_useroption',
            'organization',
            self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['sentry.Organization'], null=True
            ),
            keep_default=False
        )
    
    
def add_roi_Xconv1fc_head(model, blob_in, dim_in, spatial_scale):
    '''Add a X conv + 1fc head, as a reference if not using GroupNorm'''
    hidden_dim = cfg.FAST_RCNN.CONV_HEAD_DIM
    roi_size = cfg.FAST_RCNN.ROI_XFORM_RESOLUTION
    roi_feat = model.RoIFeatureTransform(
        blob_in,
        'roi_feat',
        blob_rois='rois',
        method=cfg.FAST_RCNN.ROI_XFORM_METHOD,
        resolution=roi_size,
        sampling_ratio=cfg.FAST_RCNN.ROI_XFORM_SAMPLING_RATIO,
        spatial_scale=spatial_scale
    )
    
    
def generate_anchors(
    stride=16, sizes=(32, 64, 128, 256, 512), aspect_ratios=(0.5, 1, 2)
):
    '''Generates a matrix of anchor boxes in (x1, y1, x2, y2) format. Anchors
    are centered on stride / 2, have (approximate) sqrt areas of the specified
    sizes, and aspect ratios as given.
    '''
    return _generate_anchors(
        stride,
        np.array(sizes, dtype=np.float) / stride,
        np.array(aspect_ratios, dtype=np.float)
    )
    
    
def _add_roi_keypoint_head(
    model, add_roi_keypoint_head_func, blob_in, dim_in, spatial_scale_in
):
    '''Add a keypoint prediction head to the model.'''
    # Capture model graph before adding the mask head
    bbox_net = copy.deepcopy(model.net.Proto())
    # Add the keypoint head
    blob_keypoint_head, dim_keypoint_head = add_roi_keypoint_head_func(
        model, blob_in, dim_in, spatial_scale_in
    )
    # Add the keypoint output
    blob_keypoint = keypoint_rcnn_heads.add_keypoint_outputs(
        model, blob_keypoint_head, dim_keypoint_head
    )
    
    
def build_data_parallel_model(model, single_gpu_build_func):
    '''Build a data parallel model given a function that builds the model on a
    single GPU.
    '''
    if model.only_build_forward_pass:
        single_gpu_build_func(model)
    elif model.train:
        all_loss_gradients = _build_forward_graph(model, single_gpu_build_func)
        # Add backward pass on all GPUs
        model.AddGradientOperators(all_loss_gradients)
        if cfg.NUM_GPUS > 1:
            _add_allreduce_graph(model)
        for gpu_id in range(cfg.NUM_GPUS):
            # After allreduce, all GPUs perform SGD updates on their identical
            # params and gradients in parallel
            with c2_utils.NamedCudaScope(gpu_id):
                add_single_gpu_param_update_ops(model, gpu_id)
    else:
        # Test-time network operates on single GPU
        # Test-time parallelism is implemented through multiprocessing
        with c2_utils.NamedCudaScope(model.target_gpu_id):
            single_gpu_build_func(model)
    
    
# octave and aspect fields are only used on RetinaNet. Octave corresponds to the
# scale of the anchor and aspect denotes which aspect ratio is used in the range
# of aspect ratios
FieldOfAnchors = namedtuple(
    'FieldOfAnchors', [
        'field_of_anchors', 'num_cell_anchors', 'stride', 'field_size',
        'octave', 'aspect'
    ]
)
    
        ind_kp = gt_inds[roidb['box_to_gt_ind_map']]
    within_box = _within_box(gt_keypoints[ind_kp, :, :], roidb['boxes'])
    vis_kp = gt_keypoints[ind_kp, 2, :] > 0
    is_visible = np.sum(np.logical_and(vis_kp, within_box), axis=1) > 0
    kp_fg_inds = np.where(
        np.logical_and(max_overlaps >= cfg.TRAIN.FG_THRESH, is_visible)
    )[0]
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  def _SendRequest( self ):
    self._response_future = self.PostDataToHandlerAsync(
      self._request_data,
      'receive_messages',
      timeout = TIMEOUT_SECONDS )
    return
    
    
GENERIC_RESPONSE = {
  'clang': {
    'has_support': True,
    'version': 'Clang version'
  },
  'completer': {
    'items': [
      {
        'key': 'key',
        'value': 'value'
      }
    ],
    'name': 'Completer name',
    'servers': [
      {
        'address': '127.0.0.1',
        'executable': '/path/to/executable',
        'extras': [
          {
            'key': 'key',
            'value': 'value'
          }
        ],
        'is_running': True,
        'logfiles': [
          '/path/to/stdout/logfile',
          '/path/to/stderr/logfile'
        ],
        'name': 'Server name',
        'pid': 12345,
        'port': 1234
      }
    ]
  },
  'extra_conf': {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  },
  'python': {
    'executable': '/path/to/python/interpreter',
    'version': 'Python version'
  }
}
    
      with CurrentWorkingDirectory( unicode_dir ):
    with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
      with MockCompletionRequest( ServerResponse ):
        ycm.SendCompletionRequest()
        ok_( ycm.CompletionRequestReady() )
        assert_that(
          ycm.GetCompletionResponse(),
          has_entries( {
            'completions': empty(),
            'completion_start_column': 1
          } )
        )
    
    
def MergeMultipleFiletypes_test():
    
    def is_prime(n):
    if n % 2 == 0:
        return False