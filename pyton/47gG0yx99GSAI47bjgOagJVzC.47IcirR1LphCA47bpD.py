
        
                # Returns
            None or a tensor (or list of tensors,
                one per output tensor of the layer).
        '''
        if not self.supports_masking:
            if mask is not None:
                if isinstance(mask, list):
                    if any(m is not None for m in mask):
                        raise TypeError('Layer ' + self.name +
                                        ' does not support masking, '
                                        'but was passed an input_mask: ' +
                                        str(mask))
                else:
                    raise TypeError('Layer ' + self.name +
                                    ' does not support masking, '
                                    'but was passed an input_mask: ' +
                                    str(mask))
            # masking not explicitly supported: return None as mask
            return None
        # if masking is explicitly supported, by default
        # carry over the input mask
        return mask
    
    encoder_inputs = model.input[0]   # input_1
encoder_outputs, state_h_enc, state_c_enc = model.layers[2].output   # lstm_1
encoder_states = [state_h_enc, state_c_enc]
encoder_model = Model(encoder_inputs, encoder_states)
    
    
def resize_img(img, size):
    img = np.copy(img)
    if K.image_data_format() == 'channels_first':
        factors = (1, 1,
                   float(size[0]) / img.shape[2],
                   float(size[1]) / img.shape[3])
    else:
        factors = (1,
                   float(size[0]) / img.shape[1],
                   float(size[1]) / img.shape[2],
                   1)
    return scipy.ndimage.zoom(img, factors, order=1)
    
        # Example
    ```python
        >>> keras.backend.epsilon()
        1e-07
    ```
    '''
    return _EPSILON
    
            # Raises
            TypeError: If `layer` is not a layer instance.
            ValueError: In case the `layer` argument does not
                know its input shape.
            ValueError: In case the `layer` argument has
                multiple output tensors, or is already connected
                somewhere else (forbidden in `Sequential` models).
        '''
        if not isinstance(layer, Layer):
            raise TypeError('The added layer must be '
                            'an instance of class Layer. '
                            'Found: ' + str(layer))
        self.built = False
        if not self._layers:
            set_inputs = False
            # First layer in model: check that it is an input layer.
            if not isinstance(layer, InputLayer):
                # Create an input tensor and call `layer` on the input tensor.
                # First, we need to infer the expected input shape and dtype.
                first_layer = layer
                if isinstance(layer, (Model, Sequential)):
                    # We were passed a model as first layer.
                    # This requires a specific way to figure out the
                    # input shape and dtype.
                    if not layer.layers:
                        raise ValueError('Cannot add an empty model '
                                         'to a `Sequential` model.')
                    # In case of nested models: recover the first layer
                    # of the deepest model to infer input shape and dtype.
                    first_layer = layer.layers[0]
                    while isinstance(first_layer, (Model, Sequential)):
                        first_layer = first_layer.layers[0]
    
        '''
    is_windows: bool = is_windows
    config_dir: Path = DEFAULT_CONFIG_DIR
    stdin: Optional[IO] = sys.stdin  # `None` when closed fd (#791)
    stdin_isatty: bool = stdin.isatty() if stdin else False
    stdin_encoding: str = None
    stdout: IO = sys.stdout
    stdout_isatty: bool = stdout.isatty()
    stdout_encoding: str = None
    stderr: IO = sys.stderr
    stderr_isatty: bool = stderr.isatty()
    colors = 256
    if not is_windows:
        if curses:
            try:
                curses.setupterm()
                colors = curses.tigetnum('colors')
            except curses.error:
                pass
    else:
        # noinspection PyUnresolvedReferences
        import colorama.initialise
        stdout = colorama.initialise.wrap_stream(
            stdout, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        stderr = colorama.initialise.wrap_stream(
            stderr, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        del colorama
    
        # noinspection PyMethodOverriding
    def get_auth(
        self,
        username: str,
        password: str
    ) -> requests.auth.HTTPDigestAuth:
        return requests.auth.HTTPDigestAuth(username, password)

    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
        def __repr__(self):
        return f'<PluginManager: {list(self)}>'

    
        ERROR_TIMEOUT = 2
    ERROR_TOO_MANY_REDIRECTS = 6
    
    
class JWS(jose.JWS):
    '''ACME-specific JWS. Includes none, url, and kid in protected header.'''
    signature_cls = Signature
    __slots__ = jose.JWS._orig_slots  # pylint: disable=no-member
    
        def test_jwk_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url)
        self.assertEqual(jws.signature.combined.kid, None)
        self.assertEqual(jws.signature.combined.jwk, self.pubkey)
    
            self.assertEqual(mock_crypto_util.init_save_key.call_count, 2)
        self.assertEqual(mock_crypto_util.init_save_csr.call_count, 2)
        self.assertEqual(mock_remove.call_count, 2)
        self.assertEqual(mock_crypto_util.cert_and_chain_from_fullchain.call_count, 1)
    
    
class IntegrationTestsContext(certbot_context.IntegrationTestsContext):
    '''General fixture describing a certbot-nginx integration tests context'''
    def __init__(self, request):
        super(IntegrationTestsContext, self).__init__(request)
    
    
@pytest.fixture()
def context(request):
    # Fixture request is a built-in pytest fixture describing current test request.
    integration_test_context = nginx_context.IntegrationTestsContext(request)
    try:
        yield integration_test_context
    finally:
        integration_test_context.cleanup()
    
        @property
    def misconfigured(self):
        '''Is plugin misconfigured?'''
        return isinstance(self._prepared, errors.MisconfigurationError)
    
    
def handwritingClassTest():
    # 1. 导入数据
    hwLabels = []
    trainingFileList = listdir('data/2.KNN/trainingDigits')  # load the training set
    m = len(trainingFileList)
    trainingMat = zeros((m, 1024))
    # hwLabels存储0～9对应的index位置， trainingMat存放的每个位置对应的图片向量
    for i in range(m):
        fileNameStr = trainingFileList[i]
        fileStr = fileNameStr.split('.')[0]  # take off .txt
        classNumStr = int(fileStr.split('_')[0])
        hwLabels.append(classNumStr)
        # 将 32*32的矩阵->1*1024的矩阵
        trainingMat[i, :] = img2vector('data/2.KNN/trainingDigits/%s' % fileNameStr)
    
        def dump(self):
        '''
        Desc:
            将 Connections 的节点信息打印出来
        Args:
            None
        Returns:
            None
        '''
        for conn in self.connections:
            print(conn)
    
    try:
    reduce         # Python 2
except NameError:  # Python 3
    from functools import reduce
    
        # 测试 randCent() 函数是否正常运行。
    # 首先，先看一下矩阵中的最大值与最小值
    print('min(dataMat[:, 0])=', min(dataMat[:, 0]))
    print('min(dataMat[:, 1])=', min(dataMat[:, 1]))
    print('max(dataMat[:, 1])=', max(dataMat[:, 1]))
    print('max(dataMat[:, 0])=', max(dataMat[:, 0]))
    
    
def replaceNanWithMean():
    datMat = loadDataSet('data/13.PCA/secom.data', ' ')
    numFeat = shape(datMat)[1]
    for i in range(numFeat):
        # 对value不为NaN的求均值
        # .A 返回矩阵基于的数组
        meanVal = mean(datMat[nonzero(~isnan(datMat[:, i].A))[0], i])
        # 将value为NaN的值赋值为均值
        datMat[nonzero(isnan(datMat[:, i].A))[0],i] = meanVal
    return datMat
    
        # 所有输入到达后开始处理
    def map_final(self):  # 计算数据的平均值，平方的均值，并返回
        mn = self.inSum/self.inCount
        mnSq = self.inSqSum/self.inCount
        yield (1, [self.inCount, mn, mnSq])
    
        def map(self, mapperId, inVals):  # 需要 2 个参数
        # input: nodeId, ('w', w-vector) OR nodeId, ('x', int)
        if False:
            yield
        if inVals[0] == 'w':                  # 积累 w向量
            self.w = inVals[1]
        elif inVals[0] == 'x':
            self.dataList.append(inVals[1])   # 累积数据点计算
        elif inVals[0] == 't':                # 迭代次数
            self.t = inVals[1]
        else:
            self.eta = inVals                 # 这用于 debug， eta未在map中使用