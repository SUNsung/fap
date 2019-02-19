
        
                if isinstance(headers, bytes):
            # Python < 3
            headers = headers.decode('utf8')
        return headers
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
        def register(self, *plugins):
        for plugin in plugins:
            self._plugins.append(plugin)
    
    
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

    
        def setUp(self):
        from acme.errors import BadNonce
        self.error = BadNonce(nonce='xxx', error='error')
    
        def encode(self, value):
        if value != self.value:
            logger.warning(
                'Overriding fixed field (%s) with %r', self.json_name, value)
        return value
    
        # TODO: decoder/encoder should accept cls? Otherwise, subclassing
    # JSONObjectWithFields is tricky...
    header_cls = Header
    header = jose.Field(
        'header', omitempty=True, default=header_cls(),
        decoder=header_cls.from_json)
    
    # General information about the project.
project = u'acme-python'
copyright = u'2015-2015, Let\'s Encrypt Project'
author = u'Let\'s Encrypt Project'
    
        :param str vhost_path: Augeas virtual host path
    
    MANAGED_COMMENT = 'DO NOT REMOVE - Managed by Certbot'
MANAGED_COMMENT_ID = MANAGED_COMMENT+', VirtualHost id: {0}'
'''Managed by Certbot comments and the VirtualHost identification template'''

    
    
class Addr(common.Addr):
    '''Represents an Apache address.'''
    
            self.assertEqual(None, self._call(self.vhosts))
    
        def test_nonexistent_generic(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                mock_like.return_value = ['unknonwn']
                self.assertEqual(entrypoint.get_configurator(),
                                 configurator.ApacheConfigurator)
    
        def test_conflicts(self):
        # Note: Defined IP is more important than defined port in match
        self.assertTrue(self.addr.conflicts(self.addr1))
        self.assertTrue(self.addr.conflicts(self.addr2))
        self.assertTrue(self.addr.conflicts(self.addr_defined))
        self.assertFalse(self.addr.conflicts(self.addr_default))
    
            for addr in vhost.addrs:
            if '_default_' == addr.get_addr():
                addrs.add(default_addr)
            else:
                addrs.add(
                    addr.get_sni_addr(
                        self.configurator.config.tls_sni_01_port))
    
    def main():
    print('Making key files...')
    makeKeyFiles('rsa', 1024)
    print('Key files generation successful.')
    
    class Decision_Tree:
    def __init__(self, depth = 5, min_leaf_size = 5):
        self.depth = depth
        self.decision_boundary = 0
        self.left = None
        self.right = None
        self.min_leaf_size = min_leaf_size
        self.prediction = None