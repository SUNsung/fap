
        
            cmd = cmd.split()
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
    PRIMES = [
    112272535095293,
    112582705942171,
    112272535095293,
    115280095190773,
    115797848077099,
    117450548693743,
    993960000099397]
    
    
  def Start( self ):
    self._results = self._omni_completer.ComputeCandidates( self.request_data )
    
    
def EndsWithPython_Good( path ):
  ok_( _EndsWithPython( path ),
       'Path {0} does not end with a Python name.'.format( path ) )
    
    DIR_OF_THIS_SCRIPT = p.dirname( p.abspath( __file__ ) )
DIR_OF_THIRD_PARTY = p.join( DIR_OF_THIS_SCRIPT, 'third_party' )
DIR_OF_YCMD_THIRD_PARTY = p.join( DIR_OF_THIRD_PARTY, 'ycmd', 'third_party' )
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseDone( [] ) ) as mock_future:
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( True, response ) )
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
    
  def Response( self ):
    if self._cached_response:
      return self._cached_response
    
        def test_cat_adapter_shall_make_noise(self):
        cat = Cat()
        cat_adapter = Adapter(cat, make_noise=cat.meow)
        noise = cat_adapter.make_noise()
        expected_noise = 'meow!'
        self.assertEqual(noise, expected_noise)
    
        def test_sales_manager_shall_not_talk_through_proxy_with_delay(cls):
        cls.ntp.busy = 'No'
        start_time = time()
        cls.ntp.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
This Sales Manager will not talk to you whether he/she is busy or not\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
    from dft.constructor_injection import TimeDisplay, MidnightTimeProvider, ProductionCodeTimeProvider, datetime
    
        def __init__(self, param):
        # simple test to validate param value
        if param in self._class_method_choices:
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
        def __get__(self, obj, T):
        def transaction(*args, **kwargs):
            state = memento(obj)
            try:
                return self.method(obj, *args, **kwargs)
            except Exception as e:
                state()
                raise e
    
        def toggle_amfm(self):
        self.state.toggle_amfm()