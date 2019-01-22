
        
        
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
    # List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
# This patterns also effect to html_static_path and html_extra_path
exclude_patterns = []
    
    SERVICE_BROWSE_URL_SCHEMA = vol.Schema({
    # pylint: disable=no-value-for-parameter
    vol.Required(ATTR_URL, default=ATTR_URL_DEFAULT): vol.Url(),
})
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.actiontec/
'''
import logging
import re
import telnetlib
from collections import namedtuple
import voluptuous as vol
    
        def get_device_name(self, device):
        '''Return the name (if known) of the device.'''
        return self.last_results.get(device)
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/downloader/
'''
import logging
import os
import re
import threading
    
                try:
                read, _, _ = select.select(
                    [ssdp_socket], [],
                    [ssdp_socket], 2)
    
    from functools import wraps
import logging
    
    import voluptuous as vol
    
    DEFAULT_HOST = '0.0.0.0'
DEFAULT_PORT = 65432