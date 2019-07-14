
        
        
class FixedTest(unittest.TestCase):
    '''Tests for acme.fields.Fixed.'''
    
    
class JWSTest(unittest.TestCase):
    '''Tests for acme.jws.JWS.'''
    
    UIR_ARGS = ['always', 'set', 'Content-Security-Policy',
            'upgrade-insecure-requests']
    
        @certbot_util.patch_get_utility()
    def test_noninteractive(self, mock_util):
        mock_util().menu.side_effect = errors.MissingCommandlineFlag('no vhost default')
        try:
            self._call(self.vhosts)
        except errors.MissingCommandlineFlag as e:
            self.assertTrue('vhost ambiguity' in str(e))
    
    # Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'certbot-dns-digitalocean', u'certbot-dns-digitalocean Documentation',
     author, 'certbot-dns-digitalocean', 'One line description of project.',
     'Miscellaneous'),
]