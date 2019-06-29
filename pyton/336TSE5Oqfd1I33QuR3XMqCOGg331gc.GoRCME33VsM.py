
        
            def test_send_blank(self):
        self.con._http_vsn_str = ''
        self.con.putrequest('', '')
        self.con.endheaders()
        res = self.con.getresponse()
        self.assertEqual(res.status, HTTPStatus.BAD_REQUEST)
    
                    if set_implicit_top:
                    if not is_namespace:
                        self._top_level_dir = \
                           self._get_directory_containing_module(top_part)
                        sys.path.remove(top_level_dir)
                    else:
                        sys.path.remove(top_level_dir)
    
    PYTHON2_EXCEPTIONS = (
    'ArithmeticError',
    'AssertionError',
    'AttributeError',
    'BaseException',
    'BufferError',
    'BytesWarning',
    'DeprecationWarning',
    'EOFError',
    'EnvironmentError',
    'Exception',
    'FloatingPointError',
    'FutureWarning',
    'GeneratorExit',
    'IOError',
    'ImportError',
    'ImportWarning',
    'IndentationError',
    'IndexError',
    'KeyError',
    'KeyboardInterrupt',
    'LookupError',
    'MemoryError',
    'NameError',
    'NotImplementedError',
    'OSError',
    'OverflowError',
    'PendingDeprecationWarning',
    'ReferenceError',
    'RuntimeError',
    'RuntimeWarning',
    # StandardError is gone in Python 3, so we map it to Exception
    'StopIteration',
    'SyntaxError',
    'SyntaxWarning',
    'SystemError',
    'SystemExit',
    'TabError',
    'TargetScopeError',
    'TypeError',
    'UnboundLocalError',
    'UnicodeDecodeError',
    'UnicodeEncodeError',
    'UnicodeError',
    'UnicodeTranslateError',
    'UnicodeWarning',
    'UserWarning',
    'ValueError',
    'Warning',
    'ZeroDivisionError',
)
    
    from email.message import EmailMessage
from email.headerregistry import Address
from email.utils import make_msgid
    
    from email.message import EmailMessage
from email.policy import SMTP
    
    DB_FILE = 'mydb'
    
            print('Test: Pop general case')
        assert_equal(stacks.pop(), 5)
        assert_equal(stacks.pop(), 3)
    
    
if __name__ == '__main__':
    main()