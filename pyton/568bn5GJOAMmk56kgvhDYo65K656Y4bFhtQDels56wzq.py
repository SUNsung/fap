
        
          with open(vocab_file) as f_in:
    vocab = [line.strip() for line in f_in]
    
        self.instances_to_load = tf.placeholder(dtype=tf.string, shape=[None])
    self.labels_to_load = lexnet_common.load_all_labels(self.instances_to_load)
    
          # Reflect on the boundaries to not lose mass.
      shuffle_tidxs[shuffle_tidxs < 0] = -shuffle_tidxs[shuffle_tidxs < 0]
      shuffle_tidxs[shuffle_tidxs > T-1] = \
          (T-1)-(shuffle_tidxs[shuffle_tidxs > T-1] -(T-1))
    
      if bidx is None:
    vals_txn = np.mean(vals_bxtxn, axis=0)
  else:
    vals_txn = vals_bxtxn[bidx,:,:]
    
      for batch in range(num_batches):
    x = np.zeros([batch_size, num_steps], dtype=np.int32)
    y = np.zeros([batch_size, num_steps], dtype=np.int32)
    w = np.zeros([batch_size, num_steps], dtype=np.float)
    
      ## Attention.
  if FLAGS.attention_option is not None:
    decoder_attention_keys = [
        v for v in tf.trainable_variables()
        if v.op.name == 'dis/decoder/attention_keys/weights'
    ][0]
    decoder_attention_construct_weights = [
        v for v in tf.trainable_variables()
        if v.op.name == 'dis/decoder/rnn/attention_construct/weights'
    ][0]
    
        def load(self):
        '''
        Load the data from the key itself instead of fetching from some
        external data store. Opposite of _get_session_key(), raise BadSignature
        if signature fails.
        '''
        try:
            return signing.loads(
                self.session_key,
                serializer=self.serializer,
                # This doesn't handle non-default expiry dates, see #19201
                max_age=settings.SESSION_COOKIE_AGE,
                salt='django.contrib.sessions.backends.signed_cookies',
            )
        except Exception:
            # BadSignature, ValueError, or unpickling exceptions. If any of
            # these happen, reset the session.
            self.create()
        return {}
    
    
class Session(AbstractBaseSession):
    '''
    Django provides full support for anonymous sessions. The session
    framework lets you store and retrieve arbitrary data on a
    per-site-visitor basis. It stores data on the server side and
    abstracts the sending and receiving of cookies. Cookies contain a
    session ID -- not the data itself.
    
        def __exit__(self, exc_type, exc_value, traceback):
        if exc_type is None:
            return
        for dj_exc_type in (
                DataError,
                OperationalError,
                IntegrityError,
                InternalError,
                ProgrammingError,
                NotSupportedError,
                DatabaseError,
                InterfaceError,
                Error,
        ):
            db_exc_type = getattr(self.wrapper.Database, dj_exc_type.__name__)
            if issubclass(exc_type, db_exc_type):
                dj_exc_value = dj_exc_type(*exc_value.args)
                # Only set the 'errors_occurred' flag for errors that may make
                # the connection unusable.
                if dj_exc_type not in (DataError, IntegrityError):
                    self.wrapper.errors_occurred = True
                raise dj_exc_value.with_traceback(traceback) from exc_value
    
        data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
        # start time
    tstart = time()
    clf = factory(alpha=alpha).fit(X, Y)
    delta = (time() - tstart)
    # stop time
    
        for n_samples in sample_sizes:
        X = random_state.rand(n_samples, 300)
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
                gc.collect()
            print('- benchmarking SGD')
            clf = SGDRegressor(alpha=alpha / n_train, fit_intercept=False,
                               max_iter=max_iter, learning_rate='invscaling',
                               eta0=.01, power_t=0.25, tol=1e-3)
    
        return yk_streams
    
    import urllib
    
            self.extract(**kwargs)
    
    from ..common import *
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
    #----------------------------------------------------------------------
def dilidili_download(url, output_dir = '.', merge = False, info_only = False, **kwargs):
    global headers
    re_str = r'http://www.dilidili.com/watch\S+'
    if re.match(r'http://www.dilidili.wang', url):
        re_str = r'http://www.dilidili.wang/watch\S+'
        headers['Referer'] = 'http://www.dilidili.wang/'
    elif re.match(r'http://www.dilidili.mobi', url):
        re_str = r'http://www.dilidili.mobi/watch\S+'
        headers['Referer'] = 'http://www.dilidili.mobi/'