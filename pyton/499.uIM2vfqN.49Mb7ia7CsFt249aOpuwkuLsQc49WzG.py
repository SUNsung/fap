
        
            def set_appid_not_exist(self, appid):
        self.logger.warn('APPID_manager, set_appid_not_exist %s', appid)
        with self.lock:
            if appid not in self.not_exist_appids:
                self.not_exist_appids.append(appid)
            try:
                self.config.GAE_APPIDS.remove(appid)
            except:
                pass
    
            # remove old cert first
        xlog.info('Removing old cert in database $HOME/.pki/nssdb')
        cmd_line = 'certutil -L -d sql:$HOME/.pki/nssdb |grep 'GoAgent' && certutil -d sql:$HOME/.pki/nssdb -D -n '%s' ' % ( common_name)
        os.system(cmd_line)
    
                except NoViableAltException, re:
                self.reportError(re)
                self.recover(re) # throw out current char and try again
    
        def setInputStream(self, input):
        '''@brief From what character stream was this token created.
    
        def encode(self, value):
        if value != self.value:
            logger.warning(
                'Overriding fixed field (%s) with %r', self.json_name, value)
        return value
    
        good_nonce = jose.encode_b64jose(b'foo')
    wrong_nonce = u'F'
    # Following just makes sure wrong_nonce is wrong
    try:
        jose.b64decode(wrong_nonce)
    except (ValueError, TypeError):
        assert True
    else:
        assert False  # pragma: no cover
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode',
]
    
       # Target DNS server
   dns_rfc2136_server = 192.0.2.1
   # Target DNS port
   dns_rfc2136_port = 53
   # TSIG key name
   dns_rfc2136_name = keyname.
   # TSIG key secret
   dns_rfc2136_secret = 4q4wM/2I180UXoMyN4INVhJNi8V9BCV+jMw2mXgZw/CSuxUT8C7NKKFs \
AmKd7ak51vWKgSl12ib86oQRPkpDjg==
   # TSIG key algorithm
   dns_rfc2136_algorithm = HMAC-SHA512
    
        @mock.patch('dns.query.udp')
    def test_query_soa_found(self, query_mock):
        query_mock.return_value = mock.MagicMock(answer=[mock.MagicMock()], flags=dns.flags.AA)
        query_mock.return_value.rcode.return_value = dns.rcode.NOERROR
    
        assert context.nginx_config == current_nginx_config

    
        def forwards(self, orm):
        # Removing unique constraint on 'GroupTagValue', fields ['project_id',
        # 'group_id', 'environment_id', '_key', '_value']
        db.delete_unique(
            u'tagstore_grouptagvalue', [
                'project_id', 'group_id', 'environment_id', 'key_id', 'value_id'])
    
        def forwards(self, orm):
        # Removing unique constraint on 'EventTag', fields ['event_id', 'key', 'value']
        db.delete_unique(u'tagstore_eventtag', ['event_id', 'key_id', 'value_id'])
    
        def run(self):
        while True:
            try:
                ident, func, args, kwargs = self.queue.get_nowait()
            except Empty:
                break
    
    
class GithubBackend(OAuthBackend):
    '''Github OAuth authentication backend'''
    name = 'github'
    # Default extra data to store
    EXTRA_DATA = [
        ('id', 'id'),
        ('expires', 'expires')
    ]