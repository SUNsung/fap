
        
        EXTRA_ARGS = {
    'recode-video': ['--arguments', 'mp4 flv ogg webm mkv', '--exclusive'],
    }
    
    
if len(sys.argv) <= 1:
    print('Specify the version number as parameter')
    sys.exit()
version = sys.argv[1]
    
    import io
import optparse
    
        ies = sorted(youtube_dl.gen_extractors(), key=lambda i: i.IE_NAME.lower())
    out = '# Supported sites\n' + ''.join(
        ' - ' + md + '\n'
        for md in gen_ies_md(ies))
    
                        # Pandoc's definition_lists. See http://pandoc.org/README.html
                    # for more information.
                    ret += '\n%s\n:   %s\n' % (option, description)
                    continue
            ret += line.lstrip() + '\n'
        else:
            ret += line + '\n'
    
    
def format_size(bytes):
    return '%s (%d bytes)' % (format_bytes(bytes), bytes)
    
        with open(ZSH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    
      Returns:
    The word embeddings matrix
  '''
  embedding_file = os.path.join(word_embeddings_dir, word_embeddings_file)
  vocab_file = os.path.join(
      word_embeddings_dir, os.path.dirname(word_embeddings_file), 'vocab.txt')
    
      # Split the data, inputs, labels and times into train vs. validation.
  rates_train, rates_valid = \
      split_list_by_inds(rates, train_inds, valid_inds)
  noisy_data_train, noisy_data_valid = \
      split_list_by_inds(noisy_data, train_inds, valid_inds)
  input_train, inputs_valid = \
      split_list_by_inds(inputs, train_inds, valid_inds)
  condition_labels_train, condition_labels_valid = \
      split_list_by_inds(condition_labels, train_inds, valid_inds)
  input_times_train, input_times_valid = \
      split_list_by_inds(input_times, train_inds, valid_inds)
    
    
def add_alignment_projections(datasets, npcs, ntime=None, nsamples=None):
  '''Create a matrix that aligns the datasets a bit, under
  the assumption that each dataset is observing the same underlying dynamical
  system.
    
      Returns:
    In the equation, y = x W + b, returns the tensorflow op that yields y.
  '''
  in_size = int(x.get_shape()[1]) # from Dimension(10) -> 10
  stddev = alpha/np.sqrt(float(in_size))
  mat_init = tf.random_normal_initializer(0.0, stddev)
  wname = (name + '/W') if name else '/W'
    
      def __init__(self, filename, max_word_length):
    super(CharsVocabulary, self).__init__(filename)
    self._max_word_length = max_word_length
    chars_set = set()
    
      Returns:
    loss: Scalar tf.float32 total loss.
  '''
  cross_entropy_loss = tf.nn.sparse_softmax_cross_entropy_with_logits(
      labels=gen_labels, logits=gen_logits)
  gan_loss = -tf.log(dis_predictions)
  loss_matrix = tf.where(is_real_input, cross_entropy_loss, gan_loss)
  return tf.reduce_mean(loss_matrix)
    
      Returns:
    A decoder function with the required interface of `dynamic_rnn_decoder`
    intended for inference.
  '''
  with tf.name_scope(name, 'attention_decoder_fn_inference', [
      output_fn, encoder_state, attention_keys, attention_values,
      attention_score_fn, attention_construct_fn, embeddings,
      start_of_sequence_id, end_of_sequence_id, maximum_length,
      num_decoder_symbols, dtype
  ]):
    start_of_sequence_id = tf.convert_to_tensor(start_of_sequence_id, dtype)
    end_of_sequence_id = tf.convert_to_tensor(end_of_sequence_id, dtype)
    maximum_length = tf.convert_to_tensor(maximum_length, dtype)
    num_decoder_symbols = tf.convert_to_tensor(num_decoder_symbols, dtype)
    encoder_info = tf.contrib.framework.nest.flatten(encoder_state)[0]
    batch_size = encoder_info.get_shape()[0].value
    if output_fn is None:
      output_fn = lambda x: x
    if batch_size is None:
      batch_size = tf.shape(encoder_info)[0]
    
    # read in SQL for populating test data
with open(os.path.join(os.path.dirname(__file__), 'data.sql'), 'rb') as f:
    _data_sql = f.read().decode('utf8')
    
        #: Blueprint local JSON decoder class to use.
    #: Set to ``None`` to use the app's :class:`~flask.app.Flask.json_encoder`.
    json_encoder = None
    #: Blueprint local JSON decoder class to use.
    #: Set to ``None`` to use the app's :class:`~flask.app.Flask.json_decoder`.
    json_decoder = None
    
    
def _dump_loader_info(loader):
    yield 'class: %s.%s' % (type(loader).__module__, type(loader).__name__)
    for key, value in sorted(loader.__dict__.items()):
        if key.startswith('_'):
            continue
        if isinstance(value, (tuple, list)):
            if not all(isinstance(x, (str, text_type)) for x in value):
                continue
            yield '%s:' % key
            for item in value:
                yield '  - %s' % item
            continue
        elif not isinstance(value, (str, text_type, int, float, bool)):
            continue
        yield '%s: %r' % (key, value)
    
    
# context locals
_request_ctx_stack = LocalStack()
_app_ctx_stack = LocalStack()
current_app = LocalProxy(_find_app)
request = LocalProxy(partial(_lookup_req_object, 'request'))
session = LocalProxy(partial(_lookup_req_object, 'session'))
g = LocalProxy(partial(_lookup_app_object, 'g'))

    
        This function can return ``unicode`` strings or ascii-only bytestrings by
    default which coerce into unicode strings automatically.  That behavior by
    default is controlled by the ``JSON_AS_ASCII`` configuration variable
    and can be overridden by the simplejson ``ensure_ascii`` parameter.
    '''
    _dump_arg_defaults(kwargs)
    encoding = kwargs.pop('encoding', None)
    rv = _json.dumps(obj, **kwargs)
    if encoding is not None and isinstance(rv, text_type):
        rv = rv.encode(encoding)
    return rv
    
        def to_json(self, value):
        return http_date(value)
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    Commands:
   update - Retrieve new lists of packages
   upgrade - Perform an upgrade
   install - Install new packages (pkg is libc6 not libc6.deb)
   remove - Remove packages
   autoremove - Remove automatically all unused packages
   purge - Remove packages and config files
   source - Download source archives
   build-dep - Configure build-dependencies for source packages
   dist-upgrade - Distribution upgrade, see apt-get(8)
   dselect-upgrade - Follow dselect selections
   clean - Erase downloaded archive files
   autoclean - Erase old downloaded archive files
   check - Verify that there are no broken dependencies
   changelog - Download and display the changelog for the given package
   download - Download the binary package into the current directory
    
    
@pytest.mark.parametrize('command', [
    Command('cargo buid', no_such_subcommand_old),
    Command('cargo buils', no_such_subcommand)])
def test_match(command):
    assert match(command)
    
        def setUp(self):
        tmpdir = tempfile.TemporaryDirectory()
        self.argv0dir = tmpdir.name
        self.argv0 = os.path.join(tmpdir.name, 'nonexistent')
        self.addCleanup(tmpdir.cleanup)
        self.abs_curdir = abs_curdir = os.getcwd()
        self.curdir_spellings = ['', os.curdir, abs_curdir]
    
        def testCompressChunks10(self):
        bz2c = BZ2Compressor()
        n = 0
        data = b''
        while True:
            str = self.TEXT[n*10:(n+1)*10]
            if not str:
                break
            data += bz2c.compress(str)
            n += 1
        data += bz2c.flush()
        self.assertEqual(ext_decompress(data), self.TEXT)
    
    # Create the base text message.
msg = EmailMessage()
msg['Subject'] = 'Ayons asperges pour le déjeuner'
msg['From'] = Address('Pepé Le Pew', 'pepe', 'example.com')
msg['To'] = (Address('Penelope Pussycat', 'penelope', 'example.com'),
             Address('Fabrette Pussycat', 'fabrette', 'example.com'))
msg.set_content('''\
Salut!
    
    # register the generator function baz; use `GeneratorProxy` to make proxies
MyManager.register('baz', baz, proxytype=GeneratorProxy)
    
    while True:
    line = input()
    if line == '':
        break
    buffer += line
    if sqlite3.complete_statement(buffer):
        try:
            buffer = buffer.strip()
            cur.execute(buffer)
    
        parameter
    '''
    
        def rollback(self):
        for a_state in self.states:
            a_state()
    
        def subscribe(self, msg, subscriber):
        self.subscribers.setdefault(msg, []).append(subscriber)
    
    
class C(A, B):
    pass
    
    
# In some very complex cases, it might be desirable to pull out the building
# logic into another function (or a method on another class), rather than being
# in the base class '__init__'. (This leaves you in the strange situation where
# a concrete class does not have a useful constructor)
    
        def __init__(self):
        pass
    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
    *TL;DR80
Allows the interface of an existing class to be used as another interface.
'''
    
        def test_permanent_redirect(self):
        self.check_url('/redirect/hello?status=301', expected_status=301)
    
        def on_close(self):
        ChatSocketHandler.waiters.remove(self)
    
    from timeit import Timer
    
        def start_tree(self, tree, filename):
        self.found_future_import = False
    
                stack.append(item)
            stack_ids.add(item_id)
            inner(gc.get_referents(item))
            stack.pop()
            stack_ids.remove(item_id)
            visited_ids.add(item_id)
    
    
@gen.coroutine
def main():
    args = parse_command_line()