
        
        encoder_input_data = np.zeros(
    (len(input_texts), max_encoder_seq_length, num_encoder_tokens),
    dtype='float32')
decoder_input_data = np.zeros(
    (len(input_texts), max_decoder_seq_length, num_decoder_tokens),
    dtype='float32')
decoder_target_data = np.zeros(
    (len(input_texts), max_decoder_seq_length, num_decoder_tokens),
    dtype='float32')
    
    model = Sequential()
model.add(Embedding(max_features, embedding_size, input_length=maxlen))
model.add(Dropout(0.25))
model.add(Conv1D(filters,
                 kernel_size,
                 padding='valid',
                 activation='relu',
                 strides=1))
model.add(MaxPooling1D(pool_size=pool_size))
model.add(LSTM(lstm_output_size))
model.add(Dense(1))
model.add(Activation('sigmoid'))
    
    
def create_pairs(x, digit_indices):
    '''Positive and negative pair creation.
    Alternates between positive and negative pairs.
    '''
    pairs = []
    labels = []
    n = min([len(digit_indices[d]) for d in range(num_classes)]) - 1
    for d in range(num_classes):
        for i in range(n):
            z1, z2 = digit_indices[d][i], digit_indices[d][i + 1]
            pairs += [[x[z1], x[z2]]]
            inc = random.randrange(1, num_classes)
            dn = (d + inc) % num_classes
            z1, z2 = digit_indices[d][i], digit_indices[dn][i]
            pairs += [[x[z1], x[z2]]]
            labels += [1, 0]
    return np.array(pairs), np.array(labels)
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_uniform(tensor_shape):
    _runner(initializers.RandomUniform(minval=-1, maxval=1), tensor_shape,
            target_mean=0., target_max=1, target_min=-1)
    
    The paper 'Dynamic Routing Between Capsules': https://arxiv.org/abs/1710.09829
'''
from __future__ import print_function
    
    
def serialize(metric):
    return serialize_keras_object(metric)
    
        ```python
      model = Sequential()
      model.add(Embedding(1000, 64, input_length=10))
      # the model will take as input an integer matrix of size (batch, input_length).
      # the largest integer (i.e. word index) in the input should be
      # no larger than 999 (vocabulary size).
      # now model.output_shape == (None, 10, 64), where None is the batch dimension.
    
        def get_config(self):
        config = {
            'filters': self.filters,
            'kernel_size': self.kernel_size,
            'strides': self.strides,
            'padding': self.padding,
            'activation': activations.serialize(self.activation),
            'use_bias': self.use_bias,
            'kernel_initializer': initializers.serialize(self.kernel_initializer),
            'bias_initializer': initializers.serialize(self.bias_initializer),
            'kernel_regularizer': regularizers.serialize(self.kernel_regularizer),
            'bias_regularizer': regularizers.serialize(self.bias_regularizer),
            'activity_regularizer':
                regularizers.serialize(self.activity_regularizer),
            'kernel_constraint': constraints.serialize(self.kernel_constraint),
            'bias_constraint': constraints.serialize(self.bias_constraint)
        }
        base_config = super(LocallyConnected1D, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))
    
                    if not speed:
                    eta = '-:--:--'
                else:
                    s = int((self.status.total_size - downloaded) / speed)
                    h, s = divmod(s, 60 * 60)
                    m, s = divmod(s, 60)
                    eta = '{0}:{1:0>2}:{2:0>2}'.format(h, m, s)
    
            if self.args.debug:
            self.args.traceback = True
    
    
def get_package_meta(package_name):
    api_url = 'https://pypi.python.org/pypi/{}/json'.format(package_name)
    resp = requests.get(api_url).json()
    hasher = hashlib.sha256()
    for release in resp['urls']:
        download_url = release['url']
        if download_url.endswith('.tar.gz'):
            hasher.update(requests.get(download_url).content)
            return {
                'name': package_name,
                'url': download_url,
                'sha256': hasher.hexdigest(),
            }
    else:
        raise RuntimeError(
            '{}: download not found: {}'.format(package_name, resp))
    
        if resp:
        output.append(Stream(
            msg=HTTPResponse(response),
            with_headers=resp_h,
            with_body=resp_b))
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
    
def test_credentials_in_url_auth_flag_has_priority(httpbin_both):
    '''When credentials are passed in URL and via -a at the same time,
     then the ones from -a are used.'''
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:wrong')
    r = http('--auth=user:password', 'GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
            def get_auth(self, username=None, password=None):
            assert self.raw_auth == USERNAME + SEP_CREDENTIALS + PASSWORD
            assert username == USERNAME
            assert password == PASSWORD
            return basic_auth()
    
    
def main():
    '''Script main program.'''
    import argparse
    
        def test_bytes_deprecated(self):
        pl = {
            'key': 42,
            'sub': {
                'key': 9,
                'alt': 'value',
                'data': b'buffer',
            }
        }
        with self.assertWarns(DeprecationWarning):
            data = plistlib.writePlistToBytes(pl)
    
        def test_cancel_race(self):
        # Several tasks:
        # - A acquires the lock
        # - B is blocked in acquire()
        # - C is blocked in acquire()
        #
        # Now, concurrently:
        # - B is cancelled
        # - A releases the lock
        #
        # If B's waiter is marked cancelled but not yet removed from
        # _waiters, A's release() call will crash when trying to set
        # B's waiter; instead, it should move on to C's waiter.
    
        def test_tofrombytes(self):
        a = array.array(self.typecode, 2*self.example)
        b = array.array(self.typecode)
        self.assertRaises(TypeError, a.tobytes, 42)
        self.assertRaises(TypeError, b.frombytes)
        self.assertRaises(TypeError, b.frombytes, 42)
        b.frombytes(a.tobytes())
        c = array.array(self.typecode, bytearray(a.tobytes()))
        self.assertEqual(a, b)
        self.assertEqual(a, c)
        if a.itemsize>1:
            self.assertRaises(ValueError, b.frombytes, b'x')
    
    # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title, author, document class [howto/manual]).
_stdauthor = r'Guido van Rossum\\and the Python development team'
latex_documents = [
    ('c-api/index', 'c-api.tex',
     'The Python/C API', _stdauthor, 'manual'),
    ('distributing/index', 'distributing.tex',
     'Distributing Python Modules', _stdauthor, 'manual'),
    ('extending/index', 'extending.tex',
     'Extending and Embedding Python', _stdauthor, 'manual'),
    ('installing/index', 'installing.tex',
     'Installing Python Modules', _stdauthor, 'manual'),
    ('library/index', 'library.tex',
     'The Python Library Reference', _stdauthor, 'manual'),
    ('reference/index', 'reference.tex',
     'The Python Language Reference', _stdauthor, 'manual'),
    ('tutorial/index', 'tutorial.tex',
     'Python Tutorial', _stdauthor, 'manual'),
    ('using/index', 'using.tex',
     'Python Setup and Usage', _stdauthor, 'manual'),
    ('faq/index', 'faq.tex',
     'Python Frequently Asked Questions', _stdauthor, 'manual'),
    ('whatsnew/' + version, 'whatsnew.tex',
     'What\'s New in Python', 'A. M. Kuchling', 'howto'),
]
# Collect all HOWTOs individually
latex_documents.extend(('howto/' + fn[:-4], 'howto-' + fn[:-4] + '.tex',
                        '', _stdauthor, 'howto')
                       for fn in os.listdir('howto')
                       if fn.endswith('.rst') and fn != 'index.rst')
    
        def test_continuation(self):
        # Balancing continuation
        self.check_roundtrip('a = (3,4, \n'
                             '5,6)\n'
                             'y = [3, 4,\n'
                             '5]\n'
                             'z = {'a': 5,\n'
                             ''b':15, 'c':True}\n'
                             'x = len(y) + 5 - a[\n'
                             '3] - a[2]\n'
                             '+ len(z) - z[\n'
                             ''b']\n')
    
            # write a large chunk which completes immediately,
        # it should not pause writing
        fut = asyncio.Future(loop=self.loop)
        fut.set_result(None)
        self.loop._proactor.send.return_value = fut
        tr.write(b'very large data')
        self.loop._run_once()
        self.assertEqual(tr.get_write_buffer_size(), 0)
        self.assertFalse(self.protocol.pause_writing.called)
    
                with self.assertRaises(asyncio.CancelledError):
                with self.unix_client(lambda sock: client(sock, addr)):
                    self.loop.run_until_complete(main_task)
    
            async def client(addr):
            await asyncio.wait_for(
                self.loop.create_connection(
                    asyncio.Protocol,
                    *addr,
                    ssl=client_sslctx,
                    server_hostname='',
                    ssl_handshake_timeout=10.0),
                0.5)
    
        def test_large_PYTHONPATH(self):
        path1 = 'ABCDE' * 100
        path2 = 'FGHIJ' * 100
        path = path1 + os.pathsep + path2