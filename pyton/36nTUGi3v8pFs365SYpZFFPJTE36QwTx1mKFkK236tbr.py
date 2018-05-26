
        
        class CancelledError(Error):
    '''The Future was cancelled.'''
    pass
    
        def submit(self, fn, *args, **kwargs):
        with self._shutdown_lock:
            if self._shutdown:
                raise RuntimeError('cannot schedule new futures after shutdown')
    
    
def KeywordsFromSyntaxListOutput_CppSyntax_test():
  expected_keywords = (
    'int_fast32_t', 'FILE', 'size_t', 'bitor', 'typedef', 'const', 'struct',
    'uint8_t', 'fpos_t', 'thread_local', 'unsigned', 'uint_least16_t', 'do',
    'intptr_t', 'uint_least64_t', 'return', 'auto', 'void', '_Complex',
    'break', '_Alignof', 'not', 'using', '_Static_assert', '_Thread_local',
    'public', 'uint_fast16_t', 'this', 'continue', 'char32_t', 'int16_t',
    'intmax_t', 'static', 'clock_t', 'sizeof', 'int_fast64_t', 'mbstate_t',
    'try', 'xor', 'uint_fast32_t', 'int_least8_t', 'div_t', 'volatile',
    'template', 'char16_t', 'new', 'ldiv_t', 'int_least16_t', 'va_list',
    'uint_least8_t', 'goto', 'noreturn', 'enum', 'static_assert', 'bitand',
    'compl', 'imaginary', 'jmp_buf', 'throw', 'asm', 'ptrdiff_t', 'uint16_t',
    'or', 'uint_fast8_t', '_Bool', 'int32_t', 'float', 'private', 'restrict',
    'wint_t', 'operator', 'not_eq', '_Imaginary', 'alignas', 'union', 'long',
    'uint_least32_t', 'int_least64_t', 'friend', 'uintptr_t', 'int8_t', 'else',
    'export', 'int_fast8_t', 'catch', 'true', 'case', 'default', 'double',
    '_Noreturn', 'signed', 'typename', 'while', 'protected', 'wchar_t',
    'wctrans_t', 'uint64_t', 'delete', 'and', 'register', 'false', 'int',
    'uintmax_t', 'off_t', 'char', 'int64_t', 'int_fast16_t', 'DIR', '_Atomic',
    'time_t', 'xor_eq', 'namespace', 'virtual', 'complex', 'bool', 'mutable',
    'if', 'int_least32_t', 'sig_atomic_t', 'and_eq', 'ssize_t', 'alignof',
    '_Alignas', '_Generic', 'extern', 'class', 'typeid', 'short', 'for',
    'uint_fast64_t', 'wctype_t', 'explicit', 'or_eq', 'switch', 'uint32_t',
    'inline' )
    
    
def OverlapLength_BasicWithUnicode_test():
  eq_( 3, base.OverlapLength( u'bar fäö', u'fäö bar' ) )
  eq_( 3, base.OverlapLength( u'zoofäö', u'fäözoo' ) )
    
    
  def tearDown( self ):
    self._request = None
    
    
class UnsupportedTransition(BaseException):
    pass
    
        class ClassRegistree(BaseRegisteredClass):
    
        def get_current_time_as_html_fragment(self, time_provider):
        current_time = time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def main_method(self):
        '''will execute either _static_method_1 or _static_method_2
    
        def __init__(self):
        self._tm = None
    
        def attach(self, observer):
        if observer not in self._observers:
            self._observers.append(observer)
    
        def and_specification(self, candidate):
        return AndSpecification(self, candidate)