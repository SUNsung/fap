
        
            # Sorting the libraries
    inner_blocks = sorted(blocks[0].split('##'))
    for i in range(1 , len(inner_blocks)):
        if inner_blocks[i][0] != '#':
            inner_blocks[i] = '##' + inner_blocks[i]
    inner_blocks=''.join(inner_blocks)
    
    
@bp.route('/<int:id>/update', methods=('GET', 'POST'))
@login_required
def update(id):
    '''Update a post if the current user is the author.'''
    post = get_post(id)
    
        with current_app.open_resource('schema.sql') as f:
        db.executescript(f.read().decode('utf8'))
    
    
def test_logout(client, auth):
    auth.login()
    
            def to_python(self, value):
            return OrderedDict(value)
    
        If there is no handler for the logger's effective level, add a
    :class:`~logging.StreamHandler` for
    :func:`~flask.logging.wsgi_errors_stream` with a basic format.
    '''
    logger = logging.getLogger('flask.app')
    
    
def test_on_run_after_other_commands(usage_tracker_io, shell_pid, shell, logs):
    shell_pid.return_value = 12
    shell.get_history.return_value = ['fuck', 'ls']
    _change_tracker(usage_tracker_io, 12)
    main()
    logs.how_to_configure_alias.assert_called_once()
    
    
def test_match():
    assert match(Command('sudo apt update', match_output))
    
    
@pytest.mark.parametrize('before, after', [
    ('brew install sshfs',
     'brew cask install osxfuse && brew install sshfs')])
def test_get_new_command(before, after):
    command = Command(before, output)
    assert get_new_command(command) == after

    
    
def commit_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/commit/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'commit ' + text, refuri=ref, **options)
    return [node], []
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
        def __init__(self):
        self.settings = None  # set in scrapy.cmdline
    
    
class Command(ScrapyCommand):
    requires_project = True
    default_settings = {'LOG_ENABLED': False}
    
    from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
            def _identityVerifyingInfoCallback(self, connection, where, ret):
            if where & SSL_CB_HANDSHAKE_START:
                set_tlsext_host_name(connection, self._hostnameBytes)
            elif where & SSL_CB_HANDSHAKE_DONE:
                try:
                    verifyHostname(connection, self._hostnameASCII)
                except verification_errors as e:
                    logger.warning(
                        'Remote certificate is not valid for hostname '{}'; {}'.format(
                            self._hostnameASCII, e))
    
    from .hash_table import HashTable
from number_theory.prime_numbers import next_prime, check_prime
    
                if (arr[i-1] <= j):
                dp[i][j] = dp[i][j] or dp[i-1][j-arr[i-1]]
    
        return ''.join(freqOrder)
    
        Returns:
        blob (ndarray): R x 5 matrix of RoIs in the image pyramid with columns
            [level, x1, y1, x2, y2]
    '''
    rois, levels = _project_im_rois(im_rois, im_scale)
    rois_blob = np.hstack((levels, rois))
    return rois_blob.astype(np.float32, copy=False)
    
    logger = logging.getLogger(__name__)
    
    
# Path to data dir
_DATA_DIR = os.path.join(os.path.dirname(__file__), 'data')
    
    
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
    
    
def build_generic_detection_model(
    model,
    add_conv_body_func,
    add_roi_box_head_func=None,
    add_roi_mask_head_func=None,
    add_roi_keypoint_head_func=None,
    freeze_conv_body=False
):
    def _single_gpu_build_func(model):
        '''Build the model on a single GPU. Can be called in a loop over GPUs
        with name and device scoping to create a data parallel model.
        '''
        # Add the conv body (called 'backbone architecture' in papers)
        # E.g., ResNet-50, ResNet-50-FPN, ResNeXt-101-FPN, etc.
        blob_conv, dim_conv, spatial_scale_conv = add_conv_body_func(model)
        if freeze_conv_body:
            for b in c2_utils.BlobReferenceList(blob_conv):
                model.StopGradient(b, b)
    
    When renaming functions, it's generally a good idea to codemod existing yaml
config files. An easy way to batch edit, by example, is a shell command like
    
        def forward(self, inputs, outputs):
        '''See modeling.detector.GenerateProposalLabels for inputs/outputs
        documentation.
        '''
        # During training we reuse the data loader code. We populate roidb
        # entries on the fly using the rois generated by RPN.
        # im_info: [[im_height, im_width, im_scale], ...]
        rois = inputs[0].data
        roidb = blob_utils.deserialize(inputs[1].data)
        im_info = inputs[2].data
        im_scales = im_info[:, 2]
        output_blob_names = fast_rcnn_roi_data.get_fast_rcnn_blob_names()
        # For historical consistency with the original Faster R-CNN
        # implementation we are *not* filtering crowd proposals.
        # This choice should be investigated in the future (it likely does
        # not matter).
        json_dataset.add_proposals(roidb, rois, im_scales, crowd_thresh=0)
        roidb_utils.add_bbox_regression_targets(roidb)
        blobs = {k: [] for k in output_blob_names}
        fast_rcnn_roi_data.add_fast_rcnn_blobs(blobs, im_scales, roidb)
        for i, k in enumerate(output_blob_names):
            blob_utils.py_op_copy_blob(blobs[k], outputs[i])

    
        _distribute_rois_over_fpn_levels('rois')
    if cfg.MODEL.MASK_ON:
        _distribute_rois_over_fpn_levels('mask_rois')
    if cfg.MODEL.KEYPOINTS_ON:
        _distribute_rois_over_fpn_levels('keypoint_rois')

    
    
def _get_image_blob(roidb):
    '''Builds an input blob from the images in the roidb at the specified
    scales.
    '''
    num_images = len(roidb)
    # Sample random scales to use for each image in this batch
    scale_inds = np.random.randint(
        0, high=len(cfg.TRAIN.SCALES), size=num_images
    )
    processed_ims = []
    im_scales = []
    for i in range(num_images):
        im = cv2.imread(roidb[i]['image'])
        assert im is not None, \
            'Failed to read image \'{}\''.format(roidb[i]['image'])
        if roidb[i]['flipped']:
            im = im[:, ::-1, :]
        target_size = cfg.TRAIN.SCALES[scale_inds[i]]
        im, im_scale = blob_utils.prep_im_for_blob(
            im, cfg.PIXEL_MEANS, target_size, cfg.TRAIN.MAX_SIZE
        )
        im_scales.append(im_scale)
        processed_ims.append(im)
    
        # Split the generated labels, etc. into labels per each field of anchors
    blobs_out = []
    start_idx = 0
    for foa in foas:
        H = foa.field_size
        W = foa.field_size
        end_idx = start_idx + H * W
        _labels = labels[start_idx:end_idx]
        _bbox_targets = bbox_targets[start_idx:end_idx, :]
        start_idx = end_idx