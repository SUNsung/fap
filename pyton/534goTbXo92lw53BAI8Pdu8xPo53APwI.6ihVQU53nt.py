
        
        
@pytest.fixture(autouse=True)
def shell(mocker):
    shell = mocker.patch('thefuck.entrypoints.not_configured.shell',
                         new_callable=MagicMock)
    shell.get_history.return_value = []
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=True)
    return shell
    
    containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
    
init_zshrc = u'''echo '
export SHELL=/usr/bin/zsh
export HISTFILE=~/.zsh_history
echo > $HISTFILE
export SAVEHIST=100
export HISTSIZE=100
eval $(thefuck --alias {})
setopt INC_APPEND_HISTORY
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.zshrc'''
    
    
@pytest.mark.parametrize('script, output', [
    ('brew link sshfs', output),
    ('cat output', output),
    ('brew install sshfs', '')])
def test_not_match(script, output):
    command = Command(script, output)
    assert not match(command)
    
    def point_quat2quat(quat):
    _quat = quat.copy()
    if len(_quat.shape) < 2:
        _quat = np.expand_dims(_quat, 0)
    assert(_quat.shape[1] == 5)
    angle = np.arctan(_quat[:,[0]] / _quat[:,[1]])
    qw = np.cos(angle / 2)
    
    class DoubleWrapperError(Error):
    pass
    
    class UnrecordableEnv(object):
    metadata = {'render.modes': [None]}
    
            # Lastly, pull the app out of test mode so it'll load controllers on
        # first use
        RedditApp.test_mode = False
    
    class MockWorld(World):
    def _make_state(self, config):
        # Mock by hand because _parse_config is called in __init__, so we
        # can't instantiate then update.
        class MockState(FeatureState):
            def _parse_config(*args, **kwargs):
                return config
        return MockState('test_state', self)
    
            # Scenario: call raises TransactionError
        _request.make_request.return_value = (False, _response)
        self.assertRaises(TransactionError, capture_authorization_hold,
                          self.customer_id, self.payment_profile_id,
                          self.amount, self.transaction_id)
    
            for width in (108, 216, 320, 640, 960, 1080):
            url = self.provider.resize_image(image, width)
            self.assertEqual(url, 'https://unsplash.it/%d/%d' % (width,
                width*2))

    
    
class SigningTests(RedditTestCase):
    def setUp(self):
        super(RedditTestCase, self).setUp()
        g.secrets['request_signature_secret'] = 'super_secret_do_not_share'
    
        def filter_with_english_letters(self, aBuf):
        # TODO
        return aBuf

    
        def reset(self):
        CharSetProber.reset(self)
        for codingSM in self._mCodingSM:
            if not codingSM:
                continue
            codingSM.active = True
            codingSM.reset()
        self._mActiveSM = len(self._mCodingSM)
        self._mDetectedCharset = None
    
    GB2312_TYPICAL_DISTRIBUTION_RATIO = 0.9
    
            for cur in aBuf:
            if cur == ' ':
                # We stand on a space - a word just ended
                if self._mBeforePrev != ' ':
                    # next-to-last char was not a space so self._mPrev is not a
                    # 1 letter word
                    if self.is_final(self._mPrev):
                        # case (1) [-2:not space][-1:final letter][cur:space]
                        self._mFinalCharLogicalScore += 1
                    elif self.is_non_final(self._mPrev):
                        # case (2) [-2:not space][-1:Non-Final letter][
                        #  cur:space]
                        self._mFinalCharVisualScore += 1
            else:
                # Not standing on a space
                if ((self._mBeforePrev == ' ') and
                        (self.is_final(self._mPrev)) and (cur != ' ')):
                    # case (3) [-2:space][-1:final letter][cur:not space]
                    self._mFinalCharVisualScore += 1
            self._mBeforePrev = self._mPrev
            self._mPrev = cur
    
    Win1251BulgarianModel = {
  'charToOrderMap': win1251BulgarianCharToOrderMap,
  'precedenceMatrix': BulgarianLangModel,
  'mTypicalPositiveRatio': 0.969392,
  'keepEnglishLetter': False,
  'charsetName': 'windows-1251'
}
    
    # Character Mapping Table:
Latin2_HungarianCharToOrderMap = (
255,255,255,255,255,255,255,255,255,255,254,255,255,254,255,255,  # 00
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  # 10
253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,  # 20
252,252,252,252,252,252,252,252,252,252,253,253,253,253,253,253,  # 30
253, 28, 40, 54, 45, 32, 50, 49, 38, 39, 53, 36, 41, 34, 35, 47,
 46, 71, 43, 33, 37, 57, 48, 64, 68, 55, 52,253,253,253,253,253,
253,  2, 18, 26, 17,  1, 27, 12, 20,  9, 22,  7,  6, 13,  4,  8,
 23, 67, 10,  5,  3, 21, 19, 65, 62, 16, 11,253,253,253,253,253,
159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,
175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,
191,192,193,194,195,196,197, 75,198,199,200,201,202,203,204,205,
 79,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,
221, 51, 81,222, 78,223,224,225,226, 44,227,228,229, 61,230,231,
232,233,234, 58,235, 66, 59,236,237,238, 60, 69, 63,239,240,241,
 82, 14, 74,242, 70, 80,243, 72,244, 15, 83, 77, 84, 30, 76, 85,
245,246,247, 25, 73, 42, 24,248,249,250, 31, 56, 29,251,252,253,
)