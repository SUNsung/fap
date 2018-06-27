
        
                class myint2(int):
            def __new__(cls, value):
                return int.__new__(cls, value + 1)
    
        >>> harmonic_mean([2.5, 3, 10])  # For an equal investment portfolio.
    3.6
    
        @classmethod
    def fromfile(cls, fileobj):
        if fileobj.read(4).decode() != 'TZif':
            raise ValueError('not a zoneinfo file')
        fileobj.seek(20)
        header = fileobj.read(24)
        tzh = (tzh_ttisgmtcnt, tzh_ttisstdcnt, tzh_leapcnt,
               tzh_timecnt, tzh_typecnt, tzh_charcnt) = struct.unpack('>6l', header)
        transitions = array('i')
        transitions.fromfile(fileobj, tzh_timecnt)
        if sys.byteorder != 'big':
            transitions.byteswap()
    
        def add(self, message):
        '''Add message and return assigned key.'''
        raise NotImplementedError('Method must be implemented by subclass')
    
        objects = []
    libs = ['shell32.lib', 'comdlg32.lib', 'wsock32.lib', 'user32.lib', 'oleaut32.lib']
    for moddefn in moddefns:
        print('# Module', moddefn.name)
        for file in moddefn.sourceFiles:
            base = os.path.basename(file)
            base, ext = os.path.splitext(base)
            objects.append(base + '.obj')
            print(r'$(temp_dir)\%s.obj: '%s'' % (base, file))
            print('\t@$(CC) -c -nologo /Fo$* $(cdl) $(c_debug) /D BUILD_FREEZE', end=' ')
            print(''-I$(pythonhome)/Include'  '-I$(pythonhome)/PC' \\')
            print('\t\t$(cflags) $(cdebug) $(cinclude) \\')
            extra = moddefn.GetCompilerOptions()
            if extra:
                print('\t\t%s \\' % (' '.join(extra),))
            print('\t\t'%s'' % file)
            print()
    
            def remove_from_successors(i0, len=len):
            # If we remove all exits from a free square, we're dead:
            # even if we move to it next, we can't leave it again.
            # If we create a square with one exit, we must visit it next;
            # else somebody else will have to visit it, and since there's
            # only one adjacent, there won't be a way to leave it again.
            # Finally, if we create more than one free square with a
            # single exit, we can only move to one of them next, leaving
            # the other one a dead end.
            ne0 = ne1 = 0
            for i in succs[i0]:
                s = succs[i]
                s.remove(i0)
                e = len(s)
                if e == 0:
                    ne0 += 1
                elif e == 1:
                    ne1 += 1
            return ne0 == 0 and ne1 < 2
    
    
class UserAgentOrderingTest(BaseRobotTest, unittest.TestCase):
    # the order of User-agent should be correct. note
    # that this file is incorrect because 'Googlebot' is a
    # substring of 'Googlebot-Mobile'
    robots_txt = '''\
User-agent: Googlebot
Disallow: /
    
        def can_fetch(self, useragent, url):
        '''using the parsed robots.txt decide if useragent can fetch url'''
        if self.disallow_all:
            return False
        if self.allow_all:
            return True
        # Until the robots.txt file has been read or found not
        # to exist, we must assume that no url is allowable.
        # This prevents false positives when a user erroneously
        # calls can_fetch() before calling read().
        if not self.last_checked:
            return False
        # search for given user agent matches
        # the first match counts
        parsed_url = urllib.parse.urlparse(urllib.parse.unquote(url))
        url = urllib.parse.urlunparse(('','',parsed_url.path,
            parsed_url.params,parsed_url.query, parsed_url.fragment))
        url = urllib.parse.quote(url)
        if not url:
            url = '/'
        for entry in self.entries:
            if entry.applies_to(useragent):
                return entry.allowance(url)
        # try the default entry last
        if self.default_entry:
            return self.default_entry.allowance(url)
        # agent not found ==> access granted
        return True
    
        def _create_opener(self):
        import urllib.request
        return urllib.request.build_opener()
    
    
class Employee:
    pass
    
        @unittest.skipUnless(hasattr(pwd, 'getpwall'),
                         'pwd module does not expose getpwall()')
    def test_expanduser(self):
        P = self.cls
        support.import_module('pwd')
        import pwd
        pwdent = pwd.getpwuid(os.getuid())
        username = pwdent.pw_name
        userhome = pwdent.pw_dir.rstrip('/') or '/'
        # find arbitrary different user (if exists)
        for pwdent in pwd.getpwall():
            othername = pwdent.pw_name
            otherhome = pwdent.pw_dir.rstrip('/')
            if othername != username and otherhome:
                break
        else:
            othername = username
            otherhome = userhome
    
            # With zero-arg super() or an explicit __class__ reference,
        # __classcell__ is the exact cell reference to be populated by
        # type.__new__
        namespace_snapshot = None
        class WithClassRef(metaclass=Meta):
            def f(self):
                return __class__
    
            # issue 3382
        self.assertEqual(format(complex(NAN, NAN), 'f'), 'nan+nanj')
        self.assertEqual(format(complex(1, NAN), 'f'), '1.000000+nanj')
        self.assertEqual(format(complex(NAN, 1), 'f'), 'nan+1.000000j')
        self.assertEqual(format(complex(NAN, -1), 'f'), 'nan-1.000000j')
        self.assertEqual(format(complex(NAN, NAN), 'F'), 'NAN+NANj')
        self.assertEqual(format(complex(1, NAN), 'F'), '1.000000+NANj')
        self.assertEqual(format(complex(NAN, 1), 'F'), 'NAN+1.000000j')
        self.assertEqual(format(complex(NAN, -1), 'F'), 'NAN-1.000000j')
        self.assertEqual(format(complex(INF, INF), 'f'), 'inf+infj')
        self.assertEqual(format(complex(1, INF), 'f'), '1.000000+infj')
        self.assertEqual(format(complex(INF, 1), 'f'), 'inf+1.000000j')
        self.assertEqual(format(complex(INF, -1), 'f'), 'inf-1.000000j')
        self.assertEqual(format(complex(INF, INF), 'F'), 'INF+INFj')
        self.assertEqual(format(complex(1, INF), 'F'), '1.000000+INFj')
        self.assertEqual(format(complex(INF, 1), 'F'), 'INF+1.000000j')
        self.assertEqual(format(complex(INF, -1), 'F'), 'INF-1.000000j')
    
        from pprint import pprint
    pprint(contributions)
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def __init__(self, value):
        self.value = value
    
        def toggle_amfm(self):
        print(u'Switching to FM')
        self.radio.state = self.radio.fmstate
    
    
class _RoutingDelegate(httputil.HTTPMessageDelegate):
    def __init__(self, router, server_conn, request_conn):
        self.server_conn = server_conn
        self.request_conn = request_conn
        self.delegate = None
        self.router = router  # type: Router
    
        @property
    def max_message_size(self):
        '''Maximum allowed message size.
    
        def transform_first_chunk(self, status_code, headers, chunk, finishing):
        # type: (int, httputil.HTTPHeaders, bytes, bool) -> typing.Tuple[int, httputil.HTTPHeaders, bytes] # noqa: E501
        # TODO: can/should this type be inherited from the superclass?
        if 'Vary' in headers:
            headers['Vary'] += ', Accept-Encoding'
        else:
            headers['Vary'] = 'Accept-Encoding'
        if self._gzipping:
            ctype = _unicode(headers.get('Content-Type', '')).split(';')[0]
            self._gzipping = self._compressible_type(ctype) and \
                (not finishing or len(chunk) >= self.MIN_LENGTH) and \
                ('Content-Encoding' not in headers)
        if self._gzipping:
            headers['Content-Encoding'] = 'gzip'
            self._gzip_value = BytesIO()
            self._gzip_file = gzip.GzipFile(mode='w', fileobj=self._gzip_value,
                                            compresslevel=self.GZIP_LEVEL)
            chunk = self.transform_chunk(chunk, finishing)
            if 'Content-Length' in headers:
                # The original content length is no longer correct.
                # If this is the last (and only) chunk, we can set the new
                # content-length; otherwise we remove it and fall back to
                # chunked encoding.
                if finishing:
                    headers['Content-Length'] = str(len(chunk))
                else:
                    del headers['Content-Length']
        return status_code, headers, chunk
    
                # Finish the first two requests and let the next two through
            self.triggers.popleft()()
            self.triggers.popleft()()
            self.wait(condition=lambda: (len(self.triggers) == 2 and
                                         len(seen) == 2))
            self.assertEqual(set(seen), set([0, 1]))
            self.assertEqual(len(client.queue), 0)
    
        .. attribute:: query
    
        @gen_test
    def test_get_with_putters(self):
        q = queues.Queue(1)
        q.put_nowait(0)
        put = q.put(1)
        self.assertEqual(0, (yield q.get()))
        self.assertIsNone((yield put))
    
        # Test if configuration directory exists
    if not os.path.isdir(config_dir):
        print('Creating directory', config_dir)
        os.makedirs(config_dir)
    
    
class TestBTHomeHub5DeviceTracker(unittest.TestCase):
    '''Test BT Home Hub 5 device tracker platform.'''