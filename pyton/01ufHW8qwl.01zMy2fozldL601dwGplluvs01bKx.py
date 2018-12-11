  Returns:
    The word embeddings matrix
  '''
  embedding_file = os.path.join(word_embeddings_dir, word_embeddings_file)
  vocab_file = os.path.join(
      word_embeddings_dir, os.path.dirname(word_embeddings_file), 'vocab.txt')
    
        gen_cell = gen_cell_class(hps.gen_dim,
                              input_weight_scale=hps.gen_cell_input_weight_scale,
                              rec_weight_scale=hps.gen_cell_rec_weight_scale,
                              clip_value=hps.cell_clip_value,
                              recurrent_collections=['l2_gen_reg'])
    with tf.variable_scope('gen', reuse=False):
      if ic_dim == 0:
        self.gen_ics = tf.tile(
              tf.Variable(tf.zeros([1, gen_cell.state_size]), name='g0'),
              tf.stack([batch_size, 1]))
      else:
        self.gen_ics = linear(self.g0s_val, gen_cell.state_size,
                              identity_if_possible=True,
                              name='g0_2_gen_ic')
    
    
class hps_dict_to_obj(dict):
  '''Helper class allowing us to access hps dictionary more easily.'''
    
    rates_b, x0s_b, _ = generate_data(rnn_b, T=T, E=E, x0s=x0s, P_sxn=P_nxn,
                                  input_magnitude=0.0, input_times=None)
spikes_b = spikify_data(rates_b, rng, rnn_b['dt'], rnn_b['max_firing_rate'])
    
            self._id_to_word.append(word_name)
        self._word_to_id[word_name] = idx
        idx += 1
    
        self._max_word_length = max_word_length
    chars_set = set()
    
      # print('Number of batches per epoch: %d' % epoch_size)
  for i in range(epoch_size):
    x = data[:, i * num_steps:(i + 1) * num_steps]
    y = data[:, i * num_steps + 1:(i + 1) * num_steps + 1]
    w = np.ones_like(x)
    yield (x, y, w)

    
      # If there are no real or fake entries in the batch, we assign an average
  # value of zero.
  real_avg = tf.where(tf.equal(real_count, 0), zero_tensor, real_avg)
  fake_avg = tf.where(tf.equal(fake_count, 0), zero_tensor, fake_avg)
    
      decoder_embedding = [
      v for v in tf.trainable_variables()
      if v.op.name == 'gen/decoder/rnn/embedding'
  ][0]
  decoder_lstm_w_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/decoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  decoder_lstm_b_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/decoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  decoder_lstm_w_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/decoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  decoder_lstm_b_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/decoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
  decoder_softmax_b = [
      v for v in tf.trainable_variables()
      if v.op.name == 'gen/decoder/rnn/softmax_b'
  ][0]
    
    Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
        # Copy is required
    def copy(self):
        return CaseInsensitiveDict(self._store.values())
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
    
    builtin_str = str
    bytes = str
    str = unicode
    basestring = basestring
    numeric_types = (int, long, float)
    integer_types = (int, long)
    
        return {'name': implementation, 'version': implementation_version}
    
    import sys
    
        See https://github.com/requests/requests/issues/3772.
    '''
    text_200_chal = (b'HTTP/1.1 200 OK\r\n'
                     b'Content-Length: 0\r\n'
                     b'WWW-Authenticate: Digest nonce='6bf5d6e4da1ce66918800195d6b9130d''
                     b', opaque='372825293d1c26955496c80ed6426e9e', '
                     b'realm='me@kennethreitz.com', qop=auth\r\n\r\n')
    
        def test_server_finishes_when_no_connections(self):
        '''the server thread exits even if there are no connections'''
        server = Server.basic_response_server()
        with server:
            pass
    
    Some codes have multiple names, and both upper- and lower-case versions of
the names are allowed. For example, ``codes.ok``, ``codes.OK``, and
``codes.okay`` all correspond to the HTTP status code 200.
'''
    
    # -- Options for LaTeX output ---------------------------------------------
    
            assert response.raw.closed
    
        test_suite = 'tests',
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        @staticmethod
    def get_streams_by_id(account_number, video_id):
        '''
        int, int->list
        
        Get the height of the videos.
        
        Since brightcove is using 3 kinds of links: rtmp, http and https,
        we will be using the HTTPS one to make it secure.
        
        If somehow akamaihd.net is blocked by the Great Fucking Wall,
        change the 'startswith https' to http.
        '''
        endpoint = 'https://edge.api.brightcove.com/playback/v1/accounts/{account_number}/videos/{video_id}'.format(account_number = account_number, video_id = video_id)
        fake_header_id = fake_headers
        #is this somehow related to the time? Magic....
        fake_header_id['Accept'] ='application/json;pk=BCpkADawqM1cc6wmJQC2tvoXZt4mrB7bFfi6zGt9QnOzprPZcGLE9OMGJwspQwKfuFYuCjAAJ53JdjI8zGFx1ll4rxhYJ255AXH1BQ10rnm34weknpfG-sippyQ'
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
    #----------------------------------------------------------------------
def ckplayer_download(url, output_dir = '.', merge = False, info_only = False, is_xml = True, **kwargs):
    if is_xml:  #URL is XML URL
        try:
            title = kwargs['title']
        except:
            title = ''
        try:
            headers = kwargs['headers']  #headers provided
            ckinfo = get_content(url, headers = headers)
        except NameError:
            ckinfo = get_content(url)
        
        ckplayer_download_by_xml(ckinfo, output_dir, merge, 
                                info_only, title = title)
    
        if re.match(r'https?://movie', url):
        title = match1(html, 'name='description' content='([^']+)')
        tid = match1(url, 'trailer/(\d+)')
        real_url = 'https://movie.douban.com/trailer/video_url?tid=%s' % tid
        type, ext, size = url_info(real_url)
    
                    moz_ec_name = search_dict(sym_to_name, 'mozEcName')
                push = search_dict(sym_to_name, 'push')
                patt = '{}\.{}\('(.+?)'\)'.format(moz_ec_name, push)
                ec_list = re.findall(patt, code)
                [magic_list.append(sym_to_name[ec]) for ec in ec_list]
        return magic_list
    
        url = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'<meta property='og:video:secure_url' content='(.*?)'>', html)
    ]))
    
    # Custom sidebar templates, maps document names to template names.
#
html_sidebars = {
    '**': [
        'about.html',
        'links.html',
        'searchbox.html',
        'sourcelink.html',
        'navigation.html',
        'relations.html'
    ]
}
    
        # Start the pyflic event handling thread
    threading.Thread(target=client.handle_events).start()
    
    SERVICE_BROWSE_URL_SCHEMA = vol.Schema({
    # pylint: disable=no-value-for-parameter
    vol.Required(ATTR_URL, default=ATTR_URL_DEFAULT): vol.Url(),
})
    
        return True

    
    DEFAULT_TIMEOUT = 10
    
    from homeassistant.const import (
    CONF_NAME, CONF_WHITELIST, EVENT_STATE_CHANGED, STATE_UNKNOWN)
import homeassistant.helpers.config_validation as cv
from homeassistant.helpers import state as state_helper
from homeassistant.util import Throttle
    
        def __call__(self, method):
        '''Decorate a function.'''
        @wraps(method)
        async def wrapper(view, request, *args, **kwargs):
            '''Wrap a request handler with data validation.'''
            data = None
            try:
                data = await request.json()
            except ValueError:
                if not self._allow_empty or \
                   (await request.content.read()) != b'':
                    _LOGGER.error('Invalid JSON received.')
                    return view.json_message('Invalid JSON.', 400)
                data = {}