
        
        
collect_ignore = [
    # deprecated or moved modules
    'scrapy/conf.py',
    'scrapy/stats.py',
    'scrapy/project.py',
    'scrapy/utils/decorator.py',
    'scrapy/statscol.py',
    'scrapy/squeue.py',
    'scrapy/log.py',
    'scrapy/dupefilter.py',
    'scrapy/command.py',
    'scrapy/linkextractor.py',
    'scrapy/spider.py',
    
        def render(self, request):
        now = time()
        delta = now - self.lasttime
    
            parser.add_option_group(group)
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.linkextractors import LinkExtractor
    
    # revision identifiers, used by Alembic.
revision = '1a48a5411020'
down_revision = '289ce07647b'
    
    Revision ID: 2591d77e9831
Revises: 12d55656cbca
Create Date: 2015-12-15 17:02:45.128709
    
        try:
        with op.batch_alter_table('slices') as batch_op:
            batch_op.add_column(sa.Column(
                'table_id', mysql.INTEGER(display_width=11),
                autoincrement=False, nullable=True))
            batch_op.add_column(sa.Column(
                'druid_datasource_id', sa.Integer(), autoincrement=False,
                nullable=True))
            batch_op.create_foreign_key(
                'slices_ibfk_1', 'datasources', ['druid_datasource_id'],
                ['id'])
            batch_op.create_foreign_key(
                'slices_ibfk_2', 'tables', ['table_id'], ['id'])
    except Exception as e:
        logging.warning(str(e))
    
    from alembic import op
import sqlalchemy as sa
    
            i = myint2.from_bytes(b'\x01', 'big')
        self.assertIs(type(i), myint2)
        self.assertEqual(i, 2)
    
            self.assertTrue(self.dialog.create_entries.called)
        self.assertTrue(self.dialog.create_option_buttons.called)
        self.assertTrue(self.dialog.create_other_buttons.called)
        self.assertTrue(self.dialog.create_command_buttons.called)
    
        @unittest.skipIf(sys.platform.startswith('aix'),
                     'bpo-29972: broken test on AIX')
    def test_POT_Creation_Date(self):
        ''' Match the date format from xgettext for POT-Creation-Date '''
        from datetime import datetime
        with temp_cwd(None) as cwd:
            assert_python_ok(self.script)
            with open('messages.pot') as fp:
                data = fp.read()
            header = self.get_header(data)
            creationDate = header['POT-Creation-Date']
    
        Note that Differ makes no claim to produce a *minimal* diff.  To the
    contrary, minimal diffs are often counter-intuitive, because they synch
    up anywhere possible, sometimes accidental matches 100 pages apart.
    Restricting synch points to contiguous matches preserves some notion of
    locality, at the occasional cost of producing a longer diff.
    
    simple_escapes = {'a': '\a',
                  'b': '\b',
                  'f': '\f',
                  'n': '\n',
                  'r': '\r',
                  't': '\t',
                  'v': '\v',
                  ''': ''',
                  ''': ''',
                  '\\': '\\'}
    
    class NNTPDataError(NNTPError):
    '''Error in response data'''
    pass
    
        def acceptNode(self, element):
        return self.FILTER_ACCEPT
    
            # C type static method: METH_FASTCALL | METH_CLASS
        (int.from_bytes, (b'\x01\x00',), {'byteorder': 'little'}, 1),
        (int.from_bytes, (), {'bytes': b'\x01\x00', 'byteorder': 'little'}, 1),
    )
    
        def __init__(self, addr, requestHandler=SimpleXMLRPCRequestHandler,
                 logRequests=True, allow_none=False, encoding=None,
                 bind_and_activate=True, use_builtin_types=False):
        self.logRequests = logRequests
    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
                def data_received(self, data):
                body.append(data)
    
    
class WSGIContainerTest(AsyncHTTPTestCase):
    def wsgi_app(self, environ, start_response):
        status = '200 OK'
        response_headers = [('Content-Type', 'text/plain')]
        start_response(status, response_headers)
        return [b'Hello world!']
    
            count = 0
        while 1:
            count += 1
            # Bind to a local port; for efficiency, let the OS pick
            # a free port for us.
            # Unfortunately, stress tests showed that we may not
            # be able to connect to that port ('Address already in
            # use') despite that the OS picked it.  This appears
            # to be a race bug in the Windows socket implementation.
            # So we loop until a connect() succeeds (almost always
            # on the first try).  See the long thread at
            # http://mail.zope.org/pipermail/zope/2005-July/160433.html
            # for hideous details.
            a = socket.socket()
            set_close_exec(a.fileno())
            a.bind(('127.0.0.1', 0))
            a.listen(1)
            connect_address = a.getsockname()  # assigned (host, port) pair
            try:
                self.writer.connect(connect_address)
                break    # success
            except socket.error as detail:
                if (not hasattr(errno, 'WSAEADDRINUSE') or
                        errno_from_exception(detail) != errno.WSAEADDRINUSE):
                    # 'Address already in use' is the only error
                    # I've seen on two WinXP Pro SP2 boxes, under
                    # Pythons 2.3.5 and 2.4.1.
                    raise
                # (10048, 'Address already in use')
                # assert count <= 2 # never triggered in Tim's tests
                if count >= 10:  # I've never seen it go above 2
                    a.close()
                    self.writer.close()
                    raise socket.error('Cannot bind trigger!')
                # Close `a` and try again.  Note:  I originally put a short
                # sleep() here, but it didn't appear to help or hurt.
                a.close()