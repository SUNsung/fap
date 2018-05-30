
        
            # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
            Operator:                  '#582800',   # class: 'o'
        Operator.Word:             'bold #004461',   # class: 'ow' - like keywords
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
    from .compat import is_py2, builtin_str, str
    
       >>> payload = dict(key1='value1', key2='value2')
   >>> r = requests.post('http://httpbin.org/post', data=payload)
   >>> print(r.text)
   {
     ...
     'form': {
       'key2': 'value2',
       'key1': 'value1'
     },
     ...
   }
    
    # Warnings
    
            # Merge all the kwargs.
        proxies = merge_setting(proxies, self.proxies)
        stream = merge_setting(stream, self.stream)
        verify = merge_setting(verify, self.verify)
        cert = merge_setting(cert, self.cert)
    
    
if __name__ == '__main__':
    main()

    
    # Theme options are theme-specific and customize the look and feel of a theme
# further.  For a list of options available for each theme, see the
# documentation.
html_theme_options = {
    'show_powered_by': False,
    'github_user': 'requests',
    'github_repo': 'requests',
    'github_banner': True,
    'show_related': False,
    'note_bg': '#FFF59C'
}
    
    if __name__ == '__main__':
    
        for i, kk in enumerate(krange):
        print('k = %i (%i out of %i)' % (kk, i + 1, len(krange)))
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=kk,
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
    from sklearn.utils import check_random_state
from sklearn.metrics.pairwise import pairwise_distances
from sklearn.metrics.pairwise import pairwise_kernels
    
        ###########################################################################
    # Perform benchmark
    ###########################################################################
    time = {}
    n_samples = np.linspace(start=0, stop=opts.n_population,
        num=opts.n_steps).astype(np.int)
    
    # TASK: Fit the pipeline on the training set
    
    solutions = os.listdir(exercise_dir)
    
        # View probabilities=
    probas = classifier.predict_proba(Xfull)
    n_classes = np.unique(y_pred).size
    for k in range(n_classes):
        plt.subplot(n_classifiers, n_classes, index * n_classes + k + 1)
        plt.title('Class %d' % k)
        if k == 0:
            plt.ylabel(name)
        imshow_handle = plt.imshow(probas[:, k].reshape((100, 100)),
                                   extent=(3, 9, 1, 5), origin='lower')
        plt.xticks(())
        plt.yticks(())
        idx = (y_pred == k)
        if idx.any():
            plt.scatter(X[idx, 0], X[idx, 1], marker='o', c='k')
    
    Shows how shrinkage improves classification.
'''
    
    np.random.seed(0)
###############################################################################
n_features = 100
# simulation covariance matrix (AR(1) process)
r = 0.1
real_cov = toeplitz(r ** np.arange(n_features))
coloring_matrix = cholesky(real_cov)
    
        def _adjust_thread_count(self):
        # When the executor gets lost, the weakref callback will wake up
        # the worker threads.
        def weakref_cb(_, q=self._work_queue):
            q.put(None)
        # TODO(bquinlan): Should avoid creating new threads if there are more
        # idle threads than items in the work queue.
        if len(self._threads) < self._max_workers:
            t = threading.Thread(target=_worker,
                                 args=(weakref.ref(self, weakref_cb),
                                       self._work_queue))
            t.daemon = True
            t.start()
            self._threads.add(t)
    
    def load_url(url, timeout):
    kwargs = {'timeout': timeout} if sys.version_info >= (2, 6) else {}
    return urlopen(url, **kwargs).read()
    
    
def FormatDebugInfoResponse_ExtraConfFoundAndLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': True,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found and loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
      # Start by looking for a single character match
  # and increase length until no match is found.
  best = 0
  length = 1
  while True:
    pattern = left_string[ -length: ]
    found = right_string.find( pattern )
    if found < 0:
      return best
    length += found
    if left_string[ -length: ] == right_string[ :length ]:
      best = length
      length += 1

    
    
def Main():
  ( parsed_args, nosetests_args ) = ParseArguments()
  if not parsed_args.no_flake8:
    RunFlake8()
  BuildYcmdLibs( parsed_args )
  NoseTests( parsed_args, nosetests_args )
    
      post_vim_message.assert_has_exact_calls( [
    call( 'this is a message', warning=False, truncate=True )
  ] )
    
    
if __name__ == '__main__':
    main()

    
    from tornado.http1connection import HTTP1Connection
from tornado.httputil import HTTPMessageDelegate
from tornado.iostream import IOStream
from tornado.locks import Event
from tornado.netutil import add_accept_handler
from tornado.testing import AsyncTestCase, bind_unused_port, gen_test
    
                self._disconnect_on_finish = not self._can_keep_alive(
                start_line, headers)
            need_delegate_close = True
            with _ExceptionLoggingContext(app_log):
                header_future = delegate.headers_received(start_line, headers)
                if header_future is not None:
                    yield header_future
            if self.stream is None:
                # We've been detached.
                need_delegate_close = False
                raise gen.Return(False)
            skip_body = False
            if self.is_client:
                if (self._request_start_line is not None and
                        self._request_start_line.method == 'HEAD'):
                    skip_body = True
                code = start_line.code
                if code == 304:
                    # 304 responses may include the content-length header
                    # but do not actually have a body.
                    # http://tools.ietf.org/html/rfc7230#section-3.3
                    skip_body = True
                if code >= 100 and code < 200:
                    # 1xx responses should never indicate the presence of
                    # a body.
                    if ('Content-Length' in headers or
                            'Transfer-Encoding' in headers):
                        raise httputil.HTTPInputError(
                            'Response code %d cannot have body' % code)
                    # TODO: client delegates will get headers_received twice
                    # in the case of a 100-continue.  Document or change?
                    yield self._read_message(delegate)
            else:
                if (headers.get('Expect') == '100-continue' and
                        not self._write_finished):
                    self.stream.write(b'HTTP/1.1 100 (Continue)\r\n\r\n')
            if not skip_body:
                body_future = self._read_body(
                    start_line.code if self.is_client else 0, headers, delegate)
                if body_future is not None:
                    if self._body_timeout is None:
                        yield body_future
                    else:
                        try:
                            yield gen.with_timeout(
                                self.stream.io_loop.time() + self._body_timeout,
                                body_future,
                                quiet_exceptions=iostream.StreamClosedError)
                        except gen.TimeoutError:
                            gen_log.info('Timeout reading body from %s',
                                         self.context)
                            self.stream.close()
                            raise gen.Return(False)
            self._read_finished = True
            if not self._write_finished or self.is_client:
                need_delegate_close = False
                with _ExceptionLoggingContext(app_log):
                    delegate.finish()
            # If we're waiting for the application to produce an asynchronous
            # response, and we're not detached, register a close callback
            # on the stream (we didn't need one while we were reading)
            if (not self._finish_future.done() and
                    self.stream is not None and
                    not self.stream.closed()):
                self.stream.set_close_callback(self._on_connection_close)
                yield self._finish_future
            if self.is_client and self._disconnect_on_finish:
                self.close()
            if self.stream is None:
                raise gen.Return(False)
        except httputil.HTTPInputError as e:
            gen_log.info('Malformed HTTP message from %s: %s',
                         self.context, e)
            if not self.is_client:
                yield self.stream.write(b'HTTP/1.1 400 Bad Request\r\n\r\n')
            self.close()
            raise gen.Return(False)
        finally:
            if need_delegate_close:
                with _ExceptionLoggingContext(app_log):
                    delegate.on_connection_close()
            header_future = None
            self._clear_callbacks()
        raise gen.Return(True)
    
    
class AsyncTestCaseTest(AsyncTestCase):
    def test_exception_in_callback(self):
        with ignore_deprecation():
            self.io_loop.add_callback(lambda: 1 / 0)
            try:
                self.wait()
                self.fail('did not get expected exception')
            except ZeroDivisionError:
                pass