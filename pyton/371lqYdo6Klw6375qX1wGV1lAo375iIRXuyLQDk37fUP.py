
        
            def decode(self, value):
        if value != self.value:
            raise jose.DeserializationError('Expected {0!r}'.format(self.value))
        return self.value
    
    
def load_cert(*names):
    '''Load certificate.'''
    loader = _guess_loader(
        names[-1], crypto.FILETYPE_PEM, crypto.FILETYPE_ASN1)
    return crypto.load_certificate(loader, load_vector(*names))
    
    ALL_SSL_OPTIONS_HASHES = [
    '2086bca02db48daf93468332543c60ac6acdb6f0b58c7bfdf578a5d47092f82a',
    '4844d36c9a0f587172d9fa10f4f1c9518e3bcfa1947379f155e16a70a728c21a',
    '5a922826719981c0a234b1fbcd495f3213e49d2519e845ea0748ba513044b65b',
    '4066b90268c03c9ba0201068eaa39abbc02acf9558bb45a788b630eb85dadf27',
    'f175e2e7c673bd88d0aff8220735f385f916142c44aa83b09f1df88dd4767a88',
    'cfdd7c18d2025836ea3307399f509cfb1ebf2612c87dd600a65da2a8e2f2797b',
    '80720bd171ccdc2e6b917ded340defae66919e4624962396b992b7218a561791',
    'c0c022ea6b8a51ecc8f1003d0a04af6c3f2bc1c3ce506b3c2dfc1f11ef931082',
]
'''SHA256 hashes of the contents of previous versions of all versions of MOD_SSL_CONF_SRC'''
    
    from six.moves import xrange  # pylint: disable=redefined-builtin, import-error
    
        DocumentRoot {document_root}
</VirtualHost>