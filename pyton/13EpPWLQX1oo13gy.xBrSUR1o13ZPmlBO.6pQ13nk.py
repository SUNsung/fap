
        
            if instance_id:
        try:
            volumes = ec2.get_all_volumes(filters={'attachment.instance-id': instance_id, 'attachment.device': device_name})
        except boto.exception.BotoServerError as e:
            module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
            elif desired_state == 'offline':
            if current_state == HOST_ABSENT:
                self.fail(msg='absent host cannot be placed in offline state')
            elif current_state in [HOST_STATES.MONITORED, HOST_STATES.DISABLED]:
                if one.host.status(host.ID, HOST_STATUS.OFFLINE):
                    self.wait_for_host_state(host, [HOST_STATES.OFFLINE])
                    result['changed'] = True
                else:
                    self.fail(msg='could not set host offline')
            elif current_state in [HOST_STATES.OFFLINE]:
                pass
            else:
                self.fail(msg='unknown host state %s, cowardly refusing to change state to offline' % current_state_name)
    
        vca = vca_login(module)
    
        return changed, client.dnszone_find(zone_name)
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            name=dict(type='str', required=True),
            state=dict(type='str', choices=['present', 'absent'], default='present')
        ),
        supports_check_mode=True
    )
    
    
class PollErrorTest(unittest.TestCase):
    '''Tests for acme.errors.PollError.'''
    
            '''
        self.revert_temporary_config()
        self.aug.load()
    
    HSTS_ARGS = ['always', 'set', 'Strict-Transport-Security',
             '\'max-age=31536000\'']
'''Apache header arguments for HSTS'''
    
        @certbot_util.patch_get_utility()
    def test_multiple_names(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 5)
    
    
# -- Options for Texinfo output -------------------------------------------
    
        def test_backslash_continuation(self):
        # Backslash means line continuation, except for comments
        self.check_roundtrip('x=1+\\\n'
                             '1\n'
                             '# This is a comment\\\n'
                             '# This also\n')
        self.check_roundtrip('# Comment \\\n'
                             'x = 0')
    
        def _generate_symbols(self, grammar_file, target_symbol_py_file):
        proc = subprocess.Popen([sys.executable,
                                 GEN_SYMBOL_FILE,
                                 grammar_file,
                                 target_symbol_py_file], stderr=subprocess.PIPE)
        stderr = proc.communicate()[1]
        return proc.returncode, stderr
    
        If the resulting string contains path separators, an exception is raised.
    '''
    parent, file_name = os.path.split(path)
    if parent:
        raise ValueError('{!r} must be only a file name'.format(path))
    else:
        return file_name
    
    # register the Foo class; make `f()` and `g()` accessible via proxy
MyManager.register('Foo1', Foo)
    
    class Point:
    def __init__(self, x, y):
        self.x, self.y = x, y
    
    # Optional dataset entry keys
_IM_PREFIX = 'image_prefix'
_DEVKIT_DIR = 'devkit_directory'
_RAW_DIR = 'raw_dir'
    
    
def compute_bbox_regression_targets(entry):
    '''Compute bounding-box regression targets for an image.'''
    # Indices of ground-truth ROIs
    rois = entry['boxes']
    overlaps = entry['max_overlaps']
    labels = entry['max_classes']
    gt_inds = np.where((entry['gt_classes'] > 0) & (entry['is_crowd'] == 0))[0]
    # Targets has format (class, tx, ty, tw, th)
    targets = np.zeros((rois.shape[0], 5), dtype=np.float32)
    if len(gt_inds) == 0:
        # Bail if the image has no ground-truth ROIs
        return targets
    
    import logging
import numpy as np
import os
import shutil
import uuid
    
    
def add_residual_block(
    model,
    prefix,
    blob_in,
    dim_in,
    dim_out,
    dim_inner,
    dilation,
    stride_init=2,
    inplace_sum=False
):
    '''Add a residual block to the model.'''
    # prefix = res<stage>_<sub_stage>, e.g., res2_3
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
        if len(data.shape) == 1:
        ret = np.empty((count, ), dtype=data.dtype)
        ret.fill(fill)
        ret[inds] = data
    else:
        ret = np.empty((count, ) + data.shape[1:], dtype=data.dtype)
        ret.fill(fill)
        ret[inds, :] = data
    return ret
    
    '''Construct minibatches for Detectron networks.'''
    
            # data for select_smooth_l1 loss
        num_classes = cfg.MODEL.NUM_CLASSES - 1
        inds_4d = np.where(_labels > 0)
        M = len(inds_4d)
        _roi_bbox_targets = np.zeros((0, 4))
        _roi_fg_bbox_locs = np.zeros((0, 4))
        if M > 0:
            im_inds, y, x = inds_4d[0], inds_4d[2], inds_4d[3]
            _roi_bbox_targets = np.zeros((len(im_inds), 4))
            _roi_fg_bbox_locs = np.zeros((len(im_inds), 4))
            lbls = _labels[im_inds, :, y, x]
            for i, lbl in enumerate(lbls):
                l = lbl[0] - 1
                if not cfg.RETINANET.CLASS_SPECIFIC_BBOX:
                    l = 0
                assert l >= 0 and l < num_classes, 'label out of the range'
                _roi_bbox_targets[i, :] = _bbox_targets[:, :, y[i], x[i]]
                _roi_fg_bbox_locs[i, :] = np.array([[0, l, y[i], x[i]]])
        blobs_out.append(
            dict(
                retnet_cls_labels=_labels[:, :, 0:h, 0:w].astype(np.int32),
                retnet_roi_bbox_targets=_roi_bbox_targets.astype(np.float32),
                retnet_roi_fg_bbox_locs=_roi_fg_bbox_locs.astype(np.float32),
            ))
    out_num_fg = np.array([num_fg + 1.0], dtype=np.float32)
    out_num_bg = (
        np.array([num_bg + 1.0]) * (cfg.MODEL.NUM_CLASSES - 1) +
        out_num_fg * (cfg.MODEL.NUM_CLASSES - 2))
    return blobs_out, out_num_fg, out_num_bg

    
    
class ExtraData(ValueError):
    
        dest = pathlib.Path('dist')
    dest.mkdir(exist_ok=True)
    
    ax = fig.add_axes((0.45, 0.1, 0.16, 0.8))
bar_data = [2.1, -00.8, 1.1, 2.5, -2.1, -0.5, -2.0, 1.5]
ax.set_ylim(-3, 3)
ax.set_xticks([])
ax.set_yticks([])
ax.bar(np.arange(len(bar_data)), bar_data)
    
    
@pytest.fixture()
def series():
    df = pd.DataFrame({'outer': ['a', 'a', 'a', 'b', 'b', 'b'],
                       'inner': [1, 2, 3, 1, 2, 3],
                       'A': np.arange(6),
                       'B': ['one', 'one', 'two', 'two', 'one', 'one']})
    s = df.set_index(['outer', 'inner', 'B'])['A']
    
    
def test_read_map_header():
    unpacker = Unpacker()
    unpacker.feed(packb({'a': 'A'}))
    assert unpacker.read_map_header() == 1
    assert unpacker.unpack() == B'a'
    assert unpacker.unpack() == B'A'
    try:
        unpacker.unpack()
        assert 0, 'should raise exception'
    except OutOfData:
        assert 1, 'okay'
    
    import modeling
import tokenization
import tensorflow as tf
    
      def _clean_text(self, text):
    '''Performs invalid character removal and whitespace cleanup on text.'''
    output = []
    for char in text:
      cp = ord(char)
      if cp == 0 or cp == 0xfffd or _is_control(char):
        continue
      if _is_whitespace(char):
        output.append(' ')
      else:
        output.append(char)
    return ''.join(output)