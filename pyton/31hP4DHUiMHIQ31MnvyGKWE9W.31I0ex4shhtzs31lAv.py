
        
        
class HeaderTest(unittest.TestCase):
    '''Tests for acme.jws.Header.'''
    
        def rollback_checkpoints(self, rollback=1):
        '''Rollback saved checkpoints.
    
        :ivar str filep: file path of VH
    :ivar str path: Augeas path to virtual host
    :ivar set addrs: Virtual Host addresses (:class:`set` of
        :class:`common.Addr`)
    :ivar str name: ServerName of VHost
    :ivar list aliases: Server aliases of vhost
        (:class:`list` of :class:`str`)