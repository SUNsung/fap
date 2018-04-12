
        
        
class PollErrorTest(unittest.TestCase):
    '''Tests for acme.errors.PollError.'''
    
    
intersphinx_mapping = {
    'python': ('https://docs.python.org/', None),
    'acme': ('https://acme-python.readthedocs.org/en/latest/', None),
    'certbot': ('https://certbot.eff.org/docs/', None),
    'certbot-apache': (
        'https://letsencrypt-apache.readthedocs.org/en/latest/', None),
    'certbot-nginx': (
        'https://letsencrypt-nginx.readthedocs.org/en/latest/', None),
}

    
        def tearDown(self):
        logging.disable(logging.NOTSET)