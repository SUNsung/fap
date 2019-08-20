
        
        PYTHON2_EXCEPTIONS = (
    'ArithmeticError',
    'AssertionError',
    'AttributeError',
    'BaseException',
    'BufferError',
    'BytesWarning',
    'DeprecationWarning',
    'EOFError',
    'EnvironmentError',
    'Exception',
    'FloatingPointError',
    'FutureWarning',
    'GeneratorExit',
    'IOError',
    'ImportError',
    'ImportWarning',
    'IndentationError',
    'IndexError',
    'KeyError',
    'KeyboardInterrupt',
    'LookupError',
    'MemoryError',
    'NameError',
    'NotImplementedError',
    'OSError',
    'OverflowError',
    'PendingDeprecationWarning',
    'ReferenceError',
    'RuntimeError',
    'RuntimeWarning',
    # StandardError is gone in Python 3, so we map it to Exception
    'StopIteration',
    'SyntaxError',
    'SyntaxWarning',
    'SystemError',
    'SystemExit',
    'TabError',
    'TargetScopeError',
    'TypeError',
    'UnboundLocalError',
    'UnicodeDecodeError',
    'UnicodeEncodeError',
    'UnicodeError',
    'UnicodeTranslateError',
    'UnicodeWarning',
    'UserWarning',
    'ValueError',
    'Warning',
    'ZeroDivisionError',
)
    
        def __call__(self, event, args):
        # Avoid recursion when we call id() below
        if event == 'builtins.id':
            return
    
        @unittest.skipUnless(os.link in os.supports_dir_fd, 'test needs dir_fd support in os.link()')
    def test_link_dir_fd(self):
        f = posix.open(posix.getcwd(), posix.O_RDONLY)
        try:
            posix.link(support.TESTFN, support.TESTFN + 'link', src_dir_fd=f, dst_dir_fd=f)
        except PermissionError as e:
            self.skipTest('posix.link(): %s' % e)
        else:
            # should have same inodes
            self.assertEqual(posix.stat(support.TESTFN)[1],
                posix.stat(support.TESTFN + 'link')[1])
        finally:
            posix.close(f)
            support.unlink(support.TESTFN + 'link')
    
        if resp[:3] != '227':
        raise error_reply(resp)
    global _227_re
    if _227_re is None:
        import re
        _227_re = re.compile(r'(\d+),(\d+),(\d+),(\d+),(\d+),(\d+)', re.ASCII)
    m = _227_re.search(resp)
    if not m:
        raise error_proto(resp)
    numbers = m.groups()
    host = '.'.join(numbers[:4])
    port = (int(numbers[4]) << 8) + int(numbers[5])
    return host, port
    
        def date(self):
        '''Process the DATE command.
        Returns:
        - resp: server response if successful
        - date: datetime object
        '''
        resp = self._shortcmd('DATE')
        if not resp.startswith('111'):
            raise NNTPReplyError(resp)
        elem = resp.split()
        if len(elem) != 2:
            raise NNTPDataError(resp)
        date = elem[1]
        if len(date) != 14:
            raise NNTPDataError(resp)
        return resp, _parse_datetime(date, None)
    
            n = 0
        first_time = None
        while not end_event and BW_END not in s:
            _sendto(sock, s, remote_addr)
            s = _recv(sock, packet_size)
            if first_time is None:
                first_time = _time()
            n += 1
        end_time = _time()
    
    
class ByteArraySubclass(bytearray):
    pass
    
        def test_check_encoding_errors(self):
        # bpo-37388: open() and TextIOWrapper must check encoding and errors
        # arguments in dev mode
        mod = self.io.__name__
        filename = __file__
        invalid = 'Boom, Shaka Laka, Boom!'
        code = textwrap.dedent(f'''
            import sys
            from {mod} import open, TextIOWrapper
    
        def test_catch_warnings_recording(self):
        wmod = self.module
        # Ensure warnings are recorded when requested
        with wmod.catch_warnings(module=wmod, record=True) as w:
            self.assertEqual(w, [])
            self.assertIs(type(w), list)
            wmod.simplefilter('always')
            wmod.warn('foo')
            self.assertEqual(str(w[-1].message), 'foo')
            wmod.warn('bar')
            self.assertEqual(str(w[-1].message), 'bar')
            self.assertEqual(str(w[0].message), 'foo')
            self.assertEqual(str(w[1].message), 'bar')
            del w[:]
            self.assertEqual(w, [])
        # Ensure warnings are not recorded when not requested
        orig_showwarning = wmod.showwarning
        with wmod.catch_warnings(module=wmod, record=False) as w:
            self.assertIsNone(w)
            self.assertIs(wmod.showwarning, orig_showwarning)
    
        def test_repr_bound(self):
        async def serve(stream):
            pass
    
    
def test_setitem_raises_incompatible_freq():
    arr = PeriodArray(np.arange(3), freq='D')
    with pytest.raises(IncompatibleFrequency, match='freq'):
        arr[0] = pd.Period('2000', freq='A')
    
        def test_select_dtypes_datetime_with_tz(self):
    
        def test_interp_bad_method(self):
        df = DataFrame(
            {
                'A': [1, 2, np.nan, 4],
                'B': [1, 4, 9, np.nan],
                'C': [1, 2, 3, 5],
                'D': list('abcd'),
            }
        )
        with pytest.raises(ValueError):
            df.interpolate(method='not_a_method')
    
            d1 = [Timestamp(x) for x in ['2016-01-01', '2015-01-01', np.nan, '2016-01-01']]
        d2 = [
            Timestamp(x)
            for x in ['2017-01-01', '2014-01-01', '2016-01-01', '2015-01-01']
        ]
        df = pd.DataFrame({'a': d1, 'b': d2}, index=[0, 1, 2, 3])
    
        slob = slice(
        *idx.slice_locs(
            df.index[5] + timedelta(seconds=30), df.index[15] - timedelta(seconds=30)
        )
    )
    sliced = stacked[slob]
    expected = df[6:15].stack()
    tm.assert_almost_equal(sliced.values, expected.values)
    
            pi1 = period_range(freq='D', start='1/1/2001', end='12/1/2009')
        pi2 = period_range(freq='D', start='12/31/2000', end='11/30/2009')
        assert len(pi1) == len(pi2)
        tm.assert_index_equal(pi1.shift(-1), pi2)
    
            result = abs(rng)
        exp = TimedeltaIndex(
            ['2 days', '1 days', '0 days', '1 days', '2 days'], name='x'
        )
        tm.assert_index_equal(result, exp)
        assert result.freq is None

    
        def _get_obs(self):
        return np.array([self.wealth]), self.rounds
    
        def reset(self):
        self.s = categorical_sample(self.isd, self.np_random)
        self.lastaction = None
        return self.s
    
        def to_jsonable(self, sample_n):
        return [sample.tolist() for sample in sample_n]
    
            self.action_space = spaces.Box(low=np.array([-self.bounds]), high=np.array([self.bounds]),
                                       dtype=np.float32)
        self.observation_space = spaces.Discrete(4)
    
        def step(self, action):
        if action==0: pass
        elif action==1: self.cube_x -= 1
        elif action==2: self.cube_x += 1
        else: assert 0, 'Action %i is out of range' % action
        self.cube_y += 1
        self.step_n += 1