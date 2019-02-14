
        
          with open(embedding_file) as f_in:
    embeddings = np.load(f_in)
    
        # if fewer than batch_size provided, pad to batch_size
    hps = self.hps
    batch_size = hps.batch_size
    E, _, _ = data_bxtxd.shape
    if E < hps.batch_size:
      data_bxtxd = np.pad(data_bxtxd, ((0, hps.batch_size-E), (0, 0), (0, 0)),
                          mode='constant', constant_values=0)
      if ext_input_bxtxi is not None:
        ext_input_bxtxi = np.pad(ext_input_bxtxi,
                                 ((0, hps.batch_size-E), (0, 0), (0, 0)),
                                 mode='constant', constant_values=0)
    
    
def clean_data_dict(data_dict):
  '''Add some key/value pairs to the data dict, if they are missing.
  Args:
    data_dict - dictionary containing data for LFADS
  Returns:
    data_dict with some keys filled in, if they are absent.
  '''
    
      def __init__(self, filepattern, vocab):
    '''Initialize LM1BDataset reader.
    
        # Add 'lstm/lstm_0/control_dependency' if you want to dump previous layer
    # LSTM.
    lstm_emb = sess.run(t['lstm/lstm_1/control_dependency'],
                        feed_dict={t['char_inputs_in']: char_ids_inputs,
                                   t['inputs_in']: inputs,
                                   t['targets_in']: targets,
                                   t['target_weights_in']: weights})
    
      for var in variables:
    clipped_var = tf.clip_by_value(var, c_lower, c_upper)
    
      Returns:
    variable_mapping:  Dictionary with Key: ckpt_name, Value: model_varself.
  '''
  assert (FLAGS.generator_model == 'seq2seq_zaremba' or
          FLAGS.generator_model == 'seq2seq_vd')
  assert hparams.gen_num_layers == 2
    
      Returns:
    attention_keys: to be compared with target states.
    attention_values: to be used to construct context vectors.
    attention_score_fn: to compute similarity between key and target states.
    attention_construct_fn: to build attention states.
  '''
  # Prepare attention keys / values from attention_states
  with tf.variable_scope('attention_keys', reuse=reuse) as scope:
    attention_keys = tf.contrib.layers.linear(
        attention_states, num_units, biases_initializer=None, scope=scope)
  attention_values = attention_states
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
        if test_config is None:
        # load the instance config, if it exists, when not testing
        app.config.from_pyfile('config.py', silent=True)
    else:
        # load the test config if passed in
        app.config.update(test_config)
    
        # test that successful registration redirects to the login page
    response = client.post(
        '/auth/register', data={'username': 'a', 'password': 'a'}
    )
    assert 'http://localhost/auth/login' == response.headers['Location']
    
        def fake_init_db():
        Recorder.called = True
    
        def route(self, rule, **options):
        '''Like :meth:`Flask.route` but for a blueprint.  The endpoint for the
        :func:`url_for` function is prefixed with the name of the blueprint.
        '''
        def decorator(f):
            endpoint = options.pop('endpoint', f.__name__)
            self.add_url_rule(rule, endpoint, f, **options)
            return f
        return decorator
    
    
def _lookup_app_object(name):
    top = _app_ctx_stack.top
    if top is None:
        raise RuntimeError(_app_ctx_err_msg)
    return getattr(top, name)
    
                try:
                environ = builder.get_environ()
            finally:
                builder.close()
    
        @app.teardown_appcontext
    def cleanup(exception):
        cleanup_stuff.append(exception)
    
    
def get_setting_name_and_refid(node):
    '''Extract setting name from directive index node'''
    entry_type, info, refid = node['entries'][0][:3]
    return info.replace('; setting', ''), refid
    
            if infos:
            writeln(' (%s)' % (', '.join(infos),))
        else:
            write('\n')
    
    
class Command(ScrapyCommand):
    
        def syntax(self):
        return '[-v]'
    
            Same as Twisted's private _sslverify.ClientTLSOptions,
        except that VerificationError, CertificateError and ValueError
        exceptions are caught, so that the connection is not closed, only
        logging warnings.
        '''
    
        def schedule(self, request, spider):
        self.signals.send_catch_log(signal=signals.request_scheduled,
                request=request, spider=spider)
        if not self.slot.scheduler.enqueue_request(request):
            self.signals.send_catch_log(signal=signals.request_dropped,
                                        request=request, spider=spider)
    
    
class Cat(object):
    def speak(self):
        return 'meow'
    
    https://en.wikipedia.org/wiki/Lazy_evaluation
    
    
def main():
    dispatcher = PrototypeDispatcher()
    prototype = Prototype()
    
        def render(self):
        for graphic in self.graphics:
            graphic.render()
    
    
class TextTag(object):
    '''Represents a base text tag'''
    
        def test_shall_toggle_from_fm_to_am(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)

    
        return lines
    
        lang = None
    hostname = request.headers['Host']
    if hostname.endswith('.cheat.sh'):
        lang = hostname[:-9]
    
        def get_list(self):
        # return self._get_list()
        answer = [self.__section_name]
        for i in self._rosetta_code_name:
            answer.append('%s/%s/' % (i, self.__section_name))
        return answer