
        
            url = 'https://api.shippable.com/projects/%s/newBuild' % project_id
    response = requests.post(url, data, headers=headers)
    
        terminal_stderr_re = [
        re.compile(r'% ?Error: '),
        re.compile(r'^% \w+', re.M),
        re.compile(r'% ?Bad secret'),
        re.compile(r'invalid input', re.I),
        re.compile(r'(?:incomplete|ambiguous) command', re.I),
        re.compile(r'connection timed out', re.I),
        re.compile(r'[^\r\n]+ not found', re.I),
        re.compile(r''[^']' +returned error code: ?\d+'),
        re.compile(r'syntax error'),
        re.compile(r'unknown command'),
        re.compile(r'Error\[\d+\]: ', re.I),
        re.compile(r'Error:', re.I)
    ]
    
        n_iter = 40
    
                X /= np.sqrt(np.sum(X ** 2, axis=0))  # Normalize data
    
        if args.metrics is None:
        args.metrics = sorted(METRICS)
    if args.formats is None:
        args.formats = sorted(FORMATS)
    
    
def plot_feature_errors(all_errors, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_errors['pca'], label='PCA')
    plot_results(all_components, all_errors['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plot_results(all_components, all_errors['rpca'], label='RandomizedPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. n_components\n'
                 'LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Mean absolute error')
    
            plt.text(1.01, 0.5, title_string,
                 transform=ax.transAxes, rotation=-90,
                 ha='left', va='center', fontsize=20)
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
        This is called by sphinx.ext.linkcode
    
    import codecs
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
        # add non-discriminative features
    if n_features > 1:
        X = np.hstack([X, np.random.randn(n_samples, n_features - 1)])
    return X, y
    
    # Plot the ground-truth labelling
plt.figure()
plt.axes([0, 0, 1, 1])
for l, c, n in zip(range(n_clusters), 'rgb',
                   labels):
    lines = plt.plot(X[y == l].T, c=c, alpha=.5)
    lines[0].set_label(n)
    
            self.dialog.default_command = None
        self.dialog.create_widgets()
    
            for proto in range(pickle.HIGHEST_PROTOCOL + 1):
            s = pickle.dumps(d, proto)
            e = pickle.loads(s)
            self.assertNotEqual(id(d), id(e))
            self.assertEqual(type(d), type(e))
            self.assertEqual(list(d), list(e))
    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if self.size_read >= self.chunksize:
            return b''
        if size < 0:
            size = self.chunksize - self.size_read
        if size > self.chunksize - self.size_read:
            size = self.chunksize - self.size_read
        data = self.file.read(size)
        self.size_read = self.size_read + len(data)
        if self.size_read == self.chunksize and \
           self.align and \
           (self.chunksize & 1):
            dummy = self.file.read(1)
            self.size_read = self.size_read + len(dummy)
        return data
    
    make_scanner = c_make_scanner or py_make_scanner

    
    
class DOMBuilderFilter:
    '''Element filter which can be used to tailor construction of
    a DOM instance.
    '''
    
    int main( int argc, char **argv)
{
    PyImport_FrozenModules = _PyImport_FrozenModules;
    return PythonService_main(argc, argv);
}
'''
    
            # Callbacks are invoked in LIFO order to match the behaviour of
        # nested context managers
        suppressed_exc = False
        pending_raise = False
        while self._exit_callbacks:
            is_sync, cb = self._exit_callbacks.pop()
            assert is_sync
            try:
                if cb(*exc_details):
                    suppressed_exc = True
                    pending_raise = False
                    exc_details = (None, None, None)
            except:
                new_exc_details = sys.exc_info()
                # simulate the stack of exceptions by setting the context
                _fix_exception_context(new_exc_details[1], exc_details[1])
                pending_raise = True
                exc_details = new_exc_details
        if pending_raise:
            try:
                # bare 'raise exc_details[1]' replaces our carefully
                # set-up context
                fixed_ctx = exc_details[1].__context__
                raise exc_details[1]
            except BaseException:
                exc_details[1].__context__ = fixed_ctx
                raise
        return received_exc and suppressed_exc
    
        def test_infile_outfile(self):
        infile = self._create_infile()
        outfile = support.TESTFN + '.out'
        rc, out, err = assert_python_ok('-m', 'json.tool', infile, outfile)
        self.addCleanup(os.remove, outfile)
        with open(outfile, 'r') as fp:
            self.assertEqual(fp.read(), self.expect)
        self.assertEqual(rc, 0)
        self.assertEqual(out, b'')
        self.assertEqual(err, b'')
    
    
class LifoQueueJoinTest(QueueJoinTest):
    queue_class = queues.LifoQueue
    
    from tornado.escape import json_decode
from tornado.test.httpserver_test import TypeCheckHandler
from tornado.test.util import ignore_deprecation
from tornado.testing import AsyncHTTPTestCase
from tornado.web import RequestHandler, Application
from tornado.wsgi import WSGIApplication, WSGIContainer, WSGIAdapter
    
    
_NO_RESULT = object()
    
            The request may be either a string URL or an `HTTPRequest` object.
        If it is a string, we construct an `HTTPRequest` using any additional
        kwargs: ``HTTPRequest(request, **kwargs)``
    
        Example::
    
        def write_headers(self, start_line, headers, chunk=None, callback=None):
        '''Implements `.HTTPConnection.write_headers`.'''
        lines = []
        if self.is_client:
            self._request_start_line = start_line
            lines.append(utf8('%s %s HTTP/1.1' % (start_line[0], start_line[1])))
            # Client requests with a non-empty body must have either a
            # Content-Length or a Transfer-Encoding.
            self._chunking_output = (
                start_line.method in ('POST', 'PUT', 'PATCH') and
                'Content-Length' not in headers and
                'Transfer-Encoding' not in headers)
        else:
            self._response_start_line = start_line
            lines.append(utf8('HTTP/1.1 %d %s' % (start_line[1], start_line[2])))
            self._chunking_output = (
                # TODO: should this use
                # self._request_start_line.version or
                # start_line.version?
                self._request_start_line.version == 'HTTP/1.1' and
                # 1xx, 204 and 304 responses have no body (not even a zero-length
                # body), and so should not have either Content-Length or
                # Transfer-Encoding headers.
                start_line.code not in (204, 304) and
                (start_line.code < 100 or start_line.code >= 200) and
                # No need to chunk the output if a Content-Length is specified.
                'Content-Length' not in headers and
                # Applications are discouraged from touching Transfer-Encoding,
                # but if they do, leave it alone.
                'Transfer-Encoding' not in headers)
            # If connection to a 1.1 client will be closed, inform client
            if (self._request_start_line.version == 'HTTP/1.1' and self._disconnect_on_finish):
                headers['Connection'] = 'close'
            # If a 1.0 client asked for keep-alive, add the header.
            if (self._request_start_line.version == 'HTTP/1.0' and
                    self._request_headers.get('Connection', '').lower() == 'keep-alive'):
                headers['Connection'] = 'Keep-Alive'
        if self._chunking_output:
            headers['Transfer-Encoding'] = 'chunked'
        if (not self.is_client and
            (self._request_start_line.method == 'HEAD' or
             start_line.code == 304)):
            self._expected_content_remaining = 0
        elif 'Content-Length' in headers:
            self._expected_content_remaining = int(headers['Content-Length'])
        else:
            self._expected_content_remaining = None
        # TODO: headers are supposed to be of type str, but we still have some
        # cases that let bytes slip through. Remove these native_str calls when those
        # are fixed.
        header_lines = (native_str(n) + ': ' + native_str(v) for n, v in headers.get_all())
        if PY3:
            lines.extend(l.encode('latin1') for l in header_lines)
        else:
            lines.extend(header_lines)
        for line in lines:
            if b'\n' in line:
                raise ValueError('Newline in header: ' + repr(line))
        future = None
        if self.stream.closed():
            future = self._write_future = Future()
            future.set_exception(iostream.StreamClosedError())
            future.exception()
        else:
            if callback is not None:
                warnings.warn('callback argument is deprecated, use returned Future instead',
                              DeprecationWarning)
                self._write_callback = stack_context.wrap(callback)
            else:
                future = self._write_future = Future()
            data = b'\r\n'.join(lines) + b'\r\n\r\n'
            if chunk:
                data += self._format_chunk(chunk)
            self._pending_write = self.stream.write(data)
            self._pending_write.add_done_callback(self._on_write_complete)
        return future
    
    if PY3:
    import http.cookies as Cookie
    from http.client import responses
    from urllib.parse import urlencode, urlparse, urlunparse, parse_qsl
else:
    import Cookie
    from httplib import responses
    from urllib import urlencode
    from urlparse import urlparse, urlunparse, parse_qsl