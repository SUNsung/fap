
        
            digest = hash_func()
    data = to_bytes(data, errors='surrogate_or_strict')
    digest.update(data)
    return digest.hexdigest()
    
        project_id = response.json()[0]['id']
    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
    from ansible.module_utils._text import to_bytes
from ansible.parsing.yaml.objects import AnsibleMapping, AnsibleSequence, AnsibleUnicode
from ansible.parsing.yaml.objects import AnsibleVaultEncryptedUnicode
from ansible.utils.unsafe_proxy import wrap_var
from ansible.parsing.vault import VaultLib
    
    
class FullJitterBackoffStrategyTestCase(unittest.TestCase):
    def test_no_retries(self):
        strategy = _full_jitter_backoff(retries=0)
        result = list(strategy())
        self.assertEquals(result, [], 'list should be empty')