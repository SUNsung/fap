
        
        
def hex_str(int_list):
    return codecs.encode(intlist_to_bytes(int_list), 'hex')
    
    with open('update/LATEST_VERSION', 'w') as f:
    f.write(version)
    
    
# find the correct sorting and add the required base classes so that sublcasses
# can be correctly created
classes = _ALL_CLASSES[:-1]
ordered_cls = []
while classes:
    for c in classes[:]:
        bases = set(c.__bases__) - set((object, InfoExtractor, SearchInfoExtractor))
        stop = False
        for b in bases:
            if b not in classes and b not in ordered_cls:
                if b.__name__ == 'GenericIE':
                    exit()
                classes.insert(0, b)
                stop = True
        if stop:
            break
        if all(b in ordered_cls for b in bases):
            ordered_cls.append(c)
            classes.remove(c)
            break
ordered_cls.append(_ALL_CLASSES[-1])
    
    import youtube_dl.YoutubeDL
from youtube_dl.compat import (
    compat_http_client,
    compat_urllib_error,
    compat_HTTPError,
)
from youtube_dl.utils import (
    DownloadError,
    ExtractorError,
    format_bytes,
    UnavailableVideoError,
)
from youtube_dl.extractor import get_info_extractor
    
    rootDir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    
            If `sign` is incorrect, /validate call throws an HTTP 556 error
        '''
        logger = WarningLogger()
        ie = IqiyiIEWithCredentials(FakeYDL({'logger': logger}))
        ie._login()
        self.assertTrue('unable to log in:' in logger.messages[0])
    
        def test_assignments(self):
        jsi = JSInterpreter('function f(){var x = 20; x = 30 + 1; return x;}')
        self.assertEqual(jsi.call_function('f'), 31)
    
    
class TestUnicodeLiterals(unittest.TestCase):
    def test_all_files(self):
        for dirpath, dirnames, filenames in os.walk(rootDir):
            for ignore_dir in IGNORED_DIRS:
                if ignore_dir in dirnames:
                    # If we remove the directory from dirnames os.walk won't
                    # recurse into it
                    dirnames.remove(ignore_dir)
            for basename in filenames:
                if not basename.endswith('.py'):
                    continue
                if basename in IGNORED_FILES:
                    continue
    
      # We don't want the requests to actually be sent to the server, just have it
  # return success.
  with patch( 'ycm.client.completer_available_request.'
              'CompleterAvailableRequest.PostDataToHandler',
              return_value = True ):
    with patch( 'ycm.client.completion_request.CompletionRequest.'
                'PostDataToHandlerAsync',
                return_value = MagicMock( return_value=True ) ):
    
    
def KeywordsFromSyntaxListOutput_MultipleStatementGroups_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             links to Statement
bargroup xxx zoo goo
             links to Statement''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
        Args:
        max_workers: The maximum number of threads that can be used to
            execute the given calls.
    '''
    self._max_workers = max_workers
    self._work_queue = queue.Queue()
    self._threads = set()
    self._shutdown = False
    self._shutdown_lock = threading.Lock()
    
        def _start_queue_management_thread(self):
        # When the executor gets lost, the weakref callback will wake up
        # the queue management thread.
        def weakref_cb(_, q=self._result_queue):
            q.put(None)
        if self._queue_management_thread is None:
            self._queue_management_thread = threading.Thread(
                    target=_queue_management_worker,
                    args=(weakref.ref(self, weakref_cb),
                          self._processes,
                          self._pending_work_items,
                          self._work_ids,
                          self._call_queue,
                          self._result_queue))
            self._queue_management_thread.daemon = True
            self._queue_management_thread.start()
            _threads_queues[self._queue_management_thread] = self._result_queue
    
    URLS = ['http://www.google.com/',
        'http://www.apple.com/',
        'http://www.ibm.com',
        'http://www.thisurlprobablydoesnotexist.com',
        'http://www.slashdot.org/',
        'http://www.python.org/',
        'http://www.bing.com/',
        'http://www.facebook.com/',
        'http://www.yahoo.com/',
        'http://www.youtube.com/',
        'http://www.blogger.com/']
    
    PRIMES = [
    112272535095293,
    112582705942171,
    112272535095293,
    115280095190773,
    115797848077099,
    117450548693743,
    993960000099397]
    
        def test_set_of_stacks(self):
        print('Test: Push on an empty stack')
        stacks = SetOfStacks(indiv_stack_capacity=2)
        stacks.push(3)
    
            print('Test: remove on a key that already exists')
        hash_table.remove(10)
        assert_equal(hash_table.get(0), 'foo')
        assert_raises(KeyError, hash_table.get, 10)
    
          # `sloppy` mode means that the interleaving is not exact. This adds
      # even more randomness to the training pipeline.
      d = d.apply(
          tf.contrib.data.parallel_interleave(
              tf.data.TFRecordDataset,
              sloppy=is_training,
              cycle_length=cycle_length))
      d = d.shuffle(buffer_size=100)
    else:
      d = tf.data.TFRecordDataset(input_files)
      # Since we evaluate for a fixed number of steps we don't want to encounter
      # out-of-range exceptions.
      d = d.repeat()
    
        input_ids = features['input_ids']
    input_mask = features['input_mask']
    segment_ids = features['segment_ids']
    label_ids = features['label_ids']
    is_real_example = None
    if 'is_real_example' in features:
      is_real_example = tf.cast(features['is_real_example'], dtype=tf.float32)
    else:
      is_real_example = tf.ones(tf.shape(label_ids), dtype=tf.float32)
    
              if FLAGS.version_2_with_negative:
            is_impossible = qa['is_impossible']
          if (len(qa['answers']) != 1) and (not is_impossible):
            raise ValueError(
                'For training, each question should have exactly 1 answer.')
          if not is_impossible:
            answer = qa['answers'][0]
            orig_answer_text = answer['text']
            answer_offset = answer['answer_start']
            answer_length = len(orig_answer_text)
            start_position = char_to_word_offset[answer_offset]
            end_position = char_to_word_offset[answer_offset + answer_length -
                                               1]
            # Only add answers where the text can be exactly recovered from the
            # document. If this CAN'T happen it's likely due to weird Unicode
            # stuff so we will just skip the example.
            #
            # Note that this means for training mode, every example is NOT
            # guaranteed to be preserved.
            actual_text = ' '.join(
                doc_tokens[start_position:(end_position + 1)])
            cleaned_answer_text = ' '.join(
                tokenization.whitespace_tokenize(orig_answer_text))
            if actual_text.find(cleaned_answer_text) == -1:
              tf.logging.warning('Could not find answer: '%s' vs. '%s'',
                                 actual_text, cleaned_answer_text)
              continue
          else:
            start_position = -1
            end_position = -1
            orig_answer_text = ''
    
    flags = tf.flags
    
        def backward(self, output):
        return 1 if output > 0 else 0
    
    2、ConstNode 类，偏置项类的实现：实现一个输出恒为 1 的节点（计算偏置项的时候会用到），如下：
layer_index --- 节点所属层的编号
node_index ---- 节点的编号
downstream ---- 下游节点
没有记录上游节点，因为一个偏置项的输出与上游节点的输出无关
output    ----- 偏置项的输出
    
        def reduce(self, _, packedVals):
        for valArr in packedVals:            # 从流输入获取值
            if valArr[0] == 'u':
                self.dataList.append(valArr[1])
            elif valArr[0] == 'w':
                self.w = valArr[1]
            elif valArr[0] == 't':
                self.t = valArr[1]
    
        def __init__(self, *args, **kwargs):
        super(MRWordCountUtility, self).__init__(*args, **kwargs)
        self.chars = 0
        self.words = 0
        self.lines = 0
    
    
def _caesar_shift_char(n=0, char=' '):
  if not char.isalpha():
    return char
  if char.isupper():
    return chr((ord(char) - ord('A') + n) % 26 + ord('A'))
  return chr((ord(char) - ord('a') + n) % 26 + ord('a'))
    
      def testCipher(self):
    self.assertEqual(cipher.rot13('Hello world!'), 'Uryyb jbeyq!')
    self.assertEqual(cipher.caesar_encode(13, 'Hello world!'), 'Uryyb jbeyq!')
    self.assertEqual(cipher.caesar_decode(13, 'Uryyb jbeyq!'), 'Hello world!')
    
    from fire import testutils
    
    
def main():
  fire.Fire(Collector(), name='collector')
    
      def testSetParseFnsDefaultsFromPython(self):
    # When called from Python, function should behave normally.
    self.assertTupleEqual(WithDefaults().example1(), (10, int))
    self.assertEqual(WithDefaults().example1(5), (5, int))
    self.assertEqual(WithDefaults().example1(12.0), (12, float))
    
    
class FireImportTest(testutils.BaseTestCase):
  '''Tests importing Fire.'''
    
        with six.assertRaisesRegex(self, AssertionError, 'stderr:'):
      with self.assertOutputMatches(stdout='apple', stderr=None):
        print('apple')
        print('blah', file=sys.stderr)
    
    '''Tests for the trace module.'''
    
        Allows tests to check that Fire's wrapper around SystemExit is raised
    and that a regexp is matched in the output.
    
    
def CreateParser():
  parser = argparse.ArgumentParser(add_help=False)
  parser.add_argument('--verbose', '-v', action='store_true')
  parser.add_argument('--interactive', '-i', action='store_true')
  parser.add_argument('--separator', default='-')
  parser.add_argument('--completion', nargs='?', const='bash', type=str)
  parser.add_argument('--help', '-h', action='store_true')
  parser.add_argument('--trace', '-t', action='store_true')
  # TODO(dbieber): Consider allowing name to be passed as an argument.
  return parser