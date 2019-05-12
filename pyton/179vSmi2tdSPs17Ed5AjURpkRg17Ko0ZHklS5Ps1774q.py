
        
        
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    
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
    
    
@pytest.mark.parametrize('command, new_command, packages', [
    (Command('vim', ''), 'sudo apt-get install vim && vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('convert', ''), 'sudo apt-get install imagemagick && convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')]),
    (Command('sudo vim', ''), 'sudo apt-get install vim && sudo vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo convert', ''), 'sudo apt-get install imagemagick && sudo convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')])])
def test_get_new_command(mocker, command, new_command, packages):
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
def test_get_new_command():
    new_command = get_new_command(Command('apt list --upgradable', match_output))
    assert new_command == 'apt upgrade'
    
    
output = '''sshfs: OsxfuseRequirement unsatisfied!
    
        def process_appid_not_exist(self, appid, ip):
        ret = self.check_api(ip, 'xxnet-1')
        if ret and ret.ok:
            self.set_appid_not_exist(appid)
        else:
            self.logger.warn('process_appid_not_exist, remove ip:%s', ip)
    
        ca_certs = os.path.join(current_path, 'cacert.pem')
    openssl_context = SSLContext(
        logger, ca_certs=ca_certs,
        cipher_suites=['ALL', '!RC4-SHA', '!ECDHE-RSA-RC4-SHA', '!ECDHE-RSA-AES128-GCM-SHA256',
                       '!AES128-GCM-SHA256', '!ECDHE-RSA-AES128-SHA', '!AES128-SHA']
    )
    host_manager = HostManagerBase()
    connect_creator = ConnectCreator(logger, config, openssl_context, host_manager,
                                     debug=True)
    check_ip = CheckIp(logger, config, connect_creator)
    
        def get_stat(self):
        return self.network_stat
    
    
class RC4FileObject(object):
    '''fileobj for rc4'''
    def __init__(self, stream, key):
        self.__stream = stream
        self.__cipher = _Crypto_Cipher_ARC4_new(key) if key else lambda x:x
    def __getattr__(self, attr):
        if attr not in ('__stream', '__cipher'):
            return getattr(self.__stream, attr)
    def read(self, size=-1):
        return self.__cipher.encrypt(self.__stream.read(size))
    
    class ClassicToken(Token):
    '''@brief Alternative token implementation.
    
    A Token object like we'd use in ANTLR 2.x; has an actual string created
    and associated with this object.  These objects are needed for imaginary
    tree nodes that have payload objects.  We need to create a Token object
    that has a string; the tree node will point at this token.  CommonToken
    has indexes into a char stream and hence cannot be used to introduce
    new strings.
    '''
    
    
def mat2quat(mat):
    ''' Convert Rotation Matrix to Quaternion.  See rotation.py for notes '''
    mat = np.asarray(mat, dtype=np.float64)
    assert mat.shape[-2:] == (3, 3), 'Invalid shape matrix {}'.format(mat)
    
        def step(self, action):
        assert self.action_space.contains(action)
        if self.np_random.rand() < self.slip:
            action = not action  # agent slipped, reverse action taken
        if action:  # 'backwards': go back to the beginning, get small reward
            reward = self.small
            self.state = 0
        elif self.state < self.n - 1:  # 'forwards': go up along the chain
            reward = 0
            self.state += 1
        else:  # 'forwards': stay at the end of the chain, collect large reward
            reward = self.large
        done = False
        return self.state, reward, done, {}
    
        Args:
        seed (Optional[int]): None seeds from an operating system specific randomness source.
        max_bytes: Maximum number of bytes to use in the hashed seed.
    '''
    if seed is None:
        seed = create_seed(max_bytes=max_bytes)
    hash = hashlib.sha512(str(seed).encode('utf8')).digest()
    return _bigint_from_bytes(hash[:max_bytes])
    
    def key_press(key, mod):
    global human_agent_action, human_wants_restart, human_sets_pause
    if key==0xff0d: human_wants_restart = True
    if key==32: human_sets_pause = not human_sets_pause
    a = int( key - ord('0') )
    if a <= 0 or a >= ACTIONS: return
    human_agent_action = a