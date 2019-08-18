
        
        
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
        def __enter__(self):
        self.start()
        self.ready_event.wait(self.WAIT_EVENT_TIMEOUT)
        return self.host, self.port
    
        :param jar: cookielib.CookieJar (not necessarily a RequestsCookieJar)
    :param request: our own requests.Request object
    :param response: urllib3.HTTPResponse object
    '''
    if not (hasattr(response, '_original_response') and
            response._original_response):
        return
    # the _original_response field is the wrapped httplib.HTTPResponse object,
    req = MockRequest(request)
    # pull out the HTTPMessage with the headers and put it in the mock:
    res = MockResponse(response._original_response.msg)
    jar.extract_cookies(res, req)
    
    
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.
    
        @staticmethod
    def _get_old_cert(commonname):
        certfile = os.path.join(CertUtil.ca_certdir, commonname + '.crt')
        if os.path.exists(certfile):
            with open(certfile, 'rb') as fp:
                cert = OpenSSL.crypto.load_certificate(OpenSSL.crypto.FILETYPE_PEM, fp.read())
            if datetime.datetime.strptime(cert.get_notAfter(), '%Y%m%d%H%M%SZ') < datetime.datetime.utcnow() + datetime.timedelta(days=30):
                try:
                    os.remove(certfile)
                except OSError as e:
                    xlog.warning('CertUtil._get_old_cert failed: unable to remove outdated cert, %r', e)
                else:
                    return
                # well, have to use the old one
            return certfile
    
    
try:
    from Crypto.Cipher.ARC4 import new as _Crypto_Cipher_ARC4_new
except ImportError:
    logging.warn('Load Crypto.Cipher.ARC4 Failed, Use Pure Python Instead.')
    class _Crypto_Cipher_ARC4_new(object):
        def __init__(self, key):
            x = 0
            box = range(256)
            for i, y in enumerate(box):
                x = (x + y + ord(key[i % len(key)])) & 0xff
                box[i], box[x] = box[x], y
            self.__box = box
            self.__x = 0
            self.__y = 0
        def encrypt(self, data):
            out = []
            out_append = out.append
            x = self.__x
            y = self.__y
            box = self.__box
            for char in data:
                x = (x + 1) & 0xff
                y = (y + box[x]) & 0xff
                box[x], box[y] = box[y], box[x]
                out_append(chr(ord(char) ^ box[(box[x] + box[y]) & 0xff]))
            self.__x = x
            self.__y = y
            return ''.join(out)
    
    - ANTLRStringStream: Reads from a string objects. The input should be a unicode
  object, or ANTLR3 will have trouble decoding non-ascii data.
- ANTLRFileStream: Opens a file and read the contents, with optional character
  decoding.
- ANTLRInputStream: Reads the date from a file-like object, with optional
  character decoding.
    
    
##     def specialTransition(self, state, symbol):
##         return 0
    
            # Test: merge with an invalid key
        s = 'dummy3'
        cfg2 = AttrDict()
        cfg2.FOO = AttrDict()
        cfg2.FOO.BAR = s
        with self.assertRaises(KeyError):
            core_config.merge_cfg_from_cfg(cfg2)
    
    
def get_detectron_ops_lib():
    '''Retrieve Detectron ops library.'''
    # Candidate prefixes for detectron ops lib path
    prefixes = [_CMAKE_INSTALL_PREFIX, sys.prefix, sys.exec_prefix] + sys.path
    # Candidate subdirs for detectron ops lib
    subdirs = ['lib', 'torch/lib']
    # Try to find detectron ops lib
    for prefix in prefixes:
        for subdir in subdirs:
            ops_path = os.path.join(prefix, subdir, _DETECTRON_OPS_LIB)
            if os.path.exists(ops_path):
                print('Found Detectron ops lib: {}'.format(ops_path))
                return ops_path
    raise Exception('Detectron ops lib not found')
    
    
def configure_bbox_reg_weights(model, saved_cfg):
    '''Compatibility for old models trained with bounding box regression
    mean/std normalization (instead of fixed weights).
    '''
    if 'MODEL' not in saved_cfg or 'BBOX_REG_WEIGHTS' not in saved_cfg.MODEL:
        logger.warning('Model from weights file was trained before config key '
                       'MODEL.BBOX_REG_WEIGHTS was added. Forcing '
                       'MODEL.BBOX_REG_WEIGHTS = (1., 1., 1., 1.) to ensure '
                       'correct **inference** behavior.')
        # Generally we don't allow modifying the config, but this is a one-off
        # hack to support some very old models
        is_immutable = cfg.is_immutable()
        cfg.immutable(False)
        cfg.MODEL.BBOX_REG_WEIGHTS = (1., 1., 1., 1.)
        cfg.immutable(is_immutable)
        logger.info('New config:')
        logger.info(pprint.pformat(cfg))
        assert not model.train, (
            'This model was trained with an older version of the code that '
            'used bounding box regression mean/std normalization. It can no '
            'longer be used for training. To upgrade it to a trainable model '
            'please use fb/compat/convert_bbox_reg_normalized_model.py.'
        )
    
        def GetGlobalAverageValue(self):
        return self.total / self.count
    
    # Copyright (c) 2017-present, Facebook, Inc.
#
# Licensed under the Apache License, Version 2.0 (the 'License');
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an 'AS IS' BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
##############################################################################
    
        dt_testdev = []
    print('Filtering test-dev from test...')
    t = Timer()
    t.tic()
    for i in range(len(dt)):
        if i % 1000 == 0:
            print('{}/{}'.format(i, len(dt)))
        if dt[i]['image_id'] in image_testdev_id:
            dt_testdev.append(dt[i])
    print('Done filtering ({:2}s)!'.format(t.toc()))
    
    print('='*40)
print('2. 添加自定义词典/调整词典')
print('-'*40)
    
    content = open(file_name, 'rb').read()
    
        def testPosseg_NOHMM(self):
        import jieba.posseg as pseg
        for content in test_contents:
            result = pseg.cut(content,HMM=False)
            assert isinstance(result, types.GeneratorType), 'Test Posseg Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test Posseg error on content: %s' % content
            print(' , '.join([w.word + ' / ' + w.flag for w in result]), file=sys.stderr)
        print('testPosseg_NOHMM', file=sys.stderr)
    
    url = sys.argv[1]
content = open(url,'rb').read()
t1 = time.time()
words = '/ '.join(jieba.cut(content))