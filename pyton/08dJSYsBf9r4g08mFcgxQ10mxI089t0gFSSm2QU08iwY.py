
        
            def __get__(self, obj, type=None):
        if obj is None:
            return self
        rv = obj.config[self.__name__]
        if self.get_converter is not None:
            rv = self.get_converter(rv)
        return rv
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
    
    {        Generic:                   '#000000',        # class: 'g'
        Generic.Deleted:           '#a40000',        # class: 'gd'
        Generic.Emph:              'italic #000000', # class: 'ge'
        Generic.Error:             '#ef2929',        # class: 'gr'
        Generic.Heading:           'bold #000080',   # class: 'gh'
        Generic.Inserted:          '#00A000',        # class: 'gi'
        Generic.Output:            '#888',           # class: 'go'
        Generic.Prompt:            '#745334',        # class: 'gp'
        Generic.Strong:            'bold #000000',   # class: 'gs'
        Generic.Subheading:        'bold #800080',   # class: 'gu'
        Generic.Traceback:         'bold #a40000',   # class: 'gt'
    }

    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
    
@pytest.mark.skipif(sys.version_info < (2,7), reason='Only run on Python 2.7+')
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
    
def _check_cryptography(cryptography_version):
    # cryptography < 1.3.4
    try:
        cryptography_version = list(map(int, cryptography_version.split('.')))
    except ValueError:
        return
    
    
@pytest.mark.parametrize(
    'value, expected', (
        ('T', 'T'),
        (b'T', 'T'),
        (u'T', 'T'),
    ))
def test_to_native_string(value, expected):
    assert to_native_string(value) == expected
    
        :rtype: str
    '''
    return '%s/%s' % (name, __version__)
    
    site_info = 'Mixcloud.com'
download = mixcloud_download
download_playlist = playlist_not_supported('mixcloud')

    
    __all__ = ['showroom_download']
    
        '''
    var = pvariance(data, mu)
    try:
        return var.sqrt()
    except AttributeError:
        return math.sqrt(var)

    
        def test_add(self):
        d = deque()
        e = deque('abc')
        f = deque('def')
        self.assertEqual(d + d, deque())
        self.assertEqual(e + f, deque('abcdef'))
        self.assertEqual(e + e, deque('abcabc'))
        self.assertEqual(e + d, deque('abc'))
        self.assertEqual(d + e, deque('abc'))
        self.assertIsNot(d + d, deque())
        self.assertIsNot(e + d, deque('abc'))
        self.assertIsNot(d + e, deque('abc'))
    
            decl = title + argspec + (note and self.grey(
               '<font face='helvetica, arial'>%s</font>' % note))
    
        def test_parts(self):
        P = self.cls
        p = P('c:a/b')
        parts = p.parts
        self.assertEqual(parts, ('c:', 'a', 'b'))
        p = P('c:/a/b')
        parts = p.parts
        self.assertEqual(parts, ('c:\\', 'a', 'b'))
        p = P('//a/b/c/d')
        parts = p.parts
        self.assertEqual(parts, ('\\\\a\\b\\', 'c', 'd'))
    
    
class ImportTracebackTests(unittest.TestCase):
    
    @dataclasses.dataclass
class CV:
    T_CV4 = typing.ClassVar
    cv0: typing.ClassVar[int] = 20
    cv1: typing.ClassVar = 30
    cv2: T_CV2
    cv3: T_CV3
    not_cv4: T_CV4  # When using string annotations, this field is not recognized as a ClassVar.
    
    from concurrent.futures import (as_completed, ThreadPoolExecutor,
                                ProcessPoolExecutor)
    
    
def KeywordsFromSyntaxListOutput_ContainedArgAllowed_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
phpFunctions   xxx contained gzclose yaz_syntax html_entity_decode fbsql_read_blob png2wbmp mssql_init cpdf_set_title gztell fbsql_insert_id empty cpdf_restore mysql_field_type closelog swftext ldap_search curl_errno gmp_div_r mssql_data_seek getmyinode printer_draw_pie mcve_initconn ncurses_getmaxyx defined
                   contained replace_child has_attributes specified insertdocument assign node_name hwstat addshape get_attribute_node html_dump_mem userlist
                   links to Function''' ), # noqa
              has_items( 'gzclose', 'userlist', 'ldap_search' ) )
    
      eq_( request.Response(), {
    'completions': results,
    'completion_start_column': 1
  } )
    
    
def BuildYcmdLibs( args ):
  if not args.skip_build:
    subprocess.check_call( [
      sys.executable,
      p.join( DIR_OF_THIS_SCRIPT, 'third_party', 'ycmd', 'build.py' )
    ] )
    
        exception = RuntimeError( 'Check client handles exception' )
    with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseException( exception ) ):
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( True, None, exception ) )
    
    def api_type(subtype = ''):
    return 'api-' + subtype if subtype else 'api'
    
        @require_oauth2_scope('read')
    @validate(
        user=VAccountByName('username'),
    )
    @api_doc(
        section=api_section.users,
        uri='/api/v1/user/{username}/trophies',
    )
    def GET_usertrophies(self, user):
        '''Return a list of trophies for the a given user.'''
        return self.api_wrapper(get_usertrophies(user))
    
        @validate(
        container_id=VGTMContainerId('id')
    )
    def GET_gtm(self, container_id):
        return GoogleTagManager(container_id=container_id).render()
