
        
            def _reset_stats(self):
        self.tail.clear()
        self.start = self.lastmark = self.lasttime = time()
    
        def run(self, args, opts):
        '''
        Entry point for running commands
        '''
        raise NotImplementedError

    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
    
class ContractsManager(object):
    contracts = {}
    
        @classmethod
    def zonelist(cls, zonedir='/usr/share/zoneinfo'):
        zones = []
        for root, _, files in os.walk(zonedir):
            for f in files:
                p = os.path.join(root, f)
                with open(p, 'rb') as o:
                    magic =  o.read(4)
                if magic == b'TZif':
                    zones.append(p[len(zonedir) + 1:])
        return zones
    
    
if _have_ssl:
    
        def find_byrgb(self, rgbtuple):
        '''Return name for rgbtuple'''
        try:
            return self.__byrgb[rgbtuple]
        except KeyError:
            raise BadColor(rgbtuple) from None
    
        @staticmethod
    def static_method():
        return 'staticmethod'
    
    Plain 'raise' inside a generator should preserve the traceback (#13188).
The traceback should have 3 levels:
- g.throw()
- f()
- 1/0
    
    
class BaseRequestRateTest(BaseRobotTest):
    
        def test_repr(self):
        ct0 = Callable[[], bool]
        self.assertEqual(repr(ct0), 'typing.Callable[[], bool]')
        ct2 = Callable[[str, float], int]
        self.assertEqual(repr(ct2), 'typing.Callable[[str, float], int]')
        ctv = Callable[..., str]
        self.assertEqual(repr(ctv), 'typing.Callable[..., str]')