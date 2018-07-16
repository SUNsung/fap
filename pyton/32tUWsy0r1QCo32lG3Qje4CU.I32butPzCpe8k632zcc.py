
        
            Enabling `trace_only` effectively creates a graph that is a 'dry run'.
    There will be no side affects. In addition, the gradients won't be computed
    and the model parameters will not be updated.
    
        move = Action('move')
    person = Person('Jack', move)
    person.do_action().amount('5m').stop()
    
        def test_dog_greek_localization(self):
        self.assertEqual(self.g.get('dog'), 'σκύλος')
    
        a_transaction = Transaction(True, num_obj)
    try:
        for i in range(3):
            num_obj.increment()
            print(num_obj)
        a_transaction.commit()
        print('-- committed')
    
    '''
http://code.activestate.com/recipes/131499-observer-pattern/
    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
    
def main():
    parse_command_line(final=False)
    parse_config_file(options.config_file)
    
        def get_allowed_warnings(self):
        return [
            # We can't set a non-heuristic freshness at the framework level,
            # so just ignore this warning
            rs.FRESHNESS_HEURISTIC,
            # For our small test responses the Content-Encoding header
            # wipes out any gains from compression
            rs.CONNEG_GZIP_BAD,
        ]
    
    
def main():
    parse_command_line()
    
        async def fetch_url(current_url):
        if current_url in fetching:
            return
    
    # Repeat the entire benchmark this many times (on different ports)
# This gives JITs time to warm up, etc.  Pypy needs 3-5 runs at
# --n=15000 for its JIT to reach full effectiveness
define('num_runs', type=int, default=1)
    
    # These benchmarks are delicate.  They hit various fast-paths in the gen
# machinery in order to stay synchronous so we don't need an IOLoop.
# This removes noise from the results, but it's easy to change things
# in a way that completely invalidates the results.
    
    
@gen.coroutine
def raw_producer(filename, write):
    with open(filename, 'rb') as f:
        while True:
            # 16K at a time.
            chunk = f.read(16 * 1024)
            if not chunk:
                # Complete.
                break
    
    1) Install virtualbox guest additions (from the device menu in virtualbox)
2) Set up a shared folder to the root of your tornado repo.  It must be a
   read-write mount to use tox, although the tests can be run directly
   in a read-only mount.  This will probably assign drive letter E:.
3) Install Python 2.7 from python.org.
4) Run this script by double-clicking it, or running
   'c:\python27\python.exe bootstrap.py' in a shell.