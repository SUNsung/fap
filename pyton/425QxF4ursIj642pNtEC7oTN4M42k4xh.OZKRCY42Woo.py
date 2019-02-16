
        
        for test in gettestcases():
    if METHOD == 'EURISTIC':
        try:
            webpage = compat_urllib_request.urlopen(test['url'], timeout=10).read()
        except Exception:
            print('\nFail: {0}'.format(test['name']))
            continue
    
    import json
import sys
import hashlib
import os.path
    
    
# find the correct sorting and add the required base classes so that sublcasses
# can be correctly created
classes = _ALL_CLASSES[:-1]
ordered_cls = []
while classes:
    for c in classes[:]:
        bases = set(c.__bases__) - set((object, InfoExtractor, SearchInfoExtractor))
        stop = False
        for b in bases:
            if b not in classes and b not in ordered_cls:
                if b.__name__ == 'GenericIE':
                    exit()
                classes.insert(0, b)
                stop = True
        if stop:
            break
        if all(b in ordered_cls for b in bases):
            ordered_cls.append(c)
            classes.remove(c)
            break
ordered_cls.append(_ALL_CLASSES[-1])
    
        def gen_ies_md(ies):
        for ie in ies:
            ie_md = '**{0}**'.format(ie.IE_NAME)
            ie_desc = getattr(ie, 'IE_DESC', None)
            if ie_desc is False:
                continue
            if ie_desc is not None:
                ie_md += ': {0}'.format(ie.IE_DESC)
            if not ie.working():
                ie_md += ' (Currently broken)'
            yield ie_md
    
    
def format_size(bytes):
    return '%s (%d bytes)' % (format_bytes(bytes), bytes)
    
    from __future__ import unicode_literals
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        requires_project = True
    default_settings = {'LOG_ENABLED': False}
    
            spidercls = DefaultSpider
        spider_loader = self.crawler_process.spider_loader
        if opts.spider:
            spidercls = spider_loader.load(opts.spider)
        else:
            spidercls = spidercls_for_request(spider_loader, request, spidercls)
        self.crawler_process.crawl(spidercls, start_requests=lambda: [request])
        self.crawler_process.start()

    
        def report_ok(self):
        self.network_stat = 'OK'
        self.last_check_time = time.time()
        self.continue_fail_count = 0
    
            elif isinstance(self.input, TreeNodeStream):
            adaptor = self.input.treeAdaptor
            return adaptor.getType(self.node)
    
    MOD_SSL_CONF_SRC = pkg_resources.resource_filename(
    'certbot_nginx', 'options-ssl-nginx.conf')
'''Path to the nginx mod_ssl config file found in the Certbot
distribution.'''
    
        def __init__(self, resource_type, *args, **kwargs):
        self.resource_type = resource_type
        super(Resource, self).__init__(
            'resource', default=resource_type, *args, **kwargs)
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
    
class JWSTest(unittest.TestCase):
    '''Tests for acme.jws.JWS.'''
    
    # Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'acme-python', u'acme-python Documentation',
     author, 'acme-python', 'One line description of project.',
     'Miscellaneous'),
]
    
            '''
        # Check for the root of save problems
        new_errs = self.aug.match('/augeas//error')
        # logger.error('During Save - %s', mod_conf)
        logger.error('Unable to save files: %s. Attempted Save Notes: %s',
                     ', '.join(err[13:len(err) - 6] for err in new_errs
                               # Only new errors caused by recent save
                               if err not in ex_errs), self.save_notes)
    
    # Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
        @property
    def should_poll(self):
        '''No polling needed.'''
        return False
    
            now = dt_util.now()
        actiontec_data = self.get_actiontec_data()
        if not actiontec_data:
            return False
        self.last_results = [Device(data['mac'], name, now)
                             for name, data in actiontec_data.items()
                             if data['timevalid'] > -60]
        _LOGGER.info('Scan successful')
        return True
    
    
def _arp(ip_address):
    '''Get the MAC address for a given IP.'''
    cmd = ['arp', '-n', ip_address]
    arp = subprocess.Popen(cmd, stdout=subprocess.PIPE)
    out, _ = arp.communicate()
    match = re.search(r'(([0-9A-Fa-f]{1,2}\:){5}[0-9A-Fa-f]{1,2})', str(out))
    if match:
        return match.group(0)
    _LOGGER.info('No MAC address found for %s', ip_address)
    return None
    
    DEFAULT_NAME = 'clickatell'
    
    
def get_service(hass, config, discovery_info=None):
    '''Get the demo notification service.'''
    return DemoNotificationService(hass)
    
            if not targets:
            _LOGGER.error('At least 1 target is required')
            return
    
    _LOGGER = logging.getLogger(__name__)
_RESOURCE = 'https://api.flock.com/hooks/sendMessage/'
    
    from homeassistant.components.notify import (
    PLATFORM_SCHEMA, BaseNotificationService)
from homeassistant.const import CONF_ACCESS_TOKEN, CONF_USERNAME
import homeassistant.helpers.config_validation as cv
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Optional(CONF_APP_NAME, default=DEFAULT_APP_NAME): cv.string,
    vol.Optional(CONF_APP_ICON): vol.Url,
    vol.Optional(CONF_HOSTNAME, default=DEFAULT_HOST): cv.string,
    vol.Optional(CONF_PASSWORD): cv.string,
    vol.Optional(CONF_PORT, default=DEFAULT_PORT): cv.port,
})