
        
        # Dynamic inventory script which lets you use nodes discovered by Serf
# (https://serfdom.io/).
#
# Requires the `serfclient` Python module from
# https://pypi.python.org/pypi/serfclient
#
# Environment variables
# ---------------------
#   - `SERF_RPC_ADDR`
#   - `SERF_RPC_AUTH`
#
# These variables are described at https://www.serfdom.io/docs/commands/members.html#_rpc_addr
    
        if s1.st_dev != s2.st_dev:
        return True     # path/.. on a different device as path
    if s1.st_ino == s2.st_ino:
        return True     # path/.. is the same i-node as path, i.e. path=='/'
    return False

    
        def test_get_entity_name_from_resource_name(self):
        input_data = 'urlMaps'
        actual = GCPUtils.get_entity_name_from_resource_name(input_data)
        self.assertEqual('urlMap', actual)
        input_data = 'targetHttpProxies'
        actual = GCPUtils.get_entity_name_from_resource_name(input_data)
        self.assertEqual('targetHttpProxy', actual)
        input_data = 'globalForwardingRules'
        actual = GCPUtils.get_entity_name_from_resource_name(input_data)
        self.assertEqual('forwardingRule', actual)
        input_data = ''
        actual = GCPUtils.get_entity_name_from_resource_name(input_data)
        self.assertEqual(None, actual)
        input_data = 666
        actual = GCPUtils.get_entity_name_from_resource_name(input_data)
        self.assertEqual(None, actual)
    
        terminal_stdout_re = [
        re.compile(r'[\r\n]?<.+>(?:\s*)$'),
        re.compile(r'[\r\n]?\[.+\](?:\s*)$'),
    ]
    
        def deploy_cert(self, domain, cert_path, key_path, chain_path=None,
                    fullchain_path=None):
        '''Installs cert'''
        cert_path, key_path, chain_path = self.copy_certs_and_keys(
            cert_path, key_path, chain_path)
        self._configurator.deploy_cert(
            domain, cert_path, key_path, chain_path, fullchain_path)
