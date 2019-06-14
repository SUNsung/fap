
        
        
def score_euclidean(a, b):
    '''计算两个点之间的欧式距离'''
    s = np.sqrt(np.sum(np.power(a - b, 2)))
    return s
    
        for word in index.keys():
        word_freq[word] = len(index[word])
    
    
def conv2d(x, kernel_size, out_channels,
           act_fn=relu,
           strides=1,
           padding='SAME',
           name=None,
           reuse=None):
    '''2-D 卷积层
    Input shape:  [batch_size, in_h, in_w, in_channels]
    Output shape: [batch_size, out_h, out_w, out_channels]
    
    
def get_shape(x):
    '''
    References:
        tflearn.utils.get_incoming_shape
    '''
    if isinstance(x, (tf.Tensor, tf.SparseTensor)):
        return x.get_shape().as_list()
    elif type(x) in [np.array, np.ndarray, list, tuple]:
        return list(np.shape(x))
    else:
        raise Exception('Invalid `x`.')
    
    # Required dataset entry keys
_IM_DIR = 'image_directory'
_ANN_FN = 'annotation_file'
    
    logger = logging.getLogger(__name__)
    
    
def add_fpn_ResNet101_conv5_P2only_body(model):
    return add_fpn_onto_conv_body(
        model,
        ResNet.add_ResNet101_conv5_body,
        fpn_level_info_ResNet101_conv5,
        P2only=True
    )
    
        # add the stem (by default, conv1 and pool1 with bn; can support gn)
    p, dim_in = globals()[cfg.RESNETS.STEM_FUNC](model, 'data')
    
    The keypoint head produces a feature representation of the RoI for the purpose
of keypoint prediction. The keypoint output module converts the feature
representation into keypoint heatmaps.
'''
    
            if cfg.RPN.RPN_ON:
            # Add the RPN head
            head_loss_gradients['rpn'] = rpn_heads.add_generic_rpn_outputs(
                model, blob_conv, dim_conv, spatial_scale_conv
            )
    
    
def add_single_scale_rpn_outputs(model, blob_in, dim_in, spatial_scale):
    '''Add RPN outputs to a single scale model (i.e., no FPN).'''
    anchors = generate_anchors(
        stride=1. / spatial_scale,
        sizes=cfg.RPN.SIZES,
        aspect_ratios=cfg.RPN.ASPECT_RATIOS
    )
    num_anchors = anchors.shape[0]
    dim_out = dim_in
    # RPN hidden representation
    model.Conv(
        blob_in,
        'conv_rpn',
        dim_in,
        dim_out,
        kernel=3,
        pad=1,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    model.Relu('conv_rpn', 'conv_rpn')
    # Proposal classification scores
    model.Conv(
        'conv_rpn',
        'rpn_cls_logits',
        dim_in,
        num_anchors,
        kernel=1,
        pad=0,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    # Proposal bbox regression deltas
    model.Conv(
        'conv_rpn',
        'rpn_bbox_pred',
        dim_in,
        4 * num_anchors,
        kernel=1,
        pad=0,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    
    from detectron.core.config import cfg
from detectron.datasets import json_dataset
from detectron.datasets import roidb as roidb_utils
import detectron.modeling.FPN as fpn
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
import detectron.utils.blob as blob_utils