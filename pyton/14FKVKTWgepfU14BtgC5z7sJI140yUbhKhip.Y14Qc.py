
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
        # This test only works on CPython 2.7.
    if sys.version_info >= (2, 7) and \
            not hasattr(sys, 'pypy_translation_info'):
        with assert_no_leak():
            for x in range(10):
                fire()
    
        app.config.update(SERVER_NAME='localhost:80')
    with app.test_request_context('/', environ_overrides={'SERVER_NAME': 'localhost:80'}):
        pass
    
    
def get_args(args_list):
    parser = argparse.ArgumentParser(
        description='ansible inventory script reading from landscape cluster')
    mutex_group = parser.add_mutually_exclusive_group(required=True)
    help_list = 'list all hosts from landscape cluster'
    mutex_group.add_argument('--list', action='store_true', help=help_list)
    help_host = 'display variables for a host'
    mutex_group.add_argument('--host', help=help_host)
    return parser.parse_args(args_list)
    
                    if not os.path.exists(path):
                    with open(path, 'w') as output_fd:
                        output_fd.write(contents)
    
        def test_max_delay(self):
        strategy = _exponential_backoff(retries=7, delay=1, backoff=2, max_delay=60)
        result = list(strategy())
        self.assertEquals(result, [1, 2, 4, 8, 16, 32, 60])
    
        def add_message(self, message):
        self.cache.append(message)
        if len(self.cache) > self.cache_size:
            self.cache = self.cache[-self.cache_size:]
        self.cond.notify_all()
    
    # Repeat the entire benchmark this many times (on different ports)
# This gives JITs time to warm up, etc.  Pypy needs 3-5 runs at
# --n=15000 for its JIT to reach full effectiveness
define('num_runs', type=int, default=1)
    
    
async def maybe_create_tables(db):
    try:
        with (await db.cursor()) as cur:
            await cur.execute('SELECT COUNT(*) FROM entries LIMIT 1')
            await cur.fetchone()
    except psycopg2.ProgrammingError:
        with open('schema.sql') as f:
            schema = f.read()
        with (await db.cursor()) as cur:
            await cur.execute(schema)
    
        if not args:
        args = ['localhost', 'www.google.com',
                'www.facebook.com', 'www.dropbox.com']
    
    
if setuptools is not None:
    python_requires = '>= 3.5'
    kwargs['python_requires'] = python_requires