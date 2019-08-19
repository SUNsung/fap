
        
                # Raises
            AttributeError: if the layer is connected to
            more than one incoming layers.
        '''
        if len(self._inbound_nodes) != 1:
            raise AttributeError('Layer ' + self.name +
                                 ' has multiple inbound nodes, ' +
                                 'hence the notion of 'layer input mask' '
                                 'is ill-defined. '
                                 'Use `get_input_mask_at(node_index)` '
                                 'instead.')
        return self._get_node_attribute_at_index(0, 'input_masks',
                                                 'input mask')
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense, Embedding
from keras.layers import LSTM
from keras.datasets import imdb
    
        # Examples
    ```python
        # Theano-like behavior example
        >>> x = K.random_uniform_variable(shape=(2, 3), low=0, high=1)
        >>> y = K.ones((4, 3, 5))
        >>> xy = K.dot(x, y)
        >>> K.int_shape(xy)
        (2, 4, 5)
    ```
    
    
def test_orthogonal_init_does_not_affect_global_rng():
    np.random.seed(1337)
    before = np.random.randint(0, 100, size=10)
    
        model.add(layer)
    model.compile(optimizer='sgd', loss='mse')
    out1 = model.predict(np.ones_like(inputs))
    
        def compute_output_shape(self, input_shape):
        return None, self.num_capsule, self.dim_capsule
    
    
def test_invalid_get():
    
            # Arguments
            batch: integer, index of batch within the current epoch.
            logs: dict, metric results for this batch.
        '''
        self._call_batch_hook(_TRAIN, 'end', batch, logs=logs)
    
        def pop(self):
        '''Removes the last layer in the model.
    
    setup(
    name=about['__title__'],
    version=about['__version__'],
    description=about['__description__'],
    long_description=readme,
    long_description_content_type='text/markdown',
    author=about['__author__'],
    author_email=about['__author_email__'],
    url=about['__url__'],
    packages=packages,
    package_data={'': ['LICENSE', 'NOTICE'], 'requests': ['*.pem']},
    package_dir={'requests': 'requests'},
    include_package_data=True,
    python_requires='>=2.7, !=3.0.*, !=3.1.*, !=3.2.*, !=3.3.*, !=3.4.*',
    install_requires=requires,
    license=about['__license__'],
    zip_safe=False,
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Intended Audience :: Developers',
        'Natural Language :: English',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: Implementation :: CPython',
        'Programming Language :: Python :: Implementation :: PyPy'
    ],
    cmdclass={'test': PyTest},
    tests_require=test_requirements,
    extras_require={
        'security': ['pyOpenSSL >= 0.14', 'cryptography>=1.3.4', 'idna>=2.0.0'],
        'socks': ['PySocks>=1.5.6, !=1.5.7'],
        'socks:sys_platform == 'win32' and python_version == '2.7'': ['win_inet_pton'],
    },
)

    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''CaseInsensitiveDict instance with 'Accept' header.'''
        self.case_insensitive_dict = CaseInsensitiveDict()
        self.case_insensitive_dict['Accept'] = 'application/json'
    
        expected_digest = (b'Authorization: Digest username='user', '
                       b'realm='me@kennethreitz.com', '
                       b'nonce='6bf5d6e4da1ce66918800195d6b9130d', uri='/'')
    
        def test_text_response(self):
        '''the text_response_server sends the given text'''
        server = Server.text_response_server(
            'HTTP/1.1 200 OK\r\n' +
            'Content-Length: 6\r\n' +
            '\r\nroflol'
        )
    
        result = False
    try:
        ret = urlopen(url, timeout=2)
        result = (ret.code == 200)
    except HTTPError as e:
        print(e, file=sys.stderr)
    except URLError as e:
        print(e, file=sys.stderr)
    except timeout as e:
        print(e, file=sys.stderr)
    except Exception as e:
        print(e, file=sys.stderr)
    
    
def test_environment():
    env = aws_stack.Environment.from_json({'prefix': 'foobar1'})
    assert env.prefix == 'foobar1'
    env = aws_stack.Environment.from_string('foobar2')
    assert env.prefix == 'foobar2'
    
        def test_concurrency_get_function(self):
        with self.app.test_request_context():
            self._create_function(self.FUNCTION_NAME)
            # note: PutFunctionConcurrency is mounted at: /2017-10-31
            # NOT lambda_api.PATH_ROOT
            # https://docs.aws.amazon.com/lambda/latest/dg/API_PutFunctionConcurrency.html
            concurrency_data = {'ReservedConcurrentExecutions': 10}
            self.client.put('/2017-10-31/functions/{0}/concurrency'.format(self.FUNCTION_NAME),
                            data=json.dumps(concurrency_data))
    
        return key, redirect_url
