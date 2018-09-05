
        
        
@classmethod
def get_args(cls, dist, header=None):
    '''
    Yield write_script() argument tuples for a distribution's
    console_scripts and gui_scripts entry points.
    '''
    if header is None:
        header = cls.get_header()
    spec = str(dist.as_requirement())
    for type_ in 'console', 'gui':
        group = type_ + '_scripts'
        for name, ep in dist.get_entry_map(group).items():
            # ensure_safe_name
            if re.search(r'[\\/]', name):
                raise ValueError('Path separators not allowed in script names')
            script_text = TEMPLATE.format(
                          ep.module_name, ep.attrs[0], '.'.join(ep.attrs),
                          spec, group, name)
            args = cls._get_script_args(type_, name, header, script_text)
            for res in args:
                yield res
    
    
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_zshrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'zsh')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
        @staticmethod
    def import_windows_ca(certfile):
        xlog.debug('Begin to import Windows CA')
        with open(certfile, 'rb') as fp:
            certdata = fp.read()
            if certdata.startswith(b'-----'):
                begin = b'-----BEGIN CERTIFICATE-----'
                end = b'-----END CERTIFICATE-----'
                certdata = base64.b64decode(b''.join(certdata[certdata.find(begin)+len(begin):certdata.find(end)].strip().splitlines()))
        try:
            common_name = OpenSSL.crypto.load_certificate(OpenSSL.crypto.FILETYPE_ASN1, certdata).get_subject().CN
        except Exception as e:
            logging.error('load_certificate(certfile=%r) 失败：%s', certfile, e)
            return -1
    
    __file__ = os.path.abspath(__file__)
if os.path.islink(__file__):
    __file__ = getattr(os, 'readlink', lambda x: x)(__file__)
work_path = os.path.dirname(os.path.abspath(__file__))
os.chdir(work_path)
    
                else:
                tokenName = self.tokenNames[e.expecting]
    
            Lines are numbered 1..n
        
        Using setter/getter methods is deprecated. Use o.line instead.'''