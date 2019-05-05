
        
            def __getattr__(self, name):
        if name != self._testMethodName:
            return super(_FailedTest, self).__getattr__(name)
        def testFailure():
            raise self._exception
        return testFailure
    
            loader = unittest.TestLoader()
        suite = loader.loadTestsFromName('testcase_1.testfoo', m)
        expected = 'type object 'MyTestCase' has no attribute 'testfoo''
        error, test = self.check_deferred_error(loader, suite)
        self.assertIn(
            expected, error,
            'missing error string in %r' % error)
        self.assertRaisesRegex(AttributeError, expected, test.testfoo)
    
            self._copy_file_without_generated_symbols(SYMBOL_FILE, output)
    
    
# This follows symbolic links, so both islink() and isdir() can be true
# for the same path on systems that support symlinks
def isfile(path):
    '''Test whether a path is a regular file'''
    try:
        st = os.stat(path)
    except (OSError, ValueError):
        return False
    return stat.S_ISREG(st.st_mode)
    
        If a name, the module is imported.  If the passed or imported module
    object is not a package, raise an exception.
    '''
    if hasattr(package, '__spec__'):
        if package.__spec__.submodule_search_locations is None:
            raise TypeError('{!r} is not a package'.format(
                package.__spec__.name))
        else:
            return package
    else:
        module = import_module(package)
        if module.__spec__.submodule_search_locations is None:
            raise TypeError('{!r} is not a package'.format(package))
        else:
            return module
    
        def testPeekBytesIO(self):
        with BytesIO(self.DATA) as bio:
            with BZ2File(bio) as bz2f:
                pdata = bz2f.peek()
                self.assertNotEqual(len(pdata), 0)
                self.assertTrue(self.TEXT.startswith(pdata))
                self.assertEqual(bz2f.read(), self.TEXT)