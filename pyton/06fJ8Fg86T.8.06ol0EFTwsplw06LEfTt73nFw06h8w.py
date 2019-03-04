
        
        
def full_evaluation(model, session, instances, labels, set_name, classes):
  '''Prints a full evaluation on the current set.
    
      # also store down the dimensionality of the data
  # - just pull from one set, required to be same for all sets
  hps.num_steps = datasets.values()[0]['num_steps']
  hps.ndatasets = len(hps.dataset_names)
    
    # not the best way to do this but E is small enough
rates = []
spikes = []
for trial in xrange(E):
  if rnn_to_use[trial] == 0:
    rates.append(rates_a[trial])
    spikes.append(spikes_a[trial])
  else:
    rates.append(rates_b[trial])
    spikes.append(spikes_b[trial])
    
    
def imdb_raw_data(data_path=None):
  '''Load IMDB raw data from data directory 'data_path'.
  Reads IMDB tf record files containing integer ids,
  and performs mini-batching of the inputs.
  Args:
    data_path: string path to the directory where simple-examples.tgz has
      been extracted.
  Returns:
    tuple (train_data, valid_data)
    where each of the data objects can be passed to IMDBIterator.
  '''
    
    # Data.
from model_utils import helper
from model_utils import model_utils
    
      return variable_mapping
    
            # argmax decoder
        cell_output = output_fn(cell_output)  # logits
        next_input_id = tf.cast(tf.argmax(cell_output, 1), dtype=dtype)
        done = tf.equal(next_input_id, end_of_sequence_id)
        cell_input = tf.gather(embeddings, next_input_id)
    
        with gzip.open(paths[1], 'rb') as imgpath:
        x_train = np.frombuffer(imgpath.read(), np.uint8,
                                offset=16).reshape(len(y_train), 28, 28)
    
    
def get(identifier):
    if identifier is None:
        return None
    if isinstance(identifier, dict):
        return deserialize(identifier)
    elif isinstance(identifier, six.string_types):
        config = {'class_name': str(identifier), 'config': {}}
        return deserialize(config)
    elif callable(identifier):
        return identifier
    else:
        raise ValueError('Could not interpret regularizer identifier: ' +
                         str(identifier))

    
    
def test_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
    # MNIST dataset
(x_train, _), (x_test, _) = mnist.load_data()
    
    learning_rate = 1e-6
clip_norm = 1.0
    
    import datetime
import keras
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation, Flatten
from keras.layers import Conv2D, MaxPooling2D
from keras import backend as K
    
        def setUp(self):
        from acme.errors import BadNonce
        self.error = BadNonce(nonce='xxx', error='error')
    
    # Additional templates that should be rendered to pages, maps page names to
# template names.
#html_additional_pages = {}
    
    HEADER_ARGS = {'Strict-Transport-Security': HSTS_ARGS,
               'Upgrade-Insecure-Requests': UIR_ARGS}
    
            :returns: If addresses conflicts with vhost
        :rtype: bool
    
            self.vh_truth = util.get_vh_truth(
            self.temp_dir, 'debian_apache_2_4/multiple_vhosts')
    
        @certbot_util.patch_get_utility()
    def test_select_cancel(self, mock_util):
        mock_util().checklist.return_value = (display_util.CANCEL, 'whatever')
        vhs = select_vhost_multiple([self.vhosts[2], self.vhosts[3]])
        self.assertFalse(vhs)
    
    autodoc_member_order = 'bysource'
autodoc_default_flags = ['show-inheritance', 'private-members']
    
        hass.bus.listen_once(EVENT_HOMEASSISTANT_STOP,
                         lambda event: client.close())
    
            # parsing response
        for info in result:
            mac = info['macAddr']
            name = info['hostName']
            # No address = no item :)
            if mac is None:
                continue
    
            return [device.mac for device in self.last_results]
    
        def send_message(self, message='', **kwargs):
        '''Send a message to a user.'''
        data = {
            'apiKey': self.api_key,
            'to': self.recipient,
            'content': message,
        }
    
        def __init__(self, url, session, loop):
        '''Initialize the Flock notification service.'''
        self._loop = loop
        self._url = url
        self._session = session
    
    _LOGGER = logging.getLogger(__name__)
    
        def send_message(self, message='', **kwargs):
        '''Send a message to a user.'''
        self.gntp.notify(noteType='Notification',
                         title=kwargs.get(ATTR_TITLE, ATTR_TITLE_DEFAULT),
                         description=message)

    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
    vol.Optional(CONF_PORT, default=DEFAULT_PORT): cv.port,
})
    
            text = message
        mycroft = MycroftAPI(self.mycroft_ip)
        if mycroft is not None:
            mycroft.speak_text(text)
        else:
            _LOGGER.log('Could not reach this instance of mycroft')

    
        Returns:
        [by ref] blobs (dict): new keys named by `name + 'fpn' + level`
            are added to dict each with a value that's an R_level x 5 ndarray of
            RoIs (see _get_rois_blob for format)
    '''
    lvl_min = cfg.FPN.ROI_MIN_LEVEL
    lvl_max = cfg.FPN.ROI_MAX_LEVEL
    lvls = fpn.map_rois_to_fpn_levels(blobs[name][:, 1:5], lvl_min, lvl_max)
    fpn.add_multilevel_roi_blobs(
        blobs, name, blobs[name], lvls, lvl_min, lvl_max
    )
    
    # Required dataset entry keys
_IM_DIR = 'image_directory'
_ANN_FN = 'annotation_file'
    
        # ==========================================================================
    # cls loss - depends on softmax/sigmoid outputs
    # ==========================================================================
    for lvl in range(k_min, k_max + 1):
        suffix = 'fpn{}'.format(lvl)
        cls_lvl_logits = 'retnet_cls_pred_' + suffix
        if not cfg.RETINANET.SOFTMAX:
            cls_focal_loss = model.net.SigmoidFocalLoss(
                [
                    cls_lvl_logits, 'retnet_cls_labels_' + suffix,
                    'retnet_fg_num'
                ],
                ['fl_{}'.format(suffix)],
                gamma=cfg.RETINANET.LOSS_GAMMA,
                alpha=cfg.RETINANET.LOSS_ALPHA,
                scale=model.GetLossScale(),
                num_classes=model.num_classes - 1
            )
            gradients.append(cls_focal_loss)
            losses.append('fl_{}'.format(suffix))
        else:
            cls_focal_loss, gated_prob = model.net.SoftmaxFocalLoss(
                [
                    cls_lvl_logits, 'retnet_cls_labels_' + suffix,
                    'retnet_fg_num'
                ],
                ['fl_{}'.format(suffix), 'retnet_prob_{}'.format(suffix)],
                gamma=cfg.RETINANET.LOSS_GAMMA,
                alpha=cfg.RETINANET.LOSS_ALPHA,
                scale=model.GetLossScale(),
                num_classes=model.num_classes
            )
            gradients.append(cls_focal_loss)
            losses.append('fl_{}'.format(suffix))