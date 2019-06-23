
        
        __version__ = '3.1.1'
    
        unexpectedType = property(getUnexpectedType)
    
    
                load_tests = None
            tests = None
            name = self._get_name_from_path(full_path)
            try:
                package = self._get_module_from_name(name)
            except case.SkipTest as e:
                return _make_skipped_test(name, e, self.suiteClass), False
            except:
                error_case, error_message = \
                    _make_failed_import_test(name, self.suiteClass)
                self.errors.append(error_message)
                return error_case, False
            else:
                load_tests = getattr(package, 'load_tests', None)
                # Mark this package as being in load_tests (possibly ;))
                self._loading_packages.add(name)
                try:
                    tests = self.loadTestsFromModule(package, pattern=pattern)
                    if load_tests is not None:
                        # loadTestsFromModule(package) has loaded tests for us.
                        return tests, False
                    return tests, True
                finally:
                    self._loading_packages.discard(name)
        else:
            return None, False
    
    
# Are two filenames really pointing to the same file?
def samefile(f1, f2):
    '''Test whether two pathnames reference the same actual file'''
    s1 = os.stat(f1)
    s2 = os.stat(f2)
    return samestat(s1, s2)
    
        Note that not all entries are resources.  Specifically, directories are
    not considered resources.  Use `is_resource()` on each entry returned here
    to check if it is a resource or not.
    '''
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.contents()
    # Is the package a namespace package?  By definition, namespace packages
    # cannot have resources.  We could use _check_location() and catch the
    # exception, but that's extra work, so just inline the check.
    elif package.__spec__.origin is None or not package.__spec__.has_location:
        return ()
    else:
        package_directory = Path(package.__spec__.origin).parent
        return os.listdir(package_directory)

    
        def testBadArgs(self):
        self.assertRaises(TypeError, BZ2File, 123.456)
        self.assertRaises(ValueError, BZ2File, os.devnull, 'z')
        self.assertRaises(ValueError, BZ2File, os.devnull, 'rx')
        self.assertRaises(ValueError, BZ2File, os.devnull, 'rbt')
        self.assertRaises(ValueError, BZ2File, os.devnull, compresslevel=0)
        self.assertRaises(ValueError, BZ2File, os.devnull, compresslevel=10)
    
    ##