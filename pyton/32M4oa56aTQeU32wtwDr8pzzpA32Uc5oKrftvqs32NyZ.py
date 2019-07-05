
        
            for batch_idx, es_idx in enumerate(trial_batches(E_to_process,
                                                     hps.batch_size)):
      print('Running trial batch %d with %d trials' % (batch_idx+1,
                                                       len(es_idx)))
      data_bxtxd, ext_input_bxtxi = self.get_batch(data_extxd,
                                                   ext_input_extxi,
                                                   batch_size=batch_size,
                                                   example_idxs=es_idx)
      model_values = self.eval_model_runs_batch(data_name, data_bxtxd,
                                                ext_input_bxtxi,
                                                do_eval_cost=True,
                                                do_average_batch=False)
    
    
# OVERFITTING
# Dropout is done on the input data, on controller inputs (from
# encoder), on outputs from generator to factors.
flags.DEFINE_float('keep_prob', KEEP_PROB, 'Dropout keep probability.')
# It appears that the system will happily fit spikes (blessing or
# curse, depending).  You may not want this.  Jittering the spikes a
# bit will help (-/+ bin size, as specified here).
flags.DEFINE_integer('temporal_spike_jitter_width',
                     TEMPORAL_SPIKE_JITTER_WIDTH,
                     'Shuffle spikes around this window.')
    
      # Turn rates, noisy_data, and input into numpy arrays.
  rates_train = nparray_and_transpose(rates_train)
  rates_valid = nparray_and_transpose(rates_valid)
  noisy_data_train = nparray_and_transpose(noisy_data_train)
  noisy_data_valid = nparray_and_transpose(noisy_data_valid)
  input_train = nparray_and_transpose(input_train)
  inputs_valid = nparray_and_transpose(inputs_valid)
    
    # pick which RNN is used on each trial
rnn_to_use = rng.randint(2, size=E)
ext_input = np.repeat(np.expand_dims(rnn_to_use, axis=1), ntimesteps, axis=1)
ext_input = np.expand_dims(ext_input, axis=2)  # these are 'a's' in the paper
    
      if len(dataset_dict) == 0:
    raise ValueError('Failed to load any datasets, are you sure that the '
                     ''--data_dir' and '--data_filename_stem' flag values '
                     'are correct?')
    
      # Output variables only for the Generator.  Discriminator output biases
  # will begin randomly initialized.
  if model == 'gen':
    softmax_b = [
        v for v in tf.trainable_variables() if v.op.name == 'gen/rnn/softmax_b'
    ][0]
    
          # Now calculate the attention-weighted vector.
      alignments = tf.expand_dims(alignments, 2)
      context_vector = tf.reduce_sum(alignments * values, [1])
      context_vector.set_shape([None, num_units])
    
          predictions = tf.transpose(predictions, [1, 0, 2])
      return tf.squeeze(predictions, axis=2)

    
        def __call__(self, y_true, y_pred):
        return (self.mse_fraction * losses.mse(y_true, y_pred) +
                (1 - self.mse_fraction) * losses.mae(y_true, y_pred))
    
        # Arguments
        y: class vector to be converted into a matrix
            (integers from 0 to num_classes).
        num_classes: total number of classes.
        dtype: The data type expected by the input, as a string
            (`float32`, `float64`, `int32`...)
    
    
def mean_squared_logarithmic_error(y_true, y_pred):
    first_log = K.log(K.clip(y_pred, K.epsilon(), None) + 1.)
    second_log = K.log(K.clip(y_true, K.epsilon(), None) + 1.)
    return K.mean(K.square(first_log - second_log), axis=-1)
    
        return inner
    
        styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
    import idna
import urllib3
import chardet
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or {}
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
    _codes = {
    }
    
            :rtype: dict
        '''
        # Gather clues from the surrounding environment.
        if self.trust_env:
            # Set environment's proxies.
            no_proxy = proxies.get('no_proxy') if proxies is not None else None
            env_proxies = get_environ_proxies(url, no_proxy=no_proxy)
            for (k, v) in env_proxies.items():
                proxies.setdefault(k, v)
    
        return lambda_facts
    
            if state == 'absent' and user in heroku_collaborator_list:
            if not module.check_mode:
                heroku_app.remove_collaborator(user)
            affected_apps += [app]
            result_state = True
        elif state == 'present' and user not in heroku_collaborator_list:
            if not module.check_mode:
                heroku_app.add_collaborator(user_id_or_email=user, silent=module.params['suppress_invitation'])
            affected_apps += [app]
            result_state = True
    
        gateway = vca.get_gateway(vdc_name, gateway_name)
    if not gateway:
        module.fail_json(msg='Not able to find the gateway %s, please check '
                             'the gateway_name param' % gateway_name)