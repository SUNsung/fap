cc_test(
    name = 'syntaxnet_transition_state_test',
    srcs = ['syntaxnet_transition_state_test.cc'],
    data = [':testdata'],
    deps = [
        ':syntaxnet_component',
        ':syntaxnet_transition_state',
        '//dragnn/core:input_batch_cache',
        '//dragnn/core/test:generic',
        '//dragnn/core/test:mock_transition_state',
        '//dragnn/io:sentence_input_batch',
        '//dragnn/protos:spec_proto_cc',
        '//syntaxnet:base',
        '//syntaxnet:sentence_proto_cc',
        '//syntaxnet:test_main',
    ],
)

    
        # Compute the arc, source, and root potentials.
    arcs_bxnxn = digraph_ops.ArcPotentialsFromTokens(
        source_tokens_bxnxs, target_tokens_bxnxt, weights_arc)
    sources_bxnxn = digraph_ops.ArcSourcePotentialsFromTokens(
        source_tokens_bxnxs, weights_source)
    roots_bxn = digraph_ops.RootPotentialsFromTokens(
        root, target_tokens_bxnxt, weights_arc, weights_source)
    
        Args:
      state: MasterState from the 'AdvanceMaster' op that advances the
        underlying master to this component.
      network_states: NetworkState object containing component TensorArrays.
      during_training: whether the graph is being constructed during training
    
    
def main(unused_argv):
  # Run the exporter.
  export(FLAGS.master_spec, FLAGS.params_path, FLAGS.export_path,
         FLAGS.export_moving_averages, FLAGS.build_runtime_graph)
  tf.logging.info('Export complete.')
    
      # Then, copy all the asset files.
  for component_spec in master_spec.component:
    for resource_spec in component_spec.resource:
      tf.logging.info('Copying assets for resource %s/%s.' %
                      (component_spec.name, resource_spec.name))
      for part in resource_spec.part:
        original_file = shortened_to_original[part.file_pattern]
        new_file = os.path.join(asset_dir, part.file_pattern)
        tf.logging.info('Asset %s was renamed to %s.' % (original_file,
                                                         new_file))
        if tf.gfile.Exists(new_file):
          tf.logging.info('%s already exists, skipping copy.' % (new_file))
        else:
          new_dir = os.path.dirname(new_file)
          tf.gfile.MakeDirs(new_dir)
          tf.logging.info('Copying %s to %s' % (original_file, new_dir))
          tf.gfile.Copy(original_file, new_file, overwrite=True)
  tf.logging.info('Asset export complete.')
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
        def get_testable_domain_names(self):
        '''Returns the set of domain names that can be tested against'''
        if self._test_names:
            return self._test_names
        else:
            return {'example.com'}
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    def test_smtp_success(self, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.connect.call_count, 1)
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)