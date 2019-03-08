
        
          Args:
    pairs: the word pairs (list of tuple of two strings).
    labels: the gold-standard labels for these pairs (array of rel ID).
    predictions: the predicted labels for these pairs (array of rel ID).
    classes: a list of relation names.
    predictions_file: where to save the predictions.
  '''
  with open(predictions_file, 'w') as f_out:
    for pair, label, pred in zip(pairs, labels, predictions):
      w1, w2 = pair
      f_out.write('\t'.join([w1, w2, classes[label], classes[pred]]) + '\n')

    
          if on_epoch_completed:
        should_stop = on_epoch_completed(self, session, epoch, epoch_loss,
                                         val_instances, val_labels, save_path)
        if should_stop:
          print('Stopping training after %d epochs.' % epoch)
          return
    
      # Overfitting
  d['keep_prob'] = flags.keep_prob
  d['temporal_spike_jitter_width'] = flags.temporal_spike_jitter_width
  d['l2_gen_scale'] = flags.l2_gen_scale
  d['l2_con_scale'] = flags.l2_con_scale
  # Underfitting
  d['kl_ic_weight'] = flags.kl_ic_weight
  d['kl_co_weight'] = flags.kl_co_weight
  d['kl_start_step'] = flags.kl_start_step
  d['kl_increase_steps'] = flags.kl_increase_steps
  d['l2_start_step'] = flags.l2_start_step
  d['l2_increase_steps'] = flags.l2_increase_steps
    
    
# Note that with N small, (as it is 25 above), the finite size effects
# will have pretty dramatic effects on the dynamics of the random RNN.
# If you want more complex dynamics, you'll have to run the script a
# lot, or increase N (or g).
    
    rnn_a = generate_rnn(rnn_rngs[0], N, FLAGS.g, FLAGS.tau, FLAGS.dt,
                     FLAGS.max_firing_rate)
rnn_b = generate_rnn(rnn_rngs[1], N, FLAGS.g, FLAGS.tau, FLAGS.dt,
                     FLAGS.max_firing_rate)
rnns = [rnn_a, rnn_b]
    
      @property
  def unk(self):
    return self._unk
    
    
if __name__ == '__main__':
  tf.app.run()

    
        if FLAGS.critic_update_dis_vars:
      if FLAGS.discriminator_model == 'bidirectional_vd':
        critic_vars = [
            v for v in tf.trainable_variables()
            if v.op.name.startswith('dis/rnn')
        ]
      elif FLAGS.discriminator_model == 'seq2seq_vd':
        critic_vars = [
            v for v in tf.trainable_variables()
            if v.op.name.startswith('dis/decoder/rnn/multi_rnn_cell')
        ]
      critic_vars.extend(output_vars)
    else:
      critic_vars = output_vars
    print('\nOptimizing Critic vars:')
    for v in critic_vars:
      print(v)
    critic_grads = tf.gradients(critic_loss, critic_vars)
    critic_grads_clipped, _ = tf.clip_by_global_norm(critic_grads,
                                                     FLAGS.grad_clipping)
    critic_train_op = critic_optimizer.apply_gradients(
        zip(critic_grads_clipped, critic_vars), global_step=global_step)
    return critic_train_op, critic_grads_clipped, critic_vars

    
    
def get_requests_session(ssl_version):
    requests_session = requests.Session()
    requests_session.mount(
        'https://',
        HTTPieHTTPAdapter(ssl_version=ssl_version)
    )
    for cls in plugin_manager.get_transport_plugins():
        transport_plugin = cls()
        requests_session.mount(prefix=transport_plugin.prefix,
                               adapter=transport_plugin.get_adapter())
    return requests_session
    
        def register(self, *plugins):
        for plugin in plugins:
            self._plugins.append(plugin)
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        plugin_manager.register(Plugin)
    
        def test_implicit_POST_stdin(self, httpbin):
        with open(FILE_PATH) as f:
            env = MockEnvironment(stdin_isatty=False, stdin=f)
            r = http('--form', httpbin.url + '/post', env=env)
        assert HTTP_OK in r
    
    
class TestRequestBodyFromFilePath:
    '''
    `http URL @file'
    
    
class Session(BaseConfigDict):
    helpurl = 'https://httpie.org/doc#sessions'
    about = 'HTTPie session file'
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    
    
allobj = [losses.mean_squared_error,
          losses.mean_absolute_error,
          losses.mean_absolute_percentage_error,
          losses.mean_squared_logarithmic_error,
          losses.squared_hinge,
          losses.hinge,
          losses.categorical_crossentropy,
          losses.binary_crossentropy,
          losses.kullback_leibler_divergence,
          losses.poisson,
          losses.cosine_proximity,
          losses.logcosh,
          losses.categorical_hinge]
    
        def call(self,
             inputs,
             mask=None,
             training=None,
             initial_state=None,
             constants=None):
        # note that the .build() method of subclasses MUST define
        # self.input_spec and self.state_spec with complete input shapes.
        if isinstance(inputs, list):
            inputs = inputs[0]
        if initial_state is not None:
            pass
        elif self.stateful:
            initial_state = self.states
        else:
            initial_state = self.get_initial_state(inputs)
    
    model = Sequential()
model.add(Conv2D(32, kernel_size=(3, 3),
                 activation='relu',
                 input_shape=input_shape))
model.add(Conv2D(64, (3, 3), activation='relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))
model.add(Dropout(0.25))
model.add(Flatten())
model.add(Dense(128, activation='relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes, activation='softmax'))
    
    max_words = 1000
batch_size = 32
epochs = 5
    
    
def create_network(n_dense=6,
                   dense_units=16,
                   activation='selu',
                   dropout=AlphaDropout,
                   dropout_rate=0.1,
                   kernel_initializer='lecun_normal',
                   optimizer='adam',
                   num_classes=1,
                   max_words=max_words):
    '''Generic function to create a fully-connected neural network.
    
    PROJ_NAME = 'you-get'
PACKAGE_NAME = 'you_get'
    
            link_list = self.get_streams_by_id(account_number, video_id)
    
    from ..common import *
from ..extractor import VideoExtractor
import xml.etree.ElementTree as ET
    
    from ..common import *
    
        sd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'sd_src_no_ratelimit:'([^']*)'', html)
    ]))
    hd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'hd_src_no_ratelimit:'([^']*)'', html)
    ]))
    urls = hd_urls if hd_urls else sd_urls
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls([video_url], title, ext, size, output_dir, merge=merge, headers = fake_headers)
    
                post_url = r1(r''(https://plus.google.com/[^/]+/posts/[^']*)'', html)
            post_author = r1(r'/\+([^/]+)/posts', post_url)
            if post_author:
                post_url = 'https://plus.google.com/+%s/posts/%s' % (parse.quote(post_author), r1(r'posts/(.+)', post_url))
            post_html = get_html(post_url, faker=True)
            title = r1(r'<title[^>]*>([^<\n]+)', post_html)
    
    
def get_mobile_room_url(room_id):
    return 'http://www.huomao.com/mobile/mob_live/%s' % room_id
    
    define('ioloop', type=str, default=None)
    
    Most applications should not access this module directly.  Instead,
pass the keyword argument ``autoreload=True`` to the
`tornado.web.Application` constructor (or ``debug=True``, which
enables this setting and several others).  This will enable autoreload
mode as well as checking for changes to templates and static
resources.  Note that restarting is a destructive operation and any
requests in progress will be aborted when the process restarts.  (If
you want to disable autoreload while using other debug-mode features,
pass both ``debug=True`` and ``autoreload=False``).
    
       Tornado requires the `~asyncio.AbstractEventLoop.add_reader` family of
   methods, so it is not compatible with the `~asyncio.ProactorEventLoop` on
   Windows. Use the `~asyncio.SelectorEventLoop` instead.
'''
    
    For routing to `~.web.RequestHandler` implementations we need an
`~.web.Application` instance. `~.web.Application.get_handler_delegate`
provides a convenient way to create `~.httputil.HTTPMessageDelegate`
for a given request and `~.web.RequestHandler`.