
        
            def __init__(self):
        self.head = None
        self.tail = None
    
        def current_year_month(self):
        '''Return the current year and month.'''
        ...
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME + SEP_CREDENTIALS + PASSWORD,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
        '''
)
    
        def test_binary_suppresses_when_not_terminal_but_pretty(self):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--pretty=all', 'GET', self.url,
                 env=env)
        assert BINARY_SUPPRESSED_NOTICE.decode() in r
    
        def test_actual_download(self, httpbin_both, httpbin):
        robots_txt = '/robots.txt'
        body = urlopen(httpbin + robots_txt).read().decode()
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--download', httpbin_both.url + robots_txt, env=env)
        assert 'Downloading' in r.stderr
        assert '[K' in r.stderr
        assert 'Done' in r.stderr
        assert body == r
    
        try:
        s1 = os.lstat(path)
    except OSError:
        # the OSError should be handled with more care
        # it could be a 'permission denied' but path is still a mount
        return False
    else:
        # A symlink can never be a mount point
        if os.path.stat.S_ISLNK(s1.st_mode):
            return False
    
    
def main():
    '''Main program body.'''
    api_key = get_api_key()
    
        # If we get to this point, we know that any included ranges are valid.
    # If the caller is prepared to handle them, all is well.
    # Otherwise we treat it as a parse failure.
    if not allow_ranges and '[' in host:
        raise AnsibleParserError('Detected range in host but was asked to ignore ranges')
    
    
def sort_groups(groups):
    return sorted(groups, key=lambda g: (g.depth, g.priority, g.name))