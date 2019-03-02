
        
          print('%s set: Precision: %.3f, Recall: %.3f, F1: %.3f' % (
      set_name, precision, recall, f1))
    
        # Define the loss function and the optimization algorithm
    self.cross_entropies = tf.nn.sparse_softmax_cross_entropy_with_logits(
        logits=self.scores, labels=tf.reduce_mean(self.batch_labels))
    self.cost = tf.reduce_sum(self.cross_entropies, name='cost')
    self.global_step = tf.Variable(0, name='global_step', trainable=False)
    self.optimizer = tf.train.AdamOptimizer()
    self.train_op = self.optimizer.minimize(self.cost,
                                            global_step=self.global_step)
    
        # External inputs (not changing by dataset, by definition).
    if hps.ext_input_dim > 0:
      self.ext_input = tf.placeholder(tf.float32,
                                      [None, num_steps, ext_input_dim],
                                      name='ext_input')
    else:
      self.ext_input = None
    ext_input_bxtxi = self.ext_input
    
    # generate trials for both RNNs
rates_a, x0s_a, _ = generate_data(rnn_a, T=T, E=E, x0s=x0s, P_sxn=P_nxn,
                                  input_magnitude=0.0, input_times=None)
spikes_a = spikify_data(rates_a, rng, rnn_a['dt'], rnn_a['max_firing_rate'])
    
        for index, pred in zip(index_batch, pred_batch):
      indices_predictions.append([str(id_to_word[index]), pred])
    batch_of_indices_predictions.append(indices_predictions)
  return batch_of_indices_predictions
    
    
def find_all_ngrams(dataset, n):
  '''Generate a list of all ngrams.'''
  return zip(*[dataset[i:] for i in xrange(n)])
    
      # Output variables only for the Generator.  Discriminator output biases
  # will begin randomly initialized.
  if model == 'gen':
    softmax_b = [
        v for v in tf.trainable_variables() if v.op.name == 'gen/rnn/softmax_b'
    ][0]
    
    
def login_required(view):
    '''View decorator that redirects anonymous users to the login page.'''
    @functools.wraps(view)
    def wrapped_view(**kwargs):
        if g.user is None:
            return redirect(url_for('auth.login'))
    
    
def test_login(client, auth):
    # test that viewing the page renders without template errors
    assert client.get('/auth/login').status_code == 200
    
        monkeypatch.setattr('flaskr.db.init_db', fake_init_db)
    result = runner.invoke(args=['init-db'])
    assert 'Initialized' in result.output
    assert Recorder.called

    
            :param name: the optional name of the filter, otherwise the
                     function name will be used.
        '''
        def register_template(state):
            state.app.jinja_env.filters[name or f.__name__] = f
        self.record_once(register_template)
    
            def check(self, value):
            return isinstance(value, OrderedDict)
    
            def __init__(self, name, doc=None):
            self.name = name
            self.__doc__ = doc
        def _fail(self, *args, **kwargs):
            raise RuntimeError('signalling support is unavailable '
                               'because the blinker library is '
                               'not installed.')
        send = lambda *a, **kw: None
        connect = disconnect = has_receivers_for = receivers_for = \
            temporarily_connected_to = connected_to = _fail
        del _fail
    
        def get_source(self, environment, template):
        if self.app.config['EXPLAIN_TEMPLATE_LOADING']:
            return self._get_source_explained(environment, template)
        return self._get_source_fast(environment, template)
    
            .. versionadded:: 0.11
        '''
        mt = self.mimetype
        return (
            mt == 'application/json'
            or (mt.startswith('application/')) and mt.endswith('+json')
        )
    
    
def info(message, *args):
    print(message % args, file=sys.stderr)
    
    
@pytest.fixture(autouse=True)
def leak_detector():
    yield
    
        def __delitem__(self, key):
        del self._store[key.lower()]
    
        @get_item_parameters
    def test_get(self, key, value):
        assert self.lookup_dict.get(key) == value

    
    
class FlaskyStyle(Style):
    background_color = '#f8f8f8'
    default_style = ''
    
       >>> payload = dict(key1='value1', key2='value2')
   >>> r = requests.post('https://httpbin.org/post', data=payload)
   >>> print(r.text)
   {
     ...
     'form': {
       'key2': 'value2',
       'key1': 'value1'
     },
     ...
   }
    
        def __init__(self, username, password):
        self.username = username
        self.password = password
    
        # Redirection.
    300: ('multiple_choices',),
    301: ('moved_permanently', 'moved', '\\o-'),
    302: ('found',),
    303: ('see_other', 'other'),
    304: ('not_modified',),
    305: ('use_proxy',),
    306: ('switch_proxy',),
    307: ('temporary_redirect', 'temporary_moved', 'temporary'),
    308: ('permanent_redirect',
          'resume_incomplete', 'resume',),  # These 2 to be removed in 3.0
    
        By default this will get the strings from the blns.txt file
    
            env.scrapy_all_settings.append({
            'docname': env.docname,
            'setting_name': setting_name,
            'refid': refid,
        })
    
    del sys

    
        # --- backwards compatibility for scrapy.conf.settings singleton ---
    import warnings
    from scrapy.exceptions import ScrapyDeprecationWarning
    with warnings.catch_warnings():
        warnings.simplefilter('ignore', ScrapyDeprecationWarning)
        from scrapy import conf
        conf.settings = settings
    # ------------------------------------------------------------------
    
            run = self.testsRun
        plural = 's' if run != 1 else ''
    
    
class ReturnsContract(Contract):
    ''' Contract to check the output of a callback
    
            If it has already been started, stop it. In all cases, close all spiders
        and the downloader.
        '''
        if self.running:
            # Will also close spiders and downloader
            return self.stop()
        elif self.open_spiders:
            # Will also close downloader
            return self._close_all_spiders()
        else:
            return defer.succeed(self.downloader.close())
    
        if len(sys.argv) > 3:
        wait_time = int(sys.argv[3])
    else:
        wait_time = 0
    
    
def rc4crypt(data, key):
    return _Crypto_Cipher_ARC4_new(key).encrypt(data) if key else data
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
        def __str__(self):
        #return 'MismatchedTokenException('+self.expecting+')'
        return 'MismatchedTokenException(%r!=%r)' % (
            self.getUnexpectedType(), self.expecting
            )
    __repr__ = __str__
    
    import josepy as jose
    
    HSTS_ARGS = ['always', 'set', 'Strict-Transport-Security',
             '\'max-age=31536000\'']
'''Apache header arguments for HSTS'''
    
        def _addr_less_specific(self, addr):
        '''Returns if addr.get_addr() is more specific than self.get_addr().'''
        # pylint: disable=protected-access
        return addr._rank_specific_addr() > self._rank_specific_addr()
    
        @certbot_util.patch_get_utility()
    def test_select_cancel(self, mock_util):
        mock_util().checklist.return_value = (display_util.CANCEL, 'whatever')
        vhs = select_vhost_multiple([self.vhosts[2], self.vhosts[3]])
        self.assertFalse(vhs)
    
    # If true, keep warnings as 'system message' paragraphs in the built documents.
#keep_warnings = False
    
    # looks that flickr won't return urls for all sizes
# we required in 'extras field without a acceptable header
dummy_header = {
    'User-Agent':'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:53.0) Gecko/20100101 Firefox/53.0'
}
def get_content_headered(url):
    return get_content(url, dummy_header)
    
    import json
import urllib.parse
import base64
import binascii
import re
    
        if service == 'plus': # Google Plus
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
        def random_see(dev_id, name):
        '''Randomize a sighting.'''
        see(
            dev_id=dev_id,
            host_name=name,
            gps=(hass.config.latitude + offset(),
                 hass.config.longitude + offset()),
            gps_accuracy=random.randrange(50, 150),
            battery=random.randrange(10, 90)
        )
    
    DEFAULT_IP = '192.168.1.1'
    
    from homeassistant.components.notify import (
    PLATFORM_SCHEMA, BaseNotificationService, ATTR_TITLE)
from homeassistant.const import (CONF_TOKEN)
import homeassistant.helpers.config_validation as cv
    
        def __init__(self, hass, filename, add_timestamp):
        '''Initialize the service.'''
        self.filepath = os.path.join(hass.config.config_dir, filename)
        self.add_timestamp = add_timestamp
    
    
def cityscapes_to_coco_without_person_rider(cityscapes_id):
    lookup = {
        0: 0,  # ... background
        1: 2,  # bicycle
        2: 3,  # car
        3: -1,  # person (ignore)
        4: 7,  # train
        5: 8,  # truck
        6: 4,  # motorcycle
        7: 6,  # bus
        8: -1,  # rider (ignore)
    }
    return lookup[cityscapes_id]
    
            if not model.train or cfg.MODEL.FASTER_RCNN:
            # Proposals are needed during:
            #  1) inference (== not model.train) for RPN only and Faster R-CNN
            #  OR
            #  2) training for Faster R-CNN
            # Otherwise (== training for RPN only), proposals are not needed
            lvl_anchors = generate_anchors(
                stride=2.**lvl,
                sizes=(cfg.FPN.RPN_ANCHOR_START_SIZE * 2.**(lvl - k_min), ),
                aspect_ratios=cfg.FPN.RPN_ASPECT_RATIOS
            )
            rpn_cls_probs_fpn = model.net.Sigmoid(
                rpn_cls_logits_fpn, 'rpn_cls_probs_fpn' + slvl
            )
            model.GenerateProposals(
                [rpn_cls_probs_fpn, rpn_bbox_pred_fpn, 'im_info'],
                ['rpn_rois_fpn' + slvl, 'rpn_roi_probs_fpn' + slvl],
                anchors=lvl_anchors,
                spatial_scale=sc
            )
    
            blobs_out:
          - (variable set of blobs): returns whatever blobs are required for
            training the model. It does this by querying the data loader for
            the list of blobs that are needed.
        '''
        name = 'GenerateProposalLabelsOp:' + ','.join(
            [str(b) for b in blobs_in]
        )
    
    from detectron.core.config import cfg
from detectron.utils.c2 import const_fill
from detectron.utils.c2 import gauss_fill
import detectron.modeling.ResNet as ResNet
import detectron.utils.blob as blob_utils
    
    
# ---------------------------------------------------------------------------- #
# ********************** DEPRECATED FUNCTIONALITY BELOW ********************** #
# ---------------------------------------------------------------------------- #
    
    def add_generic_rpn_outputs(model, blob_in, dim_in, spatial_scale_in):
    '''Add RPN outputs (objectness classification and bounding box regression)
    to an RPN model. Abstracts away the use of FPN.
    '''
    loss_gradients = None
    if cfg.FPN.FPN_ON:
        # Delegate to the FPN module
        FPN.add_fpn_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if cfg.MODEL.FASTER_RCNN:
            # CollectAndDistributeFpnRpnProposals also labels proposals when in
            # training mode
            model.CollectAndDistributeFpnRpnProposals()
        if model.train:
            loss_gradients = FPN.add_fpn_rpn_losses(model)
    else:
        # Not using FPN, add RPN to a single scale
        add_single_scale_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if model.train:
            loss_gradients = add_single_scale_rpn_losses(model)
    return loss_gradients
    
        blobs['keypoint_rois'] = sampled_fg_rois
    blobs['keypoint_locations_int32'] = heats.astype(np.int32, copy=False)
    blobs['keypoint_weights'] = weights