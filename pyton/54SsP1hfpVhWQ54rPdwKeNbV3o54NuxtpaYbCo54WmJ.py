
        
            def __init__(self, from_user_id, to_user_id, request_status, timestamp):
        self.from_user_id = from_user_id
        self.to_user_id = to_user_id
        self.request_status = request_status
        self.timestamp = timestamp
    
        '''
)
network.add_argument(
    '--check-status',
    default=False,
    action='store_true',
    help='''
    By default, HTTPie exits with 0 when no network or other fatal errors
    occur. This flag instructs HTTPie to also check the HTTP status code and
    exit with an error if the status indicates one.
    
        # This be set automatically once the plugin has been loaded.
    package_name = None
    
        name = 'Digest HTTP auth'
    auth_type = 'digest'
    
    
def test_POST_form_multiple_values(httpbin_both):
    r = http('--form', 'POST', httpbin_both + '/post', 'foo=bar', 'foo=baz')
    assert HTTP_OK in r
    assert r.json['form'] == {'foo': ['bar', 'baz']}
    
    
class TestLineEndings:
    '''
    Test that CRLF is properly used in headers
    and as the headers/body separator.
    
        def __call__(self, w):
        return w
    
        x_train = np.array(x[:int(len(x) * (1 - test_split))])
    y_train = np.array(y[:int(len(x) * (1 - test_split))])
    x_test = np.array(x[int(len(x) * (1 - test_split)):])
    y_test = np.array(y[int(len(x) * (1 - test_split)):])
    return (x_train, y_train), (x_test, y_test)

    
        for i in range(1, 6):
        fpath = os.path.join(path, 'data_batch_' + str(i))
        (x_train[(i - 1) * 10000: i * 10000, :, :, :],
         y_train[(i - 1) * 10000: i * 10000]) = load_batch(fpath)
    
        # Raises
        ValueError: in case of invalid `label_mode`.
    '''
    if label_mode not in ['fine', 'coarse']:
        raise ValueError('`label_mode` must be one of `'fine'`, `'coarse'`.')
    
        def process_appid_not_exist(self, appid, ip):
        ret = self.check_api(ip, 'xxnet-1')
        if ret and ret.ok:
            self.set_appid_not_exist(appid)
        else:
            self.logger.warn('process_appid_not_exist, remove ip:%s', ip)
    
            #Check Certs Dir
        if not os.path.exists(CertUtil.ca_certdir):
            os.makedirs(CertUtil.ca_certdir)
    
            if config.PROXY_ENABLE:
            if config.PROXY_USER:
                self.proxy = '%s://%s:%s@%s:%d' % \
                    (config.PROXY_TYPE, config.PROXY_USER, config.PROXY_PASSWD, config.PROXY_HOST, config.PROXY_PORT)
            else:
                self.proxy = '%s://%s:%d' % \
                    (config.PROXY_TYPE, config.PROXY_HOST, config.PROXY_PORT)
        else:
            self.proxy = None
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
        def build_floor(self):
        self.floor = 'More than One'
    
        def do_something(self, something):
        return 'Doing %s' % something
    
    
class Ui(object):
    ''' UI interaction class '''