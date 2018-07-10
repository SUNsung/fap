
        
        
class FormDataRoutingRedirect(AssertionError):
    '''This exception is raised by Flask in debug mode if it detects a
    redirect caused by the routing system when the request method is not
    GET, HEAD or OPTIONS.  Reasoning: form data will be dropped.
    '''
    
            if not current.propagate:
            break
    
    
class SessionInterface(object):
    '''The basic interface you have to implement in order to replace the
    default session interface which uses werkzeug's securecookie
    implementation.  The only methods you have to implement are
    :meth:`open_session` and :meth:`save_session`, the others have
    useful defaults which you don't need to change.
    
    
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

    
    
def test_config_missing():
    app = flask.Flask(__name__)
    with pytest.raises(IOError) as e:
        app.config.from_pyfile('missing.cfg')
    msg = str(e.value)
    assert msg.startswith('[Errno 2] Unable to load configuration '
                          'file (No such file or directory):')
    assert msg.endswith('missing.cfg'')
    assert not app.config.from_pyfile('missing.cfg', silent=True)
    
        Tests regressions.
    
        rv = app.test_client().get('/', errors_stream=out)
    assert rv.status_code == 500
    assert b'Internal Server Error' in rv.data
    assert not out.getvalue()

    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
        op.add_option('--transformers',
                  dest='selected_transformers',
                  default='GaussianRandomProjection,SparseRandomProjection',
                  type=str,
                  help='Comma-separated list of transformer to benchmark. '
                       'Default: %default. Available: '
                       'GaussianRandomProjection,SparseRandomProjection')
    
    URL = ('http://people.csail.mit.edu/jrennie/'
       '20Newsgroups/20news-bydate.tar.gz')
    
    
class View(object):
    '''Test docstring. '''
    def __init__(self, root, controller):
        f = Figure()
        ax = f.add_subplot(111)
        ax.set_xticks([])
        ax.set_yticks([])
        ax.set_xlim((x_min, x_max))
        ax.set_ylim((y_min, y_max))
        canvas = FigureCanvasTkAgg(f, master=root)
        canvas.show()
        canvas.get_tk_widget().pack(side=Tk.TOP, fill=Tk.BOTH, expand=1)
        canvas._tkcanvas.pack(side=Tk.TOP, fill=Tk.BOTH, expand=1)
        canvas.mpl_connect('button_press_event', self.onclick)
        toolbar = NavigationToolbar2TkAgg(canvas, root)
        toolbar.update()
        self.controllbar = ControllBar(root, controller)
        self.f = f
        self.ax = ax
        self.canvas = canvas
        self.controller = controller
        self.contours = []
        self.c_labels = None
        self.plot_kernels()
    
    This example demonstrates how to generate a checkerboard dataset and
bicluster it using the Spectral Biclustering algorithm.
    
    plt.title('Change of predicted probabilities after sigmoid calibration')
plt.xlabel('Probability class 1')
plt.ylabel('Probability class 2')
plt.xlim(-0.05, 1.05)
plt.ylim(-0.05, 1.05)
plt.legend(loc='best')
    
    
class ScrapyCommand(object):
    
        def run(self, args, opts):
        if opts.list:
            self._list_templates()
            return
        if opts.dump:
            template_file = self._find_template(opts.dump)
            if template_file:
                with open(template_file, 'r') as f:
                    print(f.read())
            return
        if len(args) != 2:
            raise UsageError()
    
            return contracts
    
    from scrapy.utils.defer import mustbe_deferred
from scrapy.utils.httpobj import urlparse_cached
from scrapy.resolver import dnscache
from scrapy import signals
from .middleware import DownloaderMiddlewareManager
from .handlers import DownloadHandlers
    
    
class DownloadHandlers(object):
    
    
def _parse(url):
    ''' Return tuple of (scheme, netloc, host, port, path),
    all in bytes except for port which is int.
    Assume url is from Request.url, which was passed via safe_url_string
    and is ascii-only.
    '''
    url = url.strip()
    parsed = urlparse(url)
    return _parsed_url_args(parsed)
    
        def process_response(self, request, response, spider):
        if not response.body:
            return response
    
            if self.close_on.get('errorcount'):
            crawler.signals.connect(self.error_count, signal=signals.spider_error)
        if self.close_on.get('pagecount'):
            crawler.signals.connect(self.page_count, signal=signals.response_received)
        if self.close_on.get('timeout'):
            crawler.signals.connect(self.spider_opened, signal=signals.spider_opened)
        if self.close_on.get('itemcount'):
            crawler.signals.connect(self.item_scraped, signal=signals.item_scraped)
        crawler.signals.connect(self.spider_closed, signal=signals.spider_closed)
    
        def __init__(self, cards):
        self.cards = cards
        self.deal_index = 0
    
            Emit key value pairs of the form:
    
    
class MH(Mailbox):
    '''An MH mailbox.'''
    
        print('# The following line assumes you have built Python using the standard instructions')
    print('# Otherwise fix the following line to point to the library.')
    print('pythonlib = '$(pythonhome)/pcbuild/python%s$(debug_suffix).lib'' % version_suffix)
    print()
    
        def is_resource(self, name):
        # Maybe we could do better, but if we can get the data, it's a
        # resource.  Otherwise it isn't.
        fullname_as_path = self.fullname.replace('.', '/')
        path = f'{fullname_as_path}/{name}'
        try:
            self.zipimporter.get_data(path)
        except OSError:
            return False
        return True
    
                        if set_type == 'return':
                        self.expect_set.extend(
                            [('exception', 10, 'main', StopIteration), ('step',),
                             ('return', 10, 'main'),                   ('quit', ),
                            ]
                        )
                    else:
                        self.expect_set.extend(
                            [('line', 4, 'test_gen'), ('quit', ),]
                        )
                    with TracerRun(self) as tracer:
                        tracer.runcall(tfunc_import)
    
        def test___class___instancemethod(self):
        # See issue #14857
        class X:
            def f(self):
                return __class__
        self.assertIs(X().f(), X)
    
        def __repr__(self):
        res = super(Semaphore, self).__repr__()
        extra = 'locked' if self._value == 0 else 'unlocked,value:{0}'.format(
            self._value)
        if self._waiters:
            extra = '{0},waiters:{1}'.format(extra, len(self._waiters))
        return '<{0} [{1}]>'.format(res[1:-1], extra)
    
            if compression_options is None or 'compression_level' not in compression_options:
            self._compression_level = tornado.web.GZipContentEncoding.GZIP_LEVEL
        else:
            self._compression_level = compression_options['compression_level']
    
        def test_get_current_user_from_ui_module_is_lazy(self):
        response = self.fetch('/without_user_module')
        self.assertEqual(response.body, b'False')
    
    from tornado.escape import _unicode, native_str
from tornado.log import define_logging_options
from tornado import stack_context
from tornado.util import basestring_type, exec_in