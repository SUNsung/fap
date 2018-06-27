
        
            # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')
    
    
def FormatDebugInfoResponse_NoResponse_test():
  assert_that(
    FormatDebugInfoResponse( None ),
    equal_to( 'Server errored, no debug info from server\n' )
  )
    
      if 'word' in vim_data:
    completion_data[ 'insertion_text' ] = vim_data[ 'word' ]
  if 'abbr' in vim_data:
    completion_data[ 'menu_text' ] = vim_data[ 'abbr' ]
  if 'menu' in vim_data:
    completion_data[ 'extra_menu_info' ] = vim_data[ 'menu' ]
  if 'kind' in vim_data:
    completion_data[ 'kind' ] = [ vim_data[ 'kind' ] ]
  if 'info' in vim_data:
    completion_data[ 'detailed_info' ] = vim_data[ 'info' ]
    
    
def EndsWithPython_Good( path ):
  ok_( _EndsWithPython( path ),
       'Path {0} does not end with a Python name.'.format( path ) )
    
        self._cached_response = self.HandleFuture( self._response_future,
                                               truncate_message = True )
    
        def do_action(self):
        print(self.name, self.action.name, end=' ')
        return self.action
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
    *Where is the pattern used practically?
    
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

    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
        '''catalog of multiple static methods that are executed depending on an init
    
    print('Counting to two...')
for number in count_to_two():
    print(number, end=' ')
    
        def __init__(self):
        self._reporter = None
        self._db = None
        self._tc = None
    
        def __init__(self, wrapped):
        self._wrapped = wrapped