
        
            def get_testable_domain_names(self):
        '''Returns the set of domain names that can be tested against'''
        if self._test_names:
            return self._test_names
        else:
            return {'example.com'}
    
    # How to display URL addresses: 'footnote', 'no', or 'inline'.
#texinfo_show_urls = 'footnote'
    
        description = 'Example Installer plugin'
    
    # The ## imports above & following could help make some tests gui-free.
# However, they currently make radiobutton tests fail.
##def setUpModule():
##    # Replace tk objects used to initialize se.SearchEngine.
##    se.BooleanVar = Var
##    se.StringVar = Var
##
##def tearDownModule():
##    se.BooleanVar = BooleanVar
##    se.StringVar = StringVar
    
        def dump(self, stream, start=None, end=None):
        for j, (trans, i) in enumerate(zip(self.transitions, self.type_indices)):
            utc = datetime.utcfromtimestamp(trans)
            tti = self.ttis[i]
            lmt = datetime.utcfromtimestamp(trans + tti.tt_gmtoff)
            abbrind = tti.tt_abbrind
            abbr = self.abbrs[abbrind:self.abbrs.find(0, abbrind)].decode()
            if j > 0:
                prev_tti = self.ttis[self.type_indices[j - 1]]
                shift = ' %+g' % ((tti.tt_gmtoff - prev_tti.tt_gmtoff) / 3600)
            else:
                shift = ''
            print('%s UTC = %s %-5s isdst=%d' % (utc, lmt, abbr, tti[1]) + shift, file=stream)
    
        def __init__(self, *, object_hook=None, parse_float=None,
            parse_int=None, parse_constant=None, strict=True,
            object_pairs_hook=None):
        '''``object_hook``, if specified, will be called with the result
        of every JSON object decoded and its return value will be used in
        place of the given ``dict``.  This can be used to provide custom
        deserializations (e.g. to support JSON-RPC class hinting).
    
    

# generic class
class ColorDB:
    def __init__(self, fp):
        lineno = 2
        self.__name = fp.name
        # Maintain several dictionaries for indexing into the color database.
        # Note that while Tk supports RGB intensities of 4, 8, 12, or 16 bits,
        # for now we only support 8 bit intensities.  At least on OpenWindows,
        # all intensities in the /usr/openwin/lib/rgb.txt file are 8-bit
        #
        # key is (red, green, blue) tuple, value is (name, [aliases])
        self.__byrgb = {}
        # key is name, value is (red, green, blue)
        self.__byname = {}
        # all unique names (non-aliases).  built-on demand
        self.__allnames = None
        for line in fp:
            # get this compiled regular expression from derived class
            mo = self._re.match(line)
            if not mo:
                print('Error in', fp.name, ' line', lineno, file=sys.stderr)
                lineno += 1
                continue
            # extract the red, green, blue, and name
            red, green, blue = self._extractrgb(mo)
            name = self._extractname(mo)
            keyname = name.lower()
            # BAW: for now the `name' is just the first named color with the
            # rgb values we find.  Later, we might want to make the two word
            # version the `name', or the CapitalizedVersion, etc.
            key = (red, green, blue)
            foundname, aliases = self.__byrgb.get(key, (name, []))
            if foundname != name and foundname not in aliases:
                aliases.append(name)
            self.__byrgb[key] = (foundname, aliases)
            # add to byname lookup
            self.__byname[keyname] = key
            lineno = lineno + 1
    
        def print_summary(self):
        if self.is_evalframe():
            pyop = self.get_pyop()
            if pyop:
                line = pyop.get_truncated_repr(MAX_OUTPUT_LEN)
                write_unicode(sys.stdout, '#%i %s\n' % (self.get_index(), line))
                if not pyop.is_optimized_out():
                    line = pyop.current_line()
                    if line is not None:
                        sys.stdout.write('    %s\n' % line.strip())
            else:
                sys.stdout.write('#%i (unable to read python frame information)\n' % self.get_index())
        else:
            info = self.is_other_python_frame()
            if info:
                sys.stdout.write('#%i %s\n' % (self.get_index(), info))
            else:
                sys.stdout.write('#%i\n' % self.get_index())
    
        def test_contains(self):
        r = range(10)
        self.assertIn(0, r)
        self.assertIn(1, r)
        self.assertIn(5.0, r)
        self.assertNotIn(5.1, r)
        self.assertNotIn(-1, r)
        self.assertNotIn(10, r)
        self.assertNotIn('', r)
        r = range(9, -1, -1)
        self.assertIn(0, r)
        self.assertIn(1, r)
        self.assertIn(5.0, r)
        self.assertNotIn(5.1, r)
        self.assertNotIn(-1, r)
        self.assertNotIn(10, r)
        self.assertNotIn('', r)
        r = range(0, 10, 2)
        self.assertIn(0, r)
        self.assertNotIn(1, r)
        self.assertNotIn(5.0, r)
        self.assertNotIn(5.1, r)
        self.assertNotIn(-1, r)
        self.assertNotIn(10, r)
        self.assertNotIn('', r)
        r = range(9, -1, -2)
        self.assertNotIn(0, r)
        self.assertIn(1, r)
        self.assertIn(5.0, r)
        self.assertNotIn(5.1, r)
        self.assertNotIn(-1, r)
        self.assertNotIn(10, r)
        self.assertNotIn('', r)
    
            y = X.from_buffer_copy(a)
        self.assertEqual(y.c_int, a[0])
        self.assertFalse(y.init_called)
    
            # C code:
        #   int x = 12321;
        #   res = &x
        x = c_int(12321)
        res.contents = x
        self.assertEqual(i.value, 54345)