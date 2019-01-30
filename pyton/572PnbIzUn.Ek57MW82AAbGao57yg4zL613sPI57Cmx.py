
        
                Returns a tuple (None_or_tests_from_file, should_recurse).
        '''
        basename = os.path.basename(full_path)
        if os.path.isfile(full_path):
            if not VALID_MODULE_NAME.match(basename):
                # valid Python identifiers only
                return None, False
            if not self._match_path(basename, full_path, pattern):
                return None, False
            # if the test file matches, load it
            name = self._get_name_from_path(full_path)
            try:
                module = self._get_module_from_name(name)
            except case.SkipTest as e:
                return _make_skipped_test(name, e, self.suiteClass), False
            except:
                error_case, error_message = \
                    _make_failed_import_test(name, self.suiteClass)
                self.errors.append(error_message)
                return error_case, False
            else:
                mod_file = os.path.abspath(
                    getattr(module, '__file__', full_path))
                realpath = _jython_aware_splitext(
                    os.path.realpath(mod_file))
                fullpath_noext = _jython_aware_splitext(
                    os.path.realpath(full_path))
                if realpath.lower() != fullpath_noext.lower():
                    module_dir = os.path.dirname(realpath)
                    mod_name = _jython_aware_splitext(
                        os.path.basename(full_path))
                    expected_dir = os.path.dirname(full_path)
                    msg = ('%r module incorrectly imported from %r. Expected '
                           '%r. Is this module globally installed?')
                    raise ImportError(
                        msg % (mod_name, module_dir, expected_dir))
                return self.loadTestsFromModule(module, pattern=pattern), False
        elif os.path.isdir(full_path):
            if (not namespace and
                not os.path.isfile(os.path.join(full_path, '__init__.py'))):
                return None, False
    
        def _write_constant(self, value):
        if isinstance(value, (float, complex)):
            # Substitute overflowing decimal literal for AST infinities.
            self.write(repr(value).replace('inf', INFSTR))
        else:
            self.write(repr(value))
    
    MULTIPROCESSING_EXCEPTIONS = (
    'AuthenticationError',
    'BufferTooShort',
    'ProcessError',
    'TimeoutError',
)
    
        def __or__(self, other):
        if not isinstance(other, (self.__class__, int)):
            return NotImplemented
        result = self.__class__(self._value_ | self.__class__(other)._value_)
        return result