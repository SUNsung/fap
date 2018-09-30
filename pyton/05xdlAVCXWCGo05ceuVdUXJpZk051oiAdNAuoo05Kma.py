
        
            def process_rhs(self, compiler, connection):
        result = super().process_rhs(compiler, connection)
        # Treat None lookup values as null.
        return (''null'', []) if result == ('%s', [None]) else result

    
        def load(self):
        try:
            data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            data = None
    
        For complete documentation on using Sessions in your code, consult
    the sessions documentation that is shipped with Django (also available
    on the Django Web site).
    '''
    objects = SessionManager()
    
    
IPv4 = CheckNetwork('IPv4')
IPv4.urls = [
            'https://www.microsoft.com',
            'https://www.apple.com',
            'https://code.jquery.com',
            'https://cdn.bootcss.com',
            'https://cdnjs.cloudflare.com']
IPv4.triger_check_network()
    
        if len(front.config.GAE_APPIDS):
        xlog.info('GAE APPID          : %s', '|'.join(front.config.GAE_APPIDS))
    else:
        xlog.info('Using public APPID')
    xlog.info('------------------------------------------------------')
    
        deadline = URLFETCH_TIMEOUT
    validate_certificate = bool(int(kwargs.get('validate', 0)))
    accept_encoding = headers.get('Accept-Encoding', '')
    errors = []
    for i in xrange(int(kwargs.get('fetchmax', URLFETCH_MAX))):
        try:
            response = urlfetch.fetch(url, payload, fetchmethod, headers, allow_truncated=False, follow_redirects=False, deadline=deadline, validate_certificate=validate_certificate)
            break
        except apiproxy_errors.OverQuotaError as e:
            time.sleep(5)
        except urlfetch.DeadlineExceededError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            logging.error('DeadlineExceededError(deadline=%s, url=%r)', deadline, url)
            time.sleep(1)
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.DownloadError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            logging.error('DownloadError(deadline=%s, url=%r)', deadline, url)
            time.sleep(1)
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.ResponseTooLargeError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            response = e.response
            logging.error('ResponseTooLargeError(deadline=%s, url=%r) response(%r)', deadline, url, response)
            m = re.search(r'=\s*(\d+)-', headers.get('Range') or headers.get('range') or '')
            if m is None:
                headers['Range'] = 'bytes=0-%d' % int(kwargs.get('fetchmaxsize', URLFETCH_MAXSIZE))
            else:
                headers.pop('Range', '')
                headers.pop('range', '')
                start = int(m.group(1))
                headers['Range'] = 'bytes=%s-%d' % (start, start+int(kwargs.get('fetchmaxsize', URLFETCH_MAXSIZE)))
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.SSLCertificateError as e:
            errors.append('%r, should validate=0 ?' % e)
            logging.error('%r, deadline=%s', e, deadline)
        except Exception as e:
            errors.append(str(e))
            if i == 0 and method == 'GET':
                deadline = URLFETCH_TIMEOUT * 2
    else:
        start_response('500 Internal Server Error', [('Content-Type', 'text/html')])
        error_string = '<br />\n'.join(errors)
        if not error_string:
            logurl = 'https://appengine.google.com/logs?&app_id=%s' % os.environ['APPLICATION_ID']
            error_string = 'Internal Server Error. <p/>try <a href='javascript:window.location.reload(true);'>refresh</a> or goto <a href='%s' target='_blank'>appengine.google.com</a> for details' % logurl
        yield message_html('502 Urlfetch Error', 'Python Urlfetch Error: %r' % method,  error_string)
        raise StopIteration
    
    A tree.RewriteCardinalityException is raised, when the parsers hits a
cardinality mismatch during AST construction. Although this is basically a
bug in your grammar, it can only be detected at runtime.
    
    class MismatchedTreeNodeException(RecognitionException):
    '''@brief The next tree mode does not match the expected type.'''
    
    supports_unicode_filenames = True

    
    
# Return whether a path is absolute.
# Trivial in Posix, harder on Windows.
# For Windows it is absolute if it starts with a slash or backslash (current
# volume), or if a pathname after the volume-letter-and-colon or UNC-resource
# starts with a slash or backslash.
    
        def gethomedir(self, username):
        if not username:
            try:
                return os.environ['HOME']
            except KeyError:
                import pwd
                return pwd.getpwuid(os.getuid()).pw_dir
        else:
            import pwd
            try:
                return pwd.getpwnam(username).pw_dir
            except KeyError:
                raise RuntimeError('Can't determine home directory '
                                   'for %r' % username)
    
            create_file(test_fn1)
        stat1 = os.stat(test_fn1)
        self.assertTrue(self.pathmodule.samestat(stat1, os.stat(test_fn1)))
    
        def test_match_common(self):
        P = self.cls
        # Absolute patterns
        self.assertTrue(P('c:/b.py').match('/*.py'))
        self.assertTrue(P('c:/b.py').match('c:*.py'))
        self.assertTrue(P('c:/b.py').match('c:/*.py'))
        self.assertFalse(P('d:/b.py').match('c:/*.py'))  # wrong drive
        self.assertFalse(P('b.py').match('/*.py'))
        self.assertFalse(P('b.py').match('c:*.py'))
        self.assertFalse(P('b.py').match('c:/*.py'))
        self.assertFalse(P('c:b.py').match('/*.py'))
        self.assertFalse(P('c:b.py').match('c:/*.py'))
        self.assertFalse(P('/b.py').match('c:*.py'))
        self.assertFalse(P('/b.py').match('c:/*.py'))
        # UNC patterns
        self.assertTrue(P('//some/share/a.py').match('/*.py'))
        self.assertTrue(P('//some/share/a.py').match('//some/share/*.py'))
        self.assertFalse(P('//other/share/a.py').match('//some/share/*.py'))
        self.assertFalse(P('//some/share/a/b.py').match('//some/share/*.py'))
        # Case-insensitivity
        self.assertTrue(P('B.py').match('b.PY'))
        self.assertTrue(P('c:/a/B.Py').match('C:/A/*.pY'))
        self.assertTrue(P('//Some/Share/B.Py').match('//somE/sharE/*.pY'))
    
    class ImplementationDetail(Directive):
    
    
def SendEventNotificationAsync( event_name,
                                buffer_number = None,
                                extra_data = None ):
  event = EventNotification( event_name, buffer_number, extra_data )
  event.Start()

    
        for diags in itervalues( self._line_to_diags ):
      # We also want errors to be listed before warnings so that errors aren't
      # hidden by the warnings; Vim won't place a sign over an existing one.
      diags.sort( key = lambda diag: ( diag[ 'kind' ],
                                       diag[ 'location' ][ 'column_num' ] ) )
    
    
def YouCompleteMeInstance( custom_options = {} ):
  '''Defines a decorator function for tests that passes a unique YouCompleteMe
  instance as a parameter. This instance is initialized with the default options
  `DEFAULT_CLIENT_OPTIONS`. Use the optional parameter |custom_options| to give
  additional options and/or override the already existing ones.
    
    from mock import MagicMock
from nose.tools import eq_
from hamcrest import assert_that, has_entries
    
      current_buffer = VimBuffer( 'current_buffer' )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    ycm.ToggleLogs()
    
        '''Simply echoes the msg ids'''
    
        def test_am_station_overflow_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
        def setReporter(self, reporter):
        self._reporter = reporter
    
            return transaction
    
        @property
    def data(self):
        return self._data
    
    
class Specification(object):
    def and_specification(self, candidate):
        raise NotImplementedError()
    
        def scan(self):
        '''Scan the dial to the next station'''
        self.pos += 1
        if self.pos == len(self.stations):
            self.pos = 0
        print(u'Scanning... Station is %s %s' % (self.stations[self.pos], self.name))
    
        def __str__(self):
        return 'Dog'