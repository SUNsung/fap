
        
        
class BufferedPrettyStream(PrettyStream):
    '''The same as :class:`PrettyStream` except that the body is fully
    fetched before it's processed.
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
            self.assertEqual(res, 2)
        self.assertEqual(b, 2)
    
                if __name__ == '__main__':
                freeze_support()
                ...
    
        def test_xdev(self):
        # sys.flags.dev_mode
        code = 'import sys; print(sys.flags.dev_mode)'
        out = self.run_xdev('-c', code, xdev=False)
        self.assertEqual(out, 'False')
        out = self.run_xdev('-c', code)
        self.assertEqual(out, 'True')
    
    Cela ressemble à un excellent recipie[1] déjeuner.
    
    import os
import email
import mimetypes
    
    def handlePoints(points):
    print('<ul>')
    for point in points:
        handlePoint(point)
    print('</ul>')
    
            try:
            print(list(pool.imap(f, list(range(10)))))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from list(pool.imap())')
        else:
            raise AssertionError('expected ZeroDivisionError')
    
        for i in range(1, n+1):
        dp[i][0] = True
    
        Using log and roots can be perceived as tools for penalizing big
    erors. However, using appropriate metrics depends on the situations,
    and types of data
'''
    
            a *= a
        b >>= 1