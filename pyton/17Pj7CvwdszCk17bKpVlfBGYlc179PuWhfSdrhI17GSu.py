
        
        try:
    import queue
except ImportError:
    import Queue as queue
    
        # Create and fill-in the class template
    numfields = len(field_names)
    argtxt = repr(field_names).replace(''', '')[1:-1]   # tuple repr without parens or quotes
    reprtxt = ', '.join('%s=%%r' % name for name in field_names)
    dicttxt = ', '.join('%r: t[%d]' % (name, pos) for pos, name in enumerate(field_names))
    template = '''class %(typename)s(tuple):
        '%(typename)s(%(argtxt)s)' \n
        __slots__ = () \n
        _fields = %(field_names)r \n
        def __new__(_cls, %(argtxt)s):
            return _tuple.__new__(_cls, (%(argtxt)s)) \n
        @classmethod
        def _make(cls, iterable, new=tuple.__new__, len=len):
            'Make a new %(typename)s object from a sequence or iterable'
            result = new(cls, iterable)
            if len(result) != %(numfields)d:
                raise TypeError('Expected %(numfields)d arguments, got %%d' %% len(result))
            return result \n
        def __repr__(self):
            return '%(typename)s(%(reprtxt)s)' %% self \n
        def _asdict(t):
            'Return a new dict which maps field names to their values'
            return {%(dicttxt)s} \n
        def _replace(_self, **kwds):
            'Return a new %(typename)s object replacing specified fields with new values'
            result = _self._make(map(kwds.pop, %(field_names)r, _self))
            if kwds:
                raise ValueError('Got unexpected field names: %%r' %% kwds.keys())
            return result \n
        def __getnewargs__(self):
            return tuple(self) \n\n''' % locals()
    for i, name in enumerate(field_names):
        template += '        %s = _property(_itemgetter(%d))\n' % (name, i)
    
    
def FormatDebugInfoResponse_Completer_ServerNotRunningWithNoLogfiles_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'is_running': False,
    'logfiles': []
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name not running\n'
      '  Server name executable: /path/to/executable\n'
      '  No logfiles available\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )

    
    
def LastEnteredCharIsIdentifierChar_FiletypeHtml_test():
  with MockCurrentFiletypes( ['html'] ):
    with MockCurrentColumnAndLineContents( 3, 'ab-' ):
      ok_( base.LastEnteredCharIsIdentifierChar() )
    
    
def ParseArguments():
  parser = argparse.ArgumentParser()
  parser.add_argument( '--skip-build', action = 'store_true',
                       help = 'Do not build ycmd before testing' )
  parser.add_argument( '--coverage', action = 'store_true',
                       help = 'Enable coverage report' )
  parser.add_argument( '--no-flake8', action = 'store_true',
                       help = 'Do not run flake8' )
    
    
  @patch( 'ycm.vimsupport.VariableExists', return_value = True )
  @patch( 'ycm.vimsupport.SetFittingHeightForCurrentWindow' )
  @patch( 'vim.command', new_callable = ExtendedMock )
  @patch( 'vim.eval', new_callable = ExtendedMock )
  def _CheckGoToList( self,
                      completer_response,
                      expected_qf_list,
                      vim_eval,
                      vim_command,
                      set_fitting_height,
                      variable_exists ):
    self._request._response = completer_response
    
        def test_sequential_execution(self):
        self.command_stack[0].execute()
        output_after_first_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_execution[0], 'bar.txt')
        self.command_stack[1].execute()
        output_after_second_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_execution[0], 'baz.txt')
    
        def test_sales_manager_shall_respond_through_proxy_with_delay(cls):
        cls.p.busy = 'Yes'
        start_time = time()
        cls.p.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
Sales Manager is busy\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
    if __name__ == '__main__':
    
        def test_tc3_output(self):
        self.tc3.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc3)
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example with the time provider used in
        production. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(production_code_time_provider)
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)

    
    '''
Port of the Java example of 'Constructor Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050)
    
    
class ConcreteHandler1(Handler):