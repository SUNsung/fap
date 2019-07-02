
        
        
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
class FunctionPropertiesTest(FuncAttrsTest):
    # Include the external setUp method that is common to all tests
    def test_module(self):
        self.assertEqual(self.b.__module__, __name__)
    
    # Are two stat buffers (obtained from stat, fstat or lstat)
# describing the same file?
def samestat(s1, s2):
    '''Test whether two stat buffers reference the same file'''
    return (s1.st_ino == s2.st_ino and
            s1.st_dev == s2.st_dev)
    
        def testSeekBackwardsAcrossStreams(self):
        self.createTempFile(streams=2)
        with BZ2File(self.filename) as bz2f:
            readto = len(self.TEXT) + 100
            while readto > 0:
                readto -= len(bz2f.read(readto))
            bz2f.seek(-150, 1)
            self.assertEqual(bz2f.read(), self.TEXT[100-150:] + self.TEXT)
    
        def persistent_id(self, obj):
        # Instead of pickling MemoRecord as a regular class instance, we emit a
        # persistent ID.
        if isinstance(obj, MemoRecord):
            # Here, our persistent ID is simply a tuple, containing a tag and a
            # key, which refers to a specific record in the database.
            return ('MemoRecord', obj.key)
        else:
            # If obj does not have a persistent ID, return None. This means obj
            # needs to be pickled as usual.
            return None
    
    
if __name__ == '__main__':
    main()

    
    
def main():
    parser = ArgumentParser(description='''\
Unpack a MIME message into a directory of files.
''')
    parser.add_argument('-d', '--directory', required=True,
                        help='''Unpack the MIME message into the named
                        directory, which will be created if it doesn't already
                        exist.''')
    parser.add_argument('msgfile')
    args = parser.parse_args()
    
    # register the Foo class; make `f()` and `g()` accessible via proxy
MyManager.register('Foo1', Foo)
    
    
class PackException(Exception):
    pass
    
        s = pd.Series([1, 2, -1, 4])
    s[s < 0] = inc
    
    
@pytest.fixture()
def series():
    df = pd.DataFrame({'outer': ['a', 'a', 'a', 'b', 'b', 'b'],
                       'inner': [1, 2, 3, 1, 2, 3],
                       'A': np.arange(6),
                       'B': ['one', 'one', 'two', 'two', 'one', 'one']})
    s = df.set_index(['outer', 'inner', 'B'])['A']
    
    
def test_str8():
    header = b'\xd9'
    data = b'x' * 32
    b = packb(data.decode(), use_bin_type=True)
    assert len(b) == len(data) + 2
    assert b[0:2] == header + b'\x20'
    assert b[2:] == data
    assert unpackb(b) == data
    
    import pandas.io.msgpack as msgpack
    
        def setup(self):
        self.fname = '__test__.msg'
        N = 100000
        C = 5
        self.df = DataFrame(np.random.randn(N, C),
                            columns=['float{}'.format(i) for i in range(C)],
                            index=date_range('20000101', periods=N, freq='H'))
        self.df['object'] = tm.makeStringIndex(N)
        self.df.to_msgpack(self.fname)