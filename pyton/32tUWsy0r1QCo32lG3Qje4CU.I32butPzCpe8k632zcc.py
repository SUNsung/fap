
        
            Inputs:
      self.time_series_features
    
      pool = multiprocessing.Pool(processes=num_processes)
  async_results = [
      pool.apply_async(_process_file_shard, file_shard)
      for file_shard in file_shards
  ]
  pool.close()
    
      Returns:
    features: A dictionary containing 'time_series_features' and 'aux_features',
        each of which is a dictionary of tf.Placeholders of features from the
        input configuration. All features have dtype float32 and shape
        [batch_size, length].
  '''
  batch_size = None  # Batch size will be dynamically specified.
  features = {'time_series_features': {}, 'aux_features': {}}
  for feature_name, feature_spec in config.items():
    placeholder = tf.placeholder(
        dtype=tf.float32,
        shape=[batch_size, feature_spec.length],
        name=feature_name)
    
        # The following term is -2*ln(L), where L is the likelihood of the data
    # given the model, under the assumption that the model errors are iid
    # Gaussian with mean 0 and standard deviation sigma.
    likelihood_term = npoints * np.log(2 * np.pi * sigma**2) + ssr / sigma**2
    
    from six.moves import urllib
import tensorflow as tf
    
      # We need the word embeddings to instantiate the model, too.
  print('Loading word embeddings...')
  lemma_embeddings = lexnet_common.load_word_embeddings(
      FLAGS.embeddings_base_path, hparams.lemma_embeddings_file)
    
      def convert_actions_to_env(self, actions):
    if self.combine_actions:
      new_actions = []
      actions = actions[0]
      for dim in self.orig_act_dims:
        new_actions.append(np.mod(actions, dim))
        actions = (actions / dim).astype('int32')
      actions = new_actions
    
    
def download_and_extract(data_dir):
  # download CIFAR-10 if not already downloaded.
  tf.contrib.learn.datasets.base.maybe_download(CIFAR_FILENAME, data_dir,
                                                CIFAR_DOWNLOAD_URL)
  tarfile.open(os.path.join(data_dir, CIFAR_FILENAME),
               'r:gz').extractall(data_dir)
    
        Args:
      images: A tensor of size [batch, height, width, channels].
      weight_decay: The parameters for weight_decay regularizer.
      attention_nonlinear: Type of non-linearity on top of the attention
        function.
      attention_type: Type of the attention structure.
      kernel: Convolutional kernel to use in attention layers (eg, [3, 3]).
      training_resnet: Whether or not the Resnet blocks from the model are in
        training mode.
      training_attention: Whether or not the attention part of the model is
        in training mode.
      reuse: Whether or not the layer and its variables should be reused.
      use_batch_norm: Whether or not to use batch normalization.
    
            X, Y, coef_ = make_regression(
            n_samples=(i * step) + n_test_samples, n_features=n_features,
            noise=0.1, n_informative=n_informative, coef=True)
    
    
def plot_feature_errors(all_errors, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_errors['pca'], label='PCA')
    plot_results(all_components, all_errors['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plot_results(all_components, all_errors['rpca'], label='RandomizedPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. n_components\n'
                 'LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Mean absolute error')
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
        n = 10
    step = 10000
    n_samples = 10000
    dim = 10
    n_classes = 10
    for i in range(n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        n_samples += step
        X = np.random.randn(n_samples, dim)
        Y = np.random.randint(0, n_classes, (n_samples,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(n_samples)
        bench_scikit_tree_regressor(X, Y)
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    In both examples below, the main result is that the empirical covariance
estimate, as a non-robust one, is highly influenced by the heterogeneous
structure of the observations. Although the robust covariance estimate is
able to focus on the main mode of the data distribution, it sticks to the
assumption that the data should be Gaussian distributed, yielding some biased
estimation of the data structure, but yet accurate to some extent.
The One-Class SVM does not assume any parametric form of the data distribution
and can therefore model the complex shape of the data much better.
    
            valbox = Tk.Frame(fm)
        controller.complexity = Tk.StringVar()
        controller.complexity.set('1.0')
        c = Tk.Frame(valbox)
        Tk.Label(c, text='C:', anchor='e', width=7).pack(side=Tk.LEFT)
        Tk.Entry(c, width=6, textvariable=controller.complexity).pack(
            side=Tk.LEFT)
        c.pack()
    
    Only adjusted measures can hence safely be used as a consensus index
to evaluate the average stability of clustering algorithms for a given
value of k on various overlapping sub-samples of the dataset.
    
    def get_api_subtype():
    if is_api() and c.render_style.startswith('api-'):
        return c.render_style[4:]
    
            return user.name in self.stacked_proxy_safe_get(g, 'admins', [])
    
    
class APIv1GoldController(OAuth2OnlyController):
    def _gift_using_creddits(self, recipient, months=1, thing_fullname=None,
            proxying_for=None):
        with creddits_lock(c.user):
            if not c.user.employee and c.user.gold_creddits < months:
                err = RedditError('INSUFFICIENT_CREDDITS')
                self.on_validation_error(err)
    
    class CaptchaController(RedditController):
    @allow_oauth2_access
    @api_doc(api_section.captcha, uri='/captcha/{iden}')
    def GET_captchaimg(self, iden):
        '''
        Request a CAPTCHA image given an `iden`.
    
    from pylons import app_globals as g
from pylons import tmpl_context as c
from pylons import request
    
            response.content_type = 'application/json'
        return json.dumps(g.versions, sort_keys=True, indent=4)