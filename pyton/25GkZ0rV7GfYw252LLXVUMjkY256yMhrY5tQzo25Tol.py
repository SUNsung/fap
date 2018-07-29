
        
        def main():
    # First, we load the current README into memory as an array of lines
    with open('README.md', 'r') as read_me_file:
        read_me = read_me_file.readlines()
    
        # Make the 'parser' component attend to the 'tagger' component.
    self.assertEqual('tagger', spec.component[1].name)
    self.assertEqual('parser', spec.component[2].name)
    spec.component[2].attention_component = 'tagger'
    
      def _compute_m3n_loss(self, lengths, scores, gold):
    '''Computes the M3N-style structured hinge loss for a batch.'''
    # Perform hamming-loss-augmented inference.
    gold_scores_b = tf.reduce_sum(scores * gold, axis=[1, 2])
    hamming_loss_bxnxn = 1 - gold
    scores_bxnxn = scores + hamming_loss_bxnxn
    max_scores_b, _ = mst_ops.maximum_spanning_tree(
        num_nodes=lengths, scores=scores_bxnxn, forest=self._attrs['forest'])
    return max_scores_b - gold_scores_b
    
      def __init__(self,
               name,
               builder='DynamicComponentBuilder',
               backend='SyntaxNetComponent'):
    '''Initializes the ComponentSpec with some defaults for SyntaxNet.
    
      Returns:
    Python list of length sum(pretrain_steps + train_steps), containing
    target numbers per step.
  '''
  check.Eq(len(pretrain_steps), len(train_steps))
  # Arbitrary seed to make sure the return is deterministic.
  random.seed(0x31337)
  tf.logging.info('Determining the training schedule...')
  target_per_step = []
  for target_idx in xrange(len(pretrain_steps)):
    target_per_step += [target_idx] * pretrain_steps[target_idx]
  train_steps = list(train_steps)
  while sum(train_steps) > 0:
    step = random.randint(0, sum(train_steps) - 1)
    cumulative_steps = 0
    for target_idx in xrange(len(train_steps)):
      cumulative_steps += train_steps[target_idx]
      if step < cumulative_steps:
        break
    assert train_steps[target_idx] > 0
    train_steps[target_idx] -= 1
    target_per_step.append(target_idx)
  tf.logging.info('Training schedule defined!')
  return target_per_step
    
      with tf.variable_scope(
      scope_name, reuse=None, custom_getter=_custom_getter) as scope:
    function(scope)
  return created_vars.values()
    
      short_to_original = saver_lib.shorten_resource_paths(master_spec)
  saver_lib.export_master_spec(master_spec, graph)
  saver_lib.export_to_graph(master_spec, params_path, stripped_path, graph,
                            export_moving_averages)
  saver_lib.export_assets(master_spec, short_to_original, stripped_path)
    
      # Rewrite resource locations.
  if FLAGS.resource_dir:
    for component in master_spec.component:
      for resource in component.resource:
        for part in resource.part:
          part.file_pattern = os.path.join(FLAGS.resource_dir,
                                           part.file_pattern)
    
    Sample invocation:
  bazel run -c opt <...>:dragnn_eval -- \
    --master_spec='/path/to/master-spec' \
    --resource_dir='/path/to/resources/'
    --checkpoint_file='/path/to/model/name.checkpoint' \
    --input_file='/path/to/input/documents/test.connlu'
'''
    
      # Build and write master_spec.
  master_spec = spec_pb2.MasterSpec()
  master_spec.component.extend([lookahead.spec, segmenter.spec])
  logging.info('Constructed master spec: %s', str(master_spec))
  with gfile.GFile(FLAGS.resource_path + '/master_spec', 'w') as f:
    f.write(str(master_spec).encode('utf-8'))
    
    cc_test(
    name = 'whole_sentence_features_test',
    size = 'medium',
    srcs = ['whole_sentence_features_test.cc'],
    deps = [
        ':feature_extractor',
        ':parser_transitions',
        ':sentence_proto_cc',
        ':task_context',
        ':term_frequency_map',
        ':test_main',
        ':whole_sentence_features',
        ':workspace',
    ],
)
    
      def testPathScoresAgree(self):
    '''Ensures that path scores computed in the beam are same in the net.'''
    all_path_scores, beam_path_scores = self.PathScores(
        iterations=1, beam_size=130, max_steps=5, batch_size=1)
    self.assertArrayNear(all_path_scores[0], beam_path_scores[0], 1e-6)
    
            if job_number:
            if args.job_number:
                exit('ERROR: job number found in url and specified with --job-number')