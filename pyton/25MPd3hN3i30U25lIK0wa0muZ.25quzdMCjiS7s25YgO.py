
        
          input_title = ''
  if 'controller_outputs' in model_vals.keys():
    input_title += ' Controller Output'
    plt.subplot(nrows,2,3+subplot_cidx)
    u_t = model_vals['controller_outputs'][0:-1]
    plot_time_series(u_t, bidx, n_to_plot=n_to_plot, color='c', scale=1.0,
                     title=col_title + input_title)
    
      return datasets
    
    if S < N:
  # Note that this isn't necessary for this synthetic example, but
  # it's useful to see how the input factor matrices were initialized
  # for actual neurophysiology data.
  datasets = add_alignment_projections(datasets, npcs=FLAGS.npcs)
    
      softmax_weights = sess.run(t['softmax_weights'])
  fname = FLAGS.save_dir + '/embeddings_softmax.npy'
  with tf.gfile.Open(fname, mode='w') as f:
    np.save(f, softmax_weights)
  sys.stderr.write('Finished softmax weights\n')
    
      # Pad to shape [height, width]
  # where height is a multiple of batch_size
  # and width is a multiple of num_timesteps
  nrow = int(np.ceil(len(preprocessed) * 1.0 / batch_size))
  ncol = int(np.ceil(max_len * 1.0 / num_timesteps))
  height, width = nrow * batch_size, ncol * num_timesteps + 1
  preprocessed = [sent + [PAD] * (width - len(sent)) for sent in preprocessed]
  preprocessed += [[PAD] * width] * (height - len(preprocessed))
    
    
def create_gen_pretrain_op(hparams, cross_entropy_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.gen_pretrain_learning_rate)
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    gen_grads = tf.gradients(cross_entropy_loss, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    gen_pretrain_op = optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    return gen_pretrain_op
    
        def __repr__(self):
        return '<{0} {1}>'.format(type(self).__name__, str(self))

    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        def __iter__(self):
        return (casedkey for casedkey, mappedvalue in self._store.values())
    
        def test_repr(self):
        assert repr(self.case_insensitive_dict) == '{'Accept': 'application/json'}'
    
    
class Server(threading.Thread):
    '''Dummy server using for unit testing'''
    WAIT_EVENT_TIMEOUT = 5
    
    # urllib3's DependencyWarnings should be silenced.
from urllib3.exceptions import DependencyWarning
warnings.simplefilter('ignore', DependencyWarning)
    
    '''
requests.compat
~~~~~~~~~~~~~~~
    
        ca_certs = os.path.join(current_path, 'cacert.pem')
    openssl_context = SSLContext(
        logger, ca_certs=ca_certs,
        cipher_suites=['ALL', '!RC4-SHA', '!ECDHE-RSA-RC4-SHA', '!ECDHE-RSA-AES128-GCM-SHA256',
                       '!AES128-GCM-SHA256', '!ECDHE-RSA-AES128-SHA', '!AES128-SHA']
    )
    host_manager = HostManagerBase()
    connect_creator = ConnectCreator(logger, config, openssl_context, host_manager,
                                     debug=True)
    check_ip = CheckIp(logger, config, connect_creator)
    
    
IPv4 = CheckNetwork('IPv4')
IPv4.urls = [
            'https://www.microsoft.com',
            'https://www.apple.com',
            'https://code.jquery.com',
            'https://cdn.bootcss.com',
            'https://cdnjs.cloudflare.com']
IPv4.triger_check_network()
    
        if __password__ and __password__ != kwargs.get('password', ''):
        start_response('403 Forbidden', [('Content-Type', 'text/html')])
        yield message_html('403 Wrong password', 'Wrong password(%r)' % kwargs.get('password', ''), 'GoAgent proxy.ini password is wrong!')
        raise StopIteration
    
    Tree objects are wrapper for Token objects.
    
    EOF = -1
    
            return repr(s)
    
    
    
    def getCharPositionInLine(self):
        return self.charPositionInLine
    
    def setCharPositionInLine(self, pos):
        self.charPositionInLine = pos
    
    def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    