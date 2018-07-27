
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
    
if len(sys.argv) <= 1:
    print('Specify the version number as parameter')
    sys.exit()
version = sys.argv[1]
    
    
def _is_empty(d):
    return not bool(os.listdir(d))
    
        def test_proxy_https(self):
        params = self._check_params(['primary_proxy', 'primary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL({
            'proxy': params['primary_proxy']
        })
        self.assertEqual(
            ydl.urlopen('https://yt-dl.org/ip').read().decode('utf-8'),
            params['primary_server_ip'])
    
    DOCUMENTATION = '''
---
inventory: openshift
short_description: Openshift gears external inventory script
description:
  - Generates inventory of Openshift gears using the REST interface
  - this permit to reuse playbook to setup an Openshift gear
version_added: None
author: Michael Scherer
'''
    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
    
def get_group_vars(groups):
    
        def construct_vault_encrypted_unicode(self, node):
        value = self.construct_scalar(node)
        b_ciphertext_data = to_bytes(value)
        # could pass in a key id here to choose the vault to associate with
        # TODO/FIXME: plugin vault selector
        vault = self._vaults['default']
        if vault.secrets is None:
            raise ConstructorError(context=None, context_mark=None,
                                   problem='found !vault but no vault password provided',
                                   problem_mark=node.start_mark,
                                   note=None)
        ret = AnsibleVaultEncryptedUnicode(b_ciphertext_data)
        ret.vault = vault
        return ret
    
        def test_weird_blocks(self):
        test = r'''
            if ($http_user_agent ~ MSIE) {
                rewrite ^(.*)$ /msie/$1 break;
            }
    
        def setUp(self):
        from acme.errors import MissingNonce
        self.response = mock.MagicMock(headers={})
        self.response.request.method = 'FOO'
        self.error = MissingNonce(self.response)
    
    # A shorter title for the navigation bar.  Default is the same as html_title.
#html_short_title = None