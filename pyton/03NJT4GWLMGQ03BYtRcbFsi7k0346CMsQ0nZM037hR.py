
        
            def _finish(self, request):
        self.concurrent -= 1
        if not request.finished and not request._disconnected:
            request.finish()
    
        def help(self):
        '''An extensive help for the command. It will be shown when using the
        'help' command. It can contain newlines, since not post-formatting will
        be applied to its contents.
        '''
        return self.long_desc()
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        def deploy_cert(self, domain, cert_path, key_path, chain_path=None,
                    fullchain_path=None):
        '''Installs cert'''
        cert_path, key_path, chain_path = self.copy_certs_and_keys(
            cert_path, key_path, chain_path)
        self._configurator.deploy_cert(
            domain, cert_path, key_path, chain_path, fullchain_path)

    
    # If true, SmartyPants will be used to convert quotes and dashes to
# typographically correct entities.
#html_use_smartypants = True
    
        @mock.patch('certbot.display.enhancements.util')
    def test_easy(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 0)
        self.assertFalse(self._call())
    
    import mock
    
        description = 'Example Installer plugin'
    
            if cmd.startswith('#'):
            log.write('%s' % cmd)
            continue
    
        if address_family == socket.AF_INET:
        if len(packed_ip) != ctypes.sizeof(addr.ipv4_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv4_addr, packed_ip, 4)
    elif address_family == socket.AF_INET6:
        if len(packed_ip) != ctypes.sizeof(addr.ipv6_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv6_addr, packed_ip, 16)
    else:
        raise socket.error('unknown address family')
    
    from tornado.options import define, options
    
    
class LifoQueueJoinTest(QueueJoinTest):
    queue_class = queues.LifoQueue
    
    
def wrap_web_tests_application():
    result = {}
    for cls in web_test.wsgi_safe_tests:
        class WSGIApplicationWrappedTest(cls):  # type: ignore
            def get_app(self):
                self.app = WSGIApplication(self.get_handlers(),
                                           **self.get_app_kwargs())
                return WSGIContainer(validator(self.app))
        result['WSGIApplication_' + cls.__name__] = WSGIApplicationWrappedTest
    return result
    
            p = Popen(
            [sys.executable, '-m', 'testapp'], stdout=subprocess.PIPE,
            cwd=path, env=dict(os.environ, PYTHONPATH=pythonpath),
            universal_newlines=True)
        out = p.communicate()[0]
        self.assertEqual(out, 'Starting\nStarting\n')

    
        @gen_test
    def test_garbage_collection(self):
        # Test that timed-out waiters are occasionally cleaned from the queue.
        sem = locks.Semaphore(value=0)
        futures = [sem.acquire(timedelta(seconds=0.01)) for _ in range(101)]
    
    # Increasing --n without --keepalive will eventually run into problems
# due to TIME_WAIT sockets
define('n', type=int, default=15000)
define('c', type=int, default=25)
define('keepalive', type=bool, default=False)
define('quiet', type=bool, default=False)
    
        @gen.coroutine
    def post(self):
        if self.any_author_exists():
            raise tornado.web.HTTPError(400, 'author already created')
        hashed_password = yield executor.submit(
            bcrypt.hashpw, tornado.escape.utf8(self.get_argument('password')),
            bcrypt.gensalt())
        author_id = self.db.execute(
            'INSERT INTO authors (email, name, hashed_password) '
            'VALUES (%s, %s, %s)',
            self.get_argument('email'), self.get_argument('name'),
            hashed_password)
        self.set_secure_cookie('blogdemo_user', str(author_id))
        self.redirect(self.get_argument('next', '/'))
    
    
class MessageUpdatesHandler(tornado.web.RequestHandler):
    @gen.coroutine
    def post(self):
        cursor = self.get_argument('cursor', None)
        # Save the future returned by wait_for_messages so we can cancel
        # it in wait_for_messages
        self.future = global_message_buffer.wait_for_messages(cursor=cursor)
        messages = yield self.future
        if self.request.connection.stream.closed():
            return
        self.write(dict(messages=messages))
    
        def current_oauth_client(self):
        client = self.stacked_proxy_safe_get(c, 'oauth2_client', None)
        return getattr(client, '_id', None)
    
    api('reltableitem', RelTableItemJsonTemplate)
api('bannedtableitem', BannedTableItemJsonTemplate)
api('mutedtableitem', MutedTableItemJsonTemplate)
api('invitedmodtableitem', InvitedModTableItemJsonTemplate)
api('friendtableitem', FriendTableItemJsonTemplate)
    
    
    def send400(self):
        if 'usable_error_content' in request.environ:
            return request.environ['usable_error_content']
        else:
            res = pages.RedditError(
                title=_('bad request (%(domain)s)') % dict(domain=g.domain),
                message=_('you sent an invalid request'),
                explanation=request.GET.get('explanation'))
            return res.render()
    
    from pylons import app_globals as g
from pylons import tmpl_context as c
from pylons import request