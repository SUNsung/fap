
        
        
class UserService(object):
    
        def reducer(self, key, values):
        '''Sum values for each key.
    
    def os_constant(key):
    # XXX TODO: In the future, this could return different constants
    #           based on what OS we are running under.  To see an
    #           approach to how to handle different OSes, see the
    #           apache version of this file.  Currently, we do not
    #           actually have any OS-specific constants on Nginx.
    '''
    Get a constant value for operating system
    
    
class PollErrorTest(unittest.TestCase):
    '''Tests for acme.errors.PollError.'''
    
    
class JWS(jose.JWS):
    '''ACME-specific JWS. Includes none, url, and kid in protected header.'''
    signature_cls = Signature
    __slots__ = jose.JWS._orig_slots  # pylint: disable=no-member
    
    HEADER_ARGS = {'Strict-Transport-Security': HSTS_ARGS,
               'Upgrade-Insecure-Requests': UIR_ARGS}
    
        def test_rollback_error(self):
        self.config.reverter.rollback_checkpoints = mock.Mock(
            side_effect=errors.ReverterError)
        self.assertRaises(errors.PluginError, self.config.rollback_checkpoints)
    
        def test_get_addrs_no_vhost_found(self):
        self.sni.configurator.choose_vhost = mock.Mock(
            side_effect=errors.MissingCommandlineFlag(
                'Failed to run Apache plugin non-interactively'))
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'certbot-apache', u'certbot-apache Documentation',
     [author], 1)
]