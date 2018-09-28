
        
            Returns:
      the word pairs of these instances.
    '''
    word_pairs = session.run(self.pairs_to_load,
                             feed_dict={self.instances_to_load: instances})
    return [pair[0].split('::') for pair in word_pairs]
    
      def call(self, h_tm1_bxn, u_bx1):
    act_t_bxn = tf.matmul(h_tm1_bxn, self.Wh_nxn) + self.b_1xn + u_bx1 * self.Bu_1xn
    h_t_bxn = tf.nn.tanh(act_t_bxn)
    z_t = tf.nn.xw_plus_b(h_t_bxn, self.Wro_nxo, self.bro_o)
    return z_t, h_t_bxn
    
      Args:
    data_e: nexamples length list of NxT trials
    dt: how often the data are sampled
    max_firing_rate: the firing rate that is associated with a value of 1.0
  Returns:
    gauss_e: a list of length b of the data with noise.
    '''
    
    '''Eval pre-trained 1 billion word language model.
'''
import os
import sys
    
        probs_cache = os.path.join(self.log_dir, '{}.probs'.format(test_data_name))
    if os.path.exists(probs_cache):
      print('Reading cached result from {}'.format(probs_cache))
      with tf.gfile.Open(probs_cache, 'r') as f:
        probs = pkl.load(f)
    else:
      tf.reset_default_graph()
      self.sess = tf.Session()
      # Build the graph.
      saver = tf.train.import_meta_graph(
          os.path.join(self.log_dir, 'ckpt-best.meta'))
      saver.restore(self.sess, os.path.join(self.log_dir, 'ckpt-best'))
      print('Restored from {}'.format(self.log_dir))
      graph = tf.get_default_graph()
      self.tensors = dict(
          inputs_in=graph.get_tensor_by_name('test_inputs_in:0'),
          char_inputs_in=graph.get_tensor_by_name('test_char_inputs_in:0'),
          softmax_out=graph.get_tensor_by_name('SotaRNN_1/softmax_out:0'),
          states_init=graph.get_operation_by_name('SotaRNN_1/states_init'))
      self.shape = self.tensors['inputs_in'].shape.as_list()
    
      # Cut preprocessed into patches of shape [batch_size, num_timesteps]
  patches = []
  for row in range(nrow):
    patches.append([])
    for col in range(ncol):
      patch = [sent[col * num_timesteps:
                    (col+1) * num_timesteps + 1]
               for sent in preprocessed[row * batch_size:
                                        (row+1) * batch_size]]
      if np.all(np.array(patch)[:, 1:] == PAD):
        patch = None  # no need to process this patch.
      patches[-1].append(patch)
  return patches
    
    '''IMDB data loader and helpers.'''
    
              [gen_initial_state_eval, fake_gen_initial_state_eval, _] = sess.run(
              [
                  model.eval_final_state, model.fake_gen_final_state,
                  model.global_step
              ],
              feed_dict=eval_feed)
    
      Args:
    gen_logits:  Generator logits.
    gen_labels:  Labels for the correct token.
    dis_values:  Discriminator values Tensor of shape [batch_size,
      sequence_length].
    is_real_input:  Tensor indicating whether the label is present.
    
    from models import bidirectional_zaremba
from models import cnn
from models import critic_vd
from models import feedforward
from models import rnn
from models import rnn_nas
from models import rnn_vd
from models import rnn_zaremba
from models import seq2seq
from models import seq2seq_nas
from models import seq2seq_vd
from models import seq2seq_zaremba
    
        # rnn_vd derived from the same code base as rnn_zaremba.
    elif (FLAGS.discriminator_model == 'rnn_zaremba' or
          FLAGS.discriminator_model == 'rnn_vd'):
      dis_variable_maps = variable_mapping.rnn_zaremba(hparams, model='dis')
      dis_init_saver = tf.train.Saver(var_list=dis_variable_maps)
      init_savers['dis_init_saver'] = dis_init_saver
    
        def describe(self):
        return 'Creates extension %s' % self.name
    
            # No redirect was found. Return the response.
        return response

    
        __not_given = object()
    
        @classmethod
    def get_session_store_class(cls):
        raise NotImplementedError
    
        if section is not None:
        if section not in sitemaps:
            raise Http404('No sitemap available for section: %r' % section)
        maps = [sitemaps[section]]
    else:
        maps = sitemaps.values()
    page = request.GET.get('p', 1)
    
        for stack_description in service_mgr.describe_stacks(module.params.get('stack_name')):
        facts = {'stack_description': stack_description}
        stack_name = stack_description.get('StackName')
    
    RETURN = '''
changed:
  description: whether a keypair was created/deleted
  returned: always
  type: bool
  sample: true
msg:
  description: short message describing the action taken
  returned: always
  type: string
  sample: key pair created
key:
  description: details of the keypair (this is set to null when state is absent)
  returned: always
  type: complex
  contains:
    fingerprint:
      description: fingerprint of the key
      returned: when state is present
      type: string
      sample: 'b0:22:49:61:d9:44:9d:0c:7e:ac:8a:32:93:21:6c:e8:fb:59:62:43'
    name:
      description: name of the keypair
      returned: when state is present
      type: string
      sample: my_keypair
    private_key:
      description: private key of a newly created keypair
      returned: when a new keypair is created by AWS (key_material is not provided)
      type: string
      sample: '-----BEGIN RSA PRIVATE KEY-----
        MIIEowIBAAKC...
        -----END RSA PRIVATE KEY-----'
'''
    
        try:
        connection.delete_placement_group(
            GroupName=name, DryRun=module.check_mode)
    except (BotoCoreError, ClientError) as e:
        module.fail_json_aws(
            e,
            msg='Couldn't delete placement group [%s]' % name)
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        import matplotlib.pyplot as plt
    
        plt.figure('scikit-learn LASSO benchmark results')
    plt.subplot(211)
    plt.plot(list_n_samples, lasso_results, 'b-',
                            label='Lasso')
    plt.plot(list_n_samples, lars_lasso_results, 'r-',
                            label='LassoLars')
    plt.title('precomputed Gram matrix, %d features, alpha=%s' % (n_features,
                            alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    
        if dataset_name == 'shuttle':
        dataset = fetch_mldata('shuttle')
        X = dataset.data
        y = dataset.target
        # we remove data with label 4
        # normal data are then those of class 1
        s = (y != 4)
        X = X[s, :]
        y = y[s]
        y = (y != 1).astype(int)
    
    import six
    
    File: sparsity_benchmark.py
Function: benchmark_sparse_predict at line 56
Total time: 0.39274 s
    
    
df = pd.DataFrame(res).set_index(['analyzer', 'ngram_range', 'vectorizer'])
    
        scikit_classifier_results = []
    scikit_regressor_results = []
    n = 10
    step = 500
    start_dim = 500
    n_classes = 10
    
    
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

    
        opener = build_opener()
    html_filename = os.path.join(html_folder, lang + '.html')
    if not os.path.exists(html_filename):
        print('Downloading %s' % page)
        request = Request(page)
        # change the User Agent to avoid being blocked by Wikipedia
        # downloading a couple of articles should not be considered abusive
        request.add_header('User-Agent', 'OpenAnything/1.0')
        html_content = opener.open(request).read()
        open(html_filename, 'wb').write(html_content)