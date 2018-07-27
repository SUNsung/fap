
        
        from twisted import version as _txv
twisted_version = (_txv.major, _txv.minor, _txv.micro)
    
            return key
    
    import logging
from twisted.internet import defer
import six
from scrapy.exceptions import NotSupported, NotConfigured
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.misc import load_object
from scrapy.utils.python import without_none_values
from scrapy import signals
    
            # If no credentials could be found anywhere,
        # consider this an anonymous connection request by default;
        # unless 'anon' was set explicitly (True/False).
        anon = kw.get('anon')
        if anon is None and not aws_access_key_id and not aws_secret_access_key:
            kw['anon'] = True
        self.anon = kw.get('anon')
    
        def _format_cookie(self, cookie):
        # build cookie string
        cookie_str = '%s=%s' % (cookie['name'], cookie['value'])
    
    
class DecompressionMiddleware(object):
    ''' This middleware tries to recognise and extract the possibly compressed
    responses that may arrive. '''
    
        @classmethod
    def from_crawler(cls, crawler):
        o = cls(crawler.settings.getfloat('DOWNLOAD_TIMEOUT'))
        crawler.signals.connect(o.spider_opened, signal=signals.spider_opened)
        return o
    
            if self.close_on.get('errorcount'):
            crawler.signals.connect(self.error_count, signal=signals.spider_error)
        if self.close_on.get('pagecount'):
            crawler.signals.connect(self.page_count, signal=signals.response_received)
        if self.close_on.get('timeout'):
            crawler.signals.connect(self.spider_opened, signal=signals.spider_opened)
        if self.close_on.get('itemcount'):
            crawler.signals.connect(self.item_scraped, signal=signals.item_scraped)
        crawler.signals.connect(self.spider_closed, signal=signals.spider_closed)
    
        def test_b_observers_shall_be_attachable(cls):
        cls.s.attach(cls.dec_obs)
        cls.assertEqual(isinstance(cls.s._observers[0], DecimalViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.attach(cls.hex_obs)
        cls.assertEqual(isinstance(cls.s._observers[1], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 2)
    
        def get_current_time_as_html_fragment(self, time_provider):
        current_time = time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
        def __init__(self, param):
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
    from __future__ import print_function
    
    
# Test our radio out
if __name__ == '__main__':
    radio = Radio()
    actions = [radio.scan] * 2 + [radio.toggle_amfm] + [radio.scan] * 2
    actions *= 2