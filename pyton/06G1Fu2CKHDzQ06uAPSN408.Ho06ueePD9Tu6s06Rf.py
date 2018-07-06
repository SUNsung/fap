
        
        
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
        def test_maxlen(self):
        self.assertRaises(ValueError, deque, 'abc', -1)
        self.assertRaises(ValueError, deque, 'abc', -2)
        it = iter(range(10))
        d = deque(it, maxlen=3)
        self.assertEqual(list(it), [])
        self.assertEqual(repr(d), 'deque([7, 8, 9], maxlen=3)')
        self.assertEqual(list(d), [7, 8, 9])
        self.assertEqual(d, deque(range(10), 3))
        d.append(10)
        self.assertEqual(list(d), [8, 9, 10])
        d.appendleft(7)
        self.assertEqual(list(d), [7, 8, 9])
        d.extend([10, 11])
        self.assertEqual(list(d), [9, 10, 11])
        d.extendleft([8, 7])
        self.assertEqual(list(d), [7, 8, 9])
        d = deque(range(200), maxlen=10)
        d.append(d)
        support.unlink(support.TESTFN)
        fo = open(support.TESTFN, 'w')
        try:
            fo.write(str(d))
            fo.close()
            fo = open(support.TESTFN, 'r')
            self.assertEqual(fo.read(), repr(d))
        finally:
            fo.close()
            support.unlink(support.TESTFN)
    
        def _getlongresp(self, file=None):
        '''Internal: get a response plus following text from the server.
        Raise various errors if the response indicates an error.
    
    def ISNONTERMINAL(x):
    return x >= NT_OFFSET
    
        def test_oldargs1_2_ext(self):
        try:
            [].count(*(1, 2))
        except TypeError:
            pass
        else:
            raise RuntimeError
    
        def resource_path(self, resource):
        # All resources are in the zip file, so there is no path to the file.
        # Raising FileNotFoundError tells the higher level API to extract the
        # binary data and create a temporary file.
        raise FileNotFoundError
    
        # Block until the barrier is ready for us, or raise an exception
    # if it is broken.
    def _enter(self):
        while self._state in (-1, 1):
            # It is draining or resetting, wait until done
            self._cond.wait()
        #see if the barrier is in a broken state
        if self._state < 0:
            raise BrokenBarrierError
        assert self._state == 0
    
            class complex1(complex):
            '''Test usage of __complex__() with a __new__() method'''
            def __new__(self, value=0j):
                return complex.__new__(self, 2*value)
            def __complex__(self):
                return self