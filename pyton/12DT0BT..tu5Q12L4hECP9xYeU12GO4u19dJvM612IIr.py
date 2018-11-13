
        
          LFADS generates a number of outputs for each examples, and these are all
  saved.  They are:
    The mean and variance of the prior of g0.
    The mean and variance of approximate posterior of g0.
    The control inputs (if enabled)
    The initial conditions, g0, for all examples.
    The generator states for all time.
    The factors for all time.
    The rates for all time.
    
      # Add necessary end of sentence token.
  if tokenized[-1] not in ['.', '!', '?']:
    tokenized += ['.']
  return tokenized
    
        # Unstack to lists.
    rewards_list = tf.unstack(rewards_half, axis=1)
    log_probs_list = tf.unstack(log_probs_half, axis=1)
    reward_missing = 1. - tf.cast(reward_present_half, tf.float32)
    reward_missing_list = tf.unstack(reward_missing, axis=1)
    
      # *Total* number of n-grams produced by the generator.
  total_ngrams_produced = 0
    
          Args:
        query: A Tensor of shape [batch_size, num_units].
        keys: A Tensor of shape [batch_size, attention_length, num_units].
        values: A Tensor of shape [batch_size, attention_length, num_units].
    
    
HandlerEx = ctypes.WINFUNCTYPE(
    ctypes.c_int,     # return
    ctypes.c_int,     # dwControl
    ctypes.c_int,     # dwEventType
    ctypes.c_void_p,  # lpEventData,
    ctypes.c_void_p,  # lpContext,
)
    
        def create_release(self, tag_name, name=None, body='', draft=False, prerelease=False):
        data = {
            'tag_name': tag_name,
            'target_commitish': 'master',
            'name': name,
            'body': body,
            'draft': draft,
            'prerelease': prerelease,
        }
        req = sanitized_Request(self._API_URL, json.dumps(data).encode('utf-8'))
        return self._call(req)
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
    README_FILE = 'README.md'
helptext = sys.stdin.read()
    
    
# Import youtube_dl
ROOT_DIR = os.path.join(os.path.dirname(__file__), '..')
sys.path.insert(0, ROOT_DIR)
import youtube_dl
    
                        # Pandoc's definition_lists. See http://pandoc.org/README.html
                    # for more information.
                    ret += '\n%s\n:   %s\n' % (option, description)
                    continue
            ret += line.lstrip() + '\n'
        else:
            ret += line + '\n'
    
        template = template.replace('{{fileopts}}', '|'.join(fileopts))
    template = template.replace('{{diropts}}', '|'.join(diropts))
    template = template.replace('{{flags}}', ' '.join(flags))
    
        def finalize_options(self):
        pass
    
        def test_format_not_available(self):
        formats = [
            {'format_id': 'regular', 'ext': 'mp4', 'height': 360, 'url': TEST_URL},
            {'format_id': 'video', 'ext': 'mp4', 'height': 720, 'acodec': 'none', 'url': TEST_URL},
        ]
        info_dict = _make_result(formats)
    
        def test_youtube_channel_matching(self):
        assertChannel = lambda url: self.assertMatch(url, ['youtube:channel'])
        assertChannel('https://www.youtube.com/channel/HCtnHdj3df7iM')
        assertChannel('https://www.youtube.com/channel/HCtnHdj3df7iM?feature=gb_ch_rec')
        assertChannel('https://www.youtube.com/channel/HCtnHdj3df7iM/videos')
    
    
@pytest.fixture
def set_shell(monkeypatch):
    def _set(cls):
        shell = cls()
        monkeypatch.setattr('thefuck.shells.shell', shell)
        return shell
    
        proc.sendline(u'ehco test')
    
    
@pytest.mark.parametrize('script, output', [
    ('brew link sshfs', output),
    ('cat output', output),
    ('brew install sshfs', '')])
def test_not_match(script, output):
    command = Command(script, output)
    assert not match(command)
    
            return self.__dict__.get(key, None)
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
    
class TestCaseInsensitiveDict:
    
            # ensure server thread doesn't get stuck waiting for connections
        self._close_server_sock_ignore_errors()
        self.join()
        return False # allow exceptions to propagate

    
    class PyTest(TestCommand):
    user_options = [('pytest-args=', 'a', 'Arguments to pass into py.test')]
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
            return {attr: getattr(self, attr, None) for attr in self.__attrs__}
    
    # The name of an image file (relative to this directory) to place at the top of
# the title page.
#latex_logo = None
    
        inputs = Input(shape=input_shape)
    x = resnet_layer(inputs=inputs)
    # Instantiate the stack of residual units
    for stack in range(3):
        for res_block in range(num_res_blocks):
            strides = 1
            if stack > 0 and res_block == 0:  # first layer but not first stack
                strides = 2  # downsample
            y = resnet_layer(inputs=x,
                             num_filters=num_filters,
                             strides=strides)
            y = resnet_layer(inputs=y,
                             num_filters=num_filters,
                             activation=None)
            if stack > 0 and res_block == 0:  # first layer but not first stack
                # linear projection residual shortcut connection to match
                # changed dims
                x = resnet_layer(inputs=x,
                                 num_filters=num_filters,
                                 kernel_size=1,
                                 strides=strides,
                                 activation=None,
                                 batch_normalization=False)
            x = keras.layers.add([x, y])
            x = Activation('relu')(x)
        num_filters *= 2
    
    # input image dimensions
img_rows, img_cols = 28, 28
    
        def __call__(self, x):
        return 0.
    
        # Arguments
        model: Keras model instance.
        f: Keras function returning a list of tensors.
        ins: list of tensors to be fed to `f`.
        batch_size: integer batch size.
        verbose: verbosity mode.
        steps: Total number of steps (batches of samples)
            before declaring `predict_loop` finished.
            Ignored with the default value of `None`.
    
    seq.add(ConvLSTM2D(filters=40, kernel_size=(3, 3),
                   padding='same', return_sequences=True))
seq.add(BatchNormalization())
    
        for node in doctree.traverse(is_setting_index):
        targetnode = get_setting_target(node)
        assert isinstance(targetnode, nodes.target), 'Next node is not a target'
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
        def short_desc(self):
        return 'Run a spider'
    
    
class Command(ScrapyCommand):
    
    
class ScrapesContract(Contract):
    ''' Contract to check presence of fields in scraped items
        @scrapes page_name page_body
    '''
    
        def download_request(self, request, spider):
        scheme = urlparse_cached(request).scheme
        handler = self._get_handler(scheme)
        if not handler:
            raise NotSupported('Unsupported URL scheme '%s': %s' %
                               (scheme, self._notconfigured[scheme]))
        return handler.download_request(request, spider)
    
        def appid_exist(self, appids):
        for appid in appids.split('|'):
            if appid == '':
                continue
            if appid in self.config.GAE_APPIDS:
                return True
        return False
    
        @staticmethod
    def create_ca():
        key = OpenSSL.crypto.PKey()
        key.generate_key(OpenSSL.crypto.TYPE_RSA, 2048)
        ca = OpenSSL.crypto.X509()
        ca.set_version(2)
        ca.set_serial_number(0)
        subj = ca.get_subject()
        subj.countryName = 'CN'
        subj.stateOrProvinceName = 'Internet'
        subj.localityName = 'Cernet'
        subj.organizationName = CertUtil.ca_vendor
        # Log generated time.
        subj.organizationalUnitName = '%s Root - %d' % (CertUtil.ca_vendor, int(time.time()))
        subj.commonName = '%s XX-Net' % CertUtil.ca_vendor
        ca.gmtime_adj_notBefore(- 3600 * 24)
        ca.gmtime_adj_notAfter(CertUtil.ca_validity - 3600 * 24)
        ca.set_issuer(subj)
        ca.set_subject(subj)
        ca.set_pubkey(key)
        ca.add_extensions([
            OpenSSL.crypto.X509Extension(
                'basicConstraints', False, 'CA:TRUE', subject=ca, issuer=ca)
            ])
        ca.sign(key, CertUtil.ca_digest)
        #xlog.debug('CA key:%s', key)
        xlog.info('create CA')
        return key, ca
    
    current_path = os.path.dirname(os.path.abspath(__file__))
root_path = os.path.abspath(os.path.join(current_path, os.pardir, os.pardir, os.pardir))
data_path = os.path.abspath(os.path.join(root_path, os.pardir, os.pardir, 'data', 'gae_proxy'))
if not os.path.isdir(data_path):
    data_path = current_path
    
    

    
            self.decisionNumber = decisionNumber
        self.eot = eot
        self.eof = eof
        self.min = min
        self.max = max
        self.accept = accept
        self.special = special
        self.transition = transition
    
    
    def match(self, input, ttype, follow):
        '''
        Match current input symbol against ttype.  Attempt
        single token insertion or deletion error recovery.  If
        that fails, throw MismatchedTokenException.
    
    
    def setText(self, text):
        '''
        Override the text for this token.  getText() will return this text
        rather than pulling from the buffer.  Note that this does not mean
        that start/stop indexes are not valid.  It means that that input
        was converted to a new string in the token object.
	'''
        self._text = text
    
        sepIndex = p.rfind(sep)
    if altsep:
        altsepIndex = p.rfind(altsep)
        sepIndex = max(sepIndex, altsepIndex)
    
        if AVAILABLE_TARGETS:
        # Coercion is expected to use the first available target locale
        CLI_COERCION_TARGET = AVAILABLE_TARGETS[0]
        CLI_COERCION_WARNING = CLI_COERCION_WARNING_FMT.format(CLI_COERCION_TARGET)
    
    def handleSlides(slides):
    for slide in slides:
        handleSlide(slide)