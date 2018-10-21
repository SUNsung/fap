
        
          input_title = ''
  if 'controller_outputs' in model_vals.keys():
    input_title += ' Controller Output'
    plt.subplot(nrows,2,3+subplot_cidx)
    u_t = model_vals['controller_outputs'][0:-1]
    plot_time_series(u_t, bidx, n_to_plot=n_to_plot, color='c', scale=1.0,
                     title=col_title + input_title)
    
    # General note about helping ascribe controller inputs vs dynamics:
#
# If controller is heavily penalized, then it won't have any output.
# If dynamics are heavily penalized, then generator won't make
# dynamics.  Note this l2 penalty is only on the recurrent portion of
# the RNNs, as dropout is also available, penalizing the feed-forward
# connections.
flags.DEFINE_float('l2_gen_scale', L2_GEN_SCALE,
                   'L2 regularization cost for the generator only.')
flags.DEFINE_float('l2_con_scale', L2_CON_SCALE,
                   'L2 regularization cost for the controller only.')
flags.DEFINE_float('co_mean_corr_scale', CO_MEAN_CORR_SCALE,
                   'Cost of correlation (thru time)in the means of \
                   controller output.')
    
    # generate trials for both RNNs
rates_a, x0s_a, _ = generate_data(rnn_a, T=T, E=E, x0s=x0s, P_sxn=P_nxn,
                                  input_magnitude=0.0, input_times=None)
spikes_a = spikify_data(rates_a, rng, rnn_a['dt'], rnn_a['max_firing_rate'])
    
      Args:
    sentence: Sentence words.
    vocab: Vocabulary. Contains max word chard id length and converts between
        words and ids.
  '''
  targets = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
  weights = np.ones([BATCH_SIZE, NUM_TIMESTEPS], np.float32)
    
    
def generate_samples(hparams, data, id_to_word, log_dir, output_file):
  ''''Generate samples.
    
      return p
    
      # Dictionary mapping.
  if model == 'gen':
    variable_mapping = {
        'Model/embeddings/input_embedding':
            embedding,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_h_mat':
            lstm_w_0,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_inputs_mat':
            lstm_b_0,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_h_mat':
            lstm_w_1,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_inputs_mat':
            lstm_b_1,
        'Model/softmax_b':
            softmax_b
    }
  else:
    variable_mapping = {
        'Model/embeddings/input_embedding':
            embedding,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_h_mat':
            lstm_w_0,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_inputs_mat':
            lstm_b_0,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_h_mat':
            lstm_w_1,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_inputs_mat':
            lstm_b_1
    }
    
      Args:
    name: to label variables.
    num_units: hidden state dimension.
    attention_option: how to compute attention, either 'luong' or 'bahdanau'.
      'bahdanau': additive (Bahdanau et al., ICLR'2015)
      'luong': multiplicative (Luong et al., EMNLP'2015)
    reuse: whether to reuse variable scope.
    dtype: (default: `tf.float32`) data type to use.
    
    
if __name__ == '__main__':
    main()
    
        print('-- now doing stuff ...')
    try:
        num_obj.do_stuff()
    except Exception as e:
        print('-> doing stuff failed!')
        import sys
        import traceback
    
        jim = Subscriber('jim', message_center)
    jim.subscribe('cartoon')
    jack = Subscriber('jack', message_center)
    jack.subscribe('music')
    gee = Subscriber('gee', message_center)
    gee.subscribe('movie')
    vani = Subscriber('vani', message_center)
    vani.subscribe('movie')
    vani.unsubscribe('movie')
    
        def scan(self):
        self.state.scan()
    
    ### OUTPUT ###
# Floor: One | Size: Big
# Floor: More than One | Size: Small
# Floor: One | Size: Big and fancy

    
    ### OUTPUT ###
# Name: Jhon    Occupation: Coder
# Before we access `relatives`:
# {'call_count2': 0, 'name': 'Jhon', 'occupation': 'Coder'}
# Jhon's relatives: Many relatives.
# After we've accessed `relatives`:
# {'relatives': 'Many relatives.', 'call_count2': 0, 'name': 'Jhon', 'occupation': 'Coder'}
# Father and mother
# {'_lazy__parents': 'Father and mother', 'relatives': 'Many relatives.', 'call_count2': 1, 'name': 'Jhon', 'occupation': 'Coder'}  # noqa flake8
# Father and mother
# 1

    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
    
class UnsupportedTransition(BaseException):
    pass