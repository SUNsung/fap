
        
            elif METHOD == 'LIST':
        domain = compat_urllib_parse_urlparse(test['url']).netloc
        if not domain:
            print('\nFail: {0}'.format(test['name']))
            continue
        domain = '.'.join(domain.split('.')[-2:])
    
    sys.path.insert(0, dirn(dirn((os.path.abspath(__file__)))))
import youtube_dl
from youtube_dl.utils import shell_quote
    
    atom_template = atom_template.replace('@TIMESTAMP@', now_iso)
    
        fileopts = []
    for opt in opts_file:
        if opt._short_opts:
            fileopts.extend(opt._short_opts)
        if opt._long_opts:
            fileopts.extend(opt._long_opts)
    
    
from test.helper import FakeYDL
from youtube_dl.cache import Cache
    
         
    def getUnexpectedType(self):
        '''Return the token type or char of the unexpected input element'''
    
            elif isinstance(e, EarlyExitException):
            msg = 'required (...)+ loop did not match anything at input ' \
                  + self.getTokenErrorDisplay(e.token)
    
            # Walk buffer, executing instructions and emitting tokens
        i = start
        while i <= end and i < len(self.tokens):
            op = indexToOp.get(i)
            # remove so any left have index size-1
            try:
                del indexToOp[i]
            except KeyError:
                pass
    
        print('After subclassing: ')
    for k in RegistryHolder.REGISTRY:
        print(k)
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(10, 20)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 30)
    
    *Where is the pattern used practically?
In graphics editors a shape can be basic or complex. An example of a
simple shape is a line, where a complex shape is a rectangle which is
made of four line objects. Since shapes have many operations in common
such as rendering the shape to screen, and since shapes follow a
part-whole hierarchy, composite pattern can be used to enable the
program to deal with all shapes uniformly.
    
    '''
*What is this pattern about?
The Decorator pattern is used to dynamically add a new feature to an
object without changing its implementation. It differs from
inheritance because the new feature is added only to that particular
object, not to the entire subclass.
    
    
# Complex Parts
class TC1:
    def run(self):
        print(u'###### In Test 1 ######')
        time.sleep(SLEEP)
        print(u'Setting up')
        time.sleep(SLEEP)
        print(u'Running test')
        time.sleep(SLEEP)
        print(u'Tearing down')
        time.sleep(SLEEP)
        print(u'Test Finished\n')
    
    
if __name__ == '__main__':
    p = Proxy()
    p.talk()
    p.busy = 'Yes'
    p.talk()
    p = NoTalkProxy()
    p.talk()
    p.busy = 'Yes'
    p.talk()
    
    
class TestData(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.dec_obs = DecimalViewer()
        cls.hex_obs = HexViewer()
        cls.sub = Data('Data')
        # inherited behavior already tested with TestSubject
        cls.sub.attach(cls.dec_obs)
        cls.sub.attach(cls.hex_obs)
    
        def test_subscriber_shall_be_detachable_from_subscriptions(cls):
        subscription = 'sub msg'
        pro = Provider()
        sub = Subscriber('sub name', pro)
        sub.subscribe(subscription)
        cls.assertEqual(len(pro.subscribers[subscription]), 1)
        sub.unsubscribe(subscription)
        cls.assertEqual(len(pro.subscribers[subscription]), 0)
    
        def test_2nd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1380'
        self.assertEqual(station, expected_station)