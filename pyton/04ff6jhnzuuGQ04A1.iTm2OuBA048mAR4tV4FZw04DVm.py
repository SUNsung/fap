    return request('post', url, data=data, json=json, **kwargs)
    
    
class Server(threading.Thread):
    '''Dummy server using for unit testing'''
    WAIT_EVENT_TIMEOUT = 5
    
            This attribute checks if the status code of the response is between
        400 and 600 to see if there was a client error or a server error. If
        the status code, is between 200 and 400, this will return True. This
        is **not** a check to see if the response code is ``200 OK``.
        '''
        return self.ok
    
        def doc(code):
        names = ', '.join('``%s``' % n for n in _codes[code])
        return '* %d: %s' % (code, names)
    
    
@pytest.mark.parametrize('var,scheme', _proxy_combos)
def test_use_proxy_from_environment(httpbin, var, scheme):
    url = '{0}://httpbin.org'.format(scheme)
    fake_proxy = Server()  # do nothing with the requests; just close the socket
    with fake_proxy as (host, port):
        proxy_url = 'socks5://{0}:{1}'.format(host, port)
        kwargs = {var: proxy_url}
        with override_environ(**kwargs):
            # fake proxy's lack of response will cause a ConnectionError
            with pytest.raises(requests.exceptions.ConnectionError):
                requests.get(url)
    
        def create_widgets(self):
        super().create_widgets()
        frame = self.frame
        pathlabel = Label(frame, anchor='w', justify='left',
                          text='Help File Path: Enter URL or browse for file')
        self.pathvar = StringVar(self, self.filepath)
        self.path = Entry(frame, textvariable=self.pathvar, width=40)
        browse = Button(frame, text='Browse', width=8,
                        command=self.browse_file)
        self.path_error = Label(frame, text=' ', foreground='red',
                                font=self.error_font)
    
            self.assertEqual(deque() * 0, deque())
        self.assertEqual(deque() * 1, deque())
        self.assertEqual(deque() * 5, deque())
    
        def check_keys_reuse(self, source, loads):
        rval = loads(source)
        (a, b), (c, d) = sorted(rval[0]), sorted(rval[1])
        self.assertIs(a, c)
        self.assertIs(b, d)
    
    class TZInfo:
    def __init__(self, transitions, type_indices, ttis, abbrs):
        self.transitions = transitions
        self.type_indices = type_indices
        self.ttis = ttis
        self.abbrs = abbrs
    
    
    {        if nextchar == '}':
            break
        elif nextchar != ',':
            raise JSONDecodeError('Expecting ',' delimiter', s, end - 1)
        end = _w(s, end).end()
        nextchar = s[end:end + 1]
        end += 1
        if nextchar != ''':
            raise JSONDecodeError(
                'Expecting property name enclosed in double quotes', s, end - 1)
    if object_pairs_hook is not None:
        result = object_pairs_hook(pairs)
        return result, end
    pairs = dict(pairs)
    if object_hook is not None:
        pairs = object_hook(pairs)
    return pairs, end
    
            # 'MODE READER' is sometimes necessary to enable 'reader' mode.
        # However, the order in which 'MODE READER' and 'AUTHINFO' need to
        # arrive differs between some NNTP servers. If _setreadermode() fails
        # with an authorization failed error, it will set this to True;
        # the login() routine will interpret that as a request to try again
        # after performing its normal function.
        # Enable only if we're not already in READER mode anyway.
        self.readermode_afterauth = False
        if readermode and 'READER' not in self._caps:
            self._setreadermode()
            if not self.readermode_afterauth:
                # Capabilities might have changed after MODE READER
                self._caps = None
                self.getcapabilities()
    
    subsystem_details = {
    # -s flag        : (C entry point template), (is it __main__?), (is it a DLL?)
    'console'        : (None,                    1,                 0),
    'windows'        : (WINMAINTEMPLATE,         1,                 0),
    'service'        : (SERVICETEMPLATE,         0,                 0),
    'com_dll'        : ('',                      0,                 1),
}
    
        def unique_names(self):
        # sorted
        if not self.__allnames:
            self.__allnames = []
            for name, aliases in self.__byrgb.values():
                self.__allnames.append(name)
            self.__allnames.sort(key=str.lower)
        return self.__allnames
    
            # C type static method: METH_FASTCALL | METH_CLASS
        (int.from_bytes, (b'\x01\x00',), {'byteorder': 'little'}, 1),
        (int.from_bytes, (), {'bytes': b'\x01\x00', 'byteorder': 'little'}, 1),
    )
    
            out.write(self.safe_tp_name())
        self.write_field_repr('args', out, visited)
    
            a = sys.maxsize**10
        b = 0
        c = -2*sys.maxsize
        expected_len = 1 + (b - a) // c
        x = range(a, b, c)
        self.assertIn(a, x)
        self.assertNotIn(b, x)
        self.assertRaises(OverflowError, len, x)
        self.assertTrue(x)
        self.assertEqual(_range_len(x), expected_len)
        self.assertEqual(x[0], a)
        idx = sys.maxsize+1
        self.assertEqual(x[idx], a+(idx*c))
        self.assertEqual(x[idx:idx+1][0], a+(idx*c))
        with self.assertRaises(IndexError):
            x[-expected_len-1]
        with self.assertRaises(IndexError):
            x[expected_len]
    
        test = CatalogInstance('param_value_1')
    test.main_method()
    
    
def timeit(func):
    
        This is, in fact, just syntactic sugar around a memento closure.
    '''
    deep = False
    states = []