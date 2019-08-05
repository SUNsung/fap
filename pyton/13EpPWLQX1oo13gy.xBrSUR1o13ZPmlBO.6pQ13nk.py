
        
          def setUp(self):
    self.params = params = model_params.TINY_PARAMS
    params['batch_size'] = params['default_batch_size'] = 16
    params['use_synthetic_data'] = True
    params['hidden_size'] = 12
    params['num_hidden_layers'] = 2
    params['filter_size'] = 14
    params['num_heads'] = 2
    params['vocab_size'] = 41
    params['extra_decode_length'] = 2
    params['beam_size'] = 3
    params['dtype'] = tf.float32
    
          SOTA is 28.4 BLEU (uncased).
    '''
    self._setup()
    FLAGS.num_gpus = 8
    FLAGS.data_dir = self.train_data_dir
    FLAGS.vocab_file = self.vocab_file
    # Sets values directly to avoid validation check.
    FLAGS['bleu_source'].value = self.bleu_source
    FLAGS['bleu_ref'].value = self.bleu_ref
    FLAGS.param_set = 'big'
    FLAGS.batch_size = 3072 * 8
    FLAGS.train_steps = 100000
    FLAGS.steps_between_evals = 5000
    FLAGS.model_dir = self._get_model_dir('benchmark_graph_8_gpu')
    FLAGS.hooks = ['ExamplesPerSecondHook']
    self._run_and_report_benchmark()
    
      def __init__(self, sess, aggregation_config):
    self._sess = sess
    self._codebook_size = aggregation_config.codebook_size
    self._feature_dimensionality = aggregation_config.feature_dimensionality
    self._aggregation_type = aggregation_config.aggregation_type
    self._feature_batch_size = aggregation_config.feature_batch_size
    
      def __init__(self):
    super(_IteratorInitHook, self).__init__()
    self.iterator_initializer_fn = None
    
    from delf import delf_config_pb2
from delf import extractor
    
    Some codes have multiple names, and both upper- and lower-case versions of
the names are allowed. For example, ``codes.ok``, ``codes.OK``, and
``codes.okay`` all correspond to the HTTP status code 200.
'''
    
        def test_empty_stream_with_auth_does_not_set_content_length_header(self, httpbin):
        '''Ensure that a byte stream with size 0 will not set both a Content-Length
        and Transfer-Encoding header.
        '''
        auth = ('user', 'pass')
        url = httpbin('post')
        file_obj = io.BytesIO(b'')
        r = requests.Request('POST', url, auth=auth, data=file_obj)
        prepared_request = r.prepare()
        assert 'Transfer-Encoding' in prepared_request.headers
        assert 'Content-Length' not in prepared_request.headers
    
    
class HTTPError(RequestException):
    '''An HTTP error occurred.'''
    
        def __init__(self, name=None):
        self.name = name
        super(LookupDict, self).__init__()
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
    import pytest
    
    
@pytest.mark.parametrize('var,scheme', _proxy_combos)
def test_use_proxy_from_environment(httpbin, var, scheme):
    url = '{}://httpbin.org'.format(scheme)
    fake_proxy = Server()  # do nothing with the requests; just close the socket
    with fake_proxy as (host, port):
        proxy_url = 'socks5://{}:{}'.format(host, port)
        kwargs = {var: proxy_url}
        with override_environ(**kwargs):
            # fake proxy's lack of response will cause a ConnectionError
            with pytest.raises(requests.exceptions.ConnectionError):
                requests.get(url)
    
        def test_text_response(self):
        '''the text_response_server sends the given text'''
        server = Server.text_response_server(
            'HTTP/1.1 200 OK\r\n' +
            'Content-Length: 6\r\n' +
            '\r\nroflol'
        )
    
            account_number = match1(html, r'data-account='(\d+)'')
    
    #----------------------------------------------------------------------
#helper
#https://stackoverflow.com/questions/2148119/how-to-convert-an-xml-string-to-a-dictionary-in-python
def dictify(r,root=True):
    if root:
        return {r.tag : dictify(r, False)}
    d=copy(r.attrib)
    if r.text:
        d['_text']=r.text
    for x in r.findall('./*'):
        if x.tag not in d:
            d[x.tag]=[]
        d[x.tag].append(dictify(x,False))
    return d
    
    def get_orig_video_source(api_key, pid, secret):
    parsed = json.loads(get_content_headered(tmpl_api_call_video_info % (api_key, pid, secret)))
    for stream in parsed['streams']['stream']:
        if stream['type'] == 'orig':
            return stream['_content'].replace('\\', '')
    return None
    
    
def get_mobile_room_url(room_id):
    return 'http://www.huomao.com/mobile/mob_live/%s' % room_id
    
        with TestHook() as hook:
        # Catch name changes
        C.__name__ = 'X'
        # Catch type changes
        C.__bases__ = (B,)
        # Ensure bypassing __setattr__ is still caught
        type.__dict__['__bases__'].__set__(C, (B,))
        # Catch attribute replacement
        C.__init__ = B.__init__
        # Catch attribute addition
        C.new_attr = 123
        # Catch class changes
        a.__class__ = B
    
            Replace the first matching header found in the message, retaining
        header order and case.  If no matching header was found, a KeyError is
        raised.
        '''
        _name = _name.lower()
        for i, (k, v) in zip(range(len(self._headers)), self._headers):
            if k.lower() == _name:
                self._headers[i] = self.policy.header_store_parse(k, _value)
                break
        else:
            raise KeyError(_name)
    
        def shutdown(self, wait=True):
        with self._shutdown_lock:
            self._shutdown = True
            self._work_queue.put(None)
        if wait:
            for t in self._threads:
                t.join()
    shutdown.__doc__ = _base.Executor.shutdown.__doc__

    
            async def client(path):
            with self.assertWarns(DeprecationWarning):
                reader, writer = await asyncio.open_unix_connection(
                    path, loop=self.loop)
            # send a line
            writer.write(b'hello world!\n')
            # read it back
            msgback = await reader.readline()
            writer.close()
            await writer.wait_closed()
            return msgback