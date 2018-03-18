
        
        def main():
    for name, fn in [('sequential', sequential),
                     ('processes', with_process_pool_executor),
                     ('threads', with_thread_pool_executor)]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        if fn() != [True] * len(PRIMES):
            sys.stdout.write('failed\n')
        else:
            sys.stdout.write('%.2f seconds\n' % (time.time() - start))
    
                f = Future()
            f.add_done_callback(raising_fn)
            f.add_done_callback(fn)
            f.set_result(5)
            self.assertTrue(raising_was_called)
            self.assertTrue(fn_was_called)
            self.assertIn('Exception: doh!', stderr.getvalue())
    
        return self._cached_response if self._cached_response else []
    
    if __name__ == '__main__':
  Main()

    
    
class _MasterDiagnosticFilter( object ):
    
    
@wsgi_safe
class StatusReasonTest(SimpleHandlerTestCase):
    class Handler(RequestHandler):
        def get(self):
            reason = self.request.arguments.get('reason', [])
            self.set_status(int(self.get_argument('code')),
                            reason=reason[0] if reason else None)
    
    
class Configurable(object):
    '''Base class for configurable interfaces.
    
            p = Popen(
            [sys.executable, '-m', 'testapp'], stdout=subprocess.PIPE,
            cwd=path, env=dict(os.environ, PYTHONPATH=pythonpath),
            universal_newlines=True)
        out = p.communicate()[0]
        self.assertEqual(out, 'Starting\nStarting\n')

    
        @administrator
    def post(self):
        key = self.get_argument('key', None)
        if key:
            entry = Entry.get(key)
            entry.title = self.get_argument('title')
            entry.body_source = self.get_argument('body_source')
            entry.html = tornado.escape.linkify(
                self.get_argument('body_source'))
        else:
            title = self.get_argument('title')
            slug = unicodedata.normalize('NFKD', title).encode(
                'ascii', 'ignore')
            slug = re.sub(r'[^\w]+', ' ', slug)
            slug = '-'.join(slug.lower().strip().split())
            if not slug:
                slug = 'entry'
            while True:
                existing = db.Query(Entry).filter('slug =', slug).get()
                if not existing or str(existing.key()) == key:
                    break
                slug += '-2'
            entry = Entry(
                author=self.current_user,
                title=title,
                slug=slug,
                body_source=self.get_argument('body_source'),
                html=tornado.escape.linkify(self.get_argument('body_source')),
            )
        entry.put()
        self.redirect('/entry/' + entry.slug)
    
        def data_received(self, chunk):
        self.bytes_read += len(chunk)
    
    
class BaseRequestHandler(web.RequestHandler):
    SUPPORTED_METHODS = ('PUT', 'GET', 'DELETE')