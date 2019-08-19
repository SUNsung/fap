
        
            def test_str(self):
        self.assertEqual('Invalid nonce ('xxx'): error', str(self.error))
    
    from certbot_apache import obj
    
        filesystem.chmod(path, 0o600)

    
    
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
    
        def test_asyncio_close_leak(self):
        orig_count = len(IOLoop._ioloop_for_asyncio)
        for i in range(10):
            # Create and close an AsyncIOMainLoop using asyncio interfaces.
            loop = asyncio.new_event_loop()
            loop.call_soon(IOLoop.current)
            loop.call_soon(loop.stop)
            loop.run_forever()
            loop.close()
        new_count = len(IOLoop._ioloop_for_asyncio) - orig_count
        # Because the cleanup is run on new loop creation, we have one
        # dangling entry in the map (but only one).
        self.assertEqual(new_count, 1)