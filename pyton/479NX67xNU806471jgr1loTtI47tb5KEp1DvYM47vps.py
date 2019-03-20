
        
        
def add_error(line_num, message):
    '''adds an error to the dynamic error list'''
    err = '(L{:03d}) {}'.format(line_num + 1, message)
    errors.append(err)
    
            exist_ca_sha1 = get_exist_ca_sha1()
        if exist_ca_sha1 == ca_hash:
            xlog.info('GoAgent CA exist')
            return
    
    
def is_ok(ip=None):
    if not ip:
        return IPv4.is_ok() or IPv6.is_ok()
    elif '.' in ip:
        return IPv4.is_ok()
    else:
        return IPv6.is_ok()
    
            self.decisionNumber = decisionNumber
    
            for i, op in enumerate(rewrites[:before]):
            if op is None:
                # ignore deleted
                continue
            if op.__class__ == kind:
                yield i, op
    
        def __init__(self, hass, filename, add_timestamp):
        '''Initialize the service.'''
        self.filepath = os.path.join(hass.config.config_dir, filename)
        self.add_timestamp = add_timestamp
    
        def __init__(self, hass, host, port):
        '''Initialize the service.'''
        self._hass = hass
        self._host = host
        self._port = port
    
    DEPENDENCIES = ['mycroft']
    
            title = kwargs.get(ATTR_TITLE, ATTR_TITLE_DEFAULT)
    
    
class DemoProvider(Provider):
    '''Demo speech API provider.'''
    
        def __init__(self, unpacked, extra):
        self.unpacked = unpacked
        self.extra = extra
    
    
def testSignedInt():
    check(b'\x99\xd0\x00\xd0\x80\xd0\xff\xd1\x00\x00\xd1\x80\x00'
          b'\xd1\xff\xff\xd2\x00\x00\x00\x00\xd2\x80\x00\x00\x00'
          b'\xd2\xff\xff\xff\xff', (0,
                                    -128,
                                    -1,
                                    0,
                                    -32768,
                                    -1,
                                    0,
                                    -2147483648,
                                    -1, ))
    
    plt.figtext(
    0.05, 0.2, r'$y_{it} = \beta^{\prime} x_{it} + \mu_{i} + \epsilon_{it}$',
    size=16, color='#5a89a4')