
        
        import mock
    
    
class Signature(jose.Signature):
    '''ACME-specific Signature. Uses ACME-specific Header for customer fields.'''
    __slots__ = jose.Signature._orig_slots  # pylint: disable=no-member
    
        def test_nonce_decoder(self):
        from acme.jws import Header
        nonce_field = Header._fields['nonce']
    
    MANAGED_COMMENT = 'DO NOT REMOVE - Managed by Certbot'
MANAGED_COMMENT_ID = MANAGED_COMMENT+', VirtualHost id: {0}'
'''Managed by Certbot comments and the VirtualHost identification template'''

    
    # The suffix(es) of source filenames.
# You can specify multiple suffix as a list of string:
# source_suffix = ['.rst', '.md']
source_suffix = '.rst'
    
    # The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
#