
        
                try:
            self._db = shelve.open(cache_path)
        except shelve_open_error + (ImportError,):
            # Caused when switching between Python versions
            warn('Removing possibly out-dated cache')
            os.remove(cache_path)
            self._db = shelve.open(cache_path)
    
            packages = subprocess.check_output(
            ['pkgfile', '-b', '-v', command],
            universal_newlines=True, stderr=utils.DEVNULL
        ).splitlines()
    
        @pytest.fixture(autouse=True)
    def Popen(self, mocker):
        mock = mocker.patch('thefuck.shells.fish.Popen')
        mock.return_value.stdout.read.side_effect = [(
            b'cd\nfish_config\nfuck\nfunced\nfuncsave\ngrep\nhistory\nll\nls\n'
            b'man\nmath\npopd\npushd\nruby'),
            (b'alias fish_key_reader /usr/bin/fish_key_reader\nalias g git\n'
             b'alias alias_with_equal_sign=echo\ninvalid_alias'), b'func1\nfunc2', b'']
        return mock
    
        @pytest.mark.parametrize('side_effect, exception', [
        ([b'\n'], IndexError), (OSError, OSError)])
    def test_get_version_error(self, side_effect, exception, shell, Popen):
        Popen.return_value.stdout.read.side_effect = side_effect
        with pytest.raises(exception):
            shell._get_version()
        assert Popen.call_args[0][0] == ['tcsh', '--version']

    
        def from_shell(self, command_script):
        '''Prepares command before running in app.'''
        return self._expand_aliases(command_script)
    
        def app_alias(self, alias_name):
        return ('alias {0} 'setenv TF_SHELL tcsh && setenv TF_ALIAS {0} && '
                'set fucked_cmd=`history -h 2 | head -n 1` && '
                'eval `thefuck ${{fucked_cmd}}`'').format(alias_name)
    
    
@pytest.mark.usefixtures('no_memoize')
@pytest.mark.parametrize('script, output, which', [
    ('qweqwe', 'qweqwe: not found', None),
    ('vom file.py', 'some text', None),
    ('vim file.py', 'vim: not found', 'vim')])
def test_not_match(mocker, script, output, which):
    mocker.patch('thefuck.rules.no_command.which', return_value=which)
    
    
@pytest.fixture(autouse=True)
def Popen(mocker):
    mock = mocker.patch('thefuck.rules.pyenv_no_such_command.Popen')
    mock.return_value.stdout.readlines.return_value = (
        b'--version\nactivate\ncommands\ncompletions\ndeactivate\nexec_\n'
        b'global\nhelp\nhooks\ninit\ninstall\nlocal\nprefix_\n'
        b'realpath.dylib\nrehash\nroot\nshell\nshims\nuninstall\nversion_\n'
        b'version-file\nversion-file-read\nversion-file-write\nversion-name_\n'
        b'version-origin\nversions\nvirtualenv\nvirtualenv-delete_\n'
        b'virtualenv-init\nvirtualenv-prefix\nvirtualenvs_\n'
        b'virtualenvwrapper\nvirtualenvwrapper_lazy\nwhence\nwhich_\n'
    ).split()
    return mock
    
        # One from history:
    already_used = get_closest(
        old_command, _get_used_executables(command),
        fallback_to_first=False)
    if already_used:
        new_cmds = [already_used]
    else:
        new_cmds = []
    
            assert certdata, 'cert file %r is broken' % certfile
        import ctypes
        import ctypes.wintypes
        class CERT_CONTEXT(ctypes.Structure):
            _fields_ = [
                ('dwCertEncodingType', ctypes.wintypes.DWORD),
                ('pbCertEncoded', ctypes.POINTER(ctypes.wintypes.BYTE)),
                ('cbCertEncoded', ctypes.wintypes.DWORD),
                ('pCertInfo', ctypes.c_void_p),
                ('hCertStore', ctypes.c_void_p),]
        X509_ASN_ENCODING = 0x1
        CERT_STORE_ADD_ALWAYS = 4
        CERT_STORE_PROV_SYSTEM = 10
        CERT_STORE_OPEN_EXISTING_FLAG = 0x4000
        CERT_SYSTEM_STORE_CURRENT_USER = 1 << 16
        CERT_SYSTEM_STORE_LOCAL_MACHINE = 2 << 16
        CERT_FIND_SUBJECT_STR = 8 << 16 | 7
        crypt32 = ctypes.windll.crypt32
        ca_exists = False
        store_handle = None
        pCertCtx = None
        ret = 0
        for store in (CERT_SYSTEM_STORE_LOCAL_MACHINE, CERT_SYSTEM_STORE_CURRENT_USER):
            try:
                store_handle = crypt32.CertOpenStore(CERT_STORE_PROV_SYSTEM, 0, None, CERT_STORE_OPEN_EXISTING_FLAG | store, u'root')
                if not store_handle:
                    if store == CERT_SYSTEM_STORE_CURRENT_USER and not ca_exists:
                        xlog.warning('CertUtil.import_windows_ca failed: could not open system cert store')
                        return False
                    else:
                        continue
    
        '''
    
    def __init__(self, type=None, channel=DEFAULT_CHANNEL, text=None,
                 input=None, start=None, stop=None, oldToken=None):
        Token.__init__(self)
        
        if oldToken is not None:
            self.type = oldToken.type
            self.line = oldToken.line
            self.charPositionInLine = oldToken.charPositionInLine
            self.channel = oldToken.channel
            self.index = oldToken.index
            self._text = oldToken._text
            if isinstance(oldToken, CommonToken):
                self.input = oldToken.input
                self.start = oldToken.start
                self.stop = oldToken.stop
            
        else:
            self.type = type
            self.input = input
            self.charPositionInLine = -1 # set to invalid position
            self.line = 0
            self.channel = channel
            
	    #What token number is this from 0..n-1 tokens; < 0 implies invalid index
            self.index = -1
            
            # We need to be able to change the text once in a while.  If
            # this is non-null, then getText should return this.  Note that
            # start/stop are not affected by changing this.
            self._text = text
    
        # Replace random parameters with COCO parameters if class mapping exists
    for i in range(NUM_CS_CLS):
        coco_cls_id = getattr(cs, convert_func)(i)
        if coco_cls_id >= 0:  # otherwise ignore (rand init)
            cs_blob[i] = coco_blob[coco_cls_id]
    
            # Test: merge with converted type
        cfg2 = AttrDict()
        cfg2.TRAIN = AttrDict()
        cfg2.TRAIN.SCALES = [1]
        core_config.merge_cfg_from_cfg(cfg2)
        assert type(cfg.TRAIN.SCALES) is tuple
        assert cfg.TRAIN.SCALES[0] == 1
    
    from caffe2.proto import caffe2_pb2
    
        boxes = []
    scores = []
    ids = []
    for i in range(raw_data.shape[0]):
        if i % 1000 == 0:
            print('{}/{}'.format(i + 1, len(roidb)))
        # selective search boxes are 1-indexed and (y1, x1, y2, x2)
        i_boxes = raw_data[i][:, (1, 0, 3, 2)] - 1
        boxes.append(i_boxes.astype(np.float32))
        scores.append(np.zeros((i_boxes.shape[0]), dtype=np.float32))
        ids.append(roidb[i]['id'])
    
    from detectron.core.config import cfg
from detectron.datasets import task_evaluation
from detectron.datasets.json_dataset import JsonDataset
from detectron.utils.io import load_object
from detectron.utils.logging import setup_logging
import detectron.core.config as core_config