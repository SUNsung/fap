
        
        __all__ = ['commonprefix', 'exists', 'getatime', 'getctime', 'getmtime',
           'getsize', 'isdir', 'isfile', 'samefile', 'sameopenfile',
           'samestat']
    
        def test_stdout_flush_at_shutdown(self):
        # Issue #5319: if stdout.flush() fails at shutdown, an error should
        # be printed out.
        code = '''if 1:
            import os, sys, test.support
            test.support.SuppressCrashReport().__enter__()
            sys.stdout.write('x')
            os.close(sys.stdout.fileno())'''
        rc, out, err = assert_python_failure('-c', code)
        self.assertEqual(b'', out)
        self.assertEqual(120, rc)
        self.assertRegex(err.decode('ascii', 'ignore'),
                         'Exception ignored in.*\nOSError: .*')
    
    from argparse import ArgumentParser
    
        # Get and print some more results
    for i in range(len(TASKS2)):
        print('\t', done_queue.get())
    
    if os.path.exists(DB_FILE):
    os.remove(DB_FILE)