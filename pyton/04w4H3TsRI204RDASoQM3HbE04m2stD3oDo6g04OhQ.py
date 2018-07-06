
        
            def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
def test_unicode_raw_json_item(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
        def __call__(self, r):
        '''
        Override username/password serialization to allow unicode.
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
class OmniCompletionRequest( CompletionRequest ):
  def __init__( self, omni_completer, request_data ):
    super( OmniCompletionRequest, self ).__init__( request_data )
    self._omni_completer = omni_completer
    
    
class FakeResponse( object ):
  '''A fake version of a requests response object, just about suitable for
  mocking a server response. Not usually used directly. See
  MockServerResponse* methods'''
  def __init__( self, response, exception ):
    self._json = response
    self._exception = exception
    self.status_code = requests.codes.ok
    self.text = not exception
    
        def setUp(self):
        self.dog = Dog()
        self.cat = Cat()
        self.human = Human()
        self.car = Car()
    
        @classmethod
    def setUpClass(self):
        '''
        - Create a temporary directory and file
        /test_command
           /foo.txt
        - get the temporary test directory
        - and initializes the command stack.
        '''
        os.mkdir('tests/test_command')
        open('tests/test_command/foo.txt', 'w').close()
        self.__get_test_directory()
        self.command_stack = []
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'foo.txt'), os.path.join(self.test_dir, 'bar.txt')))
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'bar.txt'), os.path.join(self.test_dir, 'baz.txt')))
    
        def test_items_recoil(self):
        with ObjectPool(self.sample_queue, True) as pool:
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
    
class TestRunnerFacilities(unittest.TestCase):
    
        def __init__(self, param):
        # simple test to validate param value
        if param in self._class_method_choices:
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
    print()