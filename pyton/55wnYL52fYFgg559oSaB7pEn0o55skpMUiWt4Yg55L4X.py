
        
        
def win_service_start(service_name, real_main):
    try:
        cb = START_CALLBACK(
            functools.partial(win_service_main, service_name, real_main))
        dispatch_table = _ctypes_array(SERVICE_TABLE_ENTRY, [
            SERVICE_TABLE_ENTRY(
                service_name,
                cb
            ),
            SERVICE_TABLE_ENTRY(None, ctypes.cast(None, START_CALLBACK))
        ])
    
        entry = entry_template.replace('@TIMESTAMP@', timestamp)
    entry = entry.replace('@VERSION@', v)
    entries.append(entry)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
        with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
    import io
import optparse
import os
import sys
    
    import requests.auth
    
        def __iter__(self):
        return iter(self._plugins)
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_migrate_implicit_content_type():
    config = MockEnvironment().config
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        # TODO: decoder should check that nonce is in the protected header
    
    MANAGED_COMMENT = 'DO NOT REMOVE - Managed by Certbot'
MANAGED_COMMENT_ID = MANAGED_COMMENT+', VirtualHost id: {0}'
'''Managed by Certbot comments and the VirtualHost identification template'''

    
        def test_include_single_quotes(self):
        self.verify_fnmatch(''' + self.config_path + ''')
    
        def setUp(self):
        self.base_dir = '/example_path'
        self.vhosts = util.get_vh_truth(
            self.base_dir, 'debian_apache_2_4/multiple_vhosts')
    
            self.sni.configurator.parser.find_dir(
            'Include', self.sni.challenge_conf)
        vh_match = self.sni.configurator.aug.match(
            '/files' + self.sni.challenge_conf + '//VirtualHost')
    
            '''
        ips = ' '.join(str(i) for i in ip_addrs)
        document_root = os.path.join(
            self.configurator.config.work_dir, 'tls_sni_01_page/')
        # TODO: Python docs is not clear how multiline string literal
        # newlines are parsed on different platforms. At least on
        # Linux (Debian sid), when source file uses CRLF, Python still
        # parses it as '\n'... c.f.:
        # https://docs.python.org/2.7/reference/lexical_analysis.html
        return self.VHOST_TEMPLATE.format(
            vhost=ips,
            server_name=achall.response(achall.account_key).z_domain.decode('ascii'),
            ssl_options_conf_path=self.configurator.mod_ssl_conf,
            cert_path=self.get_cert_path(achall),
            key_path=self.get_key_path(achall),
            document_root=document_root).replace('\n', os.linesep)
