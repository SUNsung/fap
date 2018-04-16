
        
            # To avoid having to always use the '|safe' filter in flatpage templates,
    # mark the title and content as already safe (since they are raw HTML
    # content in the first place).
    f.title = mark_safe(f.title)
    f.content = mark_safe(f.content)
    
        def test_create_entries(self):
        self.dialog.top = self.root
        self.dialog.row = 0
        self.engine.setpat('hello')
        self.dialog.create_entries()
        self.assertIn(self.dialog.ent.get(), 'hello')
    
        def test_delitem(self):
        n = 500         # O(n**2) test, don't make this too big
        d = deque(range(n))
        self.assertRaises(IndexError, d.__delitem__, -n-1)
        self.assertRaises(IndexError, d.__delitem__, n)
        for i in range(n):
            self.assertEqual(len(d), n-i)
            j = random.randrange(-len(d), len(d))
            val = d[j]
            self.assertIn(val, d)
            del d[j]
            self.assertNotIn(val, d)
        self.assertEqual(len(d), 0)
    
        def set_sequences(self, sequences):
        '''Set sequences using the given name-to-key-list dictionary.'''
        f = open(os.path.join(self._path, '.mh_sequences'), 'r+', encoding='ASCII')
        try:
            os.close(os.open(f.name, os.O_WRONLY | os.O_TRUNC))
            for name, keys in sequences.items():
                if len(keys) == 0:
                    continue
                f.write(name + ':')
                prev = None
                completing = False
                for key in sorted(set(keys)):
                    if key - 1 == prev:
                        if not completing:
                            completing = True
                            f.write('-')
                    elif completing:
                        completing = False
                        f.write('%s %s' % (prev, key))
                    else:
                        f.write(' %s' % key)
                    prev = key
                if completing:
                    f.write(str(prev) + '\n')
                else:
                    f.write('\n')
        finally:
            _sync_close(f)
    
    def _parse_overview_fmt(lines):
    '''Parse a list of string representing the response to LIST OVERVIEW.FMT
    and return a list of header/metadata names.
    Raises NNTPDataError if the response is not compliant
    (cf. RFC 3977, section 8.4).'''
    fmt = []
    for line in lines:
        if line[0] == ':':
            # Metadata name (e.g. ':bytes')
            name, _, suffix = line[1:].partition(':')
            name = ':' + name
        else:
            # Header name (e.g. 'Subject:' or 'Xref:full')
            name, _, suffix = line.partition(':')
        name = name.lower()
        name = _OVERVIEW_FMT_ALTERNATIVES.get(name, name)
        # Should we do something with the suffix?
        fmt.append(name)
    defaults = _DEFAULT_OVERVIEW_FMT
    if len(fmt) < len(defaults):
        raise NNTPDataError('LIST OVERVIEW.FMT response too short')
    if fmt[:len(defaults)] != defaults:
        raise NNTPDataError('LIST OVERVIEW.FMT redefines default fields')
    return fmt
    
        whatToShow = NodeFilter.SHOW_ALL
    
        print('$(temp_dir):')
    print(r'  if not exist $(temp_dir)\. mkdir $(temp_dir)')
    print()
    
        def __init__(self, func, args, kwds):
        self.gen = func(*args, **kwds)
        self.func, self.args, self.kwds = func, args, kwds
        # Issue 19330: ensure context manager instances have good docstrings
        doc = getattr(func, '__doc__', None)
        if doc is None:
            doc = type(self).__doc__
        self.__doc__ = doc
        # Unfortunately, this still doesn't provide good help output when
        # inspecting the created context manager instances, since pydoc
        # currently bypasses the instance docstring and shows the docstring
        # for the class instead.
        # See http://bugs.python.org/issue19404 for more details.
    
            # Alternate doesn't make a difference for these, they format the same with or without it
        self.assertEqual(format(1+1j, '.1e'),  '1.0e+00+1.0e+00j')
        self.assertEqual(format(1+1j, '#.1e'), '1.0e+00+1.0e+00j')
        self.assertEqual(format(1+1j, '.1f'),  '1.0+1.0j')
        self.assertEqual(format(1+1j, '#.1f'), '1.0+1.0j')