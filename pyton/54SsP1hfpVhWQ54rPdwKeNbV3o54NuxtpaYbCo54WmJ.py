
        
            def iter_body(self):
        return self.msg.iter_body(self.chunk_size)
    
    
def test_current_version():
    version = Environment().config['__meta__']['httpie']
    assert version == __version__

    
        def __getitem__(self, idx):
        if idx < 0 or idx >= len(self):
            raise IndexError(idx)
        return self._pathcls._from_parsed_parts(self._drv, self._root,
                                                self._parts[:-idx - 1])
    
        def testFileno(self):
        self.createTempFile()
        with open(self.filename, 'rb') as rawf:
            bz2f = BZ2File(rawf)
            try:
                self.assertEqual(bz2f.fileno(), rawf.fileno())
            finally:
                bz2f.close()
        self.assertRaises(ValueError, bz2f.fileno)
    
    Cela ressemble à un excellent recipie[1] déjeuner.
    
            try:
            print(pool.apply(f, (5,)))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from pool.apply()')
        else:
            raise AssertionError('expected ZeroDivisionError')
    
        # Start worker processes
    for i in range(NUMBER_OF_PROCESSES):
        Process(target=worker, args=(task_queue, done_queue)).start()
    
    
def _CompileFilters( config ):
  '''Given a filter config dictionary, return a list of compiled filters'''
  filters = []
    
    
def HandlePollResponse_SingleDiagnostic_test():
  diagnostics_handler = ExtendedMock()
  messages = [
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER' ] },
  ]
  assert_that( _HandlePollResponse( messages, diagnostics_handler ),
               equal_to( True ) )
  diagnostics_handler.UpdateWithNewDiagnosticsForFile.assert_has_exact_calls( [
    call( 'foo', [ 'PLACEHOLDER' ] )
  ] )
    
    from ycm.tests.test_utils import ( CurrentWorkingDirectory, ExtendedMock,
                                   MockVimModule, MockVimBuffers, VimBuffer )
MockVimModule()
    
      f = _CreateFilterForTypes( opts, [ 'java', 'xml' ] )
    
    
def EndsWithPython_BadPaths_test():
  not_python_paths = [
    None,
    '',
    '/opt/local/bin/vim',
    r'C:\Program Files\Vim\vim74\gvim.exe',
    '/usr/bin/python2.5',
    '/home/user/.pyenv/shims/python3.2',
  ]