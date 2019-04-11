
        
        
def rainbow():
    cs = ['cyan', 'yellow', 'green', 'magenta', 'red', 'blue',
          'intense_cyan', 'intense_yellow', 'intense_green',
          'intense_magenta', 'intense_red', 'intense_blue']
    
        tls_attr_name = 'PROTOCOL_{}'.format(compose_tls_version)
    if not hasattr(ssl, tls_attr_name):
        log.warn(
            'The '{}' protocol is unavailable. You may need to update your '
            'version of Python or OpenSSL. Falling back to TLSv1 (default).'
            .format(compose_tls_version)
        )
        return None
    
    
def get_service_names(links):
    return [link.split(':')[0] for link in links]
    
    
class VolumeConfigChangedError(ConfigurationError):
    def __init__(self, local, property_name, local_value, remote_value):
        super(VolumeConfigChangedError, self).__init__(
            'Configuration for volume {vol_name} specifies {property_name} '
            '{local_value}, but a volume with the same name uses a different '
            '{property_name} ({remote_value}). If you wish to use the new '
            'configuration, please remove the existing volume '{full_name}' '
            'first:\n$ docker volume rm {full_name}'.format(
                vol_name=local.name, property_name=property_name,
                local_value=local_value, remote_value=remote_value,
                full_name=local.true_name
            )
        )
    
            with pytest.raises(ConfigurationError):
            net.ensure()
    
    import os
    
            assert fake_log.error.call_count == 1
        assert '123' in fake_log.error.call_args[0][0]
    
        def test_nosigning_register(self):
        res = self.do_register(
            headers={
                signing.SIGNATURE_UA_HEADER: None,
                signing.SIGNATURE_BODY_HEADER: None,
            },
            expect_errors=True,
        )
        self.assert_403_response(res, 'signing.ua.invalid.invalid_format')
    
        # IE<8 XSS
    def test_invalid_function(self):
        testcase = u'*{color:expression(alert(1));}'
        self.assertInvalid(testcase)
    
        def test_attr_whitelist(self):
        testcase = '<div><a><a><em onclick='alert(1)'>FOO!</em></a></a></div>'
        self.assertFragmentRaises(testcase, SoupUnsupportedAttrError)
    
        def test_no_extension(self):
        u = UrlParser('http://example.com/a')
        self.assertEquals('', u.path_extension())