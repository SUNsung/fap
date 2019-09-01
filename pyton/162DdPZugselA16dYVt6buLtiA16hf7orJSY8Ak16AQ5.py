
        
            description = proj_info['description'],
    keywords = proj_info['keywords'],
    
    site_info = 'baomihua.com'
download = baomihua_download
download_playlist = playlist_not_supported('baomihua')

    
    from ..common import *
    
    from ..common import *
from ..extractor import VideoExtractor
    
            :raises ServerNotFoundError: Not running on Google Compute or DNS not available
        :raises ValueError: Server is found, but response code is not 200
        :returns: project id
        '''
        url = '{0}project/project-id'.format(METADATA_URL)
    
            self.webroot = os.path.join(self.nginx_root, 'webroot')
        os.mkdir(self.webroot)
        with open(os.path.join(self.webroot, 'index.html'), 'w') as file_handler:
            file_handler.write('Hello World!')
    
        assert server_cert == certbot_cert