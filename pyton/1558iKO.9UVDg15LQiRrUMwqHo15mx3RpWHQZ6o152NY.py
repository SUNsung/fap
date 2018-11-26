
def abspath(path):
    '''Return an absolute path.'''
    path = os.fspath(path)
    if not isabs(path):
        if isinstance(path, bytes):
            cwd = os.getcwdb()
        else:
            cwd = os.getcwd()
        path = join(cwd, path)
    return normpath(path)
    
        # Some tests need more than one block of uncompressed data. Since one block
    # is at least 100,000 bytes, we gather some data dynamically and compress it.
    # Note that this assumes that compression works correctly, so we cannot
    # simply use the bigger test data for all tests.
    test_size = 0
    BIG_TEXT = bytearray(128*1024)
    for fname in glob.glob(os.path.join(os.path.dirname(__file__), '*.py')):
        with open(fname, 'rb') as fh:
            test_size += fh.readinto(memoryview(BIG_TEXT)[test_size:])
        if test_size > 128*1024:
            break
    BIG_DATA = bz2.compress(BIG_TEXT, compresslevel=1)
    
    # We can extract the richest alternative in order to display it:
richest = msg.get_body()
partfiles = {}
if richest['content-type'].maintype == 'text':
    if richest['content-type'].subtype == 'plain':
        for line in richest.get_content().splitlines():
            print(line)
        sys.exit()
    elif richest['content-type'].subtype == 'html':
        body = richest
    else:
        print('Don't know how to display {}'.format(richest.get_content_type()))
        sys.exit()
elif richest['content-type'].content_type == 'multipart/related':
    body = richest.get_body(preferencelist=('html'))
    for part in richest.iter_attachments():
        fn = part.get_filename()
        if fn:
            extension = os.path.splitext(part.get_filename())[1]
        else:
            extension = mimetypes.guess_extension(part.get_content_type())
        with tempfile.NamedTemporaryFile(suffix=extension, delete=False) as f:
            f.write(part.get_content())
            # again strip the <> to go from email form of cid to html form.
            partfiles[part['content-id'][1:-1]] = f.name
else:
    print('Don't know how to display {}'.format(richest.get_content_type()))
    sys.exit()
with tempfile.NamedTemporaryFile(mode='w', delete=False) as f:
    # The magic_html_parser has to rewrite the href='cid:....' attributes to
    # point to the filenames in partfiles.  It also has to do a safety-sanitize
    # of the html.  It could be written using html.parser.
    f.write(magic_html_parser(body.get_content(), partfiles))
webbrowser.open(f.name)
os.remove(f.name)
for fn in partfiles.values():
    os.remove(fn)
    
        # Add more tasks using `put()`
    for task in TASKS2:
        task_queue.put(task)
    
    
class UnpackValueError(UnpackException, ValueError):
    pass
    
    
@pytest.mark.parametrize('engine', _engines)
@pytest.mark.parametrize('parser', expr._parsers)
def test_invalid_numexpr_version(engine, parser):
    def testit():
        a, b = 1, 2  # noqa
        res = pd.eval('a + b', engine=engine, parser=parser)
        assert res == 3
    
    
@pytest.fixture
def three_group():
    return DataFrame({'A': ['foo', 'foo', 'foo',
                            'foo', 'bar', 'bar',
                            'bar', 'bar',
                            'foo', 'foo', 'foo'],
                      'B': ['one', 'one', 'one',
                            'two', 'one', 'one', 'one', 'two',
                            'two', 'two', 'one'],
                      'C': ['dull', 'dull', 'shiny',
                            'dull', 'dull', 'shiny', 'shiny',
                            'dull', 'shiny', 'shiny', 'shiny'],
                      'D': np.random.randn(11),
                      'E': np.random.randn(11),
                      'F': np.random.randn(11)})

    
        def ext_hook(code, data):
        print('ext_hook called', code, data)
        assert code == 123
        obj = array.array('d')
        frombytes(obj, data)
        return obj
    
    
def test_str8():
    header = b'\xd9'
    data = b'x' * 32
    b = packb(data.decode(), use_bin_type=True)
    assert len(b) == len(data) + 2
    assert b[0:2] == header + b'\x20'
    assert b[2:] == data
    assert unpackb(b) == data
    
        # 40 ok for read_size=1024, while 50 introduces errors
    # 7000 ok for read_size=1024*1024, while 8000 leads to glibc detected ***
    # python: double free or corruption (!prev):
    
    
class MyList(list):
    pass