
        
            # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
            return view(**kwargs)
    
    
def init_db():
    '''Clear existing data and create new tables.'''
    db = get_db()
    
        @app.route('/')
    def index():
        raise Exception('dummy')
    
        app.add_node(settingslist_node)
    app.add_directive('settingslist', SettingsListDirective)
    
    # Used for remembering the file (and its contents)
# so we don't have to open the same file again.
_filename = None
_contents = None
    
            slots = int(self.slots)
        if slots > 1:
            urls = [url.replace('localhost', '127.0.0.%d' % (x + 1)) for x in range(slots)]
        else:
            urls = [url]
    
        def help(self):
        '''An extensive help for the command. It will be shown when using the
        'help' command. It can contain newlines, since not post-formatting will
        be applied to its contents.
        '''
        return self.long_desc()
    
        def _print_response(self, response, opts):
        if opts.headers:
            self._print_headers(response.request.headers, b'>')
            print('>')
            self._print_headers(response.headers, b'<')
        else:
            self._print_bytes(response.body)
    
                raise ContractFail('Returned %s %s, expected %s' % \
                (occurrences, self.obj_name, expected))
    
        from twisted.internet.ssl import (optionsForClientTLS,
                                      CertificateOptions,
                                      platformTrust)
    from twisted.web.client import BrowserLikePolicyForHTTPS
    from twisted.web.iweb import IPolicyForHTTPS
    
        def close_spider(self, spider, reason='cancelled'):
        '''Close (cancel) spider and clear all its outstanding requests'''
    
        def __hash_double_function(self, key, data, increment):
        return (increment * self.__hash_function_2(key, data)) % self.size_table
    
    The problem is  :
Given an ARRAY, to find the longest and increasing sub ARRAY in that given ARRAY and return it.
Example: [10, 22, 9, 33, 21, 50, 41, 60, 80] as input will return [10, 22, 33, 41, 60, 80] as output
'''
from __future__ import print_function
    
    def getLetterCount(message):
    letterCount = {'A': 0, 'B': 0, 'C': 0, 'D': 0, 'E': 0, 'F': 0, 'G': 0, 'H': 0,
                   'I': 0, 'J': 0, 'K': 0, 'L': 0, 'M': 0, 'N': 0, 'O': 0, 'P': 0,
                   'Q': 0, 'R': 0, 'S': 0, 'T': 0, 'U': 0, 'V': 0, 'W': 0, 'X': 0,
                   'Y': 0, 'Z': 0}
    for letter in message.upper():
        if letter in LETTERS:
            letterCount[letter] += 1
    
        observe()
    
        def get_device_name(self, device):
        '''Return the name of the device with the given MAC address.'''
        name = next((
            result.name for result in self.last_results
            if result.mac == device), None)
        return name
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        filter_named = [result.name for result in self.last_results
                        if result.mac == device]
    
            resp = requests.get(BASE_API_URL, params=data, timeout=5)
        if (resp.status_code != 200) or (resp.status_code != 201):
            _LOGGER.error('Error %s : %s', resp.status_code, resp.text)

    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_USERNAME): cv.string,
    vol.Required(CONF_ACCESS_TOKEN): cv.string,
})
    
    
class MycroftNotificationService(BaseNotificationService):
    '''The Mycroft Notification Service.'''
    
    
def add_bbox_regression_targets(roidb):
    '''Add information needed to train bounding-box regressors.'''
    for entry in roidb:
        entry['bbox_targets'] = compute_bbox_regression_targets(entry)
    
    from detectron.core.config import cfg
from detectron.utils.c2 import const_fill
from detectron.utils.c2 import gauss_fill
import detectron.modeling.ResNet as ResNet
import detectron.utils.blob as blob_utils
    
    $ find . -name '*.yaml' -exec sed -i -e \
   's/head_builder\.add_roi_2mlp_head/fast_rcnn_heads.add_roi_2mlp_head/g' {} \;
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
        # ==========================================================================
    # classification tower with logits and prob prediction
    # ==========================================================================
    for lvl in range(k_min, k_max + 1):
        bl_in = blobs_in[k_max - lvl]  # blobs_in is in reversed order
        # classification tower stack convolution starts
        for nconv in range(cfg.RETINANET.NUM_CONVS):
            suffix = 'n{}_fpn{}'.format(nconv, lvl)
            dim_in, dim_out = dim_in, dim_in
            if lvl == k_min:
                bl_out = model.Conv(
                    bl_in,
                    'retnet_cls_conv_' + suffix,
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
                    'retnet_cls_conv_' + suffix,
                    dim_in,
                    dim_out,
                    3,
                    stride=1,
                    pad=1,
                    weight='retnet_cls_conv_n{}_fpn{}_w'.format(nconv, k_min),
                    bias='retnet_cls_conv_n{}_fpn{}_b'.format(nconv, k_min)
                )
            bl_in = model.Relu(bl_out, bl_out)
            bl_feat = bl_in
        # cls tower stack convolution ends. Add the logits layer now
        if lvl == k_min:
            retnet_cls_pred = model.Conv(
                bl_feat,
                'retnet_cls_pred_fpn{}'.format(lvl),
                dim_in,
                cls_pred_dim * A,
                3,
                pad=1,
                stride=1,
                weight_init=('GaussianFill', {
                    'std': 0.01
                }),
                bias_init=bias_init
            )
        else:
            retnet_cls_pred = model.ConvShared(
                bl_feat,
                'retnet_cls_pred_fpn{}'.format(lvl),
                dim_in,
                cls_pred_dim * A,
                3,
                pad=1,
                stride=1,
                weight='retnet_cls_pred_fpn{}_w'.format(k_min),
                bias='retnet_cls_pred_fpn{}_b'.format(k_min)
            )
        if not model.train:
            if cfg.RETINANET.SOFTMAX:
                model.net.GroupSpatialSoftmax(
                    retnet_cls_pred,
                    'retnet_cls_prob_fpn{}'.format(lvl),
                    num_classes=cls_pred_dim
                )
            else:
                model.net.Sigmoid(
                    retnet_cls_pred, 'retnet_cls_prob_fpn{}'.format(lvl)
                )
        if cfg.RETINANET.SHARE_CLS_BBOX_TOWER:
            bbox_feat_list.append(bl_feat)
    
        # rois are in [[batch_idx, x0, y0, x1, y2], ...] format
    # Combine predictions across all levels and retain the top scoring
    rois = np.concatenate([blob.data for blob in roi_inputs])
    scores = np.concatenate([blob.data for blob in score_inputs]).squeeze()
    inds = np.argsort(-scores)[:post_nms_topN]
    rois = rois[inds, :]
    return rois
    
    from detectron.core.config import cfg
import detectron.utils.blob as blob_utils
import detectron.utils.keypoints as keypoint_utils
    
            # add fg targets
        for i in range(rois_fg.shape[0]):
            fg_polys_ind = fg_polys_inds[i]
            poly_gt = polys_gt[fg_polys_ind]
            roi_fg = rois_fg[i]
            # Rasterize the portion of the polygon mask within the given fg roi
            # to an M x M binary image
            mask = segm_utils.polys_to_mask_wrt_box(poly_gt, roi_fg, M)
            mask = np.array(mask > 0, dtype=np.int32)  # Ensure it's binary
            masks[i, :] = np.reshape(mask, M**2)
    else:  # If there are no fg masks (it does happen)
        # The network cannot handle empty blobs, so we must provide a mask
        # We simply take the first bg roi, given it an all -1's mask (ignore
        # label), and label it with class zero (bg).
        bg_inds = np.where(blobs['labels_int32'] == 0)[0]
        # rois_fg is actually one background roi, but that's ok because ...
        rois_fg = sampled_boxes[bg_inds[0]].reshape((1, -1))
        # We give it an -1's blob (ignore label)
        masks = -blob_utils.ones((1, M**2), int32=True)
        # We label it with class = 0 (background)
        mask_class_labels = blob_utils.zeros((1, ))
        # Mark that the first roi has a mask
        roi_has_mask[0] = 1
    
        for filename in filenames:
        fd = codecs.open(filename, mode='r', encoding='utf-8')
        for line in fd.readlines():
            refs = re.findall(r'(?<=<a href=')[^']*', markdown.markdown(line))
            for ref in refs:
                if ref not in urls:
                    urls.append(ref)
    
    
# List of frequently used SAS date and datetime formats
# http://support.sas.com/documentation/cdl/en/etsug/60372/HTML/default/viewer.htm#etsug_intervals_sect009.htm
# https://github.com/epam/parso/blob/master/src/main/java/com/epam/parso/impl/SasFileConstants.java
sas_date_formats = ('DATE', 'DAY', 'DDMMYY', 'DOWNAME', 'JULDAY', 'JULIAN',
                    'MMDDYY', 'MMYY', 'MMYYC', 'MMYYD', 'MMYYP', 'MMYYS',
                    'MMYYN', 'MONNAME', 'MONTH', 'MONYY', 'QTR', 'QTRR',
                    'NENGO', 'WEEKDATE', 'WEEKDATX', 'WEEKDAY', 'WEEKV',
                    'WORDDATE', 'WORDDATX', 'YEAR', 'YYMM', 'YYMMC', 'YYMMD',
                    'YYMMP', 'YYMMS', 'YYMMN', 'YYMON', 'YYMMDD', 'YYQ',
                    'YYQC', 'YYQD', 'YYQP', 'YYQS', 'YYQN', 'YYQR', 'YYQRC',
                    'YYQRD', 'YYQRP', 'YYQRS', 'YYQRN',
                    'YYMMDDP', 'YYMMDDC', 'E8601DA', 'YYMMDDN', 'MMDDYYC',
                    'MMDDYYS', 'MMDDYYD', 'YYMMDDS', 'B8601DA', 'DDMMYYN',
                    'YYMMDDD', 'DDMMYYB', 'DDMMYYP', 'MMDDYYP', 'YYMMDDB',
                    'MMDDYYN', 'DDMMYYC', 'DDMMYYD', 'DDMMYYS',
                    'MINGUO')
    
    
def check_raw(overhead, num):
    check(num + overhead, b' ' * num)
    
    from pandas.io.msgpack import unpackb
    
        dest = pathlib.Path('dist')
    dest.mkdir(exist_ok=True)
    
    ax = fig.add_axes((0.63 + 0.18, 0.1, 0.16, 0.8))
y = np.row_stack((fnx(), fnx(), fnx()))
x = np.arange(10)
y1, y2, y3 = fnx(), fnx(), fnx()
ax.stackplot(x, y1, y2, y3)
ax.set_xticks([])
ax.set_yticks([])
    
    
def pack(o, stream, **kwargs):
    '''
    Pack object `o` and write it to `stream`
    
            exp3 = ('0   1 days\n'
                '1   2 days\n'
                'dtype: timedelta64[ns]')