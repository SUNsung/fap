
        
          def testConvertNetworkStateTensorarray(self):
    with self.test_session() as session:
      ta = tf.TensorArray(
          dtype=tf.float32,
          size=0,
          dynamic_size=True,
          clear_after_read=False,
          infer_shape=False)
      # Create a 3-step x 2-stride x 2-feature-dim source array.
      ta = ta.write(0, [[0., 0.]] * 2)  # The zeroth step will be removed.
      ta = ta.write(1, [[1., 10.]] * 2)
      ta = ta.write(2, [[2., 20.]] * 2)
      ta = ta.write(3, [[3., 30.]] * 2)
      tensor = network_units.convert_network_state_tensorarray(ta)
      actual = session.run(tensor)
      self.assertEqual(actual.shape, (6, 2))
    
      def get_variable(self, var_name=None, var_params=None):
    if var_name:
      return tf.get_variable(var_name)
    else:
      return var_params
    
    import os.path
import tempfile
    
      def testImmutabilityOfArguments(self):
    '''Tests that training schedule generation does not change its arguments.'''
    pretrain_steps = [1, 2, 3]
    train_steps = [5, 5, 5]
    trainer_lib.generate_target_per_step_schedule(pretrain_steps, train_steps)
    self.assertEqual(pretrain_steps, [1, 2, 3])
    self.assertEqual(train_steps, [5, 5, 5])
    
      # Parse the flags containing lists, using regular expressions.
  # This matches and extracts key=value pairs.
  component_beam_sizes = re.findall(r'([^=,]+)=(\d+)',
                                    FLAGS.inference_beam_size)
  # This matches strings separated by a comma. Does not return any empty
  # strings.
  components_to_locally_normalize = re.findall(r'[^,]+',
                                               FLAGS.locally_normalize)
    
    flags.DEFINE_string('input_file', '',
                    'File of CoNLL-formatted sentences to read from.')
flags.DEFINE_string('output_file', '',
                    'File path to write annotated sentences to.')
flags.DEFINE_bool('text_format', False, '')
    
      pretrain_steps = [0]
  train_steps = [FLAGS.num_epochs * len(training_set)]
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME + SEP_CREDENTIALS + PASSWORD,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
    
class FormatterPlugin(object):
    
        @property
    def is_eager_to_contribute(self):
        return random.randint(0, 1)
    
        def on_switchover(self):
        super(Standby, self).on_switchover() #message ignored
        self._hsm._next_state('active')
    
        def test_sales_manager_shall_not_talk_through_proxy_with_delay(cls):
        cls.ntp.busy = 'No'
        start_time = time()
        cls.ntp.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
This Sales Manager will not talk to you whether he/she is busy or not\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.