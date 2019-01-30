
        
          def __init__(self, zs, prior_zs):
    '''Create a lower bound in three parts, normalized reconstruction
    cost, normalized KL divergence cost, and their sum.
    
      return data_e, x0s, inputs_e
    
          elif FLAGS.generator_model.startswith('seq2seq'):
        load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
        print('Restoring Generator from %s.' % load_ckpt)
        tf.logging.info('Restoring Generator from %s.' % load_ckpt)
        gen_encoder_init_saver = init_savers['gen_encoder_init_saver']
        gen_decoder_init_saver = init_savers['gen_decoder_init_saver']
        gen_encoder_init_saver.restore(sess, load_ckpt)
        gen_decoder_init_saver.restore(sess, load_ckpt)
    
      # Forward Discriminator Elements.
  if not FLAGS.dis_share_embedding:
    embedding = [
        v for v in tf.trainable_variables() if v.op.name == 'dis/embedding'
    ][0]
  fw_lstm_w_0 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/fw/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  fw_lstm_b_0 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/fw/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  fw_lstm_w_1 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/fw/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  fw_lstm_b_1 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/fw/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
  if FLAGS.dis_share_embedding:
    variable_mapping = {
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': fw_lstm_w_0,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': fw_lstm_b_0,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': fw_lstm_w_1,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': fw_lstm_b_1
    }
  else:
    variable_mapping = {
        'Model/embedding': embedding,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': fw_lstm_w_0,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': fw_lstm_b_0,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': fw_lstm_w_1,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': fw_lstm_b_1
    }
  return variable_mapping
    
    
FORM_CONTENT_TYPE = 'application/x-www-form-urlencoded; charset=utf-8'
JSON_CONTENT_TYPE = 'application/json'
JSON_ACCEPT = '{0}, */*'.format(JSON_CONTENT_TYPE)
DEFAULT_UA = 'HTTPie/%s' % __version__
    
    
class BasicAuthPlugin(BuiltinAuthPlugin):
    
    from httpie.compat import urlopen
from httpie.downloads import (
    parse_content_range, filename_from_content_disposition, filename_from_url,
    get_unique_filename, ContentRangeError, Downloader,
)
from utils import http, MockEnvironment
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        def __init__(self, get_response=None):
        if not apps.is_installed('django.contrib.sites'):
            raise ImproperlyConfigured(
                'You cannot use RedirectFallbackMiddleware when '
                'django.contrib.sites is not installed.'
            )
        super().__init__(get_response)
    
        def create(self):
        # Because a cache can fail silently (e.g. memcache), we don't know if
        # we are failing to create a new session because of a key collision or
        # because the cache is missing. So we try for a (large) number of times
        # and then raise an exception. That's the risk you shoulder if using
        # cache backing.
        for i in range(10000):
            self._session_key = self._get_new_session_key()
            try:
                self.save(must_create=True)
            except CreateError:
                continue
            self.modified = True
            return
        raise RuntimeError(
            'Unable to create a new session key. '
            'It is likely that the cache is unavailable.')
    
        def delete(self, session_key=None):
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        try:
            self.model.objects.get(session_key=session_key).delete()
        except self.model.DoesNotExist:
            pass
    
        The Django sessions framework is entirely cookie-based. It does
    not fall back to putting session IDs in URLs. This is an intentional
    design decision. Not only does that behavior make URLs ugly, it makes
    your site vulnerable to session-ID theft via the 'Referer' header.
    
    from django.contrib.sites.shortcuts import get_current_site
from django.core.paginator import EmptyPage, PageNotAnInteger
from django.http import Http404
from django.template.response import TemplateResponse
from django.urls import reverse
from django.utils.http import http_date
    
                if item.get(CONF_AUDIO) is not None:
                if isinstance(item.get(CONF_AUDIO), template.Template):
                    output[ATTR_STREAM_URL] = item[CONF_AUDIO].async_render()
                else:
                    output[ATTR_STREAM_URL] = item.get(CONF_AUDIO)
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client.mac == device:
                return client.ip
        return None
    
            # Test the router is accessible.
        data = self.get_swisscom_data()
        self.success_init = data is not None
    
    ATTR_COUNTRY = 'country_code'
ATTR_FIRST_NAME = 'first_name'
ATTR_LAST_NAME = 'last_name'
ATTR_EMAIL = 'email'
ATTR_PHONE = 'phone'
ATTR_ADDRESS = 'address'
ATTR_ORDERS = 'orders'
ATTR_SHOW_MENU = 'show_menu'
ATTR_ORDER_ENTITY = 'order_entity_id'
ATTR_ORDER_NAME = 'name'
ATTR_ORDER_CODES = 'codes'
    
        def __init__(self, client_id, client_secret):
        '''Initialize HassLaMetricManager and connect to LaMetric.'''
        from lmnotify import LaMetricManager