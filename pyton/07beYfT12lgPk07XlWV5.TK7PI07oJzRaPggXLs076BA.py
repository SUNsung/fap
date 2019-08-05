
        
                    if not res or not res.ok:
                xlog.debug('ip:%s fail', ip)
                continue
    
    
def mask_rcnn_fcn_head_v1up4convs_gn(model, blob_in, dim_in, spatial_scale):
    '''v1up design: 4 * (conv 3x3), convT 2x2, with GroupNorm'''
    return mask_rcnn_fcn_head_v1upXconvs_gn(
        model, blob_in, dim_in, spatial_scale, 4
    )
    
            # Same story for the scores:
        #   - scores are (A, H, W) format from conv output
        #   - transpose to (H, W, A)
        #   - reshape to (H * W * A, 1) where rows are ordered by (H, W, A)
        #     to match the order of anchors and bbox_deltas
        scores = scores.transpose((1, 2, 0)).reshape((-1, 1))
    
        # The bbox regression loss only averages by the number of images in the
    # mini-batch, whereas we need to average by the total number of example
    # anchors selected
    # Outside weights are used to scale each element-wise loss so the final
    # average over the mini-batch is correct
    bbox_outside_weights = np.zeros((num_inside, 4), dtype=np.float32)
    # uniform weighting of examples (given non-uniform sampling)
    num_examples = np.sum(labels >= 0)
    bbox_outside_weights[labels == 1, :] = 1.0 / num_examples
    bbox_outside_weights[labels == 0, :] = 1.0 / num_examples
    
    
def serialize(obj):
    '''Serialize a Python object using pickle and encode it as an array of
    float32 values so that it can be feed into the workspace. See deserialize().
    '''
    return np.fromstring(pickle.dumps(obj), dtype=np.uint8).astype(np.float32)
    
    
def UnscopeName(possibly_scoped_name):
    '''Remove any name scoping from a (possibly) scoped name. For example,
    convert the name 'gpu_0/foo' to 'foo'.'''
    assert isinstance(possibly_scoped_name, string_types)
    return possibly_scoped_name[
        possibly_scoped_name.rfind(scope._NAMESCOPE_SEPARATOR) + 1:]
    
    import numpy as np
import scipy.io as sio
import sys
    
    
if __name__ == '__main__':
    opts = parse_args()
    convert(opts.json_file, opts.output_dir)
