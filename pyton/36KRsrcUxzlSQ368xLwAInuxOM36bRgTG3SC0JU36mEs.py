
        
                # because special names such as Name.Class, Name.Function, etc.
        # are not recognized as such later in the parsing, we choose them
        # to look the same as ordinary variables.
        Name:                      '#000000',        # class: 'n'
        Name.Attribute:            '#c4a000',        # class: 'na' - to be revised
        Name.Builtin:              '#004461',        # class: 'nb'
        Name.Builtin.Pseudo:       '#3465a4',        # class: 'bp'
        Name.Class:                '#000000',        # class: 'nc' - to be revised
        Name.Constant:             '#000000',        # class: 'no' - to be revised
        Name.Decorator:            '#888',           # class: 'nd' - to be revised
        Name.Entity:               '#ce5c00',        # class: 'ni'
        Name.Exception:            'bold #cc0000',   # class: 'ne'
        Name.Function:             '#000000',        # class: 'nf'
        Name.Property:             '#000000',        # class: 'py'
        Name.Label:                '#f57900',        # class: 'nl'
        Name.Namespace:            '#000000',        # class: 'nn' - to be revised
        Name.Other:                '#000000',        # class: 'nx'
        Name.Tag:                  'bold #004461',   # class: 'nt' - like a keyword
        Name.Variable:             '#000000',        # class: 'nv' - to be revised
        Name.Variable.Class:       '#000000',        # class: 'vc' - to be revised
        Name.Variable.Global:      '#000000',        # class: 'vg' - to be revised
        Name.Variable.Instance:    '#000000',        # class: 'vi' - to be revised
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
    
def post(url, data=None, json=None, **kwargs):
    r'''Sends a POST request.
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        def __repr__(self):
        return '<lookup \'%s\'>' % (self.name)
    
        def test_basic_waiting_server(self):
        '''the server waits for the block_server event to be set before closing'''
        block_server = threading.Event()
    
    # -------
# Pythons
# -------
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
    
class SSLError(ConnectionError):
    '''An SSL error occurred.'''
    
            # Send the request
        r = adapter.send(request, **kwargs)
    
    _proxy_combos += [(var.upper(), scheme) for var, scheme in _proxy_combos]
    
        def check_bitop_identities_1(self, x):
        eq = self.assertEqual
        with self.subTest(x=x):
            eq(x & 0, 0)
            eq(x | 0, x)
            eq(x ^ 0, x)
            eq(x & -1, x)
            eq(x | -1, -1)
            eq(x ^ -1, ~x)
            eq(x, ~~x)
            eq(x & x, x)
            eq(x | x, x)
            eq(x ^ x, 0)
            eq(x & ~x, 0)
            eq(x | ~x, -1)
            eq(x ^ ~x, -1)
            eq(-x, 1 + ~x)
            eq(-x, ~(x-1))
        for n in range(2*SHIFT):
            p2 = 2 ** n
            with self.subTest(x=x, n=n, p2=p2):
                eq(x << n >> n, x)
                eq(x // p2, x >> n)
                eq(x * p2, x << n)
                eq(x & -p2, x >> n << n)
                eq(x & -p2, x & ~(p2 - 1))
    
        def test_eq(self):
        base_case = ('key', 'value', ''value'')
        attribs = {
            'path': '/',
            'comment': 'foo',
            'domain': 'example.com',
            'version': 2,
        }
        morsel_a = cookies.Morsel()
        morsel_a.update(attribs)
        morsel_a.set(*base_case)
        morsel_b = cookies.Morsel()
        morsel_b.update(attribs)
        morsel_b.set(*base_case)
        self.assertTrue(morsel_a == morsel_b)
        self.assertFalse(morsel_a != morsel_b)
        cases = (
            ('key', 'value', 'mismatch'),
            ('key', 'mismatch', ''value''),
            ('mismatch', 'value', ''value''),
        )
        for case_b in cases:
            with self.subTest(case_b):
                morsel_b = cookies.Morsel()
                morsel_b.update(attribs)
                morsel_b.set(*case_b)
                self.assertFalse(morsel_a == morsel_b)
                self.assertTrue(morsel_a != morsel_b)
    
    class TestPyDecode(TestDecode, PyTest): pass
class TestCDecode(TestDecode, CTest): pass

    
    class TZInfo:
    def __init__(self, transitions, type_indices, ttis, abbrs):
        self.transitions = transitions
        self.type_indices = type_indices
        self.ttis = ttis
        self.abbrs = abbrs
    
        def test_oldargs1_2_kw(self):
        msg = r'count\(\) takes no keyword arguments'
        self.assertRaisesRegex(TypeError, msg, [].count, x=2, y=2)
    
            response = self.generate_html_documentation().encode('utf-8')
    
        def test_reverse_iteration(self):
        for r in [range(10),
                  range(0),
                  range(1, 9, 3),
                  range(8, 0, -3),
                  range(sys.maxsize+1, sys.maxsize+10),
                  ]:
            self.assertEqual(list(reversed(r)), list(r)[::-1])