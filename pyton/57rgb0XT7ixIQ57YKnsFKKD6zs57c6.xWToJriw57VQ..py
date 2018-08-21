
        
        
class MockMaster(object):
    
    
class DragnnModelSaverLibTest(test_util.TensorFlowTestCase):
    
        try:
      with open(FLAGS.expected_file) as expected:
        content_expected = expected.read()
    except IOError as e:
      self.fail('Error opening '%s': %s' % (FLAGS.expected_file, e.strerror))
    
        This constructs a separately managed pipeline for a given target:
    it has its own ComputeSession, InputSpec placeholder, etc. The ops
    are given standardized names to allow access from the C++ API. It
    passes the values in target_config to build_training() above.
    
            with Server.basic_response_server(wait_to_close_event=block_server) as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
            sock.sendall(b'send something')
            time.sleep(2.5)
            sock.sendall(b'still alive')
            block_server.set()  # release server block
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
    
class UnrewindableBodyError(RequestException):
    '''Requests encountered an error when trying to rewind a body'''
    
    import idna
import urllib3
import chardet
    
        def iteritems(self):
        '''Dict-like iteritems() that returns an iterator of name-value tuples
        from the jar.
    
    # Declare top-level shortcuts
from scrapy.spiders import Spider
from scrapy.http import Request, FormRequest
from scrapy.selector import Selector
from scrapy.item import Item, Field
    
            # Delay queue processing if a download_delay is configured
        now = time()
        delay = slot.download_delay()
        if delay:
            penalty = delay - now + slot.lastseen
            if penalty > 0:
                slot.latercall = reactor.callLater(penalty, self._process_queue, spider, slot)
                return
    
    
def _get_boto_connection():
    from boto.s3.connection import S3Connection
    
            @defer.inlineCallbacks
        def process_response(response):
            assert response is not None, 'Received None in process_response'
            if isinstance(response, Request):
                defer.returnValue(response)
    
        def gotHeaders(self, headers):
        self.headers_time = time()
        self.response_headers = headers
    
        def process_response(self, request, response, spider):
    
        @classmethod
    def from_crawler(cls, crawler):
        o = cls(crawler.settings['USER_AGENT'])
        crawler.signals.connect(o.spider_opened, signal=signals.spider_opened)
        return o
    
    class ScrapyDeprecationWarning(Warning):
    '''Warning category for deprecated features, since the default
    DeprecationWarning is silenced on Python 2.7+
    '''
    pass