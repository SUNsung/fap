
        
          # Construct the tagger. This is a simple left-to-right LSTM sequence tagger.
  tagger = spec_builder.ComponentSpecBuilder('tagger')
  tagger.set_network_unit(
      name='wrapped_units.LayerNormBasicLSTMNetwork',
      hidden_layer_sizes='256')
  tagger.set_transition_system(name='tagger')
  tagger.add_token_link(source=lookahead, fml='input.focus', embedding_dim=64)
    
        logits = self.network.get_bulk_predictions(stride, network_tensors)
    if logits is None:
      # The network does not produce custom bulk predictions; default to logits.
      logits = self.network.get_logits(network_tensors)
      logits = tf.cond(self.locally_normalize,
                       lambda: tf.nn.log_softmax(logits), lambda: logits)
      if self._output_as_probabilities:
        logits = tf.nn.softmax(logits)
    handle = dragnn_ops.bulk_advance_from_prediction(
        state.handle, logits, component=self.name)
    
      roots_shape = tf.shape(roots)
  arcs_shape = tf.shape(arcs)
  batch_size = roots_shape[0]
  num_tokens = roots_shape[1]
  with tf.control_dependencies([
      tf.assert_equal(batch_size, arcs_shape[0]),
      tf.assert_equal(num_tokens, arcs_shape[1]),
      tf.assert_equal(num_tokens, arcs_shape[2])]):
    return tf.matrix_set_diag(arcs, roots)
    
    
def clean_output_paths(stripped_path):
  '''Ensures that the output path is cleaned and ready to receive a model.'''
  # If the export path's directory doesn't exist, create it.
  export_directory = os.path.dirname(stripped_path)
  if not tf.gfile.Exists(export_directory):
    tf.logging.info('%s does not exist; creating it.' % export_directory)
    tf.gfile.MakeDirs(export_directory)
    
          target = spec_pb2.TrainTarget()
      target.name = 'testTraining-all'
      train = builder.add_training_from_config(target)
      with self.test_session() as sess:
        logging.info('Initializing')
        sess.run(tf.global_variables_initializer())
    
    
@csrf_protect
def render_flatpage(request, f):
    '''
    Internal interface to the flat page view.
    '''
    # If registration is required for accessing this page, and the user isn't
    # logged in, redirect to the login page.
    if f.registration_required and not request.user.is_authenticated:
        from django.contrib.auth.views import redirect_to_login
        return redirect_to_login(request.path)
    if f.template_name:
        template = loader.select_template((f.template_name, DEFAULT_TEMPLATE))
    else:
        template = loader.get_template(DEFAULT_TEMPLATE)
    
        return None
    
        def test_repr(self):
        self.assertRegexpMatches(repr(PENDING_FUTURE),
                                 '<Future at 0x[0-9a-f]+ state=pending>')
        self.assertRegexpMatches(repr(RUNNING_FUTURE),
                                 '<Future at 0x[0-9a-f]+ state=running>')
        self.assertRegexpMatches(repr(CANCELLED_FUTURE),
                                 '<Future at 0x[0-9a-f]+ state=cancelled>')
        self.assertRegexpMatches(repr(CANCELLED_AND_NOTIFIED_FUTURE),
                                 '<Future at 0x[0-9a-f]+ state=cancelled>')
        self.assertRegexpMatches(
                repr(EXCEPTION_FUTURE),
                '<Future at 0x[0-9a-f]+ state=finished raised IOError>')
        self.assertRegexpMatches(
                repr(SUCCESSFUL_FUTURE),
                '<Future at 0x[0-9a-f]+ state=finished returned int>')
    
      parsed_args, nosetests_args = parser.parse_known_args()