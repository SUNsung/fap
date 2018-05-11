
        
        from httpie.compat import str
from httpie.context import Environment
from httpie.models import HTTPRequest, HTTPResponse
from httpie.input import (OUT_REQ_BODY, OUT_REQ_HEAD,
                          OUT_RESP_HEAD, OUT_RESP_BODY)
from httpie.output.processing import Formatting, Conversion
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
def test_unicode_basic_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--verbose', '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/basic-auth/test/' + UNICODE)
    
            if downloader and exit_status == ExitStatus.OK:
            # Last response body download.
            download_stream, download_to = downloader.start(final_response)
            write_stream(
                stream=download_stream,
                outfile=download_to,
                flush=False,
            )
            downloader.finish()
            if downloader.interrupted:
                exit_status = ExitStatus.ERROR
                log_error('Incomplete download: size=%d; downloaded=%d' % (
                    downloader.status.total_size,
                    downloader.status.downloaded
                ))
        return exit_status
    
    content_type = parser.add_argument_group(
    title='Predefined Content Types',
    description=None
)
    
    - Preprocessing
    Sequence Preprocessing
    Text Preprocessing
    Image Preprocessing
    
    
@keras_test
def test_min_max_norm():
    array = get_example_array()
    for m in get_test_values():
        norm_instance = constraints.min_max_norm(min_value=m, max_value=m * 2)
        normed = norm_instance(K.variable(array))
        value = K.eval(normed)
        l2 = np.sqrt(np.sum(np.square(value), axis=0))
        assert not l2[l2 < m]
        assert not l2[l2 > m * 2 + 1e-5]
    
        # learn the alphabet with stacked LSTM
    model = Sequential([
        layers.LSTM(16, return_sequences=True, input_shape=(sequence_length, number_of_chars)),
        layers.LSTM(16, return_sequences=False),
        layers.Dense(number_of_chars, activation='softmax')
    ])
    model.compile(loss='categorical_crossentropy', optimizer='adam')
    model.fit(x, y, batch_size=1, epochs=60, verbose=1)
    
    print('Build model...')
model = Sequential()
model.add(Embedding(max_features, 128))
model.add(LSTM(128, dropout=0.2, recurrent_dropout=0.2))
model.add(Dense(1, activation='sigmoid'))
    
    - Klambauer, G., Unterthiner, T., Mayr, A., & Hochreiter, S. (2017).
  Self-Normalizing Neural Networks. arXiv preprint arXiv:1706.02515.
  https://arxiv.org/abs/1706.02515
'''
from __future__ import print_function
    
            # Inference
        start_time = time.time()
        parallel_model.predict(x, batch_size=batch_size)
        total_time = time.time() - start_time
        print('%d gpus inference:' % i, total_time)
    
    
def timedelta_to_seconds(td):
    # type: (datetime.timedelta) -> float
    '''Equivalent to td.total_seconds() (introduced in python 2.7).'''
    return (td.microseconds + (td.seconds + td.days * 24 * 3600) * 10 ** 6) / float(10 ** 6)
    
    
class QueueBasicTest(AsyncTestCase):
    def test_repr_and_str(self):
        q = queues.Queue(maxsize=1)
        self.assertIn(hex(id(q)), repr(q))
        self.assertNotIn(hex(id(q)), str(q))
        q.get()
    
    '''`StackContext` allows applications to maintain threadlocal-like state
that follows execution as it moves to other execution contexts.
    
        @skipOnTravis
    def test_hello_world(self):
        response = self.fetch('/hello')
        self.assertEqual(response.code, 200)
        self.assertEqual(response.headers['Content-Type'], 'text/plain')
        self.assertEqual(response.body, b'Hello world!')
        self.assertEqual(int(response.request_time), 0)
    
            # The tokens are cross-compatible.
        for cookie_token, body_token in ((v1_token, v2_token),
                                         (v2_token, v1_token)):
            response = self.fetch(
                '/', method='POST',
                body=urllib_parse.urlencode(dict(_xsrf=body_token)),
                headers=self.cookie_headers(cookie_token))
            self.assertEqual(response.code, 200)