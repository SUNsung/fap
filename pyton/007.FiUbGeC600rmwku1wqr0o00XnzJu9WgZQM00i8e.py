
        
        
class EditablePKBookStackedInline(admin.StackedInline):
    model = EditablePKBook
    
        def get_user_permissions(self, obj=None):
        '''
        Return a list of permission strings that this user has directly.
        Query all available auth backends. If an object is passed in,
        return only permissions matching this object.
        '''
        return _user_get_permissions(self, obj, 'user')
    
    
class RunInTmpDirMixin:
    '''
    Allow i18n tests that need to generate .po/.mo files to run in an isolated
    temporary filesystem tree created by tempfile.mkdtemp() that contains a
    clean copy of the relevant test code.
    
    
# For more information, see the OGR C API source code:
#  https://www.gdal.org/ogr__api_8h.html
#
# The OGR_Fld_* routines are relevant here.
class Field(GDALBase):
    '''
    Wrap an OGR Field. Needs to be instantiated from a Feature object.
    '''
    
            # Access band
        capi.band_io(self._ptr, access_flag, offset[0], offset[1],
                     size[0], size[1], byref(data_array), shape[0],
                     shape[1], self.datatype(), 0, 0)
    
        @property
    def info(self):
        '''
        Return information about this raster in a string format equivalent
        to the output of the gdalinfo command line utility.
        '''
        if not capi.get_ds_info:
            raise ValueError('GDAL ≥ 2.1 is required for using the info property.')
        return capi.get_ds_info(self.ptr, None).decode()

    
        def __init__(self, data=None, **kwargs):
        self._store = OrderedDict()
        if data is None:
            data = {}
        self.update(data, **kwargs)
    
        def run(self):
        try:
            self.server_sock = self._create_socket_and_bind()
            # in case self.port = 0
            self.port = self.server_sock.getsockname()[1]
            self.ready_event.set()
            self._handle_requests()
    
        def proxy_manager_for(self, proxy, **proxy_kwargs):
        '''Return urllib3 ProxyManager for the given proxy.
    
    #: Python 3.x?
is_py3 = (_ver[0] == 3)
    
    Available hooks:
    
            os.chmod(exe, 0o777)
        self.assertRaises(DistutilsExecError, spawn, [exe])
    
        def test_getrusage(self):
        self.assertRaises(TypeError, resource.getrusage)
        self.assertRaises(TypeError, resource.getrusage, 42, 42)
        usageself = resource.getrusage(resource.RUSAGE_SELF)
        usagechildren = resource.getrusage(resource.RUSAGE_CHILDREN)
        # May not be available on all systems.
        try:
            usageboth = resource.getrusage(resource.RUSAGE_BOTH)
        except (ValueError, AttributeError):
            pass
        try:
            usage_thread = resource.getrusage(resource.RUSAGE_THREAD)
        except (ValueError, AttributeError):
            pass
    
                    b = BytesIO()
                self.assertRaises(TypeError, plistlib.dump, pl, b, fmt=fmt)
    
            data = self.loop.run_until_complete(reader())
        self.assertEqual(data, [b'line1\n', b'line2\n', b'line3'])
    
            # flush the buffer
        fut.set_result(None)
        self.loop._run_once()
        self.assertEqual(tr.get_write_buffer_size(), 0)
        self.assertTrue(self.protocol.resume_writing.called)
    
                self.assertEqual(srv.sockets, ())
    
            # child terminates
        self.running = False
        self.add_zombie(58, 4)
    
    value4
---123--
'''
        environ = {
            'CONTENT_LENGTH':   str(len(data)),
            'CONTENT_TYPE':     'multipart/form-data; boundary=-123',
            'QUERY_STRING':     'key1=value1&key2=value2x',
            'REQUEST_METHOD':   'POST',
        }
        v = gen_result(data, environ)
        self.assertEqual(self._qs_result, v)
    
            self.assertEqual(
            codecs.charmap_decode(b'\x00\x01\x02', 'replace',
                                  {0: 'a', 1: 'b', 2: None}),
            ('ab\ufffd', 3)
        )
    
            linking_url = build_linking_url(
            self.integration,
            self.org,
            'slack-id2',
            'my-channel',
            'http://example.slack.com/response_url'
        )
        responses.add(
            method=responses.POST,
            url='http://example.slack.com/response_url',
            body='{'ok': true}',
            status=200,
            content_type='application/json',
        )
    
            backlogged, size = None, 0
        from sentry.monitoring.queues import backend
        if backend is not None:
            size = backend.get_size('default')
            backlogged = size > 0
    
            # Adding unique constraint on 'GroupTagKey', fields ['project_id',
        # 'group_id', 'environment_id', '_key']
        db.create_unique(
            u'tagstore_grouptagkey', [
                'project_id', 'group_id', 'environment_id', 'key'])
    
            # Adding index on 'EventTag', fields ['group_id', 'key', 'value']
        db.create_index(u'tagstore_eventtag', ['group_id', 'key_id', 'value_id'])
    
        def backwards(self, orm):
        # Removing unique constraint on 'EventTag', fields ['project_id',
        # 'event_id', 'key', 'value']
        db.delete_unique(u'tagstore_eventtag', ['project_id', 'event_id', 'key_id', 'value_id'])
    
    from datetime import timedelta
from django.db.models import Max
from django.utils import timezone
    
        current = roi_feat
    for i in range(cfg.FAST_RCNN.NUM_STACKED_CONVS):
        current = model.ConvGN(
            current, 'head_conv' + str(i + 1), dim_in, hidden_dim, 3,
            group_gn=get_group_gn(hidden_dim),
            stride=1, pad=1,
            weight_init=('MSRAFill', {}),
            bias_init=('ConstantFill', {'value': 0.}))
        current = model.Relu(current, current)
        dim_in = hidden_dim
    
    
# ---------------------------------------------------------------------------- #
# Keypoint heads
# ---------------------------------------------------------------------------- #
    
    
def get_retinanet_bias_init(model):
    '''Initialize the biases for the conv ops that predict class probabilities.
    Initialization is performed such that at the start of training, all
    locations are predicted to be background with high probability
    (e.g., ~0.99 = 1 - cfg.RETINANET.PRIOR_PROB). See the Focal Loss paper for
    details.
    '''
    prior_prob = cfg.RETINANET.PRIOR_PROB
    scales_per_octave = cfg.RETINANET.SCALES_PER_OCTAVE
    aspect_ratios = len(cfg.RETINANET.ASPECT_RATIOS)
    if cfg.RETINANET.SOFTMAX:
        # Multiclass softmax case
        bias = np.zeros((model.num_classes, 1), dtype=np.float32)
        bias[0] = np.log(
            (model.num_classes - 1) * (1 - prior_prob) / (prior_prob)
        )
        bias = np.vstack(
            [bias for _ in range(scales_per_octave * aspect_ratios)]
        )
        bias_init = (
            'GivenTensorFill', {
                'values': bias.astype(dtype=np.float32)
            }
        )
    else:
        # Per-class sigmoid (binary classification) case
        bias_init = (
            'ConstantFill', {
                'value': -np.log((1 - prior_prob) / prior_prob)
            }
        )
    return bias_init
    
        # Create new roi blobs for each FPN level
    # (See: modeling.FPN.add_multilevel_roi_blobs which is similar but annoying
    # to generalize to support this particular case.)
    rois_idx_order = np.empty((0, ))
    for output_idx, lvl in enumerate(range(lvl_min, lvl_max + 1)):
        idx_lvl = np.where(lvls == lvl)[0]
        blob_roi_level = rois[idx_lvl, :]
        outputs[output_idx + 1].reshape(blob_roi_level.shape)
        outputs[output_idx + 1].data[...] = blob_roi_level
        rois_idx_order = np.concatenate((rois_idx_order, idx_lvl))
    rois_idx_restore = np.argsort(rois_idx_order)
    blob_utils.py_op_copy_blob(rois_idx_restore.astype(np.int32), outputs[-1])

    
    from detectron.core.config import cfg
import detectron.modeling.FPN as fpn
import detectron.roi_data.keypoint_rcnn as keypoint_rcnn_roi_data
import detectron.roi_data.mask_rcnn as mask_rcnn_roi_data
import detectron.utils.blob as blob_utils
import detectron.utils.boxes as box_utils
    
        # get anchors from all levels for all scales/aspect ratios
    foas = []
    for lvl in range(k_min, k_max + 1):
        stride = 2. ** lvl
        for octave in range(scales_per_octave):
            octave_scale = 2 ** (octave / float(scales_per_octave))
            for idx in range(num_aspect_ratios):
                anchor_sizes = (stride * octave_scale * anchor_scale, )
                anchor_aspect_ratios = (aspect_ratios[idx], )
                foa = data_utils.get_field_of_anchors(
                    stride, anchor_sizes, anchor_aspect_ratios, octave, idx)
                foas.append(foa)
    all_anchors = np.concatenate([f.field_of_anchors for f in foas])