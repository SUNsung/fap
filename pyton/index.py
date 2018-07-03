
        
            def crawl(self):
        while True:
            page = self.data_store.extract_max_priority_page()
            if page is None:
                break
            if self.data_store.crawled_similar(page.signature):
                self.data_store.reduce_priority_link_to_crawl(page.url)
            else:
                self.crawl_page(page)
            page = self.data_store.extract_max_priority_page()

    
    
class LinkedList(object):
    
            (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
    
class VehicleSize(Enum):
    
    from mrjob.job import MRJob
    
    
class LongTest(unittest.TestCase):
    
            If the registered instance does not have a _dispatch method
        then the instance will be searched to find a matching method
        and, if found, will be called. Methods beginning with an '_'
        are considered private and will not be called by
        SimpleXMLRPCServer.
    
    T_IV2 = dataclasses.InitVar[int]
T_IV3 = dataclasses.InitVar
    
    @dataclass
class IV:
    T_IV4 = InitVar
    iv0: InitVar[int]
    iv1: InitVar
    iv2: T_IV2
    iv3: T_IV3
    not_iv4: T_IV4  # When using string annotations, this field is not recognized as an InitVar.

    
    >>> class LazyList:
...     def __init__(self, g):
...         self.sofar = []
...         self.fetch = g.__next__
...
...     def __getitem__(self, i):
...         sofar, fetch = self.sofar, self.fetch
...         while i >= len(sofar):
...             sofar.append(fetch())
...         return sofar[i]
    
    
class DefaultEntryTest(BaseRequestRateTest, unittest.TestCase):
    robots_txt = '''\
User-agent: *
Crawl-delay: 1
Request-rate: 3/15
Disallow: /cyberworld/map/
    '''
    request_rate = urllib.robotparser.RequestRate(3, 15)
    crawl_delay = 1
    good = ['/', '/test.html']
    bad = ['/cyberworld/map/index.html']
    
        def _add_entry(self, entry):
        if '*' in entry.useragents:
            # the default entry is considered last
            if self.default_entry is None:
                # the first default entry wins
                self.default_entry = entry
        else:
            self.entries.append(entry)
    
        def test_hash(self):
        for x in range(-30, 30):
            self.assertEqual(hash(x), hash(complex(x, 0)))
            x /= 3.0    # now check against floating point
            self.assertEqual(hash(x), hash(complex(x, 0.)))
    
    
class OmniCompletionRequest( CompletionRequest ):
  def __init__( self, omni_completer, request_data ):
    super( OmniCompletionRequest, self ).__init__( request_data )
    self._omni_completer = omni_completer
    
      if extra_nosetests_args:
    nosetests_args.extend( extra_nosetests_args )
  else:
    nosetests_args.append( p.join( DIR_OF_THIS_SCRIPT, 'python' ) )
    
    
class CompleterAvailableRequest( BaseRequest ):
  def __init__( self, filetypes ):
    super( CompleterAvailableRequest, self ).__init__()
    self.filetypes = filetypes
    self._response = None
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa