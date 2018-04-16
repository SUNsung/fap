
        
                def get_auth(self, username=None, password=None):
            assert self.raw_auth == USERNAME + SEP_CREDENTIALS + PASSWORD
            assert username == USERNAME
            assert password == PASSWORD
            return basic_auth()
    
    
def get_stream_type(env, args):
    '''Pick the right stream type based on `env` and `args`.
    Wrap it in a partial with the type-specific args so that
    we don't need to think what stream we are dealing with.
    
    
@mock.patch('httpie.core.get_response')
def test_timeout(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
    '''
import sys
import errno
import platform
    
            if self._output_file:
            if self._resume and response.status_code == PARTIAL_CONTENT:
                total_size = parse_content_range(
                    response.headers.get('Content-Range'),
                    self._resumed_from
                )
    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
        @cookies.setter
    def cookies(self, jar):
        '''
        :type jar: CookieJar
        '''
        # http://docs.python.org/2/library/cookielib.html#cookie-objects
        stored_attrs = ['value', 'path', 'secure', 'expires']
        self['cookies'] = {}
        for cookie in jar:
            self['cookies'][cookie.name] = {
                attname: getattr(cookie, attname)
                for attname in stored_attrs
            }
    
        def slow_format(self, x, base):
        digits = []
        sign = 0
        if x < 0:
            sign, x = 1, -x
        while x:
            x, r = divmod(x, base)
            digits.append(int(r))
        digits.reverse()
        digits = digits or [0]
        return '-'[:sign] + \
               {2: '0b', 8: '0o', 10: '', 16: '0x'}[base] + \
               ''.join('0123456789abcdef'[i] for i in digits)
    
            self = cls(transitions, type_indices, ttis, abbrs)
        self.tzh = tzh
    
        def aliases_of(self, red, green, blue):
        try:
            name, aliases = self.__byrgb[(red, green, blue)]
        except KeyError:
            raise BadColor((red, green, blue)) from None
        return [name] + aliases
    
        def test_oldargs0_1(self):
        msg = r'keys\(\) takes no arguments \(1 given\)'
        self.assertRaisesRegex(TypeError, msg, {}.keys, 0)
    
        def check_div(self, x, y):
        '''Compute complex z=x*y, and check that z/x==y and z/y==x.'''
        z = x * y
        if x != 0:
            q = z / x
            self.assertClose(q, y)
            q = z.__truediv__(x)
            self.assertClose(q, y)
        if y != 0:
            q = z / y
            self.assertClose(q, x)
            q = z.__truediv__(y)
            self.assertClose(q, x)
    
            # Check that the range.__contains__ optimization is only
        # used for ints, not for instances of subclasses of int.
        class C3(int):
            def __eq__(self, other): return True
        self.assertIn(C3(11), range(10))
        self.assertIn(C3(11), list(range(10)))
    
            self.result = []
    
    # Can't import these from paths.py because that uses `future` imports
DIR_OF_CURRENT_SCRIPT = os.path.dirname( os.path.abspath( __file__ ) )
DIR_OF_YCMD = os.path.join( DIR_OF_CURRENT_SCRIPT, '..', '..', 'third_party',
                            'ycmd' )
    
        Raises:
        TimeoutError: If the entire result iterator could not be generated
            before the given timeout.
    '''
    if timeout is not None:
        end_time = timeout + time.time()
    
    # Workers are created as daemon threads and processes. This is done to allow the
# interpreter to exit when there are still idle processes in a
# ProcessPoolExecutor's process pool (i.e. shutdown() was not called). However,
# allowing workers to die with the interpreter has two undesirable properties:
#   - The workers would still be running during interpretor shutdown,
#     meaning that they would fail in unpredictable ways.
#   - The workers could be killed while evaluating a work item, which could
#     be bad if the callable being evaluated has external side-effects e.g.
#     writing to a file.
#
# To work around this problem, an exit handler is installed which tells the
# workers to exit when their work queues are empty and then waits until the
# threads/processes finish.
    
    # For 'manual' documents, if this is true, then toplevel headings are parts,
# not chapters.
#latex_use_parts = False
    
    def is_prime(n):
    if n % 2 == 0:
        return False
    
    
def ExtractKeywordsFromGroup_Basic_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )