
        
            @unittest.skipUnless(hasattr(posix, 'setresuid'),
                         'test needs posix.setresuid()')
    def test_setresuid_exception(self):
        # Don't do this test if someone is silly enough to run us as root.
        current_user_ids = posix.getresuid()
        if 0 not in current_user_ids:
            new_user_ids = (current_user_ids[0]+1, -1, -1)
            self.assertRaises(OSError, posix.setresuid, *new_user_ids)
    
        def run(self):
        # The sleep isn't necessary, but is intended to give the blocking
        # function in the main thread a chance at actually blocking before
        # we unclog it.  But if the sleep is longer than the timeout-based
        # tests wait in their blocking functions, those tests will fail.
        # So we give them much longer timeout values compared to the
        # sleep here (I aimed at 10 seconds for blocking functions --
        # they should never actually wait that long - they should make
        # progress as soon as we call self.fn()).
        time.sleep(0.1)
        self.startedEvent.set()
        self.fn(*self.args)
    
        def items(self):
        '''Get all the message's header fields and values.
    
        def test_policy_on_part_made_by_make_comes_from_message(self):
        for method in ('make_related', 'make_alternative', 'make_mixed'):
            m = self.message(policy=self.policy.clone(content_manager='foo'))
            m['Content-Type'] = 'text/plain'
            getattr(m, method)()
            self.assertEqual(m.get_payload(0).policy.content_manager, 'foo')
    
    def glob0(dirname, pattern):
    return _glob0(dirname, pattern, False)
    
        def rollover(self):
        if self._rolled: return
        file = self._file
        newfile = self._file = TemporaryFile(**self._TemporaryFileArgs)
        del self._TemporaryFileArgs
    
        def finalize_options(self):
        if self.plat_name is None:
            self.plat_name = get_platform()
        else:
            # plat-name only supported for windows (other platforms are
            # supported via ./configure flags, if at all).  Avoid misleading
            # other platforms.
            if os.name != 'nt':
                raise DistutilsOptionError(
                            '--plat-name only supported on Windows (try '
                            'using './configure --help' on your platform)')
    
        Raise DistutilsExecError if running the program fails in any way; just
    return on success.
    '''
    # cmd is documented as a list, but just in case some code passes a tuple
    # in, protect our %-formatting code against horrible death
    cmd = list(cmd)
    if os.name == 'posix':
        _spawn_posix(cmd, search_path, dry_run=dry_run)
    elif os.name == 'nt':
        _spawn_nt(cmd, search_path, dry_run=dry_run)
    else:
        raise DistutilsPlatformError(
              'don't know how to spawn programs on platform '%s'' % os.name)
    
        while True:
        line = fp.readline()
        if line is None: # eof
            break
        m = _variable_rx.match(line)
        if m:
            n, v = m.group(1, 2)
            v = v.strip()
            # `$$' is a literal `$' in make
            tmpv = v.replace('$$', '')
    
    
class Get_argspecTest(unittest.TestCase):
    # The get_spec function must return a string, even if blank.
    # Test a variety of objects to be sure that none cause it to raise
    # (quite aside from getting as correct an answer as possible).
    # The tests of builtins may break if inspect or the docstrings change,
    # but a red buildbot is better than a user crash (as has happened).
    # For a simple mismatch, change the expected output to the actual.
    
        # list of integers
    result = s.iloc[[0, 2, 3, 4, 5]]
    expected = s.reindex(s.index[[0, 2, 3, 4, 5]])
    assert_series_equal(result, expected)
    
        # simulate file handle
    json = '{'a': 'foo”', 'b': 'bar'}\n{'a': 'foo', 'b': 'bar'}\n'
    json = StringIO(json)
    result = read_json(json, lines=True)
    expected = DataFrame([['foo\u201d', 'bar'], ['foo', 'bar']], columns=['a', 'b'])
    assert_frame_equal(result, expected)
    
            return out
    
        def _execute_create(self):
        # Inserting table into database, add to MetaData object
        self.table = self.table.tometadata(self.pd_sql.meta)
        self.table.create()
    
                result = read_hdf(hh, 'df', where='l1=list(selection.index)')
            assert_frame_equal(result, expected)
    
            self.obj = Foo()