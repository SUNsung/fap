
        
            session = tf.get_default_session()
    self.logfile = os.path.join(hps.lfads_save_dir, 'lfads_log')
    self.writer = tf.summary.FileWriter(self.logfile)
    
    # If your optimizations start 'NaN-ing out', reduce this value so that
# the values of the network don't grow out of control.  Typically, once
# this parameter is set to a reasonable value, one stops having numerical
# problems.
flags.DEFINE_float('cell_clip_value', CELL_CLIP_VALUE,
                   'Max value recurrent cell can take before being clipped.')
    
    # Getting hard vs. easy data can be a little stochastic, so we set the seed.
    
    # save down the inputs used to generate this data
train_inputs_u, valid_inputs_u = split_list_by_inds(u_e,
                                                    train_inds,
                                                    valid_inds)
train_inputs_u = nparray_and_transpose(train_inputs_u)
valid_inputs_u = nparray_and_transpose(valid_inputs_u)
    
    
def split_list_by_inds(data, inds1, inds2):
  '''Take the data, a list, and split it up based on the indices in inds1 and
  inds2.
  Args:
    data: the list of data to split
    inds1, the first list of indices
    inds2, the second list of indices
  Returns: a 2-tuple of two lists.
  '''
  if data is None or len(data) == 0:
    return [], []
  else:
    dout1 = [data[i] for i in inds1]
    dout2 = [data[i] for i in inds2]
    return dout1, dout2
    
    
def read_datasets(data_path, data_fname_stem):
  '''Read dataset sin HD5F format.
    
      if FLAGS.mode == 'eval':
    dataset = data_utils.LM1BDataset(FLAGS.input_data, vocab)
    _EvalModel(dataset)
  elif FLAGS.mode == 'sample':
    _SampleModel(FLAGS.prefix, vocab)
  elif FLAGS.mode == 'dump_emb':
    _DumpEmb(vocab)
  elif FLAGS.mode == 'dump_lstm_emb':
    _DumpSentenceEmbedding(FLAGS.sentence, vocab)
  else:
    raise Exception('Mode not supported.')
    
      This generates batch_size pointers into the raw IMDB data, and allows
  minibatch iteration along these pointers.
    
    import train_mask_gan
from data import imdb_loader
from data import ptb_loader
    
      Returns:
    Tuple of the (sequence, logits, log_probs) of the Generator.   Sequence
      and logits have shape [batch_size, sequence_length, vocab_size].  The
      log_probs will have shape [batch_size, sequence_length].  Log_probs
      corresponds to the log probability of selecting the words.
  '''
  if FLAGS.generator_model == 'rnn':
    (sequence, logits, log_probs, initial_state, final_state) = rnn.generator(
        hparams,
        inputs,
        targets,
        present,
        is_training=is_training,
        is_validating=is_validating,
        reuse=reuse)
  elif FLAGS.generator_model == 'rnn_zaremba':
    (sequence, logits, log_probs, initial_state,
     final_state) = rnn_zaremba.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq':
    (sequence, logits, log_probs, initial_state,
     final_state) = seq2seq.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq_zaremba':
    (sequence, logits, log_probs, initial_state,
     final_state) = seq2seq_zaremba.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'rnn_nas':
    (sequence, logits, log_probs, initial_state,
     final_state) = rnn_nas.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq_nas':
    (sequence, logits, log_probs, initial_state,
     final_state) = seq2seq_nas.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq_vd':
    (sequence, logits, log_probs, initial_state, final_state,
     encoder_states) = seq2seq_vd.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  else:
    raise NotImplementedError
  return (sequence, logits, log_probs, initial_state, final_state,
          encoder_states)
    
      Args:
    encoder_state: The encoded state to initialize the `dynamic_rnn_decoder`.
    attention_keys: to be compared with target states.
    attention_values: to be used to construct context vectors.
    attention_score_fn: to compute similarity between key and target states.
    attention_construct_fn: to build attention states.
    name: (default: `None`) NameScope for the decoder function;
      defaults to 'simple_decoder_fn_train'
    
      with tf.variable_scope('dis', reuse=reuse):
    cell_fwd = tf.contrib.rnn.LayerNormBasicLSTMCell(
        hparams.dis_rnn_size, forget_bias=1.0, reuse=reuse)
    cell_bwd = tf.contrib.rnn.LayerNormBasicLSTMCell(
        hparams.dis_rnn_size, forget_bias=1.0, reuse=reuse)
    if FLAGS.zoneout_drop_prob > 0.0:
      cell_fwd = zoneout.ZoneoutWrapper(
          cell_fwd,
          zoneout_drop_prob=FLAGS.zoneout_drop_prob,
          is_training=is_training)
      cell_bwd = zoneout.ZoneoutWrapper(
          cell_bwd,
          zoneout_drop_prob=FLAGS.zoneout_drop_prob,
          is_training=is_training)
    
        def create(self):
        # Because a cache can fail silently (e.g. memcache), we don't know if
        # we are failing to create a new session because of a key collision or
        # because the cache is missing. So we try for a (large) number of times
        # and then raise an exception. That's the risk you shoulder if using
        # cache backing.
        for i in range(10000):
            self._session_key = self._get_new_session_key()
            try:
                self.save(must_create=True)
            except CreateError:
                continue
            self.modified = True
            return
        raise RuntimeError(
            'Unable to create a new session key. '
            'It is likely that the cache is unavailable.')
    
    
class AbstractBaseSession(models.Model):
    session_key = models.CharField(_('session key'), max_length=40, primary_key=True)
    session_data = models.TextField(_('session data'))
    expire_date = models.DateTimeField(_('expire date'), db_index=True)
    
    
def _FormatCompleterDebugInfo( completer ):
  message = '{0} completer debug information:\n'.format( completer[ 'name' ] )
  for server in completer[ 'servers' ]:
    name = server[ 'name' ]
    if server[ 'is_running' ]:
      address = server[ 'address' ]
      port = server[ 'port' ]
      if address and port:
        message += '  {0} running at: http://{1}:{2}\n'.format( name,
                                                                address,
                                                                port )
      else:
        message += '  {0} running\n'.format( name )
      message += '  {0} process ID: {1}\n'.format( name, server[ 'pid' ] )
    else:
      message += '  {0} not running\n'.format( name )
    message += '  {0} executable: {1}\n'.format( name, server[ 'executable' ] )
    logfiles = server[ 'logfiles' ]
    if logfiles:
      message += '  {0} logfiles:\n'.format( name )
      for logfile in logfiles:
        message += '    {0}\n'.format( logfile )
    else:
      message += '  No logfiles available\n'
    if 'extras' in server:
      for extra in server[ 'extras' ]:
        message += '  {0} {1}: {2}\n'.format( name,
                                              extra[ 'key' ],
                                              extra[ 'value' ] )
  for item in completer[ 'items' ]:
    message += '  {0}: {1}\n'.format( item[ 'key' ].capitalize(),
                                      item[ 'value' ] )
  return message
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running at: http://127.0.0.1:1234\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )
    
      with CurrentWorkingDirectory( unicode_dir ):
    with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
      with MockCompletionRequest( ServerResponse ):
        ycm.SendCompletionRequest()
        ok_( ycm.CompletionRequestReady() )
        assert_that(
          ycm.GetCompletionResponse(),
          has_entries( {
            'completions': empty(),
            'completion_start_column': 1
          } )
        )
    
            Args:
            max_workers: The maximum number of threads that can be used to
                execute the given calls.
        '''
        self._max_workers = max_workers
        self._work_queue = queue.Queue()
        self._threads = set()
        self._shutdown = False
        self._shutdown_lock = threading.Lock()
    
        def setUp(self):
        self.t1 = time.time()
        try:
            self.executor = self.executor_type(max_workers=self.worker_count)
        except NotImplementedError:
            e = sys.exc_info()[1]
            self.skipTest(str(e))
        self._prime_executor()
    
    from gym import error
try:
    import mujoco_py
except ImportError as e:
    raise error.DependencyNotInstalled('{}. (HINT: you need to install mujoco_py, and also perform the setup instructions here: https://github.com/openai/mujoco-py/.)'.format(e))
    
        The last action (38) stops the rollout for a return of 0 (walking away)
    '''
    def __init__(self, spots=37):
        self.n = spots + 1
        self.action_space = spaces.Discrete(self.n)
        self.observation_space = spaces.Discrete(1)
        self.seed()
    
        def register(self, closeable):
        '''Registers an object with a 'close' method.
    
        # You provide the directory to write to (can be an existing
    # directory, including one with existing data -- all monitor files
    # will be namespaced). You can also dump to a tempdir if you'd
    # like: tempfile.mkdtemp().
    outdir = '/tmp/random-agent-results'
    env = wrappers.Monitor(env, directory=outdir, force=True)
    env.seed(0)
    agent = RandomAgent(env.action_space)
    
      output = tf.nn.dropout(input_tensor, 1.0 - dropout_prob)
  return output
    
          eval_metrics = (metric_fn, [
          masked_lm_example_loss, masked_lm_log_probs, masked_lm_ids,
          masked_lm_weights, next_sentence_example_loss,
          next_sentence_log_probs, next_sentence_labels
      ])
      output_spec = tf.contrib.tpu.TPUEstimatorSpec(
          mode=mode,
          loss=total_loss,
          eval_metrics=eval_metrics,
          scaffold_fn=scaffold_fn)
    else:
      raise ValueError('Only TRAIN and EVAL modes are supported: %s' % (mode))
    
    import codecs
import collections
import json
import re
    
          update_with_lr = self.learning_rate * update
    
      best_indexes = []
  for i in range(len(index_and_score)):
    if i >= n_best_size:
      break
    best_indexes.append(index_and_score[i][0])
  return best_indexes
    
      train_examples = None
  num_train_steps = None
  num_warmup_steps = None
  if FLAGS.do_train:
    train_examples = processor.get_train_examples(FLAGS.data_dir)
    num_train_steps = int(
        len(train_examples) / FLAGS.train_batch_size * FLAGS.num_train_epochs)
    num_warmup_steps = int(num_train_steps * FLAGS.warmup_proportion)