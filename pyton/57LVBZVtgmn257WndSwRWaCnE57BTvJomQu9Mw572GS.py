    def find_handler(self, request, **kwargs):
        for rule in self.rules:
            target_params = rule.matcher.match(request)
            if target_params is not None:
                if rule.target_kwargs:
                    target_params['target_kwargs'] = rule.target_kwargs
    
        @classmethod
    def configurable_base(cls):
        # type: () -> Any
        # TODO: This class needs https://github.com/python/typing/issues/107
        # to be fully typeable.
        '''Returns the base class of a configurable hierarchy.
    
    
class QueueBasicTest(AsyncTestCase):
    def test_repr_and_str(self):
        q = queues.Queue(maxsize=1)
        self.assertIn(hex(id(q)), repr(q))
        self.assertNotIn(hex(id(q)), str(q))
        q.get()
    
        @gen_test
    def test_notify(self):
        c = locks.Condition()
        self.io_loop.call_later(0.01, c.notify)
        yield c.wait()
    
        @gen_test
    def test_stop_in_callback(self):
        # Issue #2069: calling server.stop() in a loop callback should not
        # raise EBADF when the loop handles other server connection
        # requests in the same loop iteration
    
    
def run():
    io_loop = IOLoop(make_current=True)
    app = Application([('/', RootHandler)])
    port = random.randrange(options.min_port, options.max_port)
    app.listen(port, address='127.0.0.1')
    signal.signal(signal.SIGCHLD, handle_sigchld)
    args = ['ab']
    args.extend(['-n', str(options.n)])
    args.extend(['-c', str(options.c)])
    if options.keepalive:
        args.append('-k')
    if options.quiet:
        # just stops the progress messages printed to stderr
        args.append('-q')
    args.append('http://127.0.0.1:%d/' % port)
    subprocess.Popen(args)
    io_loop.start()
    io_loop.close()
    io_loop.clear_current()
    
    
class ExceptionBenchmark(Benchmark):
    def make_context(self):
        return stack_context.ExceptionStackContext(self.__handle_exception)
    
    js.load_plugin_modules(plugins)
modules = dict((k, m) for k, m in js.module.iteritems())
print 'JS_MODULES := ' + ' '.join(modules.iterkeys())
outputs = []
for name, module in modules.iteritems():
    outputs.extend(module.outputs)
    print 'JS_MODULE_OUTPUTS_%s := %s' % (name, ' '.join(module.outputs))
    print 'JS_MODULE_DEPS_%s := %s' % (name, ' '.join(module.dependencies))
    
            res = AdminPage(content = AdminAwardWinners(award),
                        title='award winners').render()
        return res

    
    from r2.controllers.reddit_base import RedditController
from r2.lib.base import proxyurl
from r2.lib.csrf import csrf_exempt
from r2.lib.template_helpers import get_domain
from r2.lib.pages import Embed, BoringPage, HelpPage
from r2.lib.filters import websafe, SC_OFF, SC_ON
from r2.lib.memoize import memoize