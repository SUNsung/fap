
        
            def receive_friend_request(self, friend_id):
        pass
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def remove_link_to_crawl(self, url):
        '''Remove the given link from `links_to_crawl`.'''
        pass
    
        # Create the mapping from string path to an index in the embeddings matrix
    if self.hparams.input in ['path', 'integrated', 'integrated-nc']:
      self.path_to_index = tf.contrib.lookup.HashTable(
          tf.contrib.lookup.KeyValueTensorInitializer(
              tf.constant(path_to_index.keys()),
              tf.constant(path_to_index.values()),
              key_dtype=tf.string, value_dtype=tf.int32), 0)
    
    P_nxn = rng.randn(N, N) / np.sqrt(N)
    
        us = np.zeros([1, ntime_steps])
    for t in range(ntime_steps):
      x_t = alpha*x_tm1 + np.dot(W,r_tm1) + b
      if input_time is not None and t == input_time:
        us[0,t] = input_magnitude
        x_t += Bin * us[0,t] # DCS is this what was used?
      r_t = np.tanh(x_t)
      x_tm1 = x_t
      r_tm1 = r_t
      rs[:,t] = r_t
    return rs, us
    
        # Create the supervisor.  It will take care of initialization, summaries,
    # checkpoints, and recovery.
    sv = tf.Supervisor(
        logdir=log_dir,
        is_chief=is_chief,
        saver=model.saver,
        global_step=model.global_step,
        recovery_wait_secs=30,
        summary_op=None,
        init_fn=init_fn)
    
        maintain_averages_op = None
    baselines = tf.stack(baselines, axis=1)
    advantages = tf.stack(advantages, axis=1)
    
    FLAGS = tf.app.flags.FLAGS
    
      variable_mapping = {
      str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel':
          encoder_lstm_w_0,
      str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias':
          encoder_lstm_b_0,
      str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel':
          encoder_lstm_w_1,
      str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias':
          encoder_lstm_b_1
  }
  return variable_mapping
    
            while self.values[new_key] is not None \
                and self.values[new_key] != key:
            i += 1
            new_key = self.hash_function(key + i*i) if not \
                self.balanced_factor() >= self.lim_charge else None
    
    	TEMPORARY_ARRAY = [ element for element in ARRAY[1:] if element >= PIVOT ]
	TEMPORARY_ARRAY = [PIVOT] + longestSub(TEMPORARY_ARRAY)
	if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
		return TEMPORARY_ARRAY
	else:
		return LONGEST_SUB
    
    	Arguments:
		i {[int]} -- [integer]
	'''
    
    
        '''
        loop over all possible splits for the decision tree. find the best split.
        if no split exists that is less than 2 * error for the entire array
        then the data set is not split and the average for the entire array is used as the predictor
        '''
        for i in range(len(X)):
            if len(X[:i]) < self.min_leaf_size:
                continue
            elif len(X[i:]) < self.min_leaf_size:
                continue
            else:
                error_left = self.mean_squared_error(X[:i], np.mean(y[:i]))
                error_right = self.mean_squared_error(X[i:], np.mean(y[i:]))
                error = error_left + error_right
                if error < min_error:
                    best_split = i
                    min_error = error
    
    def compute_heterogeneity(data, k, centroids, cluster_assignment):
    
    heterogeneity = 0.0
    for i in range(k):
        
        # Select all data points that belong to cluster i. Fill in the blank (RHS only)
        member_data_points = data[cluster_assignment==i, :]
        
        if member_data_points.shape[0] > 0: # check if i-th cluster is non-empty
            # Compute distances from centroid to data points (RHS only)
            distances = pairwise_distances(member_data_points, [centroids[i]], metric='euclidean')
            squared_distances = distances**2
            heterogeneity += np.sum(squared_distances)
        
    return heterogeneity
    
            a += a
        b >>= 1
    
    # frequency taken from http://en.wikipedia.org/wiki/Letter_frequency
englishLetterFreq = {'E': 12.70, 'T': 9.06, 'A': 8.17, 'O': 7.51, 'I': 6.97,
                     'N': 6.75, 'S': 6.33, 'H': 6.09, 'R': 5.99, 'D': 4.25,
                     'L': 4.03, 'C': 2.78, 'U': 2.76, 'M': 2.41, 'W': 2.36,
                     'F': 2.23, 'G': 2.02, 'Y': 1.97, 'P': 1.93, 'B': 1.29,
                     'V': 0.98, 'K': 0.77, 'J': 0.15, 'X': 0.15, 'Q': 0.10,
                     'Z': 0.07}
ETAOIN = 'ETAOINSHRDLCUMWFGYPBVKJXQZ'
LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    
        if unit_1 == unit_2 or unit_1 not in VALID_UNITS:
        return value
    
            elif version.is_prerelease:
            if version.pre[0] == 'a':
                to_change['pre'] = ('b', 0)
            if version.pre[0] == 'b':
                to_change['pre'] = ('b', version.pre[1] + 1)
            else:
                to_change['pre'] = ('b', 0)
                to_change['release'] = _bump_release(version.release, 'patch')
    
    def print_title(title, pattern = '-'):
    print('\n'.join(('', title, pattern * len(title)))) 