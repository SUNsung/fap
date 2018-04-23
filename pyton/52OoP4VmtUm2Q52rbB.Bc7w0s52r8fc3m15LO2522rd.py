
        
            def iter_body(self, chunk_size):
        '''Return an iterator over the body.'''
        raise NotImplementedError()
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
            '''
        self.status.chunk_downloaded(len(chunk))
    
        '''
    
        # 128+2 SIGINT <http://www.tldp.org/LDP/abs/html/exitcodes.html>
    ERROR_CTRL_C = 130
    
            '''
        try:
            return super(AuthCredentialsArgType, self).__call__(string)
        except ArgumentTypeError:
            # No password provided, will prompt for it later.
            return self.key_value_class(
                key=string,
                value=None,
                sep=SEP_CREDENTIALS,
                orig=string
            )
    
    
def get_response(requests_session, session_name,
                 config_dir, args, read_only=False):
    '''Like `client.get_responses`, but applies permanent
    aspects of the session to the request.
    
    import tensorflow as tf
    
        Args:
      initial_dictionary: Optional dictionary or ConfigDict containing initial
        parameters.
    '''
    if initial_dictionary:
      for field, value in initial_dictionary.items():
        initial_dictionary[field] = _maybe_convert_dict(value)
    super(ConfigDict, self).__init__(initial_dictionary)
    
      Args:
    estimator: Instance of tf.Estimator.
    train_input_fn: Input function returning a tuple (features, labels).
    eval_input_fn: Input function returning a tuple (features, labels).
    local_eval_frequency: The number of training steps between evaluations. If
        None, trains until train_input_fn raises an end-of-input exception.
    train_hooks: List of SessionRunHook subclass instances. Used for callbacks
        inside the training call.
    train_steps: The total number of steps to train the model for.
    eval_steps: The number of steps for which to evaluate the model. If None,
        evaluates until eval_input_fn raises an end-of-input exception.
    eval_name: Name of the evaluation set, e.g. 'train' or 'val'.
    
      tarfile.open(filepath, 'r:gz').extractall(FLAGS.data_dir)
    
        Returns: the prediction object to be computed in a Session
    '''
    # Feed the paths to the MLP: path_embeddings is
    # [num_batch_paths, output_dim], and when we multiply it by W
    # ([output_dim, num_classes]), we get a matrix of class distributions:
    # [num_batch_paths, num_classes].
    self.distributions = tf.matmul(self.path_embeddings, self.weights1)
    
            (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
        def _park_starting_at_spot(self, spot, vehicle):
        '''Occupy starting at spot.spot_number to vehicle.spot_size.'''
        pass
    
    
class Hand(object):
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
    
class Person(object):
    
    
if __name__ == '__main__':
    import unittest
    unittest.main('idlelib.idle_test.test_query', verbosity=2, exit=False)
    
        def check_keys_reuse(self, source, loads):
        rval = loads(source)
        (a, b), (c, d) = sorted(rval[0]), sorted(rval[1])
        self.assertIs(a, c)
        self.assertIs(b, d)
    
    
print('\n# ======================================================================')
print('#                               Factorial')
print('# ======================================================================\n')
    
    The interface is file-like.  The implemented methods are:
read, close, seek, tell, isatty.
Extra methods are: skip() (called by close, skips to the end of the chunk),
getname() (returns the name (ID) of the chunk)
    
    def test():
    for i in range(256):
        c = chr(i)
        s = repr(c)
        e = evalString(s)
        if e != c:
            print(i, c, s, e)
    
        def test_2(self):
        class X(Structure):
            pass
        X()
        self.assertRaises(AttributeError, setattr, X, '_fields_', [])
    
    class _Waiter(object):
    '''Provides the event that wait() and as_completed() block on.'''
    def __init__(self):
        self.event = threading.Event()
        self.finished_futures = []
    
        >>> Point = namedtuple('Point', 'x y')
    >>> Point.__doc__                   # docstring for the new class
    'Point(x, y)'
    >>> p = Point(11, y=22)             # instantiate with positional args or keywords
    >>> p[0] + p[1]                     # indexable like a plain tuple
    33
    >>> x, y = p                        # unpack like a regular tuple
    >>> x, y
    (11, 22)
    >>> p.x + p.y                       # fields also accessable by name
    33
    >>> d = p._asdict()                 # convert to a dictionary
    >>> d['x']
    11
    >>> Point(**d)                      # convert from a dictionary
    Point(x=11, y=22)
    >>> p._replace(x=100)               # _replace() is like str.replace() but targets named fields
    Point(x=100, y=22)
    
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
    
      CheckCall( [ sys.executable, build_file ] + sys.argv[ 1: ] )
    
    from ycm.tests.test_utils import MockVimModule
vim_mock = MockVimModule()
from ycm import base
    
        elif isinstance( candidate, str ) or isinstance( candidate, bytes ):
      new_candidates.append(
        { 'abbr': candidate,
          'word': NewCandidateInsertionText( candidate, text_after_cursor ) } )
  return new_candidates
    
    
def RawResponse_ConvertedFromOmniCompleter_test():
  vim_results = [
    { 'word': 'WORD', 'abbr': 'ABBR', 'menu': 'MENU',
      'kind': 'KIND', 'info': 'INFO' },
    { 'word': 'WORD2', 'abbr': 'ABBR2', 'menu': 'MENU2',
      'kind': 'KIND2', 'info': 'INFO' },
    { 'word': 'WORD', 'abbr': 'ABBR',  },
    {  },
  ]
  expected_results = [
    has_entries( { 'insertion_text': 'WORD', 'menu_text': 'ABBR',
                   'extra_menu_info': 'MENU', 'kind': [ 'KIND' ],
                   'detailed_info': 'INFO' } ),
    has_entries( { 'insertion_text': 'WORD2', 'menu_text': 'ABBR2',
                   'extra_menu_info': 'MENU2', 'kind': [ 'KIND2' ],
                   'detailed_info': 'INFO' } ),
    has_entries( { 'insertion_text': 'WORD', 'menu_text': 'ABBR',  } ),
    has_entries( {  } ),
  ]
  request = BuildOmnicompletionRequest( vim_results )
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 2)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 100)
    
        @classmethod
    def __get_test_directory(self):
        '''
        Get the temporary directory for the tests.
        '''
        self.test_dir = os.path.join(os.path.dirname(
            os.path.realpath(__file__)), 'test_command')
    
    
class Subscriber:
    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
        def test_tc1_output(self):
        self.tc1.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc1)
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)