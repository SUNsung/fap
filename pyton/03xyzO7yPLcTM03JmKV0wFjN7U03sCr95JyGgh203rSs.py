
        
            This could be extended by having nested blocks, sorting them recursively
    and flattening the end structure into a list of lines. Revision 2 maybe ^.^.
'''
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    tf_proto_library_cc(
    name = 'runtime_proto',
    srcs = ['runtime.proto'],
    protodeps = [':spec_proto'],
)
    
    
class MasterState(object):
  '''Simple utility to encapsulate tensors associated with the master state.
    
      Returns:
    [B,M,M] tensor L with the Laplacian of each digraph, padded with an identity
    matrix.  More concretely, the padding entries (t or s >= lengths[b]) are:
      L_{b,t,t} = 1.0
      L_{b,t,s} = 0.0
    Note that this 'identity matrix padding' ensures that the determinant of
    each padded matrix equals the determinant of the unpadded matrix.  The
    non-padding entries (t,s < lengths[b]) depend on whether the Laplacian is
    constructed for trees or forests.  For trees:
      L_{b,t,0} = arcs[b,t,t]
      L_{b,t,t} = \sum_{s < lengths[b], t != s} arcs[b,t,s]
      L_{b,t,s} = -arcs[b,t,s]
    For forests:
      L_{b,t,t} = \sum_{s < lengths[b]} arcs[b,t,s]
      L_{b,t,s} = -arcs[b,t,s]
    See http://www.aclweb.org/anthology/D/D07/D07-1015.pdf for details, though
    note that our matrices are transposed from their notation.
  '''
  check.Eq(arcs.get_shape().ndims, 3, 'arcs must be rank 3')
  dtype = arcs.dtype.base_dtype
    
        Raises:
      IndexError: if max_index is positive but out of bounds.
    '''
    check.IsFalse(compute_gradients and use_moving_average,
                  'It is not possible to make gradient updates when reading '
                  'from the moving average variables.')
    
    from dragnn.python import lexicon
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
        def _get_source_fast(self, environment, template):
        for srcobj, loader in self._iter_loaders(template):
            try:
                return loader.get_source(environment, template)
            except TemplateNotFound:
                continue
        raise TemplateNotFound(template)
    
    
def test_aborting(app):
    class Foo(Exception):
        whatever = 42
    
        rv = client.get('/')
    assert rv.data == b'dcba'
    
                gc.collect()
            print('- benchmarking LassoLars')
            clf = LassoLars(alpha=alpha, fit_intercept=False,
                            normalize=False, precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lars_lasso_results.append(time() - tstart)
    
    
METRICS = {
    'f1': partial(f1_score, average='micro'),
    'f1-by-sample': partial(f1_score, average='samples'),
    'accuracy': accuracy_score,
    'hamming': hamming_loss,
    'jaccard': jaccard_similarity_score,
}
    
        selected_algorithm = opts.selected_algorithm.split(',')
    for key in selected_algorithm:
        if key not in default_algorithms.split(','):
            raise ValueError('Unknown sampling algorithm \'%s\' not in (%s).'
                             % (key, default_algorithms))
    
    for lang, page in pages.items():
    
        # TASK: Predict the outcome on the testing set and store it in a variable
    # named y_predicted
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
    from __future__ import print_function
import numpy as np
import matplotlib.pyplot as plt
    
        def __init__(self):
        self.settings = None  # set in scrapy.cmdline
    
        def short_desc(self):
        return 'Run quick benchmark test'
    
            infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
        def post_process(self, output):
        occurrences = 0
        for x in output:
            if isinstance(x, self.obj_type):
                occurrences += 1
    
            # 2. Notify response_downloaded listeners about the recent download
        # before querying queue for next request
        def _downloaded(response):
            self.signals.send_catch_log(signal=signals.response_downloaded,
                                        response=response,
                                        request=request,
                                        spider=spider)
            return response
        dfd.addCallback(_downloaded)
    
        def connectionLost(self, reason):
        self._connection_lost_reason = reason
        HTTPClient.connectionLost(self, reason)
        self.factory.noPage(reason)
    
            def process_spider_exception(_failure):
            exception = _failure.value
            for method in self.methods['process_spider_exception']:
                result = method(response=response, exception=exception, spider=spider)
                assert result is None or _isiterable(result), \
                    'Middleware %s must returns None, or an iterable object, got %s ' % \
                    (fname(method), type(result))
                if result is not None:
                    return result
            return _failure
    
            if not isinstance(response, HtmlResponse) or response.status != 200:
            return response
    
        def process_request(self, request, spider):
        if self.user_agent:
            request.headers.setdefault(b'User-Agent', self.user_agent)

    
        @classmethod
    def from_crawler(cls, crawler):
        return cls(crawler)
    
    # The reST default role (used for this markup: `text`) to use for all
# documents.
default_role = 'py:obj'
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    @mock.patch('certbot.notify.subprocess.Popen')
    def test_everything_fails(self, mock_popen, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        lmtp_obj.sendmail.side_effect = socket.error(17)
        proc = mock.MagicMock()
        mock_popen.return_value = proc
        proc.communicate.side_effect = OSError('What we have here is a '
                                               'failure to communicate.')
        self.assertFalse(notify('Goose', 'auntrhody@example.com',
                                'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
        self.assertEqual(proc.communicate.call_count, 1)
    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
    
class FixFutureImports(fixer_base.BaseFix):
    BM_compatible = True
    
    
class MainHandler(BaseHandler, TwitterMixin):
    @authenticated
    @gen.coroutine
    def get(self):
        timeline = yield self.twitter_request(
            '/statuses/home_timeline',
            access_token=self.current_user['access_token'])
        self.render('home.html', timeline=timeline)
    
    
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
    
    import sys
from timeit import Timer
    
    coverage_ignore_functions = [
    # various modules
    'doctests',
    'main',
    
    if (platform.python_implementation() == 'CPython' and
        os.environ.get('TORNADO_EXTENSION') != '0'):
    # This extension builds and works on pypy as well, although pypy's jit
    # produces equivalent performance.
    kwargs['ext_modules'] = [
        Extension('tornado.speedups',
                  sources=['tornado/speedups.c']),
    ]
    
    # Often instead of just checking if two faces match or not (True or False), it's helpful to see how similar they are.
# You can do that by using the face_distance function.
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
                for face_location in face_locations:
                # Print the location of each face in this frame
                top, right, bottom, left = face_location
                print(' - A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        # Display the resulting image
    cv2.imshow('Video', frame)
    
    
# -- Options for Texinfo output ----------------------------------------
    
        if os.path.isdir(image_to_check):
        if cpus == 1:
            [test_image(image_file, known_names, known_face_encodings, tolerance, show_distance) for image_file in image_files_in_folder(image_to_check)]
        else:
            process_images_in_process_pool(image_files_in_folder(image_to_check), known_names, known_face_encodings, cpus, tolerance, show_distance)
    else:
        test_image(image_to_check, known_names, known_face_encodings, tolerance, show_distance)
    
            img_b1 = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'biden.jpg'))