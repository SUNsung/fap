
        
                if error is not None:
            flash(error)
        else:
            db = get_db()
            db.execute(
                'INSERT INTO post (title, body, author_id)'
                ' VALUES (?, ?, ?)',
                (title, body, g.user['id'])
            )
            db.commit()
            return redirect(url_for('blog.index'))
    
            buf.append('  Make sure to directly send your %s-request to this URL '
                   'since we can\'t make browsers or HTTP clients redirect '
                   'with form data reliably or without user interaction.' %
                   request.method)
        buf.append('\n\nNote: this exception is only raised in debug mode')
        AssertionError.__init__(self, ''.join(buf).encode('utf-8'))
    
    
class TagMarkup(JSONTag):
    '''Serialize anything matching the :class:`~flask.Markup` API by
    having a ``__html__`` method to the result of that method. Always
    deserializes to an instance of :class:`~flask.Markup`.'''
    
    from .globals import request
    
                # If we have no method at all in there we don't want to add a
            # method list. This is for instance the case for the base class
            # or another subclass of a base method view that does not introduce
            # new methods.
            if methods:
                cls.methods = methods
    
        def __getitem__(self, key):
        return self._store[key.lower()][1]
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
            Comment:                   'italic #8f5902', # class: 'c'
        Comment.Preproc:           'noitalic',       # class: 'cp'
    
    ... or POST:
    
            This should not be called from user code, and is only exposed for use
        when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`.
    
                self._thread_local.num_401_calls += 1
            pat = re.compile(r'digest ', flags=re.IGNORECASE)
            self._thread_local.chal = parse_dict_header(pat.sub('', s_auth, count=1))
    
        def response_handler(sock):
        consume_socket_content(sock, timeout=0.5)
        sock.send(
            b'HTTP/1.1 302 FOUND\r\n'
            b'Content-Length: 0\r\n'
            b'Location: /get#relevant-section\r\n\r\n'
        )
        consume_socket_content(sock, timeout=0.5)
        sock.send(
            b'HTTP/1.1 302 FOUND\r\n'
            b'Content-Length: 0\r\n'
            b'Location: /final-url/\r\n\r\n'
        )
        consume_socket_content(sock, timeout=0.5)
        sock.send(
            b'HTTP/1.1 200 OK\r\n\r\n'
        )
    
    
@pytest.mark.parametrize(
    'value, expected', (
        (
            '<http:/.../front.jpeg>; rel=front; type='image/jpeg'',
            [{'url': 'http:/.../front.jpeg', 'rel': 'front', 'type': 'image/jpeg'}]
        ),
        (
            '<http:/.../front.jpeg>',
            [{'url': 'http:/.../front.jpeg'}]
        ),
        (
            '<http:/.../front.jpeg>;',
            [{'url': 'http:/.../front.jpeg'}]
        ),
        (
            '<http:/.../front.jpeg>; type='image/jpeg',<http://.../back.jpeg>;',
            [
                {'url': 'http:/.../front.jpeg', 'type': 'image/jpeg'},
                {'url': 'http://.../back.jpeg'}
            ]
        ),
        (
            '',
            []
        ),
    ))
def test_parse_header_links(value, expected):
    assert parse_header_links(value) == expected
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
    
def guess_filename(obj):
    '''Tries to guess the filename of the given object.'''
    name = getattr(obj, 'name', None)
    if (name and isinstance(name, basestring) and name[0] != '<' and
            name[-1] != '>'):
        return os.path.basename(name)
    
            descr_string = descr_string[:-2]
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
        n = 10
    step = 10000
    n_samples = 10000
    dim = 10
    n_classes = 10
    for i in range(n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        n_samples += step
        X = np.random.randn(n_samples, dim)
        Y = np.random.randint(0, n_classes, (n_samples,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(n_samples)
        bench_scikit_tree_regressor(X, Y)
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    import time
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.axes_grid1.parasite_axes import host_subplot
from mpl_toolkits.axisartist.axislines import Axes
from scipy.sparse.csr import csr_matrix
    
    Second example
--------------
The second example shows the ability of the Minimum Covariance Determinant
robust estimator of covariance to concentrate on the main mode of the data
distribution: the location seems to be well estimated, although the covariance
is hard to estimate due to the banana-shaped distribution. Anyway, we can
get rid of some outlying observations.
The One-Class SVM is able to capture the real data structure, but the
difficulty is to adjust its kernel bandwidth parameter so as to obtain
a good compromise between the shape of the data scatter matrix and the
risk of over-fitting the data.
    
    The reconstruction with L1 penalization gives a result with zero error
(all pixels are successfully labeled with 0 or 1), even if noise was
added to the projections. In comparison, an L2 penalization
(:class:`sklearn.linear_model.Ridge`) produces a large number of labeling
errors for the pixels. Important artifacts are observed on the
reconstructed image, contrary to the L1 penalization. Note in particular
the circular artifact separating the pixels in the corners, that have
contributed to fewer projections than the central disk.
'''
from __future__ import division
    
    
def RemoveMultiLineCommentsFromRange(lines, begin, end):
  '''Clears a range of lines for multi-line comments.'''
  # Having // dummy comments makes the lines non-empty, so we will not get
  # unnecessary blank line warnings later in the code.
  for i in range(begin, end):
    lines[i] = '/**/'
    
        for url in urls:
        if not url.startswith('http'):
            print('markdown file name: ' + url)
            continue
        if check_live_url(url):
            print(url)
        else:
            print(url, file=sys.stderr)