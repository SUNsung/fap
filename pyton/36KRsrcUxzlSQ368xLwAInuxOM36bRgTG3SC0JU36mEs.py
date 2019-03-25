
        
            def test_generator(self):
        def f():
            for i in range(2):
                yield i
        def g(p):
            for i in f():
                pass
        f_ident = ident(f)
        g_ident = ident(g)
        self.check_events(g, [(1, 'call', g_ident),
                              # call the iterator twice to generate values
                              (2, 'call', f_ident),
                              (2, 'return', f_ident),
                              (2, 'call', f_ident),
                              (2, 'return', f_ident),
                              # once more; returns end-of-iteration with
                              # actually raising an exception
                              (2, 'call', f_ident),
                              (2, 'return', f_ident),
                              (1, 'return', g_ident),
                              ])
    
        Directories are *not* resources.
    '''
    package = _get_package(package)
    _normalize_path(name)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.is_resource(name)
    try:
        package_contents = set(contents(package))
    except (NotADirectoryError, FileNotFoundError):
        return False
    if name not in package_contents:
        return False
    # Just because the given file_name lives as an entry in the package's
    # contents doesn't necessarily mean it's a resource.  Directories are not
    # resources, so let's try to find out if it's a directory or not.
    path = Path(package.__spec__.origin).parent / name
    return path.is_file()
    
        def testClosedIteratorDeadlock(self):
        # Issue #3309: Iteration on a closed BZ2File should release the lock.
        self.createTempFile()
        bz2f = BZ2File(self.filename)
        bz2f.close()
        self.assertRaises(ValueError, next, bz2f)
        # This call will deadlock if the above call failed to release the lock.
        self.assertRaises(ValueError, bz2f.readlines)