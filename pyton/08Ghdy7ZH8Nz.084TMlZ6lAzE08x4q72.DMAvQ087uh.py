
        
          # We need to keep zeros (<PAD>), and change other numbers to 1 (<UNK>)
  # if their mask is -1. First, we multiply the mask and the words.
  # Zeros will stay zeros, and words to drop will become negative.
  # Then, we change negative values to 1.
  masked_words = tf.multiply(mask, words)
  condition = tf.less(masked_words, 0)
  dropped_words = tf.where(condition, tf.ones_like(words), words)
  return dropped_words
    
        logvar_bxn = tf.tile(z_logvar_1xn, size_bx1)
    self.logvar_bxn = logvar_bxn
    self.noise_bxn = noise_bxn = tf.random_normal(tf.shape(logvar_bxn))
    self.sample_bxn = mean_bxn + tf.exp(0.5 * logvar_bxn) * noise_bxn
    
           train - a model for training, sampling of posteriors is used
       posterior_sample_and_average - sample from the posterior, this is used
         for evaluating the expected value of the outputs of LFADS, given a
         specific input, by averaging over multiple samples from the approx
         posterior.  Also used for the lower bound on the negative
         log-likelihood using IWAE error (Importance Weighed Auto-encoder).
         This is the denoising operation.
       prior_sample - a model for generation - sampling from priors is used
    
    def get_data_batch(batch_size, T, rng, u_std):
  u_bxt = rng.randn(batch_size, T) * u_std
  running_sum_b = np.zeros([batch_size])
  labels_bxt = np.zeros([batch_size, T])
  for t in xrange(T):
    running_sum_b += u_bxt[:, t]
    labels_bxt[:, t] += running_sum_b
  labels_bxt = np.clip(labels_bxt, -1, 1)
  return u_bxt, labels_bxt
    
      counter = collections.Counter(data)
  count_pairs = sorted(counter.items(), key=lambda x: (-x[1], x[0]))
    
    
def convert_and_zip(id_to_word, sequences, predictions):
  '''Helper function for printing or logging.  Retrieves list of sequences
  and predictions and zips them together.
  '''
  indices = convert_to_indices(sequences)
    
      Returns:
    predictions:  tf.float32 Tensor of predictions of shape [batch_size,
      sequence_length]
  '''
  if FLAGS.discriminator_model == 'cnn':
    predictions = cnn.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'fnn':
    predictions = feedforward.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn':
    predictions = rnn.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'bidirectional':
    predictions = bidirectional.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'bidirectional_zaremba':
    predictions = bidirectional_zaremba.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'seq2seq_vd':
    predictions = seq2seq_vd.discriminator(
        hparams,
        inputs,
        present,
        sequence,
        is_training=is_training,
        reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_zaremba':
    predictions = rnn_zaremba.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_nas':
    predictions = rnn_nas.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_vd':
    predictions = rnn_vd.discriminator(
        hparams,
        sequence,
        is_training=is_training,
        reuse=reuse,
        initial_state=initial_state)
  elif FLAGS.discriminator_model == 'bidirectional_vd':
    predictions = bidirectional_vd.discriminator(
        hparams,
        sequence,
        is_training=is_training,
        reuse=reuse,
        initial_state=initial_state)
  else:
    raise NotImplementedError
  return predictions
    
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
    
    
def dis_bwd_bidirectional(hparams):
  '''Returns the *backward* PTB Variable name to MaskGAN Variable dictionary
  mapping.  This is a highly restrictive function just for testing. This is for
  the bidirectional_zaremba discriminator.
    
        ```
      tf.variable_scope('decoder') as varscope
        output_fn = lambda x: tf.contrib.layers.linear(x, num_decoder_symbols,
                                            scope=varscope)
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    
    
python_3 = ('thefuck/python3-zsh',
            u'''FROM python:3
                RUN apt-get update
                RUN apt-get install -yy zsh''',
            u'sh')
    
    Commands:
   update - Retrieve new lists of packages
   upgrade - Perform an upgrade
   install - Install new packages (pkg is libc6 not libc6.deb)
   remove - Remove packages
   autoremove - Remove automatically all unused packages
   purge - Remove packages and config files
   source - Download source archives
   build-dep - Configure build-dependencies for source packages
   dist-upgrade - Distribution upgrade, see apt-get(8)
   dselect-upgrade - Follow dselect selections
   clean - Erase downloaded archive files
   autoclean - Erase old downloaded archive files
   check - Verify that there are no broken dependencies
   changelog - Download and display the changelog for the given package
   download - Download the binary package into the current directory
    
    
@pytest.mark.parametrize('command', [
    Command('aws dynamdb scan', misspelled_command),
    Command('aws dynamodb scn', misspelled_subcommand),
    Command('aws dynamodb t-item',
            misspelled_subcommand_with_multiple_options)])
def test_match(command):
    assert match(command)
    
    
@pytest.fixture
def brew_install_no_argument():
    return '''This command requires a formula argument'''
    
    import numpy as np
import gc
from datetime import datetime
from sklearn.isotonic import isotonic_regression
from sklearn.utils.bench import total_seconds
import matplotlib.pyplot as plt
import argparse
    
    
def get_data(N, D, dataset='dense'):
    if dataset == 'dense':
        np.random.seed(0)
        return np.random.random((N, D))
    elif dataset == 'digits':
        X = datasets.load_digits().data
        i = np.argsort(X[0])[::-1]
        X = X[:, i]
        return X[:N, :D]
    else:
        raise ValueError('invalid dataset: %s' % dataset)
    
    In the second benchmark, we increase the number of dimensions of the
training set, classify a sample and plot the time taken as a function
of the number of dimensions.
'''
import numpy as np
import matplotlib.pyplot as plt
import gc
from datetime import datetime
    
    
def get_pdf_size(version):
    api_url = ROOT_URL + '%s/_downloads' % version
    for path_details in json_urlread(api_url):
        if path_details['name'] == 'scikit-learn-docs.pdf':
            return human_readable_data_quantity(path_details['size'], 1000)
    
    
def setup(app):
    # Format template for issues URI
    # e.g. 'https://github.com/sloria/marshmallow/issues/{issue}
    app.add_config_value('issues_uri', default=None, rebuild='html')
    # Shortcut for GitHub, e.g. 'sloria/marshmallow'
    app.add_config_value('issues_github_path', default=None, rebuild='html')
    # Format template for user profile URI
    # e.g. 'https://github.com/{user}'
    app.add_config_value('issues_user_uri', default=None, rebuild='html')
    app.add_role('issue', issue_role)
    app.add_role('user', user_role)

    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'EnvironmentProject'
        db.create_table(
            'sentry_environmentproject', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), (
                    'environment', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Environment']
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['EnvironmentProject'])
    
    from sentry.utils.query import RangeQuerySetWrapperWithProgressBar
    
            # Adding model 'ApiApplication'
        db.create_table(
            'sentry_apiapplication', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'client_id',
                    self.gf('django.db.models.fields.CharField')(unique=True, max_length=64)
                ), (
                    'client_secret',
                    self.gf('sentry.db.models.fields.encrypted.EncryptedTextField')()
                ), (
                    'owner', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.User']
                    )
                ),
                ('name', self.gf('django.db.models.fields.CharField')(max_length=64, blank=True)), (
                    'status',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(
                        default=0, db_index=True
                    )
                ), (
                    'allowed_origins',
                    self.gf('django.db.models.fields.TextField')(null=True, blank=True)
                ), ('redirect_uris', self.gf('django.db.models.fields.TextField')()), (
                    'homepage_url',
                    self.gf('django.db.models.fields.URLField')(max_length=200, null=True)
                ), (
                    'privacy_url',
                    self.gf('django.db.models.fields.URLField')(max_length=200, null=True)
                ), (
                    'terms_url',
                    self.gf('django.db.models.fields.URLField')(max_length=200, null=True)
                ), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['ApiApplication'])
    
    _HEADERS = { 'content-type': 'application/json' }
_CONNECT_TIMEOUT_SEC = 0.01
# Setting this to None seems to screw up the Requests/urllib3 libs.
_READ_TIMEOUT_SEC = 30
_HMAC_HEADER = 'x-ycm-hmac'
_logger = logging.getLogger( __name__ )
    
        self._cached_response = self.HandleFuture( self._response_future,
                                               truncate_message = True )
    
        if not self._response_future.done():
      # Nothing yet...
      return True
    
    
  def IsAllowed( self, diagnostic ):
    # NOTE: a diagnostic IsAllowed() ONLY if NO filters match it
    for filterMatches in self._filters:
      if filterMatches( diagnostic ):
        return False
    
    
  def _DiagnosticsCount( self, predicate ):
    count = 0
    for diags in itervalues( self._line_to_diags ):
      count += sum( 1 for d in diags if predicate( d ) )
    return count
    
      post_vim_message.assert_has_exact_calls( [
    call( 'On the first day of Christmas, my VimScript gave to me',
          warning=False,
          truncate=True ),
    call( 'A test file in a Command-T', warning=False, truncate=True ),
    call( 'On the second day of Christmas, my VimScript gave to me',
          warning=False,
          truncate=True ),
    call( 'Two popup menus, and a test file in a Command-T',
          warning=False,
          truncate=True ),
  ] )

    
    import mock
import requests
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
        @callback
    def call_action():
        '''Call action with right context.'''
        hass.async_run_job(action, {
            'trigger': {
                'platform': 'sun',
                'event': event,
                'offset': offset,
            },
        })
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
            return self._gactions_config
    
        assert not cloud.is_logged_in, 'Cannot login if already logged in.'
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        filter_named = [result.name for result in self.last_results if
                        result.mac == device]
    
    import voluptuous as vol
from homeassistant.helpers.event import track_point_in_utc_time
from homeassistant.components.device_tracker import (
    YAML_DEVICES, CONF_TRACK_NEW, CONF_SCAN_INTERVAL, DEFAULT_SCAN_INTERVAL,
    PLATFORM_SCHEMA, load_config, SOURCE_TYPE_BLUETOOTH_LE
)
import homeassistant.util.dt as dt_util
import homeassistant.helpers.config_validation as cv
    
            if self.success_init:
            _LOGGER.info('Successfully connected to %s',
                         self.fritz_box.modelname)
            self._update_info()
        else:
            _LOGGER.error('Failed to establish connection to FRITZ!Box '
                          'with IP: %s', self.host)
    
        async def get(self, request: Request):
        '''Handle for GPSLogger message received as GET.'''
        hass = request.app['hass']
        data = request.query