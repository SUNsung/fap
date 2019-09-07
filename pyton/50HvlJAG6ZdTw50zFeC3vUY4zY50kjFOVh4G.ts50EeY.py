
        
            def _real_extract(self, url):
        video_id = self._match_id(url)
        webpage = self._download_webpage(url, video_id)
        embed_url = self._proto_relative_url(self._search_regex(
            r'<iframe.+?src='((?:https?:)?//(?:daxab\.com|dxb\.to|[^/]+/player)/[^']+)'.*?></iframe>',
            webpage, 'embed url'))
        if VKIE.suitable(embed_url):
            return self.url_result(embed_url, VKIE.ie_key(), video_id)
    
        infile, outfile = args
    
        def save(self, fail_silently=False):
        self['__meta__'] = {
            'httpie': __version__
        }
        if self.helpurl:
            self['__meta__']['help'] = self.helpurl
    
    import pytest
    
    from fixtures import FILE_PATH, FILE_CONTENT
from utils import http, HTTP_OK, MockEnvironment
    
    
def main():
    package_meta_map = {
        package_name: get_package_meta(package_name)
        for package_name in PACKAGES
    }
    httpie_meta = package_meta_map.pop('httpie')
    print()
    print('  url '{url}''.format(url=httpie_meta['url']))
    print('  sha256 '{sha256}''.format(sha256=httpie_meta['sha256']))
    print()
    for dep_meta in package_meta_map.values():
        print('  resource '{name}' do'.format(name=dep_meta['name']))
        print('    url '{url}''.format(url=dep_meta['url']))
        print('    sha256 '{sha256}''.format(sha256=dep_meta['sha256']))
        print('  end')
        print('')
    
        # noinspection PyProtectedMember
    @property
    def headers(self):
        original = self._orig.raw._original_response
    
        try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)

    
    import logging
import numpy as np
    
    
_DEFAULTS = {
    'confidence': {
        'default': 50,
        'info': 'The confidence level at which the detector has succesfully found a face.\n'
                'Higher levels will be more discriminating, lower levels will have more false '
                'positives.',
        'datatype': int,
        'rounding': 5,
        'min_max': (25, 100),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    }
}

    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
            Returns:
        -------
        transfer: NumPy array
            OpenCV image (w, h, 3) NumPy array (uint8)
        '''
        clip = self.config.get('clip', True)
        preserve_paper = self.config.get('preserve_paper', True)
    
        @staticmethod
    def get_kernel_size(new_face, radius_percent):
        ''' Return the kernel size and central point for the given radius
            relative to frame width '''
        radius = max(1, round(new_face.shape[1] * radius_percent / 100))
        kernel_size = int((radius * 2) + 1)
        kernel_size = (kernel_size, kernel_size)
        logger.trace(kernel_size)
        return kernel_size, radius