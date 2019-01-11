
        
            def reducer_identity(self, key, value):
        yield key, value
    
    from mrjob.job import MRJob
    
        def bfs(self, source, dest):
        # Use self.visited_ids to track visited nodes
        # Use self.lookup to translate a person_id to a Person
        pass

    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
    from .__version__ import __title__, __description__, __url__, __version__
from .__version__ import __build__, __author__, __author_email__, __license__
from .__version__ import __copyright__, __cake__
    
        def __setstate__(self, state):
        '''Unlike a normal CookieJar, this class is pickleable.'''
        self.__dict__.update(state)
        if '_cookies_lock' not in self.__dict__:
            self._cookies_lock = threading.RLock()
    
    _proxy_combos = []
for prefix, schemes in _schemes_by_var_prefix:
    for scheme in schemes:
        _proxy_combos.append(('{}_proxy'.format(prefix), scheme))
    
        # Client Error.
    400: ('bad_request', 'bad'),
    401: ('unauthorized',),
    402: ('payment_required', 'payment'),
    403: ('forbidden',),
    404: ('not_found', '-o-'),
    405: ('method_not_allowed', 'not_allowed'),
    406: ('not_acceptable',),
    407: ('proxy_authentication_required', 'proxy_auth', 'proxy_authentication'),
    408: ('request_timeout', 'timeout'),
    409: ('conflict',),
    410: ('gone',),
    411: ('length_required',),
    412: ('precondition_failed', 'precondition'),
    413: ('request_entity_too_large',),
    414: ('request_uri_too_large',),
    415: ('unsupported_media_type', 'unsupported_media', 'media_type'),
    416: ('requested_range_not_satisfiable', 'requested_range', 'range_not_satisfiable'),
    417: ('expectation_failed',),
    418: ('im_a_teapot', 'teapot', 'i_am_a_teapot'),
    421: ('misdirected_request',),
    422: ('unprocessable_entity', 'unprocessable'),
    423: ('locked',),
    424: ('failed_dependency', 'dependency'),
    425: ('unordered_collection', 'unordered'),
    426: ('upgrade_required', 'upgrade'),
    428: ('precondition_required', 'precondition'),
    429: ('too_many_requests', 'too_many'),
    431: ('header_fields_too_large', 'fields_too_large'),
    444: ('no_response', 'none'),
    449: ('retry_with', 'retry'),
    450: ('blocked_by_windows_parental_controls', 'parental_controls'),
    451: ('unavailable_for_legal_reasons', 'legal_reasons'),
    499: ('client_closed_request',),
    
    # For 'manual' documents, if this is true, then toplevel headings are parts,
# not chapters.
#latex_use_parts = False
    
        def test_prepare_request_with_bytestring_url(self):
        req = requests.Request('GET', b'https://httpbin.org/')
        s = requests.Session()
        prep = s.prepare_request(req)
        assert prep.url == 'https://httpbin.org/'
    
        def __init__(self):
        Resource.__init__(self)
        self.concurrent = 0
        self.tail = deque(maxlen=100)
        self._reset_stats()
    
    
class Command(ScrapyCommand):
    
            # prepare spidercls
        self.set_spidercls(url, opts)
    
    from scrapy.utils.spider import iter_spider_classes
from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
from scrapy.utils.conf import arglist_to_dict
from scrapy.utils.python import without_none_values
    
        class _v20_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, http_request, *args, **kwargs):
            http_request.authorize(connection=self)
            return http_request.headers
    
        dispatch = {
        'call': trace_call,
        'exception': trace_exception,
        'return': trace_return,
        'c_call': trace_pass,
        'c_return': trace_pass,
        'c_exception': trace_pass,
        }
    
        def test_encoding(self):
        # Test non-default encoding.
        text = self.TEXT.decode('ascii')
        text_native_eol = text.replace('\n', os.linesep)
        with self.open(self.filename, 'wt', encoding='utf-16-le') as f:
            f.write(text)
        with open(self.filename, 'rb') as f:
            file_data = ext_decompress(f.read()).decode('utf-16-le')
            self.assertEqual(file_data, text_native_eol)
        with self.open(self.filename, 'rt', encoding='utf-16-le') as f:
            self.assertEqual(f.read(), text)
    
    # Now add the related image to the html part.
with open('roasted-asparagus.jpg', 'rb') as img:
    msg.get_payload()[1].add_related(img.read(), 'image', 'jpeg',
                                     cid=asparagus_cid)
    
    # Import the email modules we'll need
from email import policy
from email.parser import BytesParser
    
        print('-' * 20)
    
            try:
            print(pool.map(f, list(range(10))))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from pool.map()')
        else:
            raise AssertionError('expected ZeroDivisionError')
    
    while True:
    line = input()
    if line == '':
        break
    buffer += line
    if sqlite3.complete_statement(buffer):
        try:
            buffer = buffer.strip()
            cur.execute(buffer)
    
        for prime in lowPrimes:
        if (num % prime) == 0:
            return False
    
        def __init__(self, size_table, charge_factor=None, lim_charge=None):
        self.size_table = size_table
        self.values = [None] * self.size_table
        self.lim_charge = 0.75 if lim_charge is None else lim_charge
        self.charge_factor = 1 if charge_factor is None else charge_factor
        self.__aux_list = []
        self._keys = {}
    
    
class QuadraticProbing(HashTable):
    '''
        Basic Hash Table example with open addressing using Quadratic Probing 
    '''
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
    
        def __solveDP(self, x, y):
        if (x==-1):
            return y+1
        elif (y==-1):
            return x+1
        elif (self.dp[x][y]>-1):
            return self.dp[x][y]
        else:
            if (self.A[x]==self.B[y]):
                self.dp[x][y] = self.__solveDP(x-1,y-1)
            else:
                self.dp[x][y] = 1+min(self.__solveDP(x,y-1), self.__solveDP(x-1,y), self.__solveDP(x-1,y-1))
    
        difference = predict - actual
    square_diff = np.square(difference)
    
    
'''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a * b = (a+a) * (b/2) ---- example : 4 * 4 = (4+4) * (4/2) = 8 * 2
* RULE 2 : IF b is ODD, then ---- a * b = a + (a * (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a * b
* Repeat the process till b = 1 OR b = 0, because a*1 = a AND a*0 = 0
*
* As far as the modulo is concerned,
* the fact : (a+b) % c = ((a%c) + (b%c)) % c
* Now apply RULE 1 OR 2, whichever is required.
'''

    
    
class Delegator(object):
    '''
    >>> delegator = Delegator(Delegate())
    >>> delegator.p1
    123
    >>> delegator.p2
    Traceback (most recent call last):
    ...
    AttributeError: 'Delegate' object has no attribute 'p2'
    >>> delegator.do_something('nothing')
    'Doing nothing'
    >>> delegator.do_anything()
    Traceback (most recent call last):
    ...
    AttributeError: 'Delegate' object has no attribute 'do_anything'
    '''
    
    
class Visitor(object):
    def visit(self, node, *args, **kwargs):
        meth = None
        for cls in node.__class__.__mro__:
            meth_name = 'visit_' + cls.__name__
            meth = getattr(self, meth_name, None)
            if meth:
                break
    
        '''A pet shop'''
    
    *TL;DR80
Decouples the creation of a complex object and its representation.
'''
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
        def run_loop(self):
        while self.blackboard.common_state['progress'] < 100:
            for expert in self.blackboard.experts:
                if expert.is_eager_to_contribute:
                    expert.contribute()
        return self.blackboard.common_state['contributions']
    
        products = {
        'milk': {'price': 1.50, 'quantity': 10},
        'eggs': {'price': 0.20, 'quantity': 100},
        'cheese': {'price': 2.00, 'quantity': 10},
    }
    
    *References:
http://ginstrom.com/scribbles/2008/11/06/generic-adapter-class-in-python/
https://sourcemaking.com/design_patterns/adapter
http://python-3-patterns-idioms-test.readthedocs.io/en/latest/ChangeInterface.html#adapter