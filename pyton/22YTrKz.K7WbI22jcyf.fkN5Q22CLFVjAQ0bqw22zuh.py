
        
        
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
total_bytes = 0
    
            def report_warning(self, message):
            if re.match(regex, message):
                return
            old_report_warning(message)
        self.report_warning = types.MethodType(report_warning, self)
    
        params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
                    if ''' not in code and ''' not in code:
                    continue
                assertRegexpMatches(
                    self,
                    code,
                    r'(?:(?:#.*?|\s*)\n)*from __future__ import (?:[a-z_]+,\s*)*unicode_literals',
                    'unicode_literals import  missing in %s' % fn)
    
            return {
            'id': video_id,
            'url': video_url,
            'ext': 'mp4',
            'title': title,
            'description': description,
            'thumbnail': thumbnail,
            'categories': categories,
            'duration': duration,
            'view_count': view_count,
            'age_limit': 18,
        }

    
            # Video URL construction algorithm is reverse-engineered from cwhplayer.swf
        rtmp_url = 'rtmp://camwithher.tv/clipshare/%s' % (
            ('mp4:%s.mp4' % flv_id) if int(flv_id) > 2010 else flv_id)
    
    import sys
    
    
def test_config_missing():
    app = flask.Flask(__name__)
    with pytest.raises(IOError) as e:
        app.config.from_pyfile('missing.cfg')
    msg = str(e.value)
    assert msg.startswith('[Errno 2] Unable to load configuration '
                          'file (No such file or directory):')
    assert msg.endswith('missing.cfg'')
    assert not app.config.from_pyfile('missing.cfg', silent=True)
    
    
def test_wsgi_errors_stream(app, client):
    @app.route('/')
    def index():
        app.logger.error('test')
        return ''
    
    
def test_context_test(app):
    assert not flask.request
    assert not flask.has_request_context()
    ctx = app.test_request_context()
    ctx.push()
    try:
        assert flask.request
        assert flask.has_request_context()
    finally:
        ctx.pop()
    
        # now do a benchmark where the number of points is fixed
    # and the variable is the number of features
    
        plt.figure('scikit-learn LASSO benchmark results')
    plt.subplot(211)
    plt.plot(list_n_samples, lasso_results, 'b-',
                            label='Lasso')
    plt.plot(list_n_samples, lars_lasso_results, 'r-',
                            label='LassoLars')
    plt.title('precomputed Gram matrix, %d features, alpha=%s' % (n_features,
                            alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    
            title_string = 'Varying %s' % quantity
    
    ward = AgglomerativeClustering(n_clusters=3, linkage='ward')
    
    import matplotlib.pyplot as plt
import numpy as np
import random
    
                short_text_filename = os.path.join(short_text_lang_folder,
                                               '%s_%04d.txt' % (lang, j))
            print('Writing %s' % short_text_filename)
            open(short_text_filename, 'wb').write(
                small_content.encode('utf-8', 'ignore'))
            j += 1
            if j >= 1000:
                break
    
        for line in input_file:
        linestrip = line.strip()
        if len(linestrip) == 0:
            in_exercise_region = False
        elif linestrip.startswith('# TASK:'):
            in_exercise_region = True
    
        @support.requires_IEEE_754
    def test_correctly_rounded_true_division(self):
        # more stringent tests than those above, checking that the
        # result of true division of ints is always correctly rounded.
        # This test should probably be considered CPython-specific.
    
    int WINAPI WinMain(
    HINSTANCE hInstance,      // handle to current instance
    HINSTANCE hPrevInstance,  // handle to previous instance
    LPSTR lpCmdLine,          // pointer to command line
    int nCmdShow              // show state of window
    )
{
    extern int Py_FrozenMain(int, char **);
    PyImport_FrozenModules = _PyImport_FrozenModules;
    return Py_FrozenMain(__argc, __argv);
}
'''
    
        def find_byname(self, name):
        '''Return (red, green, blue) for name'''
        name = name.lower()
        try:
            return self.__byname[name]
        except KeyError:
            raise BadColor(name) from None
    
    
@contextlib.contextmanager
def start_threads(threads, unlock=None):
    threads = list(threads)
    started = []
    try:
        try:
            for t in threads:
                t.start()
                started.append(t)
        except:
            if verbose:
                print('Can't start %d threads, only %d threads started' %
                      (len(threads), len(started)))
            raise
        yield
    finally:
        try:
            if unlock:
                unlock()
            endtime = starttime = time.time()
            for timeout in range(1, 16):
                endtime += 60
                for t in started:
                    t.join(max(endtime - time.time(), 0.01))
                started = [t for t in started if t.isAlive()]
                if not started:
                    break
                if verbose:
                    print('Unable to join %d threads during a period of '
                          '%d minutes' % (len(started), timeout))
        finally:
            started = [t for t in started if t.isAlive()]
            if started:
                faulthandler.dump_traceback(sys.stdout)
                raise AssertionError('Unable to join %d threads' % len(started))
    
            # modify unknown file obj
        self.assertRaises(KeyError, s.modify, 999999, selectors.EVENT_READ)
    
        def test_libc_ver(self):
        import os
        if os.path.isdir(sys.executable) and \
           os.path.exists(sys.executable+'.exe'):
            # Cygwin horror
            executable = sys.executable + '.exe'
        else:
            executable = sys.executable
        res = platform.libc_ver(executable)
    
        def _create_fragment_test_nodes(self):
        dom = parseString('<doc/>')
        orig = dom.createTextNode('original')
        c1 = dom.createTextNode('foo')
        c2 = dom.createTextNode('bar')
        c3 = dom.createTextNode('bat')
        dom.documentElement.appendChild(orig)
        frag = dom.createDocumentFragment()
        frag.appendChild(c1)
        frag.appendChild(c2)
        frag.appendChild(c3)
        return dom, orig, c1, c2, c3, frag
    
        def __init__(self):
        self.byteStream = None
        self.characterStream = None
        self.stringData = None
        self.encoding = None
        self.publicId = None
        self.systemId = None
        self.baseURI = None
    
                if TESTFN in sys.modules:
                del sys.modules[TESTFN]
            importlib.invalidate_caches()
            try:
                try:
                    mod = __import__(TESTFN)
                except ImportError as err:
                    self.fail('import from %s failed: %s' % (ext, err))
    
    
# This file provides an UnsafeThreadPoolExecutor, which operates exactly like
# the upstream Python version of ThreadPoolExecutor with one exception: it
# doesn't wait for worker threads to finish before shutting down the Python
# interpreter.
#
# This is dangerous for many workloads, but fine for some (like when threads
# only send network requests). The YCM workload is one of those workloads where
# it's safe (the aforementioned network requests case).
    
                self._state = CANCELLED
            self._condition.notify_all()
    
        >>> Point = namedtuple('Point', 'x y')
    >>> Point.__doc__                   # docstring for the new class
    'Point(x, y)'
    >>> p = Point(11, y=22)             # instantiate with positional args or keywords
    >>> p[0] + p[1]                     # indexable like a plain tuple
    33
    >>> x, y = p                        # unpack like a regular tuple
    >>> x, y
    (11, 22)
    >>> p.x + p.y                       # fields also accessable by name
    33
    >>> d = p._asdict()                 # convert to a dictionary
    >>> d['x']
    11
    >>> Point(**d)                      # convert from a dictionary
    Point(x=11, y=22)
    >>> p._replace(x=100)               # _replace() is like str.replace() but targets named fields
    Point(x=100, y=22)
    
      return [ config_entry ]
    
        with MockCurrentColumnAndLineContents( 3, 'føo(' ):
      ok_( base.LastEnteredCharIsIdentifierChar() )
    
      This function changes candidates to resolve that issue.
    
    
def BuildYcmdLibs( args ):
  if not args.skip_build:
    subprocess.check_call( [
      sys.executable,
      p.join( DIR_OF_THIS_SCRIPT, 'third_party', 'ycmd', 'build.py' )
    ] )
    
    
@patch( 'ycm.client.messages_request.PostVimMessage',
        new_callable = ExtendedMock )
def HandlePollResponse_SingleMessage_test( post_vim_message ):
  assert_that( _HandlePollResponse( [ { 'message': 'this is a message' } ] ,
                                    None ),
               equal_to( True ) )