
        
            def log_date_time_string(self):
        '''Return the current time formatted for logging.'''
        now = time.time()
        year, month, day, hh, mm, ss, x, y, z = time.localtime(now)
        s = '%02d/%3s/%04d %02d:%02d:%02d' % (
                day, self.monthname[month], year, hh, mm, ss)
        return s
    
    # Same, but for 3.x to 2.x
REVERSE_IMPORT_MAPPING = dict((v, k) for (k, v) in IMPORT_MAPPING.items())
assert len(REVERSE_IMPORT_MAPPING) == len(IMPORT_MAPPING)
REVERSE_NAME_MAPPING = dict((v, k) for (k, v) in NAME_MAPPING.items())
assert len(REVERSE_NAME_MAPPING) == len(NAME_MAPPING)
    
        def test_long(self):
        # Long integers
        self.check_tokenize('x = 0', '''\
    NAME       'x'           (1, 0) (1, 1)
    OP         '='           (1, 2) (1, 3)
    NUMBER     '0'           (1, 4) (1, 5)
    ''')
        self.check_tokenize('x = 0xfffffffffff', '''\
    NAME       'x'           (1, 0) (1, 1)
    OP         '='           (1, 2) (1, 3)
    NUMBER     '0xfffffffffff' (1, 4) (1, 17)
    ''')
        self.check_tokenize('x = 123141242151251616110', '''\
    NAME       'x'           (1, 0) (1, 1)
    OP         '='           (1, 2) (1, 3)
    NUMBER     '123141242151251616110' (1, 4) (1, 25)
    ''')
        self.check_tokenize('x = -15921590215012591', '''\
    NAME       'x'           (1, 0) (1, 1)
    OP         '='           (1, 2) (1, 3)
    OP         '-'           (1, 4) (1, 5)
    NUMBER     '15921590215012591' (1, 5) (1, 22)
    ''')
    
        # Load the records from the pickle data stream.
    file.seek(0)
    memos = DBUnpickler(file, conn).load()
    
    # A simple generator function
def baz():
    for i in range(10):
        yield i*i
    
            return predicate
    
    from uuid import uuid4
    
    from sentry.utils.safe import safe_execute
from sentry.tasks.base import instrumented_task
    
    logger = logging.getLogger('sentry.scheduler')
    
        def test_cloning_propperty_innate_values(self):
        sample_object_1 = self.prototype.clone()
        sample_object_2 = self.prototype.clone()
        self.assertEqual(sample_object_1.value, sample_object_2.value)
    
        def test_sales_manager_shall_not_talk_through_proxy_with_delay(cls):
        cls.ntp.busy = 'No'
        start_time = time()
        cls.ntp.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
This Sales Manager will not talk to you whether he/she is busy or not\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time * 10), expected_execution_time)
    
        def update(self):
        for msg in self.msg_queue:
            for sub in self.subscribers.get(msg, []):
                sub.run(msg)
        self.msg_queue = []
    
    
class Action(object):
    def __init__(self, name):
        self.name = name
    
        def check_range(self, request):
        start, end = self.get_interval_from_db()
        if start <= request < end:
            print('request {} handled in handler 2'.format(request))
            return True