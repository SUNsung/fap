
        
        from mrjob.job import MRJob
    
    
class PollErrorTest(unittest.TestCase):
    '''Tests for acme.errors.PollError.'''
    
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
    
            self.assertTrue(self.addr_default.conflicts(self.addr))
        self.assertTrue(self.addr_default.conflicts(self.addr1))
        self.assertTrue(self.addr_default.conflicts(self.addr_defined))
    
                        self.assertTrue(mock_eab_from_data.called)
    
        def cleanup(self):
        self._stop_nginx()
        super(IntegrationTestsContext, self).cleanup()
    
    
@pytest.mark.parametrize('certname_pattern, params, context', [
    ('nginx.{0}.wtf', ['run'], {'default_server': True}),
    ('nginx2.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': True}),
    # Overlapping location block and server-block-level return 301
    ('nginx3.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': True}),
    # No matching server block; default_server exists
    ('nginx4.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': True}),
    # No matching server block; default_server does not exist
    ('nginx5.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': False}),
    # Multiple domains, mix of matching and not
    ('nginx6.{0}.wtf,nginx7.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': False}),
], indirect=['context'])
def test_certificate_deployment(certname_pattern, params, context):
    # type: (str, list, nginx_context.IntegrationTestsContext) -> None
    '''
    Test various scenarios to deploy a certificate to nginx using certbot.
    '''
    domains = certname_pattern.format(context.worker_id)
    command = ['--domains', domains]
    command.extend(params)
    context.certbot_test_nginx(command)
    
        command = [
        'certbot',
        '--server', directory_url,
        '--no-verify-ssl',
        '--http-01-port', str(http_01_port),
        '--https-port', str(tls_alpn_01_port),
        '--manual-public-ip-logging-ok',
        '--config-dir', config_dir,
        '--work-dir', os.path.join(workspace, 'work'),
        '--logs-dir', os.path.join(workspace, 'logs'),
        '--non-interactive',
        '--no-redirect',
        '--agree-tos',
        '--register-unsafely-without-email',
        '--debug',
        '-vv'
    ]
    
            if threads != 'default':
            expr.set_numexpr_threads(threads)
        if not use_numexpr:
            expr.set_use_numexpr(False)
    
        def time_pandas_dtype(self, dtype):
        pandas_dtype(dtype)