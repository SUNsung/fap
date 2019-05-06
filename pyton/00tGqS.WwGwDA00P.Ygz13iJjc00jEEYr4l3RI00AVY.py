
        
            Returns:
      The test predictions along with their scores.
    '''
    test_pred = [0] * len(inputs)
    
        # You probably do not want the LL associated values when pushing the mean
    # instead of sampling.
    model_runs['costs'] = costs
    model_runs['nll_bound_vaes'] = nll_bound_vaes
    model_runs['nll_bound_iwaes'] = nll_bound_iwaes
    model_runs['train_steps'] = train_steps
    return model_runs
    
    DATA_DIR = '/tmp/rnn_synth_data_v1.0/'
DATA_FILENAME_STEM = 'chaotic_rnn_inputs_g1p5'
LFADS_SAVE_DIR = '/tmp/lfads_chaotic_rnn_inputs_g1p5/'
CO_DIM = 1
DO_CAUSAL_CONTROLLER = False
DO_FEED_FACTORS_TO_CONTROLLER = True
CONTROLLER_INPUT_LAG = 1
PRIOR_AR_AUTOCORRELATION = 10.0
PRIOR_AR_PROCESS_VAR = 0.1
DO_TRAIN_PRIOR_AR_ATAU = True
DO_TRAIN_PRIOR_AR_NVAR = True
CI_ENC_DIM = 128
CON_DIM = 128
CO_PRIOR_VAR_SCALE = 0.1
KL_INCREASE_STEPS = 2000
L2_INCREASE_STEPS = 2000
L2_GEN_SCALE = 2000.0
L2_CON_SCALE = 0.0
# scale of regularizer on time correlation of inferred inputs
CO_MEAN_CORR_SCALE = 0.0
KL_IC_WEIGHT = 1.0
KL_CO_WEIGHT = 1.0
KL_START_STEP = 0
L2_START_STEP = 0
IC_PRIOR_VAR_MIN = 0.1
IC_PRIOR_VAR_SCALE = 0.1
IC_PRIOR_VAR_MAX = 0.1
IC_POST_VAR_MIN = 0.0001      # protection from KL blowing up
    
    def get_data_batch(batch_size, T, rng, u_std):
  u_bxt = rng.randn(batch_size, T) * u_std
  running_sum_b = np.zeros([batch_size])
  labels_bxt = np.zeros([batch_size, T])
  for t in xrange(T):
    running_sum_b += u_bxt[:, t]
    labels_bxt[:, t] += running_sum_b
  labels_bxt = np.clip(labels_bxt, -1, 1)
  return u_bxt, labels_bxt
    
    # just one dataset here
datasets = {}
dataset_name = 'dataset_N' + str(N)
datasets[dataset_name] = data
    
      # Now for each dataset, we regress the channel data onto the top
  # pcs, and this will be our alignment matrix for that dataset.
  # |B - A*W|^2
  for name, dataset in datasets.items():
    cidx_s = channel_idxs[name][0]
    cidx_f = channel_idxs[name][1]
    all_data_zm_chxtc = all_data_zm_nxtc[cidx_s:cidx_f,:] # ch for channel
    W_chxp, _, _, _ = \
        np.linalg.lstsq(all_data_zm_chxtc.T, all_data_pca_pxtc.T)
    dataset['alignment_matrix_cxf'] = W_chxp
    alignment_bias_cx1 = all_data_mean_nx1[cidx_s:cidx_f]
    dataset['alignment_bias_c'] = np.squeeze(alignment_bias_cx1, axis=1)
    
      def __init__(self, filepattern, vocab):
    '''Initialize LM1BDataset reader.
    
          scorings.append(dict(
          correctness=correctness,
          sentence=sentence,
          joint_prob=joint_prob,
          word_probs=word_probs))
    scoring_mode = 'full' if self.test_data_name == 'pdp60' else 'partial'
    return utils.compare_substitutions(
        self.question_ids, scorings, scoring_mode)
    
    
def recursive_length(item):
  '''Recursively determine the total number of elements in nested list.'''
  if type(item) == list:
    return sum(recursive_length(subitem) for subitem in item)
  else:
    return 1.
    
        # Group maintain averages op.
    if averages_op:
      gen_train_op = tf.group(maximize_op, averages_op)
    else:
      gen_train_op = maximize_op
    
        def database_backwards(self, app_label, schema_editor, from_state, to_state):
        schema_editor.execute('DROP EXTENSION %s' % schema_editor.quote_name(self.name))
        # Clear cached, stale oids.
        get_hstore_oids.cache_clear()
        get_citext_oids.cache_clear()
    
        def __eq__(self, other):
        return (
            isinstance(other, self.__class__) and
            self.keys == other.keys and
            self.messages == other.messages and
            self.strict == other.strict
        )
    
            r = None
        try:
            r = Redirect.objects.get(site=current_site, old_path=full_path)
        except Redirect.DoesNotExist:
            pass
        if r is None and settings.APPEND_SLASH and not request.path.endswith('/'):
            try:
                r = Redirect.objects.get(
                    site=current_site,
                    old_path=request.get_full_path(force_append_slash=True),
                )
            except Redirect.DoesNotExist:
                pass
        if r is not None:
            if r.new_path == '':
                return self.response_gone_class()
            return self.response_redirect_class(r.new_path)
    
        def delete(self, session_key=None):
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        self._cache.delete(self.cache_key_prefix + session_key)
    
            if data is None:
            s = self._get_session_from_db()
            if s:
                data = self.decode(s.session_data)
                self._cache.set(self.cache_key, data, self.get_expiry_age(expiry=s.expire_date))
            else:
                data = {}
        return data
    
        def create(self):
        while True:
            self._session_key = self._get_new_session_key()
            try:
                # Save immediately to ensure we have a unique entry in the
                # database.
                self.save(must_create=True)
            except CreateError:
                # Key wasn't unique. Try again.
                continue
            self.modified = True
            return
    
    OLD_REWRITE_HTTPS_ARGS = [
    ['^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[L,QSA,R=permanent]'],
    ['^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[END,QSA,R=permanent]']]
    
    
Examples
--------
    
    
# -- Options for LaTeX output ---------------------------------------------
    
    '''
