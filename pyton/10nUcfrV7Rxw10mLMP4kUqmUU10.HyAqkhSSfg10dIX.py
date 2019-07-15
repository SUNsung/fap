
        
            def __init__(self, **kwargs):
        '''
        Use keyword arguments to overwrite
        any of the class attributes for this instance.
    
        def get_auth(self, username=None, password=None):
        '''
        If `auth_parse` is set to `True`, then `username`
        and `password` contain the parsed credentials.
    
            '''
        r.headers['Authorization'] = type(self).make_header(
            self.username, self.password).encode('latin1')
        return r
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
        def test_POST_with_data_auto_JSON_headers(self, httpbin):
        r = http('POST', httpbin.url + '/post', 'a=b')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        assert r.json['headers']['Content-Type'] == 'application/json'
    
    
def setup(app):
    app.add_crossref_type(
        directivename = 'setting',
        rolename      = 'setting',
        indextemplate = 'pair: %s; setting',
    )
    app.add_crossref_type(
        directivename = 'signal',
        rolename      = 'signal',
        indextemplate = 'pair: %s; signal',
    )
    app.add_crossref_type(
        directivename = 'command',
        rolename      = 'command',
        indextemplate = 'pair: %s; command',
    )
    app.add_crossref_type(
        directivename = 'reqmeta',
        rolename      = 'reqmeta',
        indextemplate = 'pair: %s; reqmeta',
    )
    app.add_role('source', source_role)
    app.add_role('commit', commit_role)
    app.add_role('issue', issue_role)
    app.add_role('rev', rev_role)
    
    # Read lines from the linkcheck output file
try:
    with open('build/linkcheck/output.txt') as out:
        output_lines = out.readlines()
except IOError:
    print('linkcheck output not found; please run linkcheck first.')
    exit(1)
    
            spidercls = DefaultSpider
        spider_loader = self.crawler_process.spider_loader
        if opts.spider:
            spidercls = spider_loader.load(opts.spider)
        else:
            spidercls = spidercls_for_request(spider_loader, request, spidercls)
        self.crawler_process.crawl(spidercls, start_requests=lambda: [request])
        self.crawler_process.start()

    
    
def sanitize_module_name(module_name):
    '''Sanitize the given module name, by replacing dashes and points
    with underscores and prefixing it with a letter if it doesn't start
    with one
    '''
    module_name = module_name.replace('-', '_').replace('.', '_')
    if module_name[0] not in string.ascii_letters:
        module_name = 'a' + module_name
    return module_name
    
    
class Command(ScrapyCommand):
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
        class _v19_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, method, bucket, key, headers, *args, **kwargs):
            return headers
    
            if self.slot.start_requests is not None:
            # not all start requests are handled
            return False
    
        def test_insertion_sort(self):
        insertion_sort = InsertionSort()
    
    
def main():
    test = TestStack()
    test.test_end_to_end()
    
    from gym.envs.tests.spec_list import should_skip_env_spec_for_tests
from gym.envs.tests.test_envs_semantics import generate_rollout_hash, hash_object
    
    # All concrete subclasses of AlgorithmicEnv
ALL_ENVS = [
    alg.copy_.CopyEnv, 
    alg.duplicated_input.DuplicatedInputEnv,
    alg.repeat_copy.RepeatCopyEnv,
    alg.reverse.ReverseEnv,
    alg.reversed_addition.ReversedAdditionEnv,
]
ALL_TAPE_ENVS = [env for env in ALL_ENVS 
    if issubclass(env, alg.algorithmic_env.TapeAlgorithmicEnv)]
ALL_GRID_ENVS = [env for env in ALL_ENVS 
    if issubclass(env, alg.algorithmic_env.GridAlgorithmicEnv)]