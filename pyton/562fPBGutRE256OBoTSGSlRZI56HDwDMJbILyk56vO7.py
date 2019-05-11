
        
        
@pytest.mark.parametrize(
    ('username', 'password', 'message'),
    (('a', 'test', b'Incorrect username.'), ('test', 'a', b'Incorrect password.')),
)
def test_login_validate_input(auth, username, password, message):
    response = auth.login(username, password)
    assert message in response.data
    
        with pytest.raises(sqlite3.ProgrammingError) as e:
        db.execute('SELECT 1')
    
    # the signals
from .signals import (
    signals_available,
    template_rendered,
    request_started,
    request_finished,
    got_request_exception,
    request_tearing_down,
    appcontext_tearing_down,
    appcontext_pushed,
    appcontext_popped,
    message_flashed,
    before_render_template,
)
    
    Provides commands from Flask, extensions, and the application. Loads the
application defined in the FLASK_APP environment variable, or from a wsgi.py
file. Setting the FLASK_ENV environment variable to 'development' will enable
debug mode.
    
    Linkfix - a companion to sphinx's linkcheck builder.
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
        def run(self, args, opts):
        # load contracts
        contracts = build_component_list(self.settings.getwithbase('SPIDER_CONTRACTS'))
        conman = ContractsManager(load_object(c) for c in contracts)
        runner = TextTestRunner(verbosity=2 if opts.verbose else 1)
        result = TextTestResult(runner.stream, runner.descriptions, runner.verbosity)
    
        def run(self, args, opts):
        if opts.verbose:
            versions = scrapy_components_versions()
            width = max(len(n) for (n, _) in versions)
            patt = '%-{}s : %s'.format(width)
            for name, version in versions:
                print(patt % (name, version))
        else:
            print('Scrapy %s' % scrapy.__version__)
    
    
def im_detect_mask_scale(
    model, im, target_scale, target_max_size, boxes, hflip=False
):
    '''Computes masks at the given scale.'''
    if hflip:
        masks_scl = im_detect_mask_hflip(
            model, im, target_scale, target_max_size, boxes
        )
    else:
        im_scale = im_conv_body_only(model, im, target_scale, target_max_size)
        masks_scl = im_detect_mask(model, im_scale, boxes)
    return masks_scl
    
    
def add_ResNet_convX_body(model, block_counts):
    '''Add a ResNet body from input data up through the res5 (aka conv5) stage.
    The final res5/conv5 stage may be optionally excluded (hence convX, where
    X = 4 or 5).'''
    freeze_at = cfg.TRAIN.FREEZE_AT
    assert freeze_at in [0, 2, 3, 4, 5]
    
    '''Optimization operator graph construction.'''
    
    logger = logging.getLogger(__name__)
    
    
def add_fast_rcnn_blobs(blobs, im_scales, roidb):
    '''Add blobs needed for training Fast R-CNN style models.'''
    # Sample training RoIs from each image and append them to the blob lists
    for im_i, entry in enumerate(roidb):
        frcn_blobs = _sample_rois(entry, im_scales[im_i], im_i)
        for k, v in frcn_blobs.items():
            blobs[k].append(v)
    # Concat the training blob lists into tensors
    for k, v in blobs.items():
        if isinstance(v, list) and len(v) > 0:
            blobs[k] = np.concatenate(v)
    # Add FPN multilevel training RoIs, if configured
    if cfg.FPN.FPN_ON and cfg.FPN.MULTILEVEL_ROIS:
        _add_multilevel_rois(blobs)
    
        sampled_fg_rois *= im_scale
    repeated_batch_idx = batch_idx * blob_utils.ones(
        (sampled_fg_rois.shape[0], 1)
    )
    sampled_fg_rois = np.hstack((repeated_batch_idx, sampled_fg_rois))
    
    
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
    
            gr = df.groupby(keys, sort=isort)
        left = gr['3rd'].value_counts(**kwargs)
    
        def __init__(self, values, dtype=None, copy=False, context=None):
        for val in values:
            if not isinstance(val, decimal.Decimal):
                raise TypeError('All values must be of type ' +
                                str(decimal.Decimal))
        values = np.asarray(values, dtype=object)
    
    ROLLOUT_FILE = os.path.join(DATA_DIR, 'rollout.json')
    
        description='A complete wechat personal account api',
    long_description=long_description,