EXAMPLES = '''
## List all Topics in a project
- gcpubsub_facts:
    view: topics
    state: list
    
        try:
        instance.update()
    except ValueError:
        # The ValueError here is the one we 'expect'.
        pass
    
    # Copyright: (c) 2015, VMware, Inc. All Rights Reserved.
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    
def main():
    argument_spec = ipa_argument_spec()
    argument_spec.update(zone_name=dict(type='str', required=True),
                         state=dict(type='str', default='present', choices=['present', 'absent']),
                         )
    
        params = {}
    
        return device_ip
    
    # ===========================================
# Stackdriver module specific support methods.
#
    
    
class RFC3339FieldTest(unittest.TestCase):
    '''Tests for acme.fields.RFC3339Field.'''
    
        def test_kid_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url, kid=self.kid)
        self.assertEqual(jws.signature.combined.nonce, self.nonce)
        self.assertEqual(jws.signature.combined.url, self.url)
        self.assertEqual(jws.signature.combined.kid, self.kid)
        self.assertEqual(jws.signature.combined.jwk, None)
        # TODO: check that nonce is in protected header
    
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