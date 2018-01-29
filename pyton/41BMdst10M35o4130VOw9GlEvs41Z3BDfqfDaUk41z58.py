def rev_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'http://hg.scrapy.org/scrapy/changeset/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'r' + text, refuri=ref, **options)
    return [node], []

    
    
# contracts
class UrlContract(Contract):
    ''' Contract to set the url of the request (mandatory)
        @url http://scrapy.org
    '''
    
        If you have already calculated the mean of the data, you can pass it as
    the optional second argument to avoid recalculating it:
    
        def seek(self, pos, whence=0):
        '''Seek to specified position into the chunk.
        Default position is 0 (start of chunk).
        If the file is not seekable, this will result in an error.
        '''
    
    def _decode_uXXXX(s, pos):
    esc = s[pos + 1:pos + 5]
    if len(esc) == 4 and esc[1] not in 'xX':
        try:
            return int(esc, 16)
        except ValueError:
            pass
    msg = 'Invalid \\uXXXX escape'
    raise JSONDecodeError(msg, s, pos)
    
            Returns a (response, lines) tuple where `response` is a unicode
        string and `lines` is a list of bytes objects.
        If `file` is a file-like object, it must be open in binary mode.
        '''
    
    def get_colordb(file, filetype=None):
    colordb = None
    fp = open(file)
    try:
        line = fp.readline()
        if not line:
            return None
        # try to determine the type of RGB file it is
        if filetype is None:
            filetypes = FILETYPES
        else:
            filetypes = [filetype]
        for typere, class_ in filetypes:
            mo = typere.search(line)
            if mo:
                break
        else:
            # no matching type
            return None
        # we know the type and the class to grok the type, so suck it in
        colordb = class_(fp)
    finally:
        fp.close()
    # save a global copy
    global DEFAULT_DB
    DEFAULT_DB = colordb
    return colordb
    
    class PyNoneStructPtr(PyObjectPtr):
    '''
    Class wrapping a gdb.Value that's a PyObject* pointing to the
    singleton (we hope) _Py_NoneStruct with ob_type PyNone_Type
    '''
    _typename = 'PyObject'
    
        def test_help_flag(self):
        rc, out, err = assert_python_ok('-m', 'json.tool', '-h')
        self.assertEqual(rc, 0)
        self.assertTrue(out.startswith(b'usage: '))
        self.assertEqual(err, b'')
    
            a = -sys.maxsize
        b = sys.maxsize
        expected_len = b - a
        x = range(a, b)
        self.assertIn(a, x)
        self.assertNotIn(b, x)
        self.assertRaises(OverflowError, len, x)
        self.assertTrue(x)
        self.assertEqual(_range_len(x), expected_len)
        self.assertEqual(x[0], a)
        idx = sys.maxsize+1
        self.assertEqual(x[idx], a+idx)
        self.assertEqual(x[idx:idx+1][0], a+idx)
        with self.assertRaises(IndexError):
            x[-expected_len-1]
        with self.assertRaises(IndexError):
            x[expected_len]
    
        def test_data_value_shall_be_changeable(cls):
        cls.sub.data = 20
        cls.assertEqual(cls.sub._data, 20)
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
        def test_house_size(self):
        self.assertEqual(self.building.size, 'Small')
    
    class ConstructorInjectionTest(unittest.TestCase):
    
    
class ConcreteHandler3(Handler):