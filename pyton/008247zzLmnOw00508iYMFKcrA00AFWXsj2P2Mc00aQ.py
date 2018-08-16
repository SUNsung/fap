
        
            def test_write_eof_duplex_pipe(self):
        tr = _ProactorDuplexPipeTransport(
            self.loop, self.sock, self.protocol)
        self.assertFalse(tr.can_write_eof())
        with self.assertRaises(NotImplementedError):
            tr.write_eof()
        close_transport(tr)
    
        def test_object_class_assignment_between_heaptypes_and_nonheaptypes(self):
        class SubType(types.ModuleType):
            a = 1
    
    
try:
    import _hashlib
    new = __hash_new
    __get_hash = __get_openssl_constructor
    algorithms_available = algorithms_available.union(
            _hashlib.openssl_md_meth_names)
except ImportError:
    new = __py_new
    __get_hash = __get_builtin_constructor
    
        print('Creating the makefiles...')
    sys.stdout.flush()
    # run configure, copy includes, patch files
    run_configure(configure, do_script)
    makefile = makefile_template.format(suffix)
    try:
        os.unlink(makefile)
    except FileNotFoundError:
        pass
    os.rename(generated_makefile, makefile)
    copy_includes(makefile, suffix)
    
        def tearDown(cls):
        ''' Function/test case scope teardown. '''
        cls.output.close()
        sys.stdout = cls.saved_stdout
    
        def amount(self, val):
        print(val, end=' ')
        return self
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        _static_method_choices = {'param_value_1': _static_method_1,
                              'param_value_2': _static_method_2}