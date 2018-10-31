
        
          @property
  def mean(self):
    return self.mean_bxn
    
      if output_dist == 'poisson':
    rates = means = conversion_factor * model_vals['output_dist_params']
    plot_time_series(rates, bidx, n_to_plot=n_to_plot, scale=scale,
                     title=col_title + ' rates (LFADS - red, Truth - black)')
  elif output_dist == 'gaussian':
    means_vars = model_vals['output_dist_params']
    means, vars = np.split(means_vars,2, axis=2) # bxtxn
    stds = np.sqrt(vars)
    plot_time_series(means, bidx, n_to_plot=n_to_plot, scale=scale,
                     title=col_title + ' means (LFADS - red, Truth - black)')
    plot_time_series(means+stds, bidx, n_to_plot=n_to_plot, scale=scale,
                     color='c')
    plot_time_series(means-stds, bidx, n_to_plot=n_to_plot, scale=scale,
                     color='c')
  else:
    assert 'NIY'
    
      If my_dataset (filename) stem is in the directory, the read routine will try
  and load it.  The datasets dictionary will then look like
  dataset['first_day'] -> (first day data dictionary)
  dataset['second_day'] -> (first day data dictionary)
    
      # A bit of filtering. We don't care about spectral properties, or
  # filtering artifacts, simply correlate time steps a bit.
  filt_len = 6
  bc_filt = np.ones([filt_len])/float(filt_len)
  for c in range(nchannels_all):
    all_data_nxtc[c,:] = scipy.signal.filtfilt(bc_filt, [1.0], all_data_nxtc[c,:])
    
    
def create_discriminator(hparams,
                         sequence,
                         is_training,
                         reuse=None,
                         initial_state=None,
                         inputs=None,
                         present=None):
  '''Create the Discriminator model specified by the FLAGS and hparams.
    
      Returns:
    final_gen_objective:  Final REINFORCE objective for the sequence.
    rewards:  tf.float32 Tensor of rewards for sequence of shape [batch_size,
      sequence_length]
    advantages: tf.float32 Tensor of advantages for sequence of shape
      [batch_size, sequence_length]
    baselines:  tf.float32 Tensor of baselines for sequence of shape
      [batch_size, sequence_length]
    maintain_averages_op:  ExponentialMovingAverage apply average op to
      maintain the baseline.
  '''
  # Final Generator objective.
  final_gen_objective = 0.
  gamma = hparams.rl_discount_rate
  eps = 1e-7
    
        # Maximize reward.
    gen_grads = tf.gradients(-final_gen_reward, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    maximize_op = gen_optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    
        ## Discriminator Models.
    if (FLAGS.discriminator_model == 'rnn_nas' or
        FLAGS.discriminator_model == 'rnn_zaremba' or
        FLAGS.discriminator_model == 'rnn_vd' or
        FLAGS.discriminator_model == 'cnn'):
      load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
      print('Restoring Discriminator from %s.' % load_ckpt)
      tf.logging.info('Restoring Discriminator from %s.' % load_ckpt)
      dis_init_saver = init_savers['dis_init_saver']
      dis_init_saver.restore(sess, load_ckpt)
    
      # *Total* number of n-grams produced by the generator.
  total_ngrams_produced = 0
    
    
def test_when_successfully_configured(usage_tracker_io, shell_pid,
                                      shell, shell_config, logs):
    shell.get_history.return_value = ['fuck']
    shell_pid.return_value = 12
    _change_tracker(usage_tracker_io, 12)
    shell_config.read.return_value = ''
    main()
    shell_config.write.assert_any_call('eval $(thefuck --alias)')
    logs.configured_successfully.assert_called_once()

    
        proc.sendline(u'ehco test')
    
    
@pytest.mark.functional
def test_how_to_configure_alias(proc, TIMEOUT):
    proc.sendline('unset -f fuck')
    how_to_configure(proc, TIMEOUT)

    
    
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_zshrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'zsh')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
    
@pytest.mark.parametrize('script, output', [
    ('apt', invalid_operation('saerch')),
    ('apt-get', invalid_operation('isntall')),
    ('apt-cache', invalid_operation('rumove'))])
def test_match(script, output):
    assert match(Command(script, output))
    
    no_match_output = '''
Listing... Done
'''
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
    import pytest
    
        styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
    
class VersionedPackage(object):
    def __init__(self, version):
        self.__version__ = version
    
        See https://github.com/requests/requests/issues/3772.
    '''
    text_200_chal = (b'HTTP/1.1 200 OK\r\n'
                     b'Content-Length: 0\r\n'
                     b'WWW-Authenticate: Digest nonce='6bf5d6e4da1ce66918800195d6b9130d''
                     b', opaque='372825293d1c26955496c80ed6426e9e', '
                     b'realm='me@kennethreitz.com', qop=auth\r\n\r\n')
    
    # build the model
model = Sequential()
model.add(layers.Dense(256, input_shape=(784,)))
model.add(Antirectifier())
model.add(layers.Dropout(0.1))
model.add(layers.Dense(256))
model.add(Antirectifier())
model.add(layers.Dropout(0.1))
model.add(layers.Dense(num_classes))
model.add(layers.Activation('softmax'))
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        # Arguments
        label_mode: one of 'fine', 'coarse'.
    
        with gzip.open(paths[3], 'rb') as imgpath:
        x_test = np.frombuffer(imgpath.read(), np.uint8,
                               offset=16).reshape(len(y_test), 28, 28)
    
    
class MSE_MAE_loss:
    '''Loss function with internal state, for testing serialization code.'''
    def __init__(self, mse_fraction):
        self.mse_fraction = mse_fraction
    
            self.kernel_regularizer = regularizers.get(kernel_regularizer)
        self.recurrent_regularizer = regularizers.get(recurrent_regularizer)
        self.bias_regularizer = regularizers.get(bias_regularizer)
    
    setup_face_landmarks = '''
import face_recognition
    
    
if __name__ == '__main__':
    main()

    
        # Loop through each face in this frame of video
    for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
        # See if the face is a match for the known face(s)
        matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
    
        # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
    frame = frame[:, :, ::-1]
    
    # This is an example of running face recognition on a single image
# and drawing a box around each person that was identified.
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
            img_b1 = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'biden.jpg'))
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
    # If true, keep warnings as 'system message' paragraphs in the built documents.
# keep_warnings = False
    
            if self.flash_briefings.get(briefing_id) is None:
            err = 'No configured Alexa flash briefing was found for: %s'
            _LOGGER.error(err, briefing_id)
            return b'', 404
    
    
def setup_button(hass, config, add_entities, client, address):
    '''Set up a single button device.'''
    timeout = config.get(CONF_TIMEOUT)
    ignored_click_types = config.get(CONF_IGNORED_CLICK_TYPES)
    button = FlicButton(hass, client, address, timeout, ignored_click_types)
    _LOGGER.info('Connected to button %s', address)
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/datadog/
'''
import logging
    
            Returns boolean if scanning successful.
        '''
        _LOGGER.debug('Requesting Tado')
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOST, CONF_PASSWORD, CONF_USERNAME
    
                        if not filename:
                        filename = os.path.basename(url).strip()
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Required(CONF_API_KEY): cv.string,
        vol.Required(CONF_URL): cv.string,
        vol.Required(CONF_INPUTNODE): cv.positive_int,
        vol.Required(CONF_WHITELIST): cv.entity_ids,
        vol.Optional(CONF_SCAN_INTERVAL, default=30): cv.positive_int,
    }),
}, extra=vol.ALLOW_EXTRA)
    
        _interrupted = False
    
            def on_moved(self, event):
            '''File moved.'''
            self.process(event)
    
    ICON_UNKNOWN = 'mdi:help'
ICON_AUDIO = 'mdi:speaker'
ICON_PLAYER = 'mdi:play'
ICON_TUNER = 'mdi:radio'
ICON_RECORDER = 'mdi:microphone'
ICON_TV = 'mdi:television'
ICONS_BY_TYPE = {
    0: ICON_TV,
    1: ICON_RECORDER,
    3: ICON_TUNER,
    4: ICON_PLAYER,
    5: ICON_AUDIO
}
    
    '''*What is this pattern about?
The Factory Method pattern can be used to create an interface for a
method, leaving the implementation to the class that gets
instantiated.
    
    
class CompositeGraphic(Graphic):
    def __init__(self):
        self.graphics = []
    
    
def coroutine(func):
    def start(*args, **kwargs):
        cr = func(*args, **kwargs)
        next(cr)
        return cr
    
    
class Person(object):
    def __init__(self, name, action):
        self.name = name
        self.action = action
    
    
class Provider:
    def __init__(self):
        self.msg_queue = []
        self.subscribers = {}
    
        '''A radio.     It has a scan button, and an AM/FM toggle switch.'''
    
    *TL;DR80
Defines the skeleton of an algorithm, deferring steps to subclasses.
'''
    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
    
class Suspect(OutOfService):
    def __init__(self, HierachicalStateMachine):
        self._hsm = HierachicalStateMachine