    def test_create_option_buttons(self):
        e = self.engine
        for state in (0, 1):
            for var in (e.revar, e.casevar, e.wordvar, e.wrapvar):
                var.set(state)
            frame, options = self.btn_test_setup(
                    self.dialog.create_option_buttons)
            for spec, button in zip (options, frame.pack_slaves()):
                var, label = spec
                self.assertEqual(button['text'], label)
                self.assertEqual(var.get(), state)
    
        For this base class, accept any non-blank string.
    '''
    def __init__(self, parent, title, message, *, text0='', used_names={},
                 _htest=False, _utest=False):
        '''Create popup, do not return until tk widget destroyed.
    
        def test_setter(self):
        M = cookies.Morsel()
        # tests the .set method to set keys and their values
        for i in M._reserved:
            # Makes sure that all reserved keys can't be set this way
            self.assertRaises(cookies.CookieError,
                              M.set, i, '%s_value' % i, '%s_value' % i)
        for i in 'thou cast _the- !holy! ^hand| +*grenade~'.split():
            # Try typical use case. Setting decent values.
            # Check output and js_output.
            M['path'] = '/foo' # Try a reserved key as well
            M.set(i, '%s_val' % i, '%s_coded_val' % i)
            self.assertEqual(M.key, i)
            self.assertEqual(M.value, '%s_val' % i)
            self.assertEqual(M.coded_value, '%s_coded_val' % i)
            self.assertEqual(
                M.output(),
                'Set-Cookie: %s=%s; Path=/foo' % (i, '%s_coded_val' % i))
            expected_js_output = '''
        <script type='text/javascript'>
        <!-- begin hiding
        document.cookie = '%s=%s; Path=/foo';
        // end hiding -->
        </script>
        ''' % (i, '%s_coded_val' % i)
            self.assertEqual(M.js_output(), expected_js_output)
        for i in ['foo bar', 'foo@bar']:
            # Try some illegal characters
            self.assertRaises(cookies.CookieError,
                              M.set, i, '%s_value' % i, '%s_value' % i)
    
    #
# NOTE: This is the pi function from the decimal documentation, modified
# for benchmarking purposes. Since floats do not have a context, the higher
# intermediate precision from the original is NOT used, so the modified
# algorithm only gives an approximation to the correctly rounded result.
# For serious use, refer to the documentation or the appropriate literature.
#
def pi_float():
    '''native float'''
    lasts, t, s, n, na, d, da = 0, 3.0, 3, 1, 0, 0, 24
    while s != lasts:
        lasts = s
        n, na = n+na, na+8
        d, da = d+da, da+32
        t = (t * n) / d
        s += t
    return s
    
        @classmethod
    def zonelist(cls, zonedir='/usr/share/zoneinfo'):
        zones = []
        for root, _, files in os.walk(zonedir):
            for f in files:
                p = os.path.join(root, f)
                with open(p, 'rb') as o:
                    magic =  o.read(4)
                if magic == b'TZif':
                    zones.append(p[len(zonedir) + 1:])
        return zones
    
        def parse(self, input):
        options = copy.copy(self._options)
        options.filter = self.filter
        options.errorHandler = self.errorHandler
        fp = input.byteStream
        if fp is None and options.systemId:
            import urllib.request
            fp = urllib.request.urlopen(input.systemId)
        return self._parse_bytestream(fp, options)
    
        print('# The following line assumes you have built Python using the standard instructions')
    print('# Otherwise fix the following line to point to the library.')
    print('pythonlib = '$(pythonhome)/pcbuild/python%s$(debug_suffix).lib'' % version_suffix)
    print()
    
        def handle_xmlrpc(self, request_text):
        '''Handle a single XML-RPC request'''
    
            seq = list(range(a, b, c))
        self.assertIn(a, seq)
        self.assertNotIn(b, seq)
        self.assertEqual(len(seq), 2)