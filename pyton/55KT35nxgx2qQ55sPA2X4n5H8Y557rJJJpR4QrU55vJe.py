
        
            Models: `flatpages.flatpages`
    Templates: Uses the template defined by the ``template_name`` field,
        or :template:`flatpages/default.html` if template_name is not defined.
    Context:
        flatpage
            `flatpages.flatpages` object
    '''
    if not url.startswith('/'):
        url = '/' + url
    site_id = get_current_site(request).id
    try:
        f = get_object_or_404(FlatPage, url=url, sites=site_id)
    except Http404:
        if not url.endswith('/') and settings.APPEND_SLASH:
            url += '/'
            f = get_object_or_404(FlatPage, url=url, sites=site_id)
            return HttpResponsePermanentRedirect('%s/' % request.path)
        else:
            raise
    return render_flatpage(request, f)
    
    from sklearn.cluster import AgglomerativeClustering
    
        # decode the payload explicitly as UTF-8 since lxml is confused for some
    # reason
    with codecs.open(html_filename,'r','utf-8') as html_file:
        html_content = html_file.read()
    tree = ElementTree(lxml.html.document_fromstring(html_content))
    i = 0
    j = 0
    for p in tree.findall('//p'):
        content = p.text_content()
        if len(content) < 100:
            # skip paragraphs that are too short - probably too noisy and not
            # representative of the actual language
            continue
    
            if not in_exercise_region or linestrip.startswith('#'):
            output_file.write(line)
    
    plt.show()

    
    '''
print(__doc__)
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'certbot-compatibility-test',
     u'certbot-compatibility-test Documentation',
     [author], 1)
]
    
        def entry_ok(self):
        'Return sensible ConfigParser section name or None.'
        self.entry_error['text'] = ''
        name = self.entry.get().strip()
        if not name:
            self.showerror('no name specified.')
            return None
        elif len(name)>30:
            self.showerror('name is longer than 30 characters.')
            return None
        elif name in self.used_names:
            self.showerror('name is already in use.')
            return None
        return name
    
        >>> median_grouped([1, 3, 3, 5, 7], interval=1)
    3.25
    >>> median_grouped([1, 3, 3, 5, 7], interval=2)
    3.5
    
    if C is not None:
    c = C.getcontext()
    c.prec = C.MAX_PREC
    c.Emax = C.MAX_EMAX
    c.Emin = C.MIN_EMIN
    
    def _unparse_datetime(dt, legacy=False):
    '''Format a date or datetime object as a pair of (date, time) strings
    in the format required by the NEWNEWS and NEWGROUPS commands.  If a
    date object is passed, the time is assumed to be midnight (00h00).
    
        def test_oldargs0_2_ext(self):
        try:
            {}.keys(*(1, 2))
        except TypeError:
            pass
        else:
            raise RuntimeError
    
        def testRecv(self):
        # Testing non-blocking recv
        conn, addr = self.serv.accept()
        conn.setblocking(0)
        try:
            msg = conn.recv(len(MSG))
        except OSError:
            pass
        else:
            self.fail('Error trying to do non-blocking recv.')
        read, write, err = select.select([conn], [], [])
        if conn in read:
            msg = conn.recv(len(MSG))
            conn.close()
            self.assertEqual(msg, MSG)
        else:
            self.fail('Error during select call to non-blocking socket.')
    
        '''
    good = ['/', '/test.html']
    bad = ['/cyberworld/map/index.html']
    site_maps = ['http://www.gstatic.com/s2/sitemaps/profiles-sitemap.xml',
                 'http://www.google.com/hostednews/sitemap_index.xml']
    
        def test_processor(self):
        res = platform.processor()
    
        router = RuleRouter([
        Rule(PathMatches('/handler'), ConnectionDelegate()),
        # ... more rules
    ])
    
    from tornado.http1connection import HTTP1Connection
from tornado.httputil import HTTPMessageDelegate
from tornado.iostream import IOStream
from tornado.locks import Event
from tornado.netutil import add_accept_handler
from tornado.testing import AsyncTestCase, bind_unused_port, gen_test
    
    from tornado.escape import json_decode
from tornado.test.httpserver_test import TypeCheckHandler
from tornado.test.util import ignore_deprecation
from tornado.testing import AsyncHTTPTestCase
from tornado.web import RequestHandler, Application
from tornado.wsgi import WSGIApplication, WSGIContainer, WSGIAdapter
    
        In WSGI mode asynchronous methods are not supported.  This means
    that it is not possible to use `.AsyncHTTPClient`, or the
    `tornado.auth` or `tornado.websocket` modules.
    
    
@implementer(IDelayedCall)
class TornadoDelayedCall(object):
    '''DelayedCall object for Tornado.'''
    def __init__(self, reactor, seconds, f, *args, **kw):
        self._reactor = reactor
        self._func = functools.partial(f, *args, **kw)
        self._time = self._reactor.seconds() + seconds
        self._timeout = self._reactor._io_loop.add_timeout(self._time,
                                                           self._called)
        self._active = True
    
        if not cap_contexts[0][0] and not cap_contexts[0][1]:
        # Fast path when there are no active contexts.
        def null_wrapper(*args, **kwargs):
            try:
                current_state = _state.contexts
                _state.contexts = cap_contexts[0]
                return fn(*args, **kwargs)
            finally:
                _state.contexts = current_state
        null_wrapper._wrapped = True
        return null_wrapper
    
            # Timeout passed to wait()
        self.io_loop.add_timeout(time() + 1, self.stop)
        with self.assertRaises(self.failureException):
            self.wait(timeout=0.01)
    
                sockets = bind_sockets(0, address='127.0.0.1')
            fork_processes(3)
            server = TCPServer()
            server.add_sockets(sockets)
            IOLoop.current().run_sync(lambda: None)
            print(task_id(), end='')
        ''')
        out = self.run_subproc(code)
        self.assertEqual(''.join(sorted(out)), '012')
