
        
                    if isinstance(value, str):
                # See: https://github.com/jakubroztocil/httpie/issues/212
                value = value.encode('utf8')
    
            request_line = '{method} {path}{query} HTTP/1.1'.format(
            method=self._orig.method,
            path=url.path or '/',
            query='?' + url.query if url.query else ''
        )
    
            See https://github.com/jakubroztocil/httpie/issues/212
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
        # noinspection PyUnboundLocalVariable
    return '%.*f %s' % (precision, n / factor, suffix)

    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_print_only_body_when_stdout_redirected_by_default(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('GET', httpbin.url + '/get', env=env)
        assert 'HTTP/' not in r
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
    
SESSIONS_DIR_NAME = 'sessions'
DEFAULT_SESSIONS_DIR = os.path.join(DEFAULT_CONFIG_DIR, SESSIONS_DIR_NAME)
VALID_SESSION_NAME_PATTERN = re.compile('^[a-zA-Z0-9_.-]+$')
# Request headers starting with these prefixes won't be stored in sessions.
# They are specific to each request.
# http://en.wikipedia.org/wiki/List_of_HTTP_header_fields#Requests
SESSION_IGNORED_HEADER_PREFIXES = ['Content-', 'If-']
    
    References:
    tensorlayer.layers.Conv2dLayer
'''
import tensorflow as tf
    
            return self._call(x)

    
        return g
    
    
def permute(x, perm):
    '''
    Examples:
        x.shape == [128, 32, 1]
        x = permute(x, [0, 2, 1])
        x.shape == [128, 1, 32]
    
    sum_ngrams = 0
for s in sentences:
    for w in s:
        w = w.lower()
        # from gensim.models._utils_any2vec import compute_ngrams
        ret = compute_ngrams(w, min_ngrams, max_ngrams)
        print(ret)
        sum_ngrams += len(ret)
'''
['<h', 'he', 'el', 'll', 'lo', 'o>', '<he', 'hel', 'ell', 'llo', 'lo>', '<hel', 'hell', 'ello', 'llo>']
['<w', 'wo', 'or', 'rl', 'ld', 'd>', '<wo', 'wor', 'orl', 'rld', 'ld>', '<wor', 'worl', 'orld', 'rld>']
['<!', '!>', '<!>']
['<i', 'i>', '<i>']
['<a', 'am', 'm>', '<am', 'am>', '<am>']
['<h', 'hu', 'ua', 'ay', 'y>', '<hu', 'hua', 'uay', 'ay>', '<hua', 'huay', 'uay>']
['<.', '.>', '<.>']
'''
assert sum_ngrams == len(model.wv.vectors_ngrams)
print(sum_ngrams)  # 57
print()
    
    
def main():
    test = TestQueueFromStacks()
    test.test_queue_from_stacks()
    
        def test_sort_stack(self, stack):
        print('Test: Empty stack')
        sorted_stack = self.get_sorted_stack(stack, [])
        assert_equal(sorted_stack.pop(), None)