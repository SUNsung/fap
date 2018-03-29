
        
          def __len__(self):
    return len(self._timesteps)
    
          for i in range(3):
        key, label, uint8image = sess.run([
            result.key, result.label, result.uint8image])
        self.assertEqual('%s:%d' % (filename, i), tf.compat.as_text(key))
        self.assertEqual(labels[i], label)
        self.assertAllEqual(expected[i], uint8image)
    
        # Compute predictions.
    predicted_classes = tf.argmax(logits, 1)
    if mode == tf.estimator.ModeKeys.PREDICT:
        predictions = {
            'class_ids': predicted_classes[:, tf.newaxis],
            'probabilities': tf.nn.softmax(logits),
            'logits': logits,
        }
        return tf.estimator.EstimatorSpec(mode, predictions=predictions)
    
      @tf.test.mock.patch.dict(premade_estimator.__dict__,
                           {'load_data': four_lines_data})
  def test_premade_estimator(self):
    premade_estimator.main([None, '--train_steps=1'])
    
      for filename, class_label in data_files:
    with open(filename) as rt_f:
      for content in rt_f:
        if class_label is None:
          # Process Amazon Review data for unlabeled dataset
          if content.startswith('review/text'):
            yield Document(
                content=content,
                is_validation=False,
                is_test=False,
                label=None,
                add_tokens=False)
        else:
          # 10% of the data is randomly held out for the validation set and
          # another 10% of it is randomly held out for the test set
          random_int = random.randint(1, 10)
          is_validation = random_int == 1
          is_test = random_int == 2
          if (is_test and dataset != 'test') or (is_validation and
                                                 not include_validation):
            continue
    
    data = data_utils
flags = tf.app.flags
FLAGS = flags.FLAGS
    
    
def _build_random_vocabulary(vocab_size=100):
  '''Builds and returns a dict<term, id>.'''
  vocab = set()
  while len(vocab) < (vocab_size - 1):
    rand_word = ''.join(
        random.choice(string.ascii_lowercase)
        for _ in range(random.randint(1, 10)))
    vocab.add(rand_word)
    
        if bidir and pretrain:
      # Bidirectional pretraining
      # Requires separate forward and reverse language model data.
      forward_fname, reverse_fname = filenames
      forward_batch = _read_and_batch(data_dir, forward_fname, state_name,
                                      state_size, num_layers, unroll_steps,
                                      batch_size)
      state_name_rev = state_name + '_reverse'
      reverse_batch = _read_and_batch(data_dir, reverse_fname, state_name_rev,
                                      state_size, num_layers, unroll_steps,
                                      batch_size)
      forward_input = VatxtInput(
          forward_batch,
          state_name=state_name,
          num_states=num_layers,
          eos_id=eos_id)
      reverse_input = VatxtInput(
          reverse_batch,
          state_name=state_name_rev,
          num_states=num_layers,
          eos_id=eos_id)
      return forward_input, reverse_input
    
    
def create_graph():
  '''Creates a graph from saved GraphDef file and returns a saver.'''
  # Creates graph from saved graph_def.pb.
  with tf.gfile.FastGFile(os.path.join(
      FLAGS.model_dir, 'classify_image_graph_def.pb'), 'rb') as f:
    graph_def = tf.GraphDef()
    graph_def.ParseFromString(f.read())
    _ = tf.import_graph_def(graph_def, name='')
    
        # not a test, but looks like a test
    'scrapy/utils/testsite.py',
    
            parser.add_option_group(group)
    
        def __enter__(self):
        from scrapy.utils.test import get_testenv
        pargs = [sys.executable, '-u', '-m', 'scrapy.utils.benchserver']
        self.proc = subprocess.Popen(pargs, stdout=subprocess.PIPE,
                                     env=get_testenv())
        self.proc.stdout.readline()
    
        def _genspider(self, module, name, domain, template_name, template_file):
        '''Generate the spider module, based on the given template'''
        tvars = {
            'project_name': self.settings.get('BOT_NAME'),
            'ProjectName': string_camelcase(self.settings.get('BOT_NAME')),
            'module': module,
            'name': name,
            'domain': domain,
            'classname': '%sSpider' % ''.join(s.capitalize() \
                for s in module.split('_'))
        }
        if self.settings.get('NEWSPIDER_MODULE'):
            spiders_module = import_module(self.settings['NEWSPIDER_MODULE'])
            spiders_dir = abspath(dirname(spiders_module.__file__))
        else:
            spiders_module = None
            spiders_dir = '.'
        spider_file = '%s.py' % join(spiders_dir, module)
        shutil.copyfile(template_file, spider_file)
        render_templatefile(spider_file, **tvars)
        print('Created spider %r using template %r ' % (name, \
            template_name), end=('' if spiders_module else '\n'))
        if spiders_module:
            print('in module:\n  %s.%s' % (spiders_module.__name__, module))
    
        def test_create_other_buttons(self):
        for state in (False, True):
            var = self.engine.backvar
            var.set(state)
            frame, others = self.btn_test_setup(
                self.dialog.create_other_buttons)
            buttons = frame.pack_slaves()
            for spec, button in zip(others, buttons):
                val, label = spec
                self.assertEqual(button['text'], label)
                if val == state:
                    # hit other button, then this one
                    # indexes depend on button order
                    self.assertEqual(var.get(), state)
    
        def create_widgets(self):  # Call from override, if any.
        # Bind to self widgets needed for entry_ok or unittest.
        self.frame = frame = Frame(self, padding=10)
        frame.grid(column=0, row=0, sticky='news')
        frame.grid_columnconfigure(0, weight=1)
    
            if nextchar == ''':
            return parse_string(string, idx + 1, strict)
        elif nextchar == '{':
            return parse_object((string, idx + 1), strict,
                _scan_once, object_hook, object_pairs_hook, memo)
        elif nextchar == '[':
            return parse_array((string, idx + 1), _scan_once)
        elif nextchar == 'n' and string[idx:idx + 4] == 'null':
            return None, idx + 4
        elif nextchar == 't' and string[idx:idx + 4] == 'true':
            return True, idx + 4
        elif nextchar == 'f' and string[idx:idx + 5] == 'false':
            return False, idx + 5
    }
    
    def escape(m):
    all, tail = m.group(0, 1)
    assert all.startswith('\\')
    esc = simple_escapes.get(tail)
    if esc is not None:
        return esc
    if tail.startswith('x'):
        hexes = tail[1:]
        if len(hexes) < 2:
            raise ValueError('invalid hex string escape ('\\%s')' % tail)
        try:
            i = int(hexes, 16)
        except ValueError:
            raise ValueError('invalid hex string escape ('\\%s')' % tail) from None
    else:
        try:
            i = int(tail, 8)
        except ValueError:
            raise ValueError('invalid octal string escape ('\\%s')' % tail) from None
    return chr(i)
    
        def _post_message_hook(self, f):
        '''Called after writing each message to file f.'''
        f.write(linesep + b'\037')
    
        def aliases_of(self, red, green, blue):
        try:
            name, aliases = self.__byrgb[(red, green, blue)]
        except KeyError:
            raise BadColor((red, green, blue)) from None
        return [name] + aliases
    
        def _dispatch(self, method, params):
        '''Dispatches the XML-RPC method.
    
            self.assertEqual(len(range(sys.maxsize, sys.maxsize+10)), 10)
    
            with self.assertRaisesRegex(TypeError, 'not writable'):
            (c_char * 16).from_buffer(b'a' * 16)
        with self.assertRaisesRegex(TypeError, 'not writable'):
            (c_char * 16).from_buffer(memoryview(b'a' * 16))
        with self.assertRaisesRegex(TypeError, 'not C contiguous'):
            (c_char * 16).from_buffer(memoryview(bytearray(b'a' * 16))[::-1])
        msg = 'bytes-like object is required'
        with self.assertRaisesRegex(TypeError, msg):
            (c_char * 16).from_buffer('a' * 16)
    
      from ycmd import server_utils as su
  su.AddNearestThirdPartyFoldersToSysPath( DIR_OF_CURRENT_SCRIPT )
  # We need to import ycmd's third_party folders as well since we import and
  # use ycmd code in the client.
  su.AddNearestThirdPartyFoldersToSysPath( su.__file__ )
    
        Args:
        call_queue: A multiprocessing.Queue of _CallItems that will be read and
            evaluated by the worker.
        result_queue: A multiprocessing.Queue of _ResultItems that will written
            to by the worker.
        shutdown: A multiprocessing.Event that will be set as a signal to the
            worker that it should exit when call_queue is empty.
    '''
    while True:
        call_item = call_queue.get(block=True)
        if call_item is None:
            # Wake up queue management thread
            result_queue.put(None)
            return
        try:
            r = call_item.fn(*call_item.args, **call_item.kwargs)
        except BaseException:
            e = sys.exc_info()[1]
            result_queue.put(_ResultItem(call_item.work_id,
                                         exception=e))
        else:
            result_queue.put(_ResultItem(call_item.work_id,
                                         result=r))
    
        def submit(self, fn, *args, **kwargs):
        with self._shutdown_lock:
            if self._shutdown:
                raise RuntimeError('cannot schedule new futures after shutdown')
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  def Start( self ):
    request_data = BuildRequestData()
    if self._extra_data:
      request_data.update( self._extra_data )
    with HandleServerException( display = False ):
      self._response = self.PostDataToHandler( request_data, 'debug_info' )
    
    from ycm.client.base_request import BaseRequest, HandleServerException
    
    
def FormatDebugInfoResponse_NoResponse_test():
  assert_that(
    FormatDebugInfoResponse( None ),
    equal_to( 'Server errored, no debug info from server\n' )
  )
    
    
def MergeMultipleFiletypes_test():
    
    
class MainHandler(tornado.web.RequestHandler):
    def get(self):
        self.write('Hello, world')
    
        @gen_test
    def test_join_timeout(self):
        q = self.queue_class()
        q.put(0)
        with self.assertRaises(TimeoutError):
            yield q.join(timeout=timedelta(seconds=0.01))
    
        .. versionchanged:: 5.0
       The ``io_loop`` argument (deprecated since version 4.1) has been removed.
    '''
    def initialize(self):
        self.io_loop = IOLoop.current()
        self.channel = pycares.Channel(sock_state_cb=self._sock_state_cb)
        self.fds = {}
    
    
def try_close(f):
    # Avoid issue #875 (race condition when using the file in another
    # thread).
    for i in range(10):
        try:
            f.close()
        except IOError:
            # Yield to another thread
            time.sleep(1e-3)
        else:
            break
    # Try a last time and let raise
    f.close()
    
    
def handle_sigchld(sig, frame):
    IOLoop.current().add_callback_from_signal(IOLoop.current().stop)
    
    
class FixFutureImports(fixer_base.BaseFix):
    BM_compatible = True