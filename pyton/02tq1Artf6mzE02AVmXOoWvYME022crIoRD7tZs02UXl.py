
        
                webpage = self._download_webpage(
            'http://www.vlive.tv/video/%s/playlist/%s'
            % (video_id, playlist_id), playlist_id)
    
    import codecs
import subprocess
    
    versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
        with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
    
from youtube_dl import YoutubeDL
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
    for i in range(max_decoder_seq_length - 1):
    predict = model.predict([in_encoder, in_decoder])
    predict = predict.argmax(axis=-1)
    predict_ = predict[:, i].ravel().tolist()
    for j, x in enumerate(predict_):
        in_decoder[j, i + 1, x] = 1
    
    The dataset is actually too small for LSTM to be of any advantage
compared to simpler, much faster methods such as TF-IDF + LogReg.
    
        with tempfile.NamedTemporaryFile('wb', delete=True) as f:
        np.savez(f, x=x, y=y)
        monkeypatch.setattr(reuters, 'get_file', lambda *args, **kwargs: f.name)
        yield f.name
    
        @interfaces.legacy_embedding_support
    def __init__(self, input_dim, output_dim,
                 embeddings_initializer='uniform',
                 embeddings_regularizer=None,
                 activity_regularizer=None,
                 embeddings_constraint=None,
                 mask_zero=False,
                 input_length=None,
                 **kwargs):
        if 'input_shape' not in kwargs:
            if input_length:
                kwargs['input_shape'] = (input_length,)
            else:
                kwargs['input_shape'] = (None,)
        super(Embedding, self).__init__(**kwargs)
    
            # Arguments
            x: A vector or a 2D array of probabilities or one-hot representations;
                or a vector of character indices (used with `calc_argmax=False`).
            calc_argmax: Whether to find the character index with maximum
                probability, defaults to `True`.
        '''
        if calc_argmax:
            x = x.argmax(axis=-1)
        return ''.join(self.indices_char[x] for x in x)
    
    # set parameters:
max_features = 5000
maxlen = 400
batch_size = 32
embedding_dims = 50
filters = 250
kernel_size = 3
hidden_dims = 250
epochs = 2
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
y_train = np.array(y_train)
y_test = np.array(y_test)
    
    
# Artificial data generation:
# Generate movies with 3 to 7 moving squares inside.
# The squares are of shape 1x1 or 2x2 pixels,
# which move linearly over time.
# For convenience we first create movies with bigger width and height (80x80)
# and at the end we select a 40x40 window.
    
    
def test_relu():
    layer_test(layers.ReLU,
               kwargs={'max_value': 10,
                       'negative_slope': 0.2,
                       'threshold': 3.0},
               input_shape=(2, 3, 4))
    layer_test(layers.ReLU,
               kwargs={'max_value': 6},
               input_shape=(2, 3, 4))
    layer_test(layers.ReLU,
               kwargs={'negative_slope': 0.2},
               input_shape=(2, 3, 4))
    
        def deletion_field(self):
        from django.forms.formsets import DELETION_FIELD_NAME
        return AdminField(self.form, DELETION_FIELD_NAME, False)
    
        def test_tabular_non_field_errors(self):
        '''
        non_field_errors are displayed correctly, including the correct value
        for colspan.
        '''
        data = {
            'title_set-TOTAL_FORMS': 1,
            'title_set-INITIAL_FORMS': 0,
            'title_set-MAX_NUM_FORMS': 0,
            '_save': 'Save',
            'title_set-0-title1': 'a title',
            'title_set-0-title2': 'a different title',
        }
        response = self.client.post(reverse('admin:admin_inlines_titlecollection_add'), data)
        # Here colspan is '4': two fields (title1 and title2), one hidden field and the delete checkbox.
        self.assertContains(
            response,
            '<tr><td colspan='4'><ul class='errorlist nonfield'>'
            '<li>The two titles must be the same</li></ul></td></tr>'
        )
    
        def as_int(self, is_64=False):
        'Retrieve the Field's value as an integer.'
        if is_64:
            return capi.get_field_as_integer64(self._feat.ptr, self._index) if self.is_set else None
        else:
            return capi.get_field_as_integer(self._feat.ptr, self._index) if self.is_set else None
    
        @property
    def hex(self):
        '''
        Return the WKB of this Geometry in hexadecimal form. Please note
        that the SRID is not included in this representation because it is not
        a part of the OGC specification (use the `hexewkb` property instead).
        '''
        # A possible faster, all-python, implementation:
        #  str(self.wkb).encode('hex')
        return wkb_w(dim=3 if self.hasz else 2).write_hex(self)
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
        badargs = set(kwargs) - set(result)
    if badargs:
        err = 'create_cookie() got unexpected keyword arguments: %s'
        raise TypeError(err % list(badargs))
    
        This function works best on CPython and PyPy: in particular, it probably
    doesn't work for Jython or IronPython. Future investigation should be done
    to work out the correct shape of the code for those platforms.
    '''
    implementation = platform.python_implementation()
    
    
class CaseInsensitiveDict(MutableMapping):
    '''A case-insensitive ``dict``-like object.
    
            This should not be called from user code, and is only exposed for use
        when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`.
    
        close_server = threading.Event()
    server = Server(digest_response_handler, wait_to_close_event=close_server)
    
            This function eventually generates a ``Cookie`` header from the
        given cookies using cookielib. Due to cookielib's design, the header
        will not be regenerated if it already exists, meaning this function
        can only be called once for the life of the
        :class:`PreparedRequest <PreparedRequest>` object. Any subsequent calls
        to ``prepare_cookies`` will have no actual effect, unless the 'Cookie'
        header is removed beforehand.
        '''
        if isinstance(cookies, cookielib.CookieJar):
            self._cookies = cookies
        else:
            self._cookies = cookiejar_from_dict(cookies)
    
    from .__version__ import __title__, __description__, __url__, __version__
from .__version__ import __build__, __author__, __author_email__, __license__
from .__version__ import __copyright__, __cake__
    
            if network_ok:
            self.last_check_time = time.time()
            self.report_ok()
            xlog.debug('network %s is ok, cost:%d ms', self.type, 1000 * (time.time() - time_now))
        else:
            xlog.warn('network %s fail', self.type)
            self.network_stat = 'Fail'
            self.last_check_time = time.time()
    
    
def test_read_jsonl_unicode_chars():
    # GH15132: non-ascii unicode characters
    # \u201d == RIGHT DOUBLE QUOTATION MARK
    
            # common endpoints with NA
        tuples = [(na_value, na_value)] + tuples + [(na_value, na_value)]
        index = IntervalIndex.from_tuples(tuples, closed=closed)
        result = index.is_overlapping
        assert result is expected
    
                if self.index is not None:
                self.frame.set_index(self.index, inplace=True)
    
                for index in [
                tm.makeFloatIndex,
                tm.makeStringIndex,
                tm.makeIntIndex,
                tm.makeDateIndex,
            ]:
    
            # Now add a subject
        action = {
            'Message': ['msg'],
            'Subject': ['subject'],
            'MessageAttributes.entry.1.Name': ['attr1'],
            'MessageAttributes.entry.1.Value.DataType': ['String'],
            'MessageAttributes.entry.1.Value.StringValue': ['value1'],
            'MessageAttributes.entry.1.Value.BinaryValue': ['value1'],
            'MessageAttributes.entry.2.Name': ['attr2'],
            'MessageAttributes.entry.2.Value.DataType': ['String'],
            'MessageAttributes.entry.2.Value.StringValue': ['value2'],
            'MessageAttributes.entry.2.Value.BinaryValue': ['value2'],
        }
        result_str = sns_listener.create_sns_message_body(self.subscriber, action)
        result = json.loads(result_str)
        del result['MessageId']
        expected = json.dumps({'Message': 'msg',
                               'TopicArn': 'arn',
                               'Type': 'Notification',
                               'Subject': 'subject',
                               'MessageAttributes': {
                                   'attr1': {
                                       'Type': 'String',
                                       'Value': 'value1',
                                   }, 'attr2': {
                                       'Type': 'String',
                                       'Value': 'value2',
                                   }
                               }})
        assert_equal(result, json.loads(expected))
    
        test_port = 12124
    tmp_file_pattern = '/tmp/test.%s'
    
        def setUp(self):
        firehose_api.create_stream(TEST_STREAM_NAME, tags=TEST_TAGS)
    
            assert 'Parameters' in response
        assert isinstance(response['Parameters'], list)
    
            # Describe TTL status after being enabled.
        response = testutil.send_describe_dynamodb_ttl_request(TEST_DDB_TABLE_NAME_3)
        assert response.status_code == 200
        assert json.loads(response._content)['TimeToLiveDescription']['TimeToLiveStatus'] == 'ENABLED'
    
        return {
        'Version': VERSION,
        'Services': {
            name: convert_service_to_bundle(
                name,
                service_dict,
                image_digests[name],
            )
            for name, service_dict in config['services'].items()
        },
    }
    
        tls_attr_name = 'PROTOCOL_{}'.format(compose_tls_version)
    if not hasattr(ssl, tls_attr_name):
        log.warning(
            'The '{}' protocol is unavailable. You may need to update your '
            'version of Python or OpenSSL. Falling back to TLSv1 (default).'
            .format(compose_tls_version)
        )
        return None
    
            if parse_func is None:
            def parse_func(m):
                return m or {}
    
        def test_tls_verify_env_falsy_value(self):
        environment = Environment({'DOCKER_TLS_VERIFY': '0'})
        options = {'--tls': True}
        assert tls_config_from_options(options, environment) is True
    
        if 'ports' in service_dict:
        service_dict['ports'] = [
            p.legacy_repr() if p.external_ip or version < V3_2 else p
            for p in service_dict['ports']
        ]
    if 'volumes' in service_dict and (version < V2_3 or (version > V3_0 and version < V3_2)):
        service_dict['volumes'] = [
            v.legacy_repr() if isinstance(v, types.MountSpec) else v for v in service_dict['volumes']
        ]
    
        @classmethod
    def from_ps(cls, client, dictionary, **kwargs):
        '''
        Construct a container object from the output of GET /containers/json.
        '''
        name = get_container_name(dictionary)
        if name is None:
            return None
    
    
def pypi_upload(args):
    print('Uploading to PyPi')
    try:
        rel = args.release.replace('-rc', 'rc')
        twine_upload([
            'dist/docker_compose-{}*.whl'.format(rel),
            'dist/docker-compose-{}*.tar.gz'.format(rel)
        ])
    except HTTPError as e:
        if e.response.status_code == 400 and 'File already exists' in str(e):
            if not args.finalize_resume:
                raise ScriptError(
                    'Package already uploaded on PyPi.'
                )
            print('Skipping PyPi upload - package already uploaded')
        else:
            raise ScriptError('Unexpected HTTP error uploading package to PyPi: {}'.format(e))
    
    
def ansi_color(code, s):
    return '{0}{1}{2}'.format(ansi(code), s, ansi(0))
    
    
def set_signal_handler_to_shutdown():
    set_signal_handler(shutdown)