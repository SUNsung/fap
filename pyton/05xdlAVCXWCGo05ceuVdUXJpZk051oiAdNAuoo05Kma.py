
def flatpage(request, url):
    '''
    Public interface to the flat page view.
    
        def test_from_bytes(self):
        def check(tests, byteorder, signed=False):
            for test, expected in tests.items():
                try:
                    self.assertEqual(
                        int.from_bytes(test, byteorder, signed=signed),
                        expected)
                except Exception as err:
                    raise AssertionError(
                        'failed to convert {0} with byteorder={1!r} and signed={2}'
                        .format(test, byteorder, signed)) from err
    
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
    
        def clean(self):
        '''Delete old files in 'tmp'.'''
        now = time.time()
        for entry in os.listdir(os.path.join(self._path, 'tmp')):
            path = os.path.join(self._path, 'tmp', entry)
            if now - os.path.getatime(path) > 129600:   # 60 * 60 * 36
                os.remove(path)
    
                    # kwnames=()
                result = _testcapi.pyobject_fastcallkeywords(func, args, ())
                self.check_result(result, expected)
    
        def parseWithContext(self, input, cnode, action):
        if action not in self._legal_actions:
            raise ValueError('not a legal action')
        raise NotImplementedError('Haven't written this yet...')
    
        def test_message(self):
        with original_warnings.catch_warnings(record=True,
                module=self.module) as w:
            self.module.simplefilter('once')
            for i in range(4):
                text = 'multi %d' %i  # Different text on each call.
                self.module.warn(text)
                self.assertEqual(str(w[-1].message), text)
                self.assertIs(w[-1].category, UserWarning)