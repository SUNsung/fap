
        
            kwargs = {
        'stream': True,
        'method': args.method.lower(),
        'url': args.url,
        'headers': headers,
        'data': data,
        'verify': {
            'yes': True,
            'true': True,
            'no': False,
            'false': False,
        }.get(args.verify.lower(), args.verify),
        'cert': cert,
        'timeout': args.timeout,
        'auth': args.auth,
        'proxies': {p.key: p.value for p in args.proxy},
        'files': args.files,
        'allow_redirects': args.follow,
        'params': args.params,
    }
    
        def format_headers(self, headers):
        for p in self.enabled_plugins:
            headers = p.format_headers(headers)
        return headers
    
    
class BufferedPrettyStream(PrettyStream):
    '''The same as :class:`PrettyStream` except that the body is fully
    fetched before it's processed.
    
    import requests.auth
    
        '''
    abbrevs = [
        (1 << 50, 'PB'),
        (1 << 40, 'TB'),
        (1 << 30, 'GB'),
        (1 << 20, 'MB'),
        (1 << 10, 'kB'),
        (1, 'B')
    ]
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
            cert.sign(CertUtil.ca_privatekey, CertUtil.ca_digest)
    
        res = check_ip.check_ip(ip, host=top_domain, wait_time=wait_time)
    if not res:
        print('connect fail')
    elif res.ok:
        print('success, domain:%s handshake:%d' % (res.host, res.handshake_time))
    else:
        print('not support')
    
    
    def seek(self, index):
        '''
        consume() ahead until p==index; can't just set p=index as we must
        update line and charPositionInLine.
        '''
        
        if index <= self.p:
            self.p = index # just jump; don't update stream state (line, ...)
            return
    
        oslist = []
    allmd = []
    group = []
    ap = []