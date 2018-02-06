
        
            def _accept_connection(self):
        try:
            ready, _, _ = select.select([self.server_sock], [], [], self.WAIT_EVENT_TIMEOUT)
            if not ready:
                return None
    
            This attribute checks if the status code of the response is between
        400 and 600 to see if there was a client error or a server error. If
        the status code, is between 200 and 400, this will return True. This
        is **not** a check to see if the response code is ``200 OK``.
        '''
        return self.ok
    
    
class ConnectionError(RequestException):
    '''A Connection error occurred.'''
    
    '''
The ``codes`` object defines a mapping from common names for HTTP statuses
to their numerical codes, accessible either as attributes or as dictionary
items.
    
    if hasattr(ctypes, 'windll'):
    WSAStringToAddressA = ctypes.windll.ws2_32.WSAStringToAddressA
    WSAAddressToStringA = ctypes.windll.ws2_32.WSAAddressToStringA
else:
    def not_windows():
        raise SystemError(
            'Invalid platform. ctypes.windll must be available.'
        )
    WSAStringToAddressA = not_windows
    WSAAddressToStringA = not_windows
    
    def os_detail():
    if sys.platform == 'win32':
        return win32_version_string()
    elif sys.platform.startswith('linux'):
        distname,version,id = platform.linux_distribution()
        return 'Dist:%s; Version:%s; ID:%s' % (distname,version,id)
    elif sys.platform == 'darwin':
        release, versioninfo, machine = platform.mac_ver()
        return 'Release:%s; Version:%s Machine:%s' % (release, versioninfo, machine)
    else:
        return 'None'

    
            raise NotImplementedError
    
    
    Revision ID: 430039611635
Revises: d827694c7555
Create Date: 2016-02-10 08:47:28.950891
    
    Revision ID: 43df8de3a5f4
Revises: 7dbf98566af7
Create Date: 2016-01-18 23:43:16.073483
    
    
def downgrade():
    op.drop_column('tables', 'description')

    
    # revision identifiers, used by Alembic.
revision = '5a7bad26f2a7'
down_revision = '4e6a06bad7a8'
    
    from r2.lib.translation import I18N_PATH
from r2.lib.plugin import PluginLoader
from r2.lib import js
    
        def __call__(self, environ, start_response):
        environ['FULLPATH'] = environ.get('PATH_INFO')
        qs = environ.get('QUERY_STRING')
        if qs:
            environ['FULLPATH'] += '?' + qs
        return self.app(environ, start_response)
    
            Responds with a 120x50 `image/png` which should be displayed
        to the user.