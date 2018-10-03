
        
        anchor = '###'
min_entries_per_section = 3
auth_keys = ['apiKey', 'OAuth', 'X-Mashape-Key', 'No']
punctuation = ['.', '?', '!']
https_keys = ['Yes', 'No']
cors_keys = ['Yes', 'No', 'Unknown']
    
        def setUp(self):
        with open(TESTFN, 'wb') as fp:
            fp.write(self.data)
        self.zip = zipfile.ZipFile(TESTFN, 'r')
        with open(TESTFN2, 'wb') as fp:
            fp.write(self.data2)
        self.zip2 = zipfile.ZipFile(TESTFN2, 'r')
    
        @unittest.skipIf(sys.platform.startswith('openbsd'),
                     'Issue #12868: sigaltstack() doesn't work on '
                     'OpenBSD if Python is compiled with pthread')
    @unittest.skipIf(not hasattr(faulthandler, '_stack_overflow'),
                     'need faulthandler._stack_overflow()')
    def test_stack_overflow(self):
        self.check_fatal_error('''
            import faulthandler
            faulthandler.enable()
            faulthandler._stack_overflow()
            ''',
            3,
            '(?:Segmentation fault|Bus error)',
            other_regex='unable to raise a stack overflow')
    
            split_paths = [[c for c in s if c and c != curdir] for s in split_paths]
        s1 = min(split_paths)
        s2 = max(split_paths)
        for i, c in enumerate(s1):
            if c != s2[i]:
                common = common[:i]
                break
        else:
            common = common[:len(s1)]
    
    def normcase(s):
    '''Normalize case of pathname.  Has no effect under Posix'''
    s = os.fspath(s)
    if not isinstance(s, (bytes, str)):
        raise TypeError('normcase() argument must be str or bytes, '
                        'not '{}''.format(s.__class__.__name__))
    return s
    
        def test_stop_iteration(self):
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
                              # once more to hit the raise:
                              (2, 'call', f_ident),
                              (2, 'return', f_ident),
                              (1, 'return', g_ident),
                              ])
    
            # let's run the code that finds the right wininst*.exe file
        # and make sure it finds it and returns its content
        # no matter what platform we have
        exe_file = cmd.get_exe_bytes()
        self.assertGreater(len(exe_file), 10)
    
    if __name__ == '__main__':
    main()

    
    def check_live_url(url):