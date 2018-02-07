
        
        
def _py_files(folder):
    return glob.glob(folder + '/*.py') + glob.glob(folder + '/*/*.py')
    
    from alembic import op
import sqlalchemy as sa
    
    # revision identifiers, used by Alembic.
revision = '1d2ddd543133'
down_revision = 'd2424a248d63'
    
    
def downgrade():
    op.drop_table('logs')

    
    
def upgrade():
    # cleanup after: https://github.com/airbnb/superset/pull/1078
    try:
        slices_ibfk_1 = generic_find_constraint_name(
            table='slices', columns={'druid_datasource_id'},
            referenced='datasources', db=db) or 'slices_ibfk_1'
        slices_ibfk_2 = generic_find_constraint_name(
            table='slices', columns={'table_id'},
            referenced='tables', db=db) or 'slices_ibfk_2'
    
    
def upgrade():
    op.add_column('dashboards', sa.Column('json_metadata', sa.Text(), nullable=True))
    
    def downgrade():
    op.drop_column('slices', 'description')

    
            add_accept_handler(listener, accept_callback)
        self.client_stream = IOStream(socket.socket())
        self.addCleanup(self.client_stream.close)
        yield [self.client_stream.connect(('127.0.0.1', port)),
               event.wait()]
        self.io_loop.remove_handler(listener)
        listener.close()
    
    
class QueueBasicTest(AsyncTestCase):
    def test_repr_and_str(self):
        q = queues.Queue(maxsize=1)
        self.assertIn(hex(id(q)), repr(q))
        self.assertNotIn(hex(id(q)), str(q))
        q.get()
    
        def fileno(self):
        return self.reader.fileno()
    
    
@skipIfNonUnix
class TestMultiprocess(unittest.TestCase):
    # These tests verify that the two multiprocess examples from the
    # TCPServer docs work. Both tests start a server with three worker
    # processes, each of which prints its task id to stdout (a single
    # byte, so we don't have to worry about atomicity of the shared
    # stdout stream) and then exits.
    def run_subproc(self, code):
        proc = subprocess.Popen(sys.executable,
                                stdin=subprocess.PIPE,
                                stdout=subprocess.PIPE)
        proc.stdin.write(utf8(code))
        proc.stdin.close()
        proc.wait()
        stdout = proc.stdout.read()
        proc.stdout.close()
        if proc.returncode != 0:
            raise RuntimeError('Process returned %d. stdout=%r' % (
                proc.returncode, stdout))
        return to_unicode(stdout)
    
    import logging
from tornado.curl_httpclient import CurlAsyncHTTPClient
from tornado.simple_httpclient import SimpleAsyncHTTPClient
from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.web import RequestHandler, Application
    
        def __handle_exception(self, typ, value, tb):
        pass
    
        def _on_auth(self, user):
        if not user:
            raise tornado.web.HTTPError(500, 'Facebook auth failed')
        self.set_secure_cookie('fbdemo_user', tornado.escape.json_encode(user))
        self.redirect(self.get_argument('next', '/'))
    
        @classmethod
    def send_updates(cls, chat):
        logging.info('sending message to %d waiters', len(cls.waiters))
        for waiter in cls.waiters:
            try:
                waiter.write_message(chat)
            except:
                logging.error('Error sending message', exc_info=True)
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
    
def main():
    message_center = Provider()
    
        def test_items_recoil(self):
        with ObjectPool(self.sample_queue, True) as pool:
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
    
@coroutine
def coroutine2(target):
    while True:
        request = yield
        if 10 < request <= 20:
            print('request {} handled in coroutine 2'.format(request))
        else:
            target.send(request)
    
    print('Counting to two...')
for number in count_to_two():
    print(number, end=' ')