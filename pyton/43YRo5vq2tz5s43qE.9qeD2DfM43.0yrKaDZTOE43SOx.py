
        
        
class CallState(Enum):
    
        def deal_card(self):
        try:
            card = self.cards[self.deal_index]
            card.is_available = False
            self.deal_index += 1
        except IndexError:
            return None
        return card
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
    
class LookupService(object):
    
    
class Page(object):
    
          # And finally, divide pair_path_embeddings by num_paths element-wise.
      self.pair_path_embeddings = tf.div(
          self.pair_path_embeddings, self.num_paths)
      vec_inputs.append(self.pair_path_embeddings)
    
      if output_dist == 'poisson':
    rates = means = conversion_factor * model_vals['output_dist_params']
    plot_time_series(rates, bidx, n_to_plot=n_to_plot, scale=scale,
                     title=col_title + ' rates (LFADS - red, Truth - black)')
  elif output_dist == 'gaussian':
    means_vars = model_vals['output_dist_params']
    means, vars = np.split(means_vars,2, axis=2) # bxtxn
    stds = np.sqrt(vars)
    plot_time_series(means, bidx, n_to_plot=n_to_plot, scale=scale,
                     title=col_title + ' means (LFADS - red, Truth - black)')
    plot_time_series(means+stds, bidx, n_to_plot=n_to_plot, scale=scale,
                     color='c')
    plot_time_series(means-stds, bidx, n_to_plot=n_to_plot, scale=scale,
                     color='c')
  else:
    assert 'NIY'
    
      Args:
    sentence: Sentence words.
    vocab: Vocabulary. Contains max word chard id length and converts between
        words and ids.
  '''
  targets = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
  weights = np.ones([BATCH_SIZE, NUM_TIMESTEPS], np.float32)
    
      Args:
    values: Value given by the Wasserstein Discriminator of shape [batch_size,
      sequence_length] to an imputed batch (real and fake).
    is_real_input: tf.bool Tensor of shape [batch_size, sequence_length]. If
      true, it indicates that the label is known.
    
    
def zip_seq_pred_crossent(id_to_word, sequences, predictions, cross_entropy):
  '''Zip together the sequences, predictions, cross entropy.'''
  indices = convert_to_indices(sequences)
    
      # Unstack Tensors into lists.
  rewards_list = tf.unstack(rewards, axis=1)
  log_probs_list = tf.unstack(log_probs, axis=1)
  missing = 1. - tf.cast(present, tf.float32)
  missing_list = tf.unstack(missing, axis=1)
    
        # Maximize reward.
    gen_grads = tf.gradients(-final_gen_reward, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    maximize_op = gen_optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    
            if row1 == row2:
            plaintext += table[row1*5+(col1-1)%5]
            plaintext += table[row2*5+(col2-1)%5]
        elif col1 == col2:
            plaintext += table[((row1-1)%5)*5+col1]
            plaintext += table[((row2-1)%5)*5+col2]
        else: # rectangle
            plaintext += table[row1*5+col2]
            plaintext += table[row2*5+col1]
    
    	if len(sys.argv) == 1:
		try:
			n = int(raw_input('Enter a number: '))
			print(partition(n))
		except ValueError:
			print('Please enter a number.')
	else:
		try:
			n = int(sys.argv[1])
			print(partition(n))
		except ValueError:
			print('Please pass a number.')
    
            if self.depth == 1:
            self.prediction = np.mean(y)
            return
    
        log_predict = np.log(predict+1)
    log_actual = np.log(actual+1)
    
    '''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a ^ b = (a*a) ^ (b/2) ---- example : 4 ^ 4 = (4*4) ^ (4/2) = 16 ^ 2
* RULE 2 : IF b is ODD, then ---- a ^ b = a * (a ^ (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a ^ b
* Repeat the process till b = 1 OR b = 0, because a^1 = a AND a^0 = 1
*
* As far as the modulo is concerned,
* the fact : (a*b) % c = ((a%c) * (b%c)) % c
* Now apply RULE 1 OR 2 whichever is required.
'''

    
        freqOrder = []
    for freqPair in freqPairs:
        freqOrder.append(freqPair[1])
    
    
def get_scanner(hass, config):
    '''Return the Swisscom device scanner.'''
    scanner = SwisscomDeviceScanner(config[DOMAIN])
    
                if self.add_timestamp:
                text = '{} {}\n'.format(dt_util.utcnow().isoformat(), message)
            else:
                text = '{}\n'.format(message)
            file.write(text)

    
        def _get_room(self, room):
        '''Get Room object, creating it if necessary.'''
        from hipnotify import Room
        if room not in self._rooms:
            self._rooms[room] = Room(
                token=self._token, room_id=room, endpoint_url=self._host)
        return self._rooms[room]
    
    _LOGGER = logging.getLogger(__name__)
    
        def assert_same_dict(self, data, expected_data, prefix=None):
        prefix = prefix or []
        for k in set(data.keys() + expected_data.keys()):
            current_prefix = prefix + [k]
            want = expected_data.get(k)
            got = data.get(k)
            if isinstance(want, dict) and isinstance(got, dict):
                self.assert_same_dict(got, want, prefix=current_prefix)
            else:
                self.assertEqual(
                    got, want,
                    'Mismatch for %s: %r != %r' % (
                        '.'.join(current_prefix), got, want
                    )
                )
    
            get_or_create_customer_profile(self.user)
    
    
class TestModule(js.Module):
    def get_default_source(self, source):
        return TestFileSource(source)
    
            perm_set = TestPermissionSet()
        self.assertTrue(perm_set.is_valid())
        perm_set['x'] = True
        self.assertTrue(perm_set.is_valid())
        perm_set[perm_set.ALL] = True
        self.assertTrue(perm_set.is_valid())
        perm_set['z'] = True
        self.assertFalse(perm_set.is_valid())
    
        def test_no_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
        url = self.provider.resize_image(image)
        self.assertEqual(url, 'http://s3.amazonaws.com/a.jpg')
    
        def test_narwhal_detector(self):
        user_agent = 'narwhal-iOS/2306 by det0ur'
        outs = detect(user_agent)
        self.assertEqual(outs['browser']['name'],
                         NarwhalForRedditDetector.name)
    
        def assert_invalid(self, body, header, error, **expected):
        expected.setdefault('global_version', -1)
        expected.setdefault('version', -1)
        expected.setdefault('platform', None)
        expected.setdefault('has_mac', False)
        expected['success'] = False
        expected['error'] = error
        return self._assert_validity(body, header, **expected)