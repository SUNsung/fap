import shutil
    
            def _find_spec(key):
            m = re.search(
                r'(?m)^//\s*%s:\s*(.*?)\n' % re.escape(key), as_content)
            if not m:
                raise ValueError('Cannot find %s in %s' % (key, testfile))
            return json.loads(m.group(1))
    
            if check_executable('mplayer', ['-h']):
            args = [
                'mplayer', '-really-quiet', '-vo', 'null', '-vc', 'dummy',
                '-dumpstream', '-dumpfile', tmpfilename, url]
        elif check_executable('mpv', ['-h']):
            args = [
                'mpv', '-really-quiet', '--vo=null', '--stream-dump=' + tmpfilename, url]
        else:
            self.report_error('MMS or RTSP download detected but neither 'mplayer' nor 'mpv' could be run. Please install any.')
            return False
    
    import re
    
            return {
            'id': flv_id,
            'url': rtmp_url,
            'ext': 'flv',
            'no_resume': True,
            'title': title,
            'description': description,
            'duration': duration,
            'view_count': view_count,
            'comment_count': comment_count,
            'uploader': uploader,
            'upload_date': upload_date,
        }

    
            Keyword:                   'bold #004461',   # class: 'k'
        Keyword.Constant:          'bold #004461',   # class: 'kc'
        Keyword.Declaration:       'bold #004461',   # class: 'kd'
        Keyword.Namespace:         'bold #004461',   # class: 'kn'
        Keyword.Pseudo:            'bold #004461',   # class: 'kp'
        Keyword.Reserved:          'bold #004461',   # class: 'kr'
        Keyword.Type:              'bold #004461',   # class: 'kt'
    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary (will be form-encoded), bytes, or file-like object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    
def unicode_is_ascii(u_string):
    '''Determine if unicode string only contains ASCII characters.
    
    '''
requests.compat
~~~~~~~~~~~~~~~
    
    
class RequestsDependencyWarning(RequestsWarning):
    '''An imported dependency doesn't match the expected version range.'''
    pass

    
        # Informational.
    100: ('continue',),
    101: ('switching_protocols',),
    102: ('processing',),
    103: ('checkpoint',),
    122: ('uri_too_long', 'request_uri_too_long'),
    200: ('ok', 'okay', 'all_ok', 'all_okay', 'all_good', '\\o/', '✓'),
    201: ('created',),
    202: ('accepted',),
    203: ('non_authoritative_info', 'non_authoritative_information'),
    204: ('no_content',),
    205: ('reset_content', 'reset'),
    206: ('partial_content', 'partial'),
    207: ('multi_status', 'multiple_status', 'multi_stati', 'multiple_stati'),
    208: ('already_reported',),
    226: ('im_used',),
    
    
def get_landscape_members_data():
    return _landscape_client().get_computers()
    
    # Backwards compat only
try:
    from hashlib import md5 as _md5
except ImportError:
    try:
        from md5 import md5 as _md5
    except ImportError:
        # Assume we're running in FIPS mode here
        _md5 = None
    
        if args.run_id.startswith(old_runs_prefix):
        args.run_id = args.run_id[len(old_runs_prefix):]
    
        result = response.json()
    
    # Components that match a numeric or alphanumeric begin:end or begin:end:step
# range expression inside square brackets.
    
    AnsibleDumper.add_representer(
    AnsibleUnicode,
    represent_unicode,
)
    
        def setUp(self):
        from acme.errors import PollError
        self.timeout = PollError(
            exhausted=set([mock.sentinel.AR]),
            updated={})
        self.invalid = PollError(exhausted=set(), updated={
            mock.sentinel.AR: mock.sentinel.AR2})
    
    # If true, do not generate a @detailmenu in the 'Top' node's menu.
#texinfo_no_detailmenu = False
    
    # If true, links to the reST sources are added to the pages.
#html_show_sourcelink = True
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    def test_smtp_success(self, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.connect.call_count, 1)
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
    
        # Implement all methods from IAuthenticator, remembering to add
    # 'self' as first argument, e.g. def prepare(self)...
    
        try:
        # hide console in MS windows
        startupinfo = subprocess.STARTUPINFO()
        startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startupinfo.wShowWindow = subprocess.SW_HIDE
    
            if 'Transfer-Encoding' in response_headers:
            length = 0
            while True:
                try:
                    data = response.read(8192)
                except httplib.IncompleteRead, e:
                    data = e.partial
                except Exception as e:
                    google_ip.report_connect_closed(response.ssl_sock.ip, 'receive fail')
                    xlog.warn('direct_handler.handler send Transfer-Encoding t:%d e:%r %s/%s', time.time()-time_request, e, host, url)
                    response.close()
                    return
    
        version_string = 'Version:%d-%d; Build:%d; Platform:%d; CSD:%s; ServicePack:%d-%d; Suite:%d; ProductType:%d' %  (
        os_version.dwMajorVersion, os_version.dwMinorVersion,
        os_version.dwBuildNumber,
        os_version.dwPlatformId,
        os_version.szCSDVersion,
        os_version.wServicePackMajor, os_version.wServicePackMinor,
        os_version.wSuiteMask,
        os_version.wReserved
    )
    
        def setInputStream(self, input):
        '''@brief From what character stream was this token created.
    
        objects = session.query(Slice).all()
    objects += session.query(Dashboard).all()
    for obj in objects:
        if obj.created_by and obj.created_by not in obj.owners:
            obj.owners.append(obj.created_by)
        session.commit()
    session.close()
    
    # revision identifiers, used by Alembic.
revision = '289ce07647b'
down_revision = '2929af7925ed'
    
    def upgrade():
    op.add_column('datasources', sa.Column('offset', sa.Integer(), nullable=True))
    op.add_column('tables', sa.Column('offset', sa.Integer(), nullable=True))
    
    
def downgrade():
    op.drop_column('logs', 'slice_id')
    op.drop_column('logs', 'dashboard_id')

    
    
def downgrade():
    op.drop_column('dashboards', 'json_metadata')

    
    
def upgrade():
    op.create_table('dashboard_user',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('dashboard_id', sa.Integer(), nullable=True),
        sa.ForeignKeyConstraint(['dashboard_id'], [u'dashboards.id'], ),
        sa.ForeignKeyConstraint(['user_id'], [u'ab_user.id'], ),
        sa.PrimaryKeyConstraint('id'),
    )
    op.create_table('slice_user',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('slice_id', sa.Integer(), nullable=True),
        sa.ForeignKeyConstraint(['slice_id'], [u'slices.id'], ),
        sa.ForeignKeyConstraint(['user_id'], [u'ab_user.id'], ),
        sa.PrimaryKeyConstraint('id'),
    )
    
    
def upgrade():
    op.add_column('query', sa.Column('results_key', sa.String(length=64), nullable=True))
    
    
class TestDecode:
    def test_decimal(self):
        rval = self.loads('1.1', parse_float=decimal.Decimal)
        self.assertTrue(isinstance(rval, decimal.Decimal))
        self.assertEqual(rval, decimal.Decimal('1.1'))
    
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
    
    import os
import sys
import unittest
    
            ``object_pairs_hook``, if specified will be called with the result of
        every JSON object decoded with an ordered list of pairs.  The return
        value of ``object_pairs_hook`` will be used instead of the ``dict``.
        This feature can be used to implement custom decoders that rely on the
        order that the key and value pairs are decoded (for example,
        collections.OrderedDict will remember the order of insertion). If
        ``object_hook`` is also defined, the ``object_pairs_hook`` takes
        priority.
    
    class ExternalClashError(Error):
    '''Another process caused an action to fail.'''
    
            try:
            # Get arguments by reading body of request.
            # We read this in chunks to avoid straining
            # socket.read(); around the 10 or 15Mb mark, some platforms
            # begin to have problems (bug #792570).
            max_chunk_size = 10*1024*1024
            size_remaining = int(self.headers['content-length'])
            L = []
            while size_remaining:
                chunk_size = min(size_remaining, max_chunk_size)
                chunk = self.rfile.read(chunk_size)
                if not chunk:
                    break
                L.append(chunk)
                size_remaining -= len(L[-1])
            data = b''.join(L)
    
    
def _sizeof_void_p():
    return gdb.lookup_type('void').pointer().sizeof
    
        def test_fortran_contiguous(self):
        try:
            import _testbuffer
        except ImportError as err:
            self.skipTest(str(err))
        flags = _testbuffer.ND_WRITABLE | _testbuffer.ND_FORTRAN
        array = _testbuffer.ndarray(
            [97] * 16, format='B', shape=[4, 4], flags=flags)
        with self.assertRaisesRegex(TypeError, 'not C contiguous'):
            (c_char * 16).from_buffer(array)
        array = memoryview(array)
        self.assertTrue(array.f_contiguous)
        self.assertFalse(array.c_contiguous)
        with self.assertRaisesRegex(TypeError, 'not C contiguous'):
            (c_char * 16).from_buffer(array)
    
    
class WSGIContainerTest(AsyncHTTPTestCase):
    def wsgi_app(self, environ, start_response):
        status = '200 OK'
        response_headers = [('Content-Type', 'text/plain')]
        start_response(status, response_headers)
        return [b'Hello world!']
    
            # Make sure the tornado module under test is available to the test
        # application
        pythonpath = os.getcwd()
        if 'PYTHONPATH' in os.environ:
            pythonpath += os.pathsep + os.environ['PYTHONPATH']
    
            class TestServer(TCPServer):
            @gen.coroutine
            def handle_stream(self, stream, address):
                server.stop()
                yield stream.read_until_close()
    
        logging.warning('Starting fetch with curl client')
    curl_client = CurlAsyncHTTPClient()
    curl_client.fetch('http://localhost:%d/' % options.port,
                      callback=callback)
    IOLoop.current().start()
    
    
def generate_all_reports(ref=None, files=None):
    '''Run the tools on the specified files and return errors / warnings.'''
    if ref:
        check_ref_out(ref)
    
        if setup_globals:
        g.setup_complete()
    
    def set_extension(environ, ext):
    environ['extension'] = ext
    environ['render_style'], environ['content_type'] = extension_mapping[ext]

    
        def current_loid_obj(self):
        return self.stacked_proxy_safe_get(c, 'loid')
    
        @require_oauth2_scope('creddits')
    @validate(
        VUser(),
        target=VByName('fullname'),
    )
    @api_doc(
        api_section.gold,
        uri='/api/v1/gold/gild/{fullname}',
    )
    def POST_gild(self, target):
        if not isinstance(target, (Comment, Link)):
            err = RedditError('NO_THING_ID')
            self.on_validation_error(err)