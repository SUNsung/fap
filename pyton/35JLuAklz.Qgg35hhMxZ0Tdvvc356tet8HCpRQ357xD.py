
        
          The log p(x|z) term is the reconstruction error under the model.
  The KL term represents the penalty for passing information from the encoder
  to the decoder.
  To sample KL(q||p), we simply sample
        ln q - ln p
  by drawing samples from q and averaging.
  '''
    
    
# for multi-session 'stitching' models, the per-session readin matrices map from
# neurons to input factors which are fed into the shared encoder. These are
# initialized by alignment_matrix_cxf and alignment_bias_c in the input .h5
# files. They can be fixed or made trainable.
flags.DEFINE_boolean('do_train_readin', DO_TRAIN_READIN, 'Whether to train the \
                     readin matrices and bias vectors. False leaves them fixed \
                     at their initial values specified by the alignment \
                     matrices and vectors.')
    
    flags = tf.app.flags
flags.DEFINE_string('save_dir', '/tmp/' + DATA_DIR + '/',
                    'Directory for saving data.')
flags.DEFINE_string('datafile_name', 'thits_data',
                    'Name of data file for input case.')
flags.DEFINE_string('noise_type', 'poisson', 'Noise type for data.')
flags.DEFINE_integer('synth_data_seed', 5, 'Random seed for RNN generation.')
flags.DEFINE_float('T', 1.0, 'Time in seconds to generate.')
flags.DEFINE_integer('C', 100, 'Number of conditions')
flags.DEFINE_integer('N', 50, 'Number of units for the RNN')
flags.DEFINE_integer('S', 50, 'Number of sampled units from RNN')
flags.DEFINE_integer('npcs', 10, 'Number of PCS for multi-session case.')
flags.DEFINE_float('train_percentage', 4.0/5.0,
                   'Percentage of train vs validation trials')
flags.DEFINE_integer('nreplications', 40,
                     'Number of noise replications of the same underlying rates.')
flags.DEFINE_float('g', 1.5, 'Complexity of dynamics')
flags.DEFINE_float('x0_std', 1.0,
                   'Volume from which to pull initial conditions (affects diversity of dynamics.')
flags.DEFINE_float('tau', 0.025, 'Time constant of RNN')
flags.DEFINE_float('dt', 0.010, 'Time bin')
flags.DEFINE_float('input_magnitude', 20.0,
                   'For the input case, what is the value of the input?')
flags.DEFINE_float('max_firing_rate', 30.0, 'Map 1.0 of RNN to a spikes per second')
FLAGS = flags.FLAGS
    
    FLAGS = tf.app.flags.FLAGS
tf.app.flags.DEFINE_boolean('prefix_label', True, 'Vocabulary file.')
    
      Args;
    hparams:  Hyperparameters for the MaskGAN.
    inputs:  tf.int32 Tensor of the sequence input of shape [batch_size,
      sequence_length].
    present:  tf.bool Tensor indicating the presence or absence of the token
      of shape [batch_size, sequence_length].
    is_training:  Whether the model is training.
    is_validating:  Whether the model is being run in validation mode for
      calculating the perplexity.
    reuse (Optional):  Whether to reuse the model.
    
      for _, value in gen_ngrams_dict.iteritems():
    total_ngrams_produced += value
    
    Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
            Operator:                  '#582800',   # class: 'o'
        Operator.Word:             'bold #004461',   # class: 'ow' - like keywords
    
        builtin_str = str
    str = str
    bytes = bytes
    basestring = (str, bytes)
    numeric_types = (int, float)
    integer_types = (int,)

    
        By default, the pair of `name` and `value` will be set for the domain ''
    and sent on every request (this is sometimes called a 'supercookie').
    '''
    result = {
        'version': 0,
        'name': name,
        'value': value,
        'port': None,
        'domain': '',
        'path': '/',
        'secure': False,
        'expires': None,
        'discard': True,
        'comment': None,
        'comment_url': None,
        'rest': {'HttpOnly': None},
        'rfc2109': False,
    }