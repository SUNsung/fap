
        
                headers = [
            '%s: %s' % (
                name,
                value if isinstance(value, str) else value.decode('utf8')
            )
            for name, value in headers.items()
        ]
    
    from httpie.plugins.base import AuthPlugin
    
        '''
)
troubleshooting.add_argument(
    '--help',
    action='help',
    default=SUPPRESS,
    help='''
    Show this help message and exit.
    
        It only operates on headers and provides a stronger contrast between
    their names and values than the original one bundled with Pygments
    (:class:`pygments.lexers.text import HttpLexer`), especially when
    Solarized color scheme is used.
    
        @mock.patch('certbot.display.enhancements.util')
    def test_redirect(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 1)
        self.assertTrue(self._call('redirect'))
    
        # SHOW PARTITIONS FROM qualifiedName (WHERE booleanExpression)?
    # (ORDER BY sortItem (',' sortItem)*)? (LIMIT limit=(INTEGER_VALUE | ALL))?
    def test_show_partitions(self):
        query = '''
            SHOW PARTITIONS FROM orders
            WHERE ds >= '2013-01-01' ORDER BY ds DESC;
        '''
        self.assertEquals({'orders'}, self.extract_tables(query))
    
    BASE_DIR = os.path.abspath(os.path.dirname(__file__))
PACKAGE_DIR = os.path.join(BASE_DIR, 'superset', 'static', 'assets')
PACKAGE_FILE = os.path.join(PACKAGE_DIR, 'package.json')
with open(PACKAGE_FILE) as package_file:
    version_string = json.load(package_file)['version']
    
            :return: dict, with the fields name, type, is_date, is_dim and agg.
        '''
        if self.__df.empty:
            return None
    
    
def export_schema_to_dict(back_references):
    '''Exports the supported import/export schema to a dictionary'''
    databases = [Database.export_schema(recursive=True,
                 include_parent_ref=back_references)]
    clusters = [DruidCluster.export_schema(recursive=True,
                include_parent_ref=back_references)]
    data = dict()
    if databases:
        data[DATABASES_KEY] = databases
    if clusters:
        data[DRUID_CLUSTERS_KEY] = clusters
    return data
    
        # find if the column was already imported
    existing_column = lookup_obj(i_obj)
    i_obj.table = None
    if existing_column:
        existing_column.override(i_obj)
        session.flush()
        return existing_column
    
        def __init__(self, parent, title, *, menuitem='', filepath='',
                 used_names={}, _htest=False, _utest=False):
        '''Get menu entry and url/local file for Additional Help.
    
        def test_reserved_keys(self):
        M = cookies.Morsel()
        # tests valid and invalid reserved keys for Morsels
        for i in M._reserved:
            # Test that all valid keys are reported as reserved and set them
            self.assertTrue(M.isReservedKey(i))
            M[i] = '%s_value' % i
        for i in M._reserved:
            # Test that valid key values come out fine
            self.assertEqual(M[i], '%s_value' % i)
        for i in 'the holy hand grenade'.split():
            # Test that invalid keys raise CookieError
            self.assertRaises(cookies.CookieError,
                              M.__setitem__, i, '%s_value' % i)
    
    def pi_cdecimal():
    '''cdecimal'''
    D = C.Decimal
    lasts, t, s, n, na, d, da = D(0), D(3), D(3), D(1), D(0), D(0), D(24)
    while s != lasts:
        lasts = s
        n, na = n+na, na+8
        d, da = d+da, da+32
        t = (t * n) / d
        s += t
    return s
    
    if __name__ == '__main__':
    if len(sys.argv) < 2:
        zones = TZInfo.zonelist()
        for z in zones:
            print(z)
        sys.exit()
    filepath = sys.argv[1]
    if not filepath.startswith('/'):
        filepath = os.path.join('/usr/share/zoneinfo', filepath)
    with open(filepath, 'rb') as fileobj:
        tzi = TZInfo.fromfile(fileobj)
    tzi.dump(sys.stdout)

    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if self.seekable:
            try:
                n = self.chunksize - self.size_read
                # maybe fix alignment
                if self.align and (self.chunksize & 1):
                    n = n + 1
                self.file.seek(n, 1)
                self.size_read = self.size_read + n
                return
            except OSError:
                pass
        while self.size_read < self.chunksize:
            n = min(8192, self.chunksize - self.size_read)
            dummy = self.read(n)
            if not dummy:
                raise EOFError

    
    def evalString(s):
    assert s.startswith(''') or s.startswith('''), repr(s[:1])
    q = s[0]
    if s[:3] == q*3:
        q = q*3
    assert s.endswith(q), repr(s[-len(q):])
    assert len(s) >= 2*len(q)
    s = s[len(q):-len(q)]
    return re.sub(r'\\(\'|\'|\\|[abfnrtv]|x.{0,2}|[0-7]{1,3})', escape, s)
    
    
class Maildir(Mailbox):
    '''A qmail-style Maildir mailbox.'''
    
    
def triplet_to_brightness(rgbtuple):
    # return the brightness (grey level) along the scale 0.0==black to
    # 1.0==white
    r = 0.299
    g = 0.587
    b = 0.114
    return r*rgbtuple[0] + g*rgbtuple[1] + b*rgbtuple[2]
    
        def assertCloseAbs(self, x, y, eps=1e-9):
        '''Return true iff floats x and y 'are close'.'''
        # put the one with larger magnitude second
        if abs(x) > abs(y):
            x, y = y, x
        if y == 0:
            return abs(x) < eps
        if x == 0:
            return abs(y) < eps
        # check that relative difference < eps
        self.assertTrue(abs((x-y)/y) < eps)
    
        def test_infile_stdout(self):
        infile = self._create_infile()
        rc, out, err = assert_python_ok('-m', 'json.tool', infile)
        self.assertEqual(rc, 0)
        self.assertEqual(out.splitlines(), self.expect.encode().splitlines())
        self.assertEqual(err, b'')
    
        def test_slice(self):
        def check(start, stop, step=None):
            i = slice(start, stop, step)
            self.assertEqual(list(r[i]), list(r)[i])
            self.assertEqual(len(r[i]), len(list(r)[i]))
        for r in [range(10),
                  range(0),
                  range(1, 9, 3),
                  range(8, 0, -3),
                  range(sys.maxsize+1, sys.maxsize+10),
                  ]:
            check(0, 2)
            check(0, 20)
            check(1, 2)
            check(20, 30)
            check(-30, -20)
            check(-1, 100, 2)
            check(0, -1)
            check(-1, -3, -1)
    
    class X(Structure):
    _fields_ = [('c_int', c_int)]
    init_called = False
    def __init__(self):
        self._init_called = True
    
            self.assertEqual(s(1, 2), 3)
        self.assertEqual(c(1, 2), 3)
        # The following no longer raises a TypeError - it is now
        # possible, as in C, to call cdecl functions with more parameters.
        #self.assertRaises(TypeError, c, 1, 2, 3)
        self.assertEqual(c(1, 2, 3, 4, 5, 6), 3)
        if not WINFUNCTYPE is CFUNCTYPE:
            self.assertRaises(TypeError, s, 1, 2, 3)
    
        def test_dog_greek_localization(self):
        self.assertEqual(self.g.get('dog'), 'σκύλος')
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    print()
    
            for i in range(3):
            num_obj.increment()
            print(num_obj)
        num_obj.value += 'x'  # will fail
        print(num_obj)
    except Exception as e:
        a_transaction.rollback()
        print('-- rolled back')
    print(num_obj)