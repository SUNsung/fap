
        
            def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.DIRECTOR)
    
    
class RemoveDuplicateUrls(MRJob):
    
        def process_query(self, query):
        query = self.parse_query(query)
        results = self.memory_cache.get(query)
        if results is None:
            results = self.reverse_index_cluster.process_search(query)
            self.memory_cache.set(query, results)
        return results
    
        def iter_lines(self, chunk_size):
        '''Return an iterator over the body yielding (`line`, `line_feed`).'''
        raise NotImplementedError()
    
        # Will be set to the raw value of `-a` (if provided) before
    # `get_auth()` gets called.
    raw_auth = None
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
            def get_auth(self, username=None, password=None):
            assert username is None
            assert password is None
            assert self.raw_auth == BASIC_AUTH_HEADER_VALUE
            return basic_auth(self.raw_auth)
    
    
def test_unicode_url_query_arg_item_verbose(httpbin):
    r = http('--verbose', httpbin.url + '/get', u'test==%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
    MOD_SSL_CONF_SRC = pkg_resources.resource_filename(
    'certbot_nginx', 'options-ssl-nginx.conf')
'''Path to the nginx mod_ssl config file found in the Certbot
distribution.'''
    
        def test_recovery_routine(self):
        mock_load = mock.Mock()
        self.config.aug.load = mock_load
    
        def test_include_missing(self):
        # This should miss
        self.verify_fnmatch('test_*.onf', False)
    
    # http://docs.readthedocs.org/en/latest/theme.html#how-do-i-use-this-locally-and-on-read-the-docs
# on_rtd is whether we are on readthedocs.org
on_rtd = os.environ.get('READTHEDOCS', None) == 'True'
if not on_rtd:  # only import and set the theme if we're building docs locally
    import sphinx_rtd_theme
    html_theme = 'sphinx_rtd_theme'
    html_theme_path = [sphinx_rtd_theme.get_html_theme_path()]
# otherwise, readthedocs.org uses their theme by default, so no need to specify it
    
        platforms = 'any',
    zip_safe = True,
    include_package_data = True,
    
        theplatform_download_by_pid(pid, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        CNTV().download_by_vid(rid, **kwargs)
    
    __all__ = ['dailymotion_download']
    
        else:
        titles = re.findall(r''name':'([^']*)'', html)
        real_urls = [re.sub('\\\\/', '/', i) for i in re.findall(r''rawUrl':'([^']*)'', html)]
    
    	for video in tab.childNodes:
		if re.search(contentid, video.attributes['link'].value):
			url = video.attributes['flv'].value
			break
    
        if title is None:
      title = url
    
    
def fantasy_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    if 'fantasy.tv' not in url:
        raise Exception('Wrong place!')
    
    
def abspath(path):
    '''Return an absolute path.'''
    path = os.fspath(path)
    if not isabs(path):
        if isinstance(path, bytes):
            cwd = os.getcwdb()
        else:
            cwd = os.getcwd()
        path = join(cwd, path)
    return normpath(path)
    
        def test_expanduser_common(self):
        P = self.cls
        p = P('~')
        self.assertEqual(p.expanduser(), P(os.path.expanduser('~')))
        p = P('foo')
        self.assertEqual(p.expanduser(), p)
        p = P('/~')
        self.assertEqual(p.expanduser(), p)
        p = P('../~')
        self.assertEqual(p.expanduser(), p)
        p = P(P('').absolute().anchor) / '~'
        self.assertEqual(p.expanduser(), p)
    
        def test_sys_flags_set(self):
        # Issue 31845: a startup refactoring broke reading flags from env vars
        for value, expected in (('', 0), ('1', 1), ('text', 1), ('2', 2)):
            env_vars = dict(
                PYTHONDEBUG=value,
                PYTHONOPTIMIZE=value,
                PYTHONDONTWRITEBYTECODE=value,
                PYTHONVERBOSE=value,
            )
            dont_write_bytecode = int(bool(value))
            code = (
                'import sys; '
                'sys.stderr.write(str(sys.flags)); '
                f'''sys.exit(not (
                    sys.flags.debug == sys.flags.optimize ==
                    sys.flags.verbose ==
                    {expected}
                    and sys.flags.dont_write_bytecode == {dont_write_bytecode}
                ))'''
            )
            with self.subTest(envar_value=value):
                assert_python_ok('-c', code, **env_vars)
    
    Cela ressemble à un excellent recipie[1] déjeuner.
    
    # Of course, there are lots of email messages that could break this simple
# minded program, but it will handle the most common ones.

    
        try:
        os.mkdir(args.directory)
    except FileExistsError:
        pass
    
        def __init__(self, param):
        # simple test to validate param value
        if param in self._static_method_choices:
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
    
@coroutine
def coroutine1(target):
    while True:
        request = yield
        if 0 < request <= 10:
            print('request {} handled in coroutine 1'.format(request))
        else:
            target.send(request)
    
    from __future__ import print_function
    
        def or_specification(self, candidate):
        return OrSpecification(self, candidate)
    
        def scan(self):
        '''Scan the dial to the next station'''
        self.pos += 1
        if self.pos == len(self.stations):
            self.pos = 0
        print(u'Scanning... Station is %s %s' % (self.stations[self.pos], self.name))
    
    ### OUTPUT ###
# We have a lovely Cat
# It says meow
#
# We have a lovely Dog
# It says woof
# ====================
# We have a lovely Cat
# It says meow
# ====================
# We have a lovely Cat
# It says meow
# ====================

    
    *References:
bottle
https://github.com/bottlepy/bottle/blob/cafc15419cbb4a6cb748e6ecdccf92893bb25ce5/bottle.py#L270
django
https://github.com/django/django/blob/ffd18732f3ee9e6f0374aff9ccf350d85187fac2/django/utils/functional.py#L19
pip
https://github.com/pypa/pip/blob/cb75cca785629e15efb46c35903827b3eae13481/pip/utils/__init__.py#L821
pyramimd
https://github.com/Pylons/pyramid/blob/7909e9503cdfc6f6e84d2c7ace1d3c03ca1d8b73/pyramid/decorator.py#L4
werkzeug
https://github.com/pallets/werkzeug/blob/5a2bf35441006d832ab1ed5a31963cbc366c99ac/werkzeug/utils.py#L35
    
    Below provides an example of such Dispatcher, which contains three
copies of the prototype: 'default', 'objecta' and 'objectb'.