
        
        
def is_setting_index(node):
    if node.tagname == 'index':
        # index entries for setting directives look like:
        # [(u'pair', u'SETTING_NAME; setting', u'std:setting-SETTING_NAME', '')]
        entry_type, info, refid = node['entries'][0][:3]
        return entry_type == 'pair' and info.endswith('; setting')
    return False
    
    Originally created for this issue:
https://github.com/scrapy/scrapy/issues/606
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
        # default settings to be used for this command instead of global defaults
    default_settings = {}
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
    from scrapy.commands import ScrapyCommand
from scrapy.contracts import ContractsManager
from scrapy.utils.misc import load_object
from scrapy.utils.conf import build_component_list
    
        if twisted_version < (17, 0, 0):
        from twisted.internet._sslverify import _maybeSetHostNameIndication
        set_tlsext_host_name = _maybeSetHostNameIndication
    else:
        def set_tlsext_host_name(connection, hostNameBytes):
            connection.set_tlsext_host_name(hostNameBytes)