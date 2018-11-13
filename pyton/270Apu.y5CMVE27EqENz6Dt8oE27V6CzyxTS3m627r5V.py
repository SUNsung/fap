
        
        Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
    try:
    import simplejson as json
except ImportError:
    import json
    
            :rtype: bool
        '''
        domains = []
        for cookie in iter(self):
            if cookie.domain is not None and cookie.domain in domains:
                return True
            domains.append(cookie.domain)
        return False  # there is only one domain in jar
    
    This module provides the capabilities for the Requests hooks system.
    
    import os
import copy
import filecmp
from io import BytesIO
import zipfile
from collections import deque
    
    
def post(url, data=None, json=None, **kwargs):
    r'''Sends a POST request.
    
        '''
    deps = {
        'ssl': ['setenvif', 'mime']
    }
    return deps.get(mod_name, [])
    
    
MOD_SSL_CONF_DEST = 'options-ssl-apache.conf'
'''Name of the mod_ssl config file as saved in `IConfig.config_dir`.'''
    
    from certbot import errors
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Optional(CONF_HOST, default=DEFAULT_HOST): cv.string,
    vol.Optional(CONF_PORT, default=DEFAULT_PORT): cv.port,
    vol.Optional(CONF_DISCOVERY, default=True): cv.boolean,
    vol.Optional(CONF_TIMEOUT, default=DEFAULT_TIMEOUT): cv.positive_int,
    vol.Optional(CONF_IGNORED_CLICK_TYPES):
        vol.All(cv.ensure_list, [vol.In(CLICK_TYPES)])
})
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.host = config[CONF_HOST]
        self.username = config[CONF_USERNAME]
        self.password = config[CONF_PASSWORD]
        self.last_results = []
        data = self.get_actiontec_data()
        self.success_init = data is not None
        _LOGGER.info('canner initialized')
    
        def get_menu(self):
        '''Return the products from the closest stores menu.'''
        self.update_closest_store()
        if self.closest_store is None:
            _LOGGER.warning('Cannot get menu. Store may be closed')
            return []
        menu = self.closest_store.get_menu()
        product_entries = []
    
    
def setup(hass, config):
    '''Set up the Emoncms history component.'''
    conf = config[DOMAIN]
    whitelist = conf.get(CONF_WHITELIST)