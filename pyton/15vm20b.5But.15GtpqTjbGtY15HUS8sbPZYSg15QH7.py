
        
        
class DownloadBuilder(object):
    def __init__(self, **kwargs):
        self.handler = kwargs.pop('handler')
        self.srcPath = os.path.join(self.buildPath, *tuple(kwargs['path'][2:]))
        self.srcPath = os.path.abspath(os.path.normpath(self.srcPath))
        if not self.srcPath.startswith(self.buildPath):
            raise HTTPError(self.srcPath, 401)
    
        if RESULT and ('info_dict' not in test or 'age_limit' not in test['info_dict'] or
                   test['info_dict']['age_limit'] != 18):
        print('\nPotential missing age_limit check: {0}'.format(test['name']))
    
    import sys
import os
import textwrap
    
        with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
        with open(ZSH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    
        def tearDown(self):
        if os.path.exists(self.test_dir):
            shutil.rmtree(self.test_dir)
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'home-assistant', 'Home Assistant Documentation',
     [author], 1)
]
    
                if item.get(CONF_AUDIO) is not None:
                if isinstance(item.get(CONF_AUDIO), template.Template):
                    output[ATTR_STREAM_URL] = item[CONF_AUDIO].async_render()
                else:
                    output[ATTR_STREAM_URL] = item.get(CONF_AUDIO)
    
            _LOGGER.debug('Sent event %s', event.data.get('entity_id'))
    
        def _make_request(self):
        # Weirdly enough, this doesn't seem to require authentication
        data = [{
            'request': {
                'sinceRevision': 0
            },
            'action': 'http://linksys.com/jnap/devicelist/GetDevices'
        }]
        headers = {'X-JNAP-Action': 'http://linksys.com/jnap/core/Transaction'}
        return requests.post('http://{}/JNAP/'.format(self.host),
                             timeout=DEFAULT_TIMEOUT,
                             headers=headers,
                             json=data)

    
            Return the list if successful.
        '''
        _LOGGER.info('Refreshing device list')
        result = _retrieve_list(self.host, self.token)
        if result:
            return result
    
                        _LOGGER.debug('Downloading of %s done', url)
                    hass.bus.fire(
                        '{}_{}'.format(DOMAIN, DOWNLOAD_COMPLETED_EVENT), {
                            'url': url,
                            'filename': filename
                            })
    
        def dweet_event_listener(event):
        '''Listen for new messages on the bus and sends them to Dweet.io.'''
        state = event.data.get('new_state')
        if state is None or state.state in (STATE_UNKNOWN, '') \
                or state.entity_id not in whitelist:
            return
    
    
def parse_mapping(mapping, parents=None):
    '''Parse configuration device mapping.'''
    if parents is None:
        parents = []
    for addr, val in mapping.items():
        if isinstance(addr, (str,)) and isinstance(val, (str,)):
            from pycec.network import PhysicalAddress
            yield (addr, PhysicalAddress(val))
        else:
            cur = parents + [addr]
            if isinstance(val, dict):
                yield from parse_mapping(val, cur)
            elif isinstance(val, str):
                yield (val, pad_physical_address(cur))
    
        def __call__(self, method):
        '''Decorate a function.'''
        @wraps(method)
        async def wrapper(view, request, *args, **kwargs):
            '''Wrap a request handler with data validation.'''
            data = None
            try:
                data = await request.json()
            except ValueError:
                if not self._allow_empty or \
                   (await request.content.read()) != b'':
                    _LOGGER.error('Invalid JSON received.')
                    return view.json_message('Invalid JSON.', 400)
                data = {}