
        
          Args:
    logits: A tensor containing the predicted logits for each user. The shape
      of logits is (num_users_per_batch * (1 + NUM_EVAL_NEGATIVES),) Logits
      for a user are grouped, and the last element of the group is the true
      element.
    
      Returns:
    float tensor of shape [1, 1, length, length]
  '''
  neg_inf = _NEG_INF_FP16 if dtype == tf.float16 else _NEG_INF_FP32
  with tf.name_scope('decoder_self_attention_bias'):
    valid_locs = tf.linalg.band_part(tf.ones([length, length], dtype=dtype),
                                     -1, 0)
    valid_locs = tf.reshape(valid_locs, [1, 1, length, length])
    decoder_bias = neg_inf * (1.0 - valid_locs)
  return decoder_bias
    
        Args:
      bleu_min: minimum expected uncased bleu. default is SOTA.
      bleu_max: max expected uncased bleu. default is a high number.
    '''
    start_time_sec = time.time()
    stats = transformer_main.run_transformer(flags.FLAGS)
    wall_time_sec = time.time() - start_time_sec
    self._report_benchmark(stats,
                           wall_time_sec,
                           bleu_min=bleu_min,
                           bleu_max=bleu_max)
    
      def _report_benchmark(self,
                        stats,
                        wall_time_sec,
                        top_1_max=None,
                        top_1_min=None,
                        log_steps=None,
                        total_batch_size=None,
                        warmup=1):
    '''Report benchmark results by writing to local protobuf file.
    
        if FLAGS.quantize_delay_step >= 0:
      tf.contrib.quantize.create_eval_graph()
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      def _ComputeVlad(self,
                   features,
                   codebook,
                   use_l2_normalization=True,
                   num_assignments=1):
    '''Compute VLAD representation.
    
      def testComputeUnnormalizedVladWorks(self):
    # Construct inputs.
    # 3 2-D features.
    features = np.array([[1.0, 0.0], [-1.0, 0.0], [1.0, 2.0]], dtype=float)
    config = aggregation_config_pb2.AggregationConfig()
    config.codebook_size = 5
    config.feature_dimensionality = 2
    config.aggregation_type = aggregation_config_pb2.AggregationConfig.VLAD
    config.use_l2_normalization = False
    config.codebook_path = self._codebook_path
    config.num_assignments = 1
    
      Returns:
    escaped string
  '''
  token = token.replace(u'\\', u'\\\\').replace(u'_', u'\\u')
  ret = [c if c in alphabet and c != u'\n' else r'\%d;' % ord(c) for c in token]
  return u''.join(ret) + '_'
    
            next_sentence_log_probs = tf.reshape(
            next_sentence_log_probs, [-1, next_sentence_log_probs.shape[-1]])
        next_sentence_predictions = tf.argmax(
            next_sentence_log_probs, axis=-1, output_type=tf.int32)
        next_sentence_labels = tf.reshape(next_sentence_labels, [-1])
        next_sentence_accuracy = tf.metrics.accuracy(
            labels=next_sentence_labels, predictions=next_sentence_predictions)
        next_sentence_mean_loss = tf.metrics.mean(
            values=next_sentence_example_loss)
    
      model_fn = model_fn_builder(
      num_labels=len(label_list),
      learning_rate=FLAGS.learning_rate,
      num_train_steps=num_train_steps,
      num_warmup_steps=num_warmup_steps,
      use_tpu=FLAGS.use_tpu,
      bert_hub_module_handle=FLAGS.bert_hub_module_handle)