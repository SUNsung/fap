
        
          labels = tf.squeeze(curr_features['rel_id'], [-1])
  return labels
    
        for index, instance in enumerate(inputs):
    
    # Sometimes the task can be sufficiently hard to learn that the
# optimizer takes the 'easy route', and simply minimizes the KL
# divergence, setting it to near zero, and the optimization gets
# stuck.  These two parameters will help avoid that by by getting the
# optimization to 'latch' on to the main optimization, and only
# turning in the regularizers later.
flags.DEFINE_integer('kl_start_step', KL_START_STEP,
                     'Start increasing weight after this many steps.')
# training passes, not epochs, increase by 0.5 every kl_increase_steps
flags.DEFINE_integer('kl_increase_steps', KL_INCREASE_STEPS,
                     'Increase weight of kl cost to avoid local minimum.')
# Same story for l2 regularizer.  One wants a simple generator, for scientific
# reasons, but not at the expense of hosing the optimization.
flags.DEFINE_integer('l2_start_step', L2_START_STEP,
                     'Start increasing l2 weight after this many steps.')
flags.DEFINE_integer('l2_increase_steps', L2_INCREASE_STEPS,
                     'Increase weight of l2 cost to avoid local minimum.')
    
    # Getting hard vs. easy data can be a little stochastic, so we set the seed.
    
    x0s = []
condition_labels = []
condition_number = 0
for c in range(C):
  x0 = FLAGS.x0_std * rng.randn(N, 1)
  x0s.append(np.tile(x0, nreplications))
  for ns in range(nreplications):
    condition_labels.append(condition_number)
  condition_number += 1
x0s = np.concatenate(x0s, axis=1)
    
      Raises:
    ValueError: if batch_size or num_steps are too high.
  '''
  del epoch_size_override
  data_len = len(raw_data)
  num_batches = data_len // batch_size - 1
    
      elif FLAGS.baseline_method is None:
    num_missing = tf.reduce_sum(missing)
    final_gen_objective += tf.reduce_sum(rewards) / (num_missing + eps)
    baselines = tf.zeros_like(rewards)
    critic_loss = None
    maintain_averages_op = None
    advantages = cumulative_rewards
    
      Args:
    name: to label variables.
    num_units: hidden state dimension.
    attention_option: how to compute attention, either 'luong' or 'bahdanau'.
      'bahdanau': additive (Bahdanau et al., ICLR'2015)
      'luong': multiplicative (Luong et al., EMNLP'2015)
    reuse: whether to reuse variable scope.
    dtype: (default: `tf.float32`) data type to use.
    
        if not FLAGS.dis_share_embedding:
      embedding = tf.get_variable('embedding',
                                  [FLAGS.vocab_size, hparams.dis_rnn_size])
    
            :param mime: E.g., 'application/atom+xml'.
        :param content: The body content as text
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return HTTPBasicAuth(username, password)
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
def test_unicode_raw_json_item(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
        '''
    
    
def __kilometers_to_meters(kilometers: float) -> float:
    '''Convert kilometers to meters.'''
    return kilometers * 1000
    
        # with patch('homeassistant.config.async_hass_config_yaml',
    #            Mock(return_value=mock_coro(config))):
    #     yield from hass.services.async_call(
    #         automation.DOMAIN, automation.SERVICE_RELOAD, blocking=True)