
        
        
class CITextExtension(CreateExtension):
    
        # If protocol is None, the URLs in the sitemap will use the protocol
    # with which the sitemap was requested.
    protocol = None
    
            #type_, ext, size = url_info(url)
        #print_info(site_info, title, type_, size)
        #if not info_only:
            #download_urls([url], title, ext, total_size=None, output_dir=output_dir, merge=merge)
    
    def ehow_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
	
	assert re.search(r'http://www.ehow.com/video_', url), 'URL you entered is not supported'
    
    __all__ = ['fc2video_download']
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
    # If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
#
import sys
import os
import inspect
    
        # held_more_than and held_less_than: trigger on released (if in time range)
    # held_more_than: trigger after pressed with calculation
    # held_less_than: trigger on released with calculation
    # neither: trigger on pressed
    
    
@asyncio.coroutine
def async_trigger(hass, config, action):
    '''Listen for events based on configuration.'''
    event = config.get(CONF_EVENT)
    offset = config.get(CONF_OFFSET)
    
        def axis_device_discovered(service, discovery_info):
        '''Call when axis devices has been found.'''
        host = discovery_info[CONF_HOST]
        name = discovery_info['hostname']
        serialnumber = discovery_info['properties']['macaddress']
    
        def scan_completed_callback(scan_wizard, result, address, name):
        '''Restart scan wizard to constantly check for new buttons.'''
        if result == pyflic.ScanWizardResult.WizardSuccess:
            _LOGGER.info('Found new button %s', address)
        elif result != pyflic.ScanWizardResult.WizardFailedTimeout:
            _LOGGER.warning(
                'Failed to connect to button %s. Reason: %s', address, result)
    
    
def setup(hass, config):
    '''Listen for browse_url events.'''
    import webbrowser
    
            # We cover all current fields above, but just in case we start
        # supporting more fields in the future.
        updated_value.update(cur_value)
        updated_value.update(new_value)
        data[index] = updated_value
