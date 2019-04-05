
        
            # cost summaries, separated into different collections for
    # training vs validation.  We make placeholders for these, because
    # even though the graph computes these costs on a per-batch basis,
    # we want to report the more reliable metric of per-epoch cost.
    kl_cost_ph = tf.placeholder(tf.float32, shape=[], name='kl_cost_ph')
    self.kl_t_cost_summ = tf.summary.scalar('KL cost (train)', kl_cost_ph,
                                            collections=['train_summaries'])
    self.kl_v_cost_summ = tf.summary.scalar('KL cost (valid)', kl_cost_ph,
                                            collections=['valid_summaries'])
    l2_cost_ph = tf.placeholder(tf.float32, shape=[], name='l2_cost_ph')
    self.l2_cost_summ = tf.summary.scalar('L2 cost', l2_cost_ph,
                                          collections=['train_summaries'])
    
      Args:
    tensor_bxtxn: The BxTxN numpy tensor.
    
      if epoch_size_override:
    epoch_size = epoch_size_override
  else:
    epoch_size = (batch_len - 1) // num_steps
    
      Returns:
    predictions:  tf.float32 Tensor of predictions of shape [batch_size,
      sequence_length]
  '''
  if FLAGS.discriminator_model == 'cnn':
    predictions = cnn.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'fnn':
    predictions = feedforward.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn':
    predictions = rnn.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'bidirectional':
    predictions = bidirectional.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'bidirectional_zaremba':
    predictions = bidirectional_zaremba.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'seq2seq_vd':
    predictions = seq2seq_vd.discriminator(
        hparams,
        inputs,
        present,
        sequence,
        is_training=is_training,
        reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_zaremba':
    predictions = rnn_zaremba.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_nas':
    predictions = rnn_nas.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_vd':
    predictions = rnn_vd.discriminator(
        hparams,
        sequence,
        is_training=is_training,
        reuse=reuse,
        initial_state=initial_state)
  elif FLAGS.discriminator_model == 'bidirectional_vd':
    predictions = bidirectional_vd.discriminator(
        hparams,
        sequence,
        is_training=is_training,
        reuse=reuse,
        initial_state=initial_state)
  else:
    raise NotImplementedError
  return predictions
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      # Dictionary mapping.
  if model == 'gen':
    variable_mapping = {
        'Model/embedding': embedding,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': lstm_w_0,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': lstm_b_0,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': lstm_w_1,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': lstm_b_1,
        'Model/softmax_w': softmax_w,
        'Model/softmax_b': softmax_b
    }
  else:
    if FLAGS.dis_share_embedding:
      variable_mapping = {
          'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': lstm_w_0,
          'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': lstm_b_0,
          'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': lstm_w_1,
          'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': lstm_b_1
      }
    else:
      variable_mapping = {
          'Model/embedding': embedding,
          'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': lstm_w_0,
          'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': lstm_b_0,
          'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': lstm_w_1,
          'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': lstm_b_1
      }
    
    '''Simple bidirectional model definitions.'''
    
        def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
        name = 'Basic HTTP auth'
    auth_type = 'basic'
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            BASIC_AUTH_HEADER_VALUE,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
        def test_request_body_from_file_by_path_with_explicit_content_type(
            self, httpbin):
        r = http('--verbose',
                 'POST', httpbin.url + '/post', '@' + FILE_PATH_ARG,
                 'Content-Type:text/plain; charset=utf8')
        assert HTTP_OK in r
        assert FILE_CONTENT in r
        assert 'Content-Type: text/plain; charset=utf8' in r
    
    
# This contains rename rules that are easy to handle.  We ignore the more
# complex stuff (e.g. mapping the names in the urllib and types modules).
# These rules should be run before import names are fixed.
NAME_MAPPING = {
    ('__builtin__', 'xrange'):     ('builtins', 'range'),
    ('__builtin__', 'reduce'):     ('functools', 'reduce'),
    ('__builtin__', 'intern'):     ('sys', 'intern'),
    ('__builtin__', 'unichr'):     ('builtins', 'chr'),
    ('__builtin__', 'unicode'):    ('builtins', 'str'),
    ('__builtin__', 'long'):       ('builtins', 'int'),
    ('itertools', 'izip'):         ('builtins', 'zip'),
    ('itertools', 'imap'):         ('builtins', 'map'),
    ('itertools', 'ifilter'):      ('builtins', 'filter'),
    ('itertools', 'ifilterfalse'): ('itertools', 'filterfalse'),
    ('itertools', 'izip_longest'): ('itertools', 'zip_longest'),
    ('UserDict', 'IterableUserDict'): ('collections', 'UserDict'),
    ('UserList', 'UserList'): ('collections', 'UserList'),
    ('UserString', 'UserString'): ('collections', 'UserString'),
    ('whichdb', 'whichdb'): ('dbm', 'whichdb'),
    ('_socket', 'fromfd'): ('socket', 'fromfd'),
    ('_multiprocessing', 'Connection'): ('multiprocessing.connection', 'Connection'),
    ('multiprocessing.process', 'Process'): ('multiprocessing.context', 'Process'),
    ('multiprocessing.forking', 'Popen'): ('multiprocessing.popen_fork', 'Popen'),
    ('urllib', 'ContentTooShortError'): ('urllib.error', 'ContentTooShortError'),
    ('urllib', 'getproxies'): ('urllib.request', 'getproxies'),
    ('urllib', 'pathname2url'): ('urllib.request', 'pathname2url'),
    ('urllib', 'quote_plus'): ('urllib.parse', 'quote_plus'),
    ('urllib', 'quote'): ('urllib.parse', 'quote'),
    ('urllib', 'unquote_plus'): ('urllib.parse', 'unquote_plus'),
    ('urllib', 'unquote'): ('urllib.parse', 'unquote'),
    ('urllib', 'url2pathname'): ('urllib.request', 'url2pathname'),
    ('urllib', 'urlcleanup'): ('urllib.request', 'urlcleanup'),
    ('urllib', 'urlencode'): ('urllib.parse', 'urlencode'),
    ('urllib', 'urlopen'): ('urllib.request', 'urlopen'),
    ('urllib', 'urlretrieve'): ('urllib.request', 'urlretrieve'),
    ('urllib2', 'HTTPError'): ('urllib.error', 'HTTPError'),
    ('urllib2', 'URLError'): ('urllib.error', 'URLError'),
}
    
        def test_distant_exception(self):
        def f():
            1/0
        def g():
            f()
        def h():
            g()
        def i():
            h()
        def j(p):
            i()
        f_ident = ident(f)
        g_ident = ident(g)
        h_ident = ident(h)
        i_ident = ident(i)
        j_ident = ident(j)
        self.check_events(j, [(1, 'call', j_ident),
                              (2, 'call', i_ident),
                              (3, 'call', h_ident),
                              (4, 'call', g_ident),
                              (5, 'call', f_ident),
                              (5, 'return', f_ident),
                              (4, 'return', g_ident),
                              (3, 'return', h_ident),
                              (2, 'return', i_ident),
                              (1, 'return', j_ident),
                              ])
    
        def test_stdin_readline(self):
        # Issue #11272: check that sys.stdin.readline() replaces '\r\n' by '\n'
        # on Windows (sys.stdin is opened in binary mode)
        self.check_input(
            'import sys; print(repr(sys.stdin.readline()))',
            b''abc\\n'')
    
    class BaseTest(unittest.TestCase):
    'Base for other testcases.'
    
    # In a real program you'd get the filename from the arguments.
with open('outgoing.msg', 'rb') as fp:
    msg = BytesParser(policy=policy.default).parse(fp)
    
        # Submit tasks
    for task in TASKS1:
        task_queue.put(task)
    
                if buffer.lstrip().upper().startswith('SELECT'):
                print(cur.fetchall())
        except sqlite3.Error as e:
            print('An error occurred:', e.args[0])
        buffer = ''
    
    from __future__ import print_function
import functools
    
    
print(graph1.find_path('A', 'D'))
print(graph1.find_all_path('A', 'D'))
print(graph1.find_shortest_path('A', 'D'))
    
    
if __name__ == '__main__':
    simple_hello = TextTag('hello, world!')
    special_hello = ItalicWrapper(BoldWrapper(simple_hello))
    print('before:', simple_hello.render())
    print('after:', special_hello.render())
    
        def dispatch_request(self, request):
        if isinstance(request, Request):
            self.dispatcher.dispatch(request)
        else:
            print('request must be a Request object')
    
        def show_items(self):
        items = list(self.model)
        item_type = self.model.item_type
        self.view.show_item_list(item_type, items)
    
        def test_innate_properties(self):
        self.assertDictEqual({'name': 'John', 'occupation': 'Coder', 'call_count2': 0}, self.John.__dict__)