
        
                return {
            'id': video_id,
            'title': title,
            'formats': formats,
            'comment_count': int_or_none(item.get('comments')),
            'description': item.get('description'),
            'duration': int_or_none(item.get('duration')),
            'thumbnails': thumbnails,
            'timestamp': int_or_none(item.get('date')),
            'uploader': item.get('owner_id'),
            'view_count': int_or_none(item.get('views')),
        }

    
    
class ProSiebenSat1BaseIE(InfoExtractor):
    _GEO_COUNTRIES = ['DE']
    _ACCESS_ID = None
    _SUPPORTED_PROTOCOLS = 'dash:clear,hls:clear,progressive:clear'
    _V4_BASE_URL = 'https://vas-v4.p7s1video.net/4.0/get'
    
    
class DashSegmentsFD(FragmentFD):
    '''
    Download segments in a DASH manifest
    '''
    
        with open('supportedsites.html', 'w', encoding='utf-8') as sitesf:
        sitesf.write(template)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    import os
from os.path import dirname as dirn
import sys
    
        enabled_by_default = utils.which('pkgfile')
    
        def _put_to_history(self, command_script):
        '''Puts command script to shell history.'''
        history_file_name = self._get_history_file_name()
        if os.path.isfile(history_file_name):
            with open(history_file_name, 'a') as history:
                entry = self._get_history_line(command_script)
                if six.PY2:
                    history.write(entry.encode('utf-8'))
                else:
                    history.write(entry)

    
        # Other from all executables:
    new_cmds += [cmd for cmd in get_close_matches(old_command,
                                                  get_all_executables())
                 if cmd not in new_cmds]
    
    # Copyright: (c) 2019, Guillaume Martinez (lunik@tiwabbit.fr)
# Copyright: (c) 2018, Marcus Watkins <marwatk@marcuswatkins.net>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
            for policy in policies:
            response[policy.name] = policy
        return response
    
    EXAMPLES = '''
# Note - You must set the CLC_V2_API_USERNAME And CLC_V2_API_PASSWD Environment variables before running these examples
    
    RETURN = '''
group:
    description: The group information
    returned: success
    type: dict
    sample:
        {
           'changeInfo':{
              'createdBy':'service.wfad',
              'createdDate':'2015-07-29T18:52:47Z',
              'modifiedBy':'service.wfad',
              'modifiedDate':'2015-07-29T18:52:47Z'
           },
           'customFields':[
    }
    
    
def regexp_extraction(string, _regexp, groups=1):
    ''' Returns the capture group (default=1) specified in the regexp, applied to the string '''
    regexp_search = re.search(string=str(string), pattern=str(_regexp))
    if regexp_search:
        if regexp_search.group(groups) != '':
            return str(regexp_search.group(groups))
    return None
    
    # (c) 2013, Nimbis Services, Inc.
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    RETURN = '''
modlist:
  description: list of modified parameters
  returned: success
  type: list
  sample: '[[2, 'olcRootDN', ['cn=root,dc=example,dc=com']]]'
'''
    
    # (c) 2018 Nicolai Buchwitz <nb@tipi-net.de>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
            if html_body:
            message.set_html(body)
        else:
            message.set_text(body)
    
        # Report missing file
    file_exists = False
    if path:
        if os.path.isfile(path):
            file_exists = True
        else:
            module.fail_json(msg='Cannot find/access path:\n%s' % path)
    
        def setUp(self):
        from acme.errors import MissingNonce
        self.response = mock.MagicMock(headers={})
        self.response.request.method = 'FOO'
        self.error = MissingNonce(self.response)
    
        def __init__(self, resource_type, *args, **kwargs):
        self.resource_type = resource_type
        super(Resource, self).__init__(
            'resource', default=resource_type, *args, **kwargs)
    
        def test_not_equal(self):
        self.assertFalse(self.addr1 != self.addr2)
        self.assertTrue(self.addr != self.addr1)
    
       certbot certonly \\
     --dns-rfc2136 \\
     --dns-rfc2136-credentials ~/.secrets/certbot/rfc2136.ini \\
     -d example.com \\
     -d www.example.com
    
            update = dns.update.Update(
            domain,
            keyring=self.keyring,
            keyalgorithm=self.algorithm)
        update.delete(rel, dns.rdatatype.TXT, record_content)
    
            self.config = mock.MagicMock(rfc2136_credentials=path,
                                     rfc2136_propagation_seconds=0)  # don't wait during tests
    
    
def add_proposals(roidb, rois, scales, crowd_thresh):
    '''Add proposal boxes (rois) to an roidb that has ground-truth annotations
    but no proposals. If the proposals are not at the original image scale,
    specify the scale factor that separate them in scales.
    '''
    box_list = []
    for i in range(len(roidb)):
        inv_im_scale = 1. / scales[i]
        idx = np.where(rois[:, 0] == i)[0]
        box_list.append(rois[idx, 1:] * inv_im_scale)
    _merge_proposal_boxes_into_roidb(roidb, box_list)
    if crowd_thresh > 0:
        _filter_crowd_proposals(roidb, crowd_thresh)
    _add_class_assignments(roidb)
    
    
def _filter_boxes(boxes, min_size, im_info):
    '''Only keep boxes with both sides >= min_size and center within the image.
    '''
    # Compute the width and height of the proposal boxes as measured in the original
    # image coordinate system (this is required to avoid 'Negative Areas Found'
    # assertions in other parts of the code that measure).
    im_scale = im_info[2]
    ws_orig_scale = (boxes[:, 2] - boxes[:, 0]) / im_scale + 1
    hs_orig_scale = (boxes[:, 3] - boxes[:, 1]) / im_scale + 1
    # To avoid numerical issues we require the min_size to be at least 1 pixel in the
    # original image
    min_size = np.maximum(min_size, 1)
    # Proposal center is computed relative to the scaled input image
    ws = boxes[:, 2] - boxes[:, 0] + 1
    hs = boxes[:, 3] - boxes[:, 1] + 1
    x_ctr = boxes[:, 0] + ws / 2.
    y_ctr = boxes[:, 1] + hs / 2.
    keep = np.where(
        (ws_orig_scale >= min_size)
        & (hs_orig_scale >= min_size)
        & (x_ctr < im_info[1])
        & (y_ctr < im_info[0])
    )[0]
    return keep

    
                            for obj in objects[object_cls]:
                            if obj['contours'] == []:
                                print('Warning: empty contours.')
                                continue  # skip non-instance categories
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    
def import_nccl_ops():
    '''Import NCCL ops.'''
    # There is no need to load NCCL ops since the
    # NCCL dependency is built into the Caffe2 gpu lib
    pass
    
    
def get_rpn_box_proposals(im, args):
    cfg.immutable(False)
    merge_cfg_from_file(args.rpn_cfg)
    cfg.NUM_GPUS = 1
    cfg.MODEL.RPN_ONLY = True
    cfg.TEST.RPN_PRE_NMS_TOP_N = 10000
    cfg.TEST.RPN_POST_NMS_TOP_N = 2000
    assert_and_infer_cfg(cache_urls=False)
    
        valid_keys = [
        'has_visible_keypoints', 'boxes', 'segms', 'seg_areas', 'gt_classes',
        'gt_overlaps', 'is_crowd', 'box_to_gt_ind_map', 'gt_keypoints'
    ]
    minimal_roidb = [{} for _ in range(len(roidb))]
    for i, e in enumerate(roidb):
        for k in valid_keys:
            if k in e:
                minimal_roidb[i][k] = e[k]
    blobs['roidb'] = blob_utils.serialize(minimal_roidb)
    
    
def get_image_blob(im, target_scale, target_max_size):
    '''Convert an image into a network input.
    
        # First remove layers from caffenet proto
    _remove_layers(caffenet)
    # We'll return these so we can save the batch norm parameters
    bn_layers = [
        layer for layer in caffenet_weights.layer if layer.type in remove_types
    ]
    _remove_layers(caffenet_weights)
    
    # 构造简单的数据集
def get_training_dataset():
    '''
    Desc:
        构建一个简单的训练数据集
    Args:
        None
    Returns:
        input_vecs —— 训练数据集的特征部分
        labels —— 训练数据集的数据对应的标签，是一一对应的
    '''
    # 构建数据集，输入向量列表，每一项是工作年限
    input_vecs = [[5], [3], [8], [1.4], [10.1]]
    # 期望的输出列表，也就是输入向量的对应的标签，与工作年限对应的收入年薪
    labels = [5500, 2300, 7600, 1800, 11400]
    return input_vecs, labels
    
        def init_weight_gradient_mat(self):
        '''
        初始化权重矩阵
        '''
        Wh_grad = np.zeros((self.state_width,
            self.state_width))
        Wx_grad = np.zeros((self.state_width,
            self.input_width))
        b_grad = np.zeros((self.state_width, 1))
        return Wh_grad, Wx_grad, b_grad
    
        # 所有输入到达后开始处理
    def map_final(self):  # 计算数据的平均值，平方的均值，并返回
        mn = self.inSum/self.inCount
        mnSq = self.inSqSum/self.inCount
        yield (1, [self.inCount, mn, mnSq])
    
        def __init__(self, *args, **kwargs):
        super(MRsvm, self).__init__(*args, **kwargs)
        self.data = pickle.load(open('/opt/git/MachineLearnidata/15.BigData_MapReduce/svmDat27'))
        self.w = 0
        self.eta = 0.69
        self.dataList = []
        self.k = self.options.batchsize
        self.numMappers = 1
        self.t = 1  # iteration number