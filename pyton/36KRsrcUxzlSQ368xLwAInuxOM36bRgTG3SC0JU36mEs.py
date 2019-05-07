
        
        from os import makedirs
from os.path import exists, join
    
        ```python
         ..
         # Not needed to change the device scope for model definition:
         model = Xception(weights=None, ..)
    
        # Note on specifying the initial state of RNNs
        You can specify the initial state of RNN layers symbolically by
        calling them with the keyword argument `initial_state`. The value of
        `initial_state` should be a tensor or list of tensors representing
        the initial state of the RNN layer.
    
    # Build the Autoencoder Model
# First build the Encoder Model
inputs = Input(shape=input_shape, name='encoder_input')
x = inputs
# Stack of Conv2D blocks
# Notes:
# 1) Use Batch Normalization before ReLU on deep networks
# 2) Use MaxPooling2D as alternative to strides>1
# - faster but not as good as strides>1
for filters in layer_filters:
    x = Conv2D(filters=filters,
               kernel_size=kernel_size,
               strides=2,
               activation='relu',
               padding='same')(x)
    
    max_words = 1000
batch_size = 32
epochs = 5
    
        # Returns
        Tensor with one scalar loss entry per sample.
    '''
    def _logcosh(x):
        return x + K.softplus(-2. * x) - K.log(2.)
    return K.mean(_logcosh(y_pred - y_true), axis=-1)
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
        assert 'Expected exception' in str(exception.value)

    
    r'''
The ``codes`` object defines a mapping from common names for HTTP statuses
to their numerical codes, accessible either as attributes or as dictionary
items.
    
        if hasattr(o, 'tell'):
        try:
            current_position = o.tell()
        except (OSError, IOError):
            # This can happen in some weird situations, such as when the file
            # is actually a special file descriptor like stdin. In this
            # instance, we don't know what the length is, so set it to zero and
            # let requests chunk it instead.
            if total_length is not None:
                current_position = total_length
        else:
            if hasattr(o, 'seek') and total_length is None:
                # StringIO and BytesIO have seek but no useable fileno
                try:
                    # seek to end of file
                    o.seek(0, 2)
                    total_length = o.tell()
    
    
def get_devkit_dir(name):
    '''Retrieve the devkit dir for the dataset.'''
    return _DATASETS[name][_DEVKIT_DIR]
    
    logger = logging.getLogger(__name__)
    
    import logging
import numpy as np
import os
import shutil
import uuid
    
        current = roi_feat
    for i in range(cfg.FAST_RCNN.NUM_STACKED_CONVS):
        current = model.Conv(
            current, 'head_conv' + str(i + 1), dim_in, hidden_dim, 3,
            stride=1, pad=1,
            weight_init=('MSRAFill', {}),
            bias_init=('ConstantFill', {'value': 0.}),
            no_bias=0)
        current = model.Relu(current, current)
        dim_in = hidden_dim
    
    
def compute_targets(ex_rois, gt_rois, weights=(1.0, 1.0, 1.0, 1.0)):
    '''Compute bounding-box regression targets for an image.'''
    return box_utils.bbox_transform_inv(ex_rois, gt_rois, weights).astype(
        np.float32, copy=False
    )

    
        sampled_fg_rois = roidb['boxes'][kp_fg_inds]
    box_to_gt_ind_map = roidb['box_to_gt_ind_map'][kp_fg_inds]
    
        def _run_speed_test(self, iters=5, N=1024):
        '''This function provides an example of how to benchmark custom
        operators using the Caffe2 'prof_dag' network execution type. Please
        note that for 'prof_dag' to work, Caffe2 must be compiled with profiling
        support using the `-DUSE_PROF=ON` option passed to `cmake` when building
        Caffe2.
        '''
        net = core.Net('test')
        net.Proto().type = 'prof_dag'
        net.Proto().num_workers = 2
        Y = net.BatchPermutation(['X', 'I'], 'Y')
        Y_flat = net.FlattenToVec([Y], 'Y_flat')
        loss = net.AveragedLoss([Y_flat], 'loss')
        net.AddGradientOperators([loss])
        workspace.CreateNet(net)