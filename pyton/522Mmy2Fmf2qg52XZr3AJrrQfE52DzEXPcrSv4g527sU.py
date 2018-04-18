
        
        import sys
    
        def __get__(self, obj, type=None):
        if obj is None:
            return self
        rv = obj.config[self.__name__]
        if self.get_converter is not None:
            rv = self.get_converter(rv)
        return rv
    
        result = runner.invoke(cli, ['test'], obj=obj)
    assert result.exit_code == 0
    assert result.output == 'testappgroup\n'
    
                self.baseurl = '%s/api/%s' % (self._api_server, server_version)
            self.version = server_version  # for future use
            display.vvvv('Base API: %s' % self.baseurl)
            self.initialized = True
        return method(self, *args, **kwargs)
    return wrapped
    
        return results

    
        platforms = 'any',
    zip_safe = True,
    include_package_data = True,
    
    def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
    site_info = 'ehow.com'
download = ehow_download
download_playlist = playlist_not_supported('ehow')

    
        video_url = match1(html, r'filepath=(.+)&sec')
    video_url = video_url.replace('&mid', '?mid')
    
    from ..common import *
from json import loads
from base64 import b64decode
import re
import hashlib
    
    from ..common import *
    
            # extract raw urls
        orig_img = match1(content,
                         r'<meta itemprop='image' content='([^']+/originals/[^']+)'')
        twit_img = match1(content,
                          r'<meta property='twitter:image:src' name='twitter:image:src' content='([^']+)'')