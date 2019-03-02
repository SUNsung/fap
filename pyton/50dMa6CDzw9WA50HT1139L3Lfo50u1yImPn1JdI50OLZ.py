
        
        
def login_required(view):
    '''View decorator that redirects anonymous users to the login page.'''
    @functools.wraps(view)
    def wrapped_view(**kwargs):
        if g.user is None:
            return redirect(url_for('auth.login'))
    
    
@pytest.mark.parametrize('path', (
    '/create',
    '/1/update',
    '/1/delete',
))
def test_login_required(client, path):
    response = client.post(path)
    assert response.headers['Location'] == 'http://localhost/auth/login'
    
        def make_setup_state(self, app, options, first_registration=False):
        '''Creates an instance of :meth:`~flask.blueprints.BlueprintSetupState`
        object that is later passed to the register callback functions.
        Subclasses can override this to return a subclass of the setup state.
        '''
        return BlueprintSetupState(self, app, options, first_registration)
    
    
def explain_ignored_app_run():
    if os.environ.get('WERKZEUG_RUN_MAIN') != 'true':
        warn(Warning('Silently ignoring app.run() because the '
                     'application is run from the flask command line '
                     'executable.  Consider putting app.run() behind an '
                     'if __name__ == '__main__' guard to silence this '
                     'warning.'), stacklevel=3)

    
    
def _lookup_req_object(name):
    top = _request_ctx_stack.top
    if top is None:
        raise RuntimeError(_request_ctx_err_msg)
    return getattr(top, name)
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
        n_samples = 2000
    list_n_features = np.linspace(500, 3000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, [n_samples],
                                           list_n_features, precompute=False)
    plt.subplot(212)
    plt.plot(list_n_features, lasso_results, 'b-', label='Lasso')
    plt.plot(list_n_features, lars_lasso_results, 'r-', label='LassoLars')
    plt.title('%d samples, alpha=%s' % (n_samples, alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of features')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    fixed_batch_size_comparison(X)
variable_batch_size_comparison(X)
plt.show()

    
    '''
# Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: Simplified BSD
    
    fit_data = data[np.argsort(model.row_labels_)]
fit_data = fit_data[:, np.argsort(model.column_labels_)]
    
    '''
print(__doc__)
    
    We generate data from three groups of waveforms. Two of the waveforms
(waveform 1 and waveform 2) are proportional one to the other. The cosine
distance is invariant to a scaling of the data, as a result, it cannot
distinguish these two waveforms. Thus even with no noise, clustering
using this distance will not separate out waveform 1 and 2.
    
    agglo.fit(X)
X_reduced = agglo.transform(X)
    
        plt.figure(figsize=(6, 4))
    for i in range(X_red.shape[0]):
        plt.text(X_red[i, 0], X_red[i, 1], str(y[i]),
                 color=plt.cm.nipy_spectral(labels[i] / 10.),
                 fontdict={'weight': 'bold', 'size': 9})
    
    plt.figure(figsize=(12, 12))
    
    # Number of run (with randomly generated dataset) for each strategy so as
# to be able to compute an estimate of the standard deviation
n_runs = 5
    
    ms = MeanShift(bandwidth=bandwidth, bin_seeding=True)
ms.fit(X)
labels = ms.labels_
cluster_centers = ms.cluster_centers_
    
        stream_types = [  #this is just a sample. Will make it in prepare()
        # {'id': '1080'},
        # {'id': '720'},
        # {'id': '360'},
        # {'id': '288'},
        # {'id': '190'},
        # {'id': '180'},
        
    ]
    
    #----------------------------------------------------------------------
#helper
#https://stackoverflow.com/questions/2148119/how-to-convert-an-xml-string-to-a-dictionary-in-python
def dictify(r,root=True):
    if root:
        return {r.tag : dictify(r, False)}
    d=copy(r.attrib)
    if r.text:
        d['_text']=r.text
    for x in r.findall('./*'):
        if x.tag not in d:
            d[x.tag]=[]
        d[x.tag].append(dictify(x,False))
    return d
    
            for p in js_path:
            if 'mtool' in p or 'mcore' in p:
                js_text = get_content(p)
                hit = re.search(r'\(\'(.+?)\',(\d+),(\d+),\'(.+?)\'\.split\(\'\|\'\),\d+,\{\}\)', js_text)
    
        def get_sign(self, media_url):
        media_host = parse.urlparse(media_url).netloc
        ran = random.randint(0, 9999999)
        ssl_callback = get_content('http://{}/ssl/ssl.shtml?r={}'.format(media_host, ran)).split(',')
        ssl_ts = int(datetime.datetime.strptime(ssl_callback[1], '%b %d %H:%M:%S %Y').timestamp() + int(ssl_callback[0]))
        sign_this = self.__class__.ENCRYPT_SALT + parse.urlparse(media_url).path + str(ssl_ts)
        arg_h = base64.b64encode(hashlib.md5(bytes(sign_this, 'utf-8')).digest(), altchars=b'-_')
        return ssl_ts, arg_h.decode('utf-8').strip('=')
    
    def shorten_title(title):
    m1 = re.search('[[0-9]*]', title)
    m2 = re.search(''.*'', title)
    if m1:
        title = m1.group(0)
    if m2:
        title = ' '.join((title, m2.group(0)))   
    return title[:50] + ' [...]'    
    
            self._hass.bus.fire(EVENT_NAME, {
            EVENT_DATA_NAME: self.name,
            EVENT_DATA_ADDRESS: self.address,
            EVENT_DATA_QUEUED_TIME: time_diff,
            EVENT_DATA_TYPE: hass_click_type
        })
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return an Actiontec scanner.'''
    scanner = ActiontecDeviceScanner(config[DOMAIN])
    return scanner if scanner.success_init else None
    
            self.last_results = {}
        response = self._make_request()
        if response.status_code != 200:
            _LOGGER.error(
                'Got HTTP status code %d when getting device list',
                response.status_code)
            return False
        try:
            data = response.json()
            result = data['responses'][0]
            devices = result['output']['devices']
            for device in devices:
                macs = device['knownMACAddresses']
                if not macs:
                    _LOGGER.warning(
                        'Skipping device without known MAC address')
                    continue
                mac = macs[-1]
                connections = device['connections']
                if not connections:
                    _LOGGER.debug('Device %s is not connected', mac)
                    continue
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.host = config[CONF_HOST]
        self.username = config[CONF_USERNAME]
        self.password = config[CONF_PASSWORD]
        self.last_results = {}
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_COMMAND): cv.string,
    vol.Optional(CONF_NAME): cv.string,
})
    
        _LOGGER.error(
        'Error %s : %s (Code %s)', response.status_code, error_message,
        error_code)

    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_FILENAME): cv.string,
    vol.Optional(CONF_TIMESTAMP, default=False): cv.boolean,
})
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/notify.free_mobile/
'''
import logging
    
        def send_message(self, message='', **kwargs):
        '''Send a message to Lannouncer.'''
        data = kwargs.get(ATTR_DATA)
        if data is not None and ATTR_METHOD in data:
            method = data.get(ATTR_METHOD)
        else:
            method = ATTR_METHOD_DEFAULT
    
        def send_message(self, message='', **kwargs):
        '''Send a message to a user.'''
        _LOGGER.debug('Sending to: %s, %s', self._recipient, str(self._device))
        data = {
            'secret': self._secret,
            'to': self._recipient,
            'device': self._device,
            'payload': message,
        }
    
    
def im_detect_keypoints_hflip(model, im, target_scale, target_max_size, boxes):
    '''Computes keypoint predictions on the horizontally flipped image.
    Function signature is the same as for im_detect_keypoints_aug.
    '''
    # Compute keypoints for the flipped image
    im_hf = im[:, ::-1, :]
    boxes_hf = box_utils.flip_boxes(boxes, im.shape[1])
    
    # mapping coco categories to cityscapes (our converted json) id
# cityscapes
# INFO roidb.py: 220: 1       bicycle: 7286
# INFO roidb.py: 220: 2           car: 53684
# INFO roidb.py: 220: 3        person: 35704
# INFO roidb.py: 220: 4         train: 336
# INFO roidb.py: 220: 5         truck: 964
# INFO roidb.py: 220: 6    motorcycle: 1468
# INFO roidb.py: 220: 7           bus: 758
# INFO roidb.py: 220: 8         rider: 3504
    
    
def add_ResNet50_conv5_body(model):
    return add_ResNet_convX_body(model, (3, 4, 6, 3))
    
    The Fast R-CNN head produces a feature representation of the RoI for the purpose
of bounding box classification and regression. The box output module converts
the feature representation into classification and regression predictions.
'''
    
    '''Various network 'heads' for predicting keypoints in Mask R-CNN.
    
    
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
    
    from detectron.core.config import cfg
import detectron.modeling.FPN as fpn
import detectron.roi_data.keypoint_rcnn as keypoint_rcnn_roi_data
import detectron.roi_data.mask_rcnn as mask_rcnn_roi_data
import detectron.utils.blob as blob_utils
import detectron.utils.boxes as box_utils
    
    # Example usage:
# data_loader_benchmark.par \
#   NUM_GPUS 2 \
#   TRAIN.DATASETS '('voc_2007_trainval',)' \
#   TRAIN.PROPOSAL_FILES /path/to/voc_2007_trainval/proposals.pkl \
#   DATA_LOADER.NUM_THREADS 4 \
#   DATA_LOADER.MINIBATCH_QUEUE_SIZE 64 \
#   DATA_LOADER.BLOBS_QUEUE_CAPACITY 8