  The partition function is caluclated via application of the Matrix-Tree
  theorem; see the following for details:
    https://en.wikipedia.org/wiki/Kirchhoff%27s_theorem
    http://www.aclweb.org/anthology/D/D07/D07-1015.pdf
    
          # The num_nodes input is non-differentiable.
      self.assertTrue(d_loss_d_num_nodes is None)
      tf.logging.info('\nd_loss_d_scores=\n%s', d_loss_d_scores.eval())
    
    _MASTER_SPEC = r'''
  component {
    name: 'test'
    linked_feature {
      name: 'lengths'
      size: 1
      embedding_dim: -1
      fml: 'input.focus'
      source_translator: 'identity'
      source_component: 'previous'
      source_layer: 'lengths'
    }
    linked_feature {
      name: 'scores'
      size: 1
      embedding_dim: -1
      fml: 'input.focus'
      source_translator: 'identity'
      source_component: 'previous'
      source_layer: 'scores'
    }
  }
'''
    
    
def fixed_feature_lookup(component, state, channel_id, stride, during_training):
  '''Looks up fixed features and passes them through embeddings.
    
      def setUp(self):
    # This dataset contains 54 sentences.
    self.filepath = os.path.join(
        test_flags.source_root(),
        'syntaxnet/testdata/mini-training-set')
    self.batch_size = 20
    
    from dragnn.protos import spec_pb2
from dragnn.python import lexicon
from syntaxnet.ops import gen_parser_ops
from syntaxnet.util import check
    
      # Reads master spec.
  master_spec = spec_pb2.MasterSpec()
  with gfile.FastGFile(FLAGS.master_spec) as fin:
    text_format.Parse(fin.read(), master_spec)
    
          # Process.
      tf.logging.info('Processing examples %d to %d' % (start, end))
      if timeline_output_file and end == len(input_data):
        serialized_annotations = sess.run(
            output_node,
            feed_dict=feed_dict,
            options=tf.RunOptions(trace_level=tf.RunOptions.FULL_TRACE),
            run_metadata=run_metadata)
        trace = timeline.Timeline(step_stats=run_metadata.step_stats)
        with open(timeline_output_file, 'w') as trace_file:
          trace_file.write(trace.generate_chrome_trace_format())
      else:
        serialized_annotations = sess.run(output_node, feed_dict=feed_dict)
    
      tf.logging.info('Read ckpt stats: %s', str(stats))
  do_restore = True
  if stats[0] < FLAGS.job_id:
    do_restore = False
    tf.logging.info('Deleting last job: %d', stats[0])
    try:
      gfile.DeleteRecursively(FLAGS.tensorboard_dir)
      gfile.Remove(FLAGS.checkpoint_filename)
    except errors.OpError as err:
      tf.logging.error('Unable to delete prior files: %s', err)
    stats = [FLAGS.job_id, 0, 0]
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
        def short_desc(self):
        return 'Generate new spider using pre-defined templates'
    
                # create and prepare request
            args.remove('self')
            if set(args).issubset(set(kwargs)):
                request = Request(**kwargs)
    
    
class Active(Inservice):
    
        def test_initial_am_station(self):
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def _instance_method_2(self):
        print('Value {}'.format(self.x2))
    
    print()
    
    
# Example usage...
def main():
    data1 = Data('Data 1')
    data2 = Data('Data 2')
    view1 = DecimalViewer()
    view2 = HexViewer()
    data1.attach(view1)
    data1.attach(view2)
    data2.attach(view2)
    data2.attach(view1)
    
        @property
    def name(self):
        '''Return the name of the sensor.'''
        return self._name
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
    CONF_ON_STATE = 'on_state'
    
        def test_from_event(self):
        '''Test converting event to db state.'''
        state = ha.State('sensor.temperature', '18')
        event = ha.Event(EVENT_STATE_CHANGED, {
            'entity_id': 'sensor.temperature',
            'old_state': None,
            'new_state': state,
        })
        assert state == States.from_event(event).to_native()