
        
            # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
    import click
from flask import current_app, g
from flask.cli import with_appcontext
    
    
class AuthActions(object):
    def __init__(self, client):
        self._client = client
    
        auth.login()
    response = client.get('/')
    assert b'test title' in response.data
    assert b'by test on 2018-01-01' in response.data
    assert b'test\nbody' in response.data
    assert b'href='/1/update'' in response.data
    
        def check(self, value):
        return isinstance(value, UUID)
    
        def dispatch_request(self, *args, **kwargs):
        meth = getattr(self, request.method.lower(), None)
    
    
class JSONMixin(object):
    '''Common mixin for both request and response objects to provide JSON
    parsing capabilities.
    
    
if __name__ == '__main__':
    main()

    
        params['api_key'] = module.params['token']
    
    # Create a random animal
def random_animal():
    '''Let's be dynamic!'''
    return random.choice([Dog, Cat])()
    
        @lazy_property2
    def parents(self):
        self.call_count2 += 1
        return 'Father and mother'
    
        def product_list(self):
        return self.data['products'].keys()
    
    ### OUTPUT ###
# Ellipse: 1
# Ellipse: 2
# Ellipse: 3
# Ellipse: 4

    
    *References:
https://sourcemaking.com/design_patterns/decorator
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
        if P2only:
        # use only the finest level
        return blobs_fpn[-1], dim_fpn, spatial_scales_fpn[-1]
    else:
        # use all levels
        return blobs_fpn, dim_fpn, spatial_scales_fpn
    
    
def add_fpn_retinanet_outputs(model, blobs_in, dim_in, spatial_scales):
    '''RetinaNet head. For classification and box regression, we can chose to
    have the same conv tower or a separate tower. 'bl_feat_list' stores the list
    of feature blobs for bbox prediction. These blobs can be shared cls feature
    blobs if we share the tower or else are independent blobs.
    '''
    dim_out = dim_in
    k_max = cfg.FPN.RPN_MAX_LEVEL  # coarsest level of pyramid
    k_min = cfg.FPN.RPN_MIN_LEVEL  # finest level of pyramid
    A = len(cfg.RETINANET.ASPECT_RATIOS) * cfg.RETINANET.SCALES_PER_OCTAVE
    
    from detectron.core.config import cfg
import detectron.modeling.FPN as fpn
import detectron.roi_data.keypoint_rcnn as keypoint_rcnn_roi_data
import detectron.roi_data.mask_rcnn as mask_rcnn_roi_data
import detectron.utils.blob as blob_utils
import detectron.utils.boxes as box_utils
    
        heats, weights = keypoint_utils.keypoints_to_heatmap_labels(
        sampled_keypoints, sampled_fg_rois
    )
    
    
def get_minibatch(roidb):
    '''Given a roidb, construct a minibatch sampled from it.'''
    # We collect blobs from each image onto a list and then concat them into a
    # single tensor, hence we initialize each blob to an empty list
    blobs = {k: [] for k in get_minibatch_blob_names()}
    # Get the input image blob, formatted for caffe2
    im_blob, im_scales = _get_image_blob(roidb)
    blobs['data'] = im_blob
    if cfg.RPN.RPN_ON:
        # RPN-only or end-to-end Faster/Mask R-CNN
        valid = rpn_roi_data.add_rpn_blobs(blobs, im_scales, roidb)
    elif cfg.RETINANET.RETINANET_ON:
        im_width, im_height = im_blob.shape[3], im_blob.shape[2]
        # im_width, im_height corresponds to the network input: padded image
        # (if needed) width and height. We pass it as input and slice the data
        # accordingly so that we don't need to use SampleAsOp
        valid = retinanet_roi_data.add_retinanet_blobs(
            blobs, im_scales, roidb, im_width, im_height
        )
    else:
        # Fast R-CNN like models trained on precomputed proposals
        valid = fast_rcnn_roi_data.add_fast_rcnn_blobs(blobs, im_scales, roidb)
    return blobs, valid
    
    
class UndirectWeightedGraph:
    d = 0.85
    
            for y in obs_states:
            prob, state = max((V[t - 1][y0] + trans_p[y0].get(y, MIN_INF) +
                               emit_p[y].get(obs[t], MIN_FLOAT), y0) for y0 in prev_states)
            V[t][y] = prob
            mem_path[t][y] = state
    
    s = '此外，公司拟对全资子公司吉林欧亚置业有限公司增资4.3亿元，增资后，吉林欧亚置业注册资本由7000万元增加到5亿元。吉林欧亚置业主要经营范围为房地产开发及百货零售等业务。目前在建吉林欧亚城市商业综合体项目。2013年，实现营业收入0万元，实现净利润-139.13万元。'
for x, w in jieba.analyse.extract_tags(s, withWeight=True):
    print('%s %s' % (x, w))
    
        def transform(self, node, results):
        self.found_future_import = True
        return self.new_future_import(node)
    
        IOLoop.instance().start()
    
    For more information on application-level routing see docs for `~.web.Application`.
    
        def test_oauth10a_redirect(self):
        response = self.fetch('/oauth10a/client/login', follow_redirects=False)
        self.assertEqual(response.code, 302)
        self.assertTrue(
            response.headers['Location'].endswith(
                '/oauth1/server/authorize?oauth_token=zxcv'
            )
        )
        # the cookie is base64('zxcv')|base64('1234')
        self.assertTrue(
            '_oauth_request_token='enhjdg==|MTIzNA==''
            in response.headers['Set-Cookie'],
            response.headers['Set-Cookie'],
        )
    
    # Char to FreqOrder table ,
JIS_TABLE_SIZE = 4368
    
    class EUCJPContextAnalysis(JapaneseContextAnalysis):
    def get_order(self, byte_str):
        if not byte_str:
            return -1, 1
        # find out current char's byte length
        first_char = byte_str[0]
        if (first_char == 0x8E) or (0xA1 <= first_char <= 0xFE):
            char_len = 2
        elif first_char == 0x8F:
            char_len = 3
        else:
            char_len = 1
    
        def get_confidence(self):
        return self.distribution_analyzer.get_confidence()

    
    GB2312_SM_MODEL = {'class_table': GB2312_CLS,
                   'class_factor': 7,
                   'state_table': GB2312_ST,
                   'char_len_table': GB2312_CHAR_LEN_TABLE,
                   'name': 'GB2312'}