
        
            if s1.st_dev != s2.st_dev:
        return True     # path/.. on a different device as path
    if s1.st_ino == s2.st_ino:
        return True     # path/.. is the same i-node as path, i.e. path=='/'
    return False

    
        try:
        return json.dumps(result, sort_keys=True, indent=indent, ensure_ascii=False)
    except UnicodeDecodeError:
        return json.dumps(result, sort_keys=True, indent=indent)

    
    
def get_group_vars(groups):
    
        def _node_position_info(self, node):
        # the line number where the previous token has ended (plus empty lines)
        # Add one so that the first line is line 1 rather than line 0
        column = node.start_mark.column + 1
        line = node.start_mark.line + 1
    
        def test_full_jitter(self):
        retries = 5
        seed = 1
    
        def remove(self, key):
        '''Remove the keyed message; raise KeyError if it doesn't exist.'''
        _singlefileMailbox.remove(self, key)
        if key in self._labels:
            del self._labels[key]
    
        def __init__(self):
        # setup variables used for HTML documentation
        self.server_name = 'XML-RPC Server Documentation'
        self.server_documentation = \
            'This server exports the following methods through the XML-RPC '\
            'protocol.'
        self.server_title = 'XML-RPC Server Documentation'
    
        def load(self, uri):
        raise NotImplementedError('haven't written this yet')
    
        def init_test(self):
        self.cur_except = None
        self.expect_set_no = 0
        self.breakpoint_hits = None
        self.expected_list = list(islice(self.expect_set, 0, None, 2))
        self.set_list = list(islice(self.expect_set, 1, None, 2))
    
        def test_open_common(self):
        p = self.cls(BASE)
        with (p / 'fileA').open('r') as f:
            self.assertIsInstance(f, io.TextIOBase)
            self.assertEqual(f.read(), 'this is file A\n')
        with (p / 'fileA').open('rb') as f:
            self.assertIsInstance(f, io.BufferedIOBase)
            self.assertEqual(f.read().strip(), b'this is file A')
        with (p / 'fileA').open('rb', buffering=0) as f:
            self.assertIsInstance(f, io.RawIOBase)
            self.assertEqual(f.read().strip(), b'this is file A')
    
        def test_underscores(self):
        # check underscores
        for lit in VALID_UNDERSCORE_LITERALS:
            if not any(ch in lit for ch in 'xXoObB'):
                self.assertEqual(complex(lit), eval(lit))
                self.assertEqual(complex(lit), complex(lit.replace('_', '')))
        for lit in INVALID_UNDERSCORE_LITERALS:
            if lit in ('0_7', '09_99'):  # octals are not recognized here
                continue
            if not any(ch in lit for ch in 'xXoObB'):
                self.assertRaises(ValueError, complex, lit)