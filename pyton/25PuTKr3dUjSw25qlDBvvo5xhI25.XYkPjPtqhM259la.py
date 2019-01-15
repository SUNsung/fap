
        
        from mrjob.job import MRJob
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
        The message bytes are converted to an encoding suitable for
    `self.env.stdout`. Unicode errors are replaced and binary data
    is suppressed. The body is always streamed by line.
    
    
def test_unicode_basic_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--verbose', '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/basic-auth/test/' + UNICODE)
    
        def __init__(self, directory=DEFAULT_CONFIG_DIR):
        super(Config, self).__init__()
        self.update(self.DEFAULTS)
        self.directory = directory
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
        @pytest.mark.parametrize(
        'value, expected', (
            ([('key', 'val')], [('key', 'val')]),
            ((('key', 'val'), ), [('key', 'val')]),
            ({'key': 'val'}, [('key', 'val')]),
            (None, None)
        ))
    def test_valid(self, value, expected):
        assert to_key_val_list(value) == expected
    
        requests = [2, 5, 14, 22, 18, 3, 35, 27, 20]
    for request in requests:
        h0.handle(request)
    
        def __init__(self, one, other):
        self._one = one
        self._other = other
    
    
class Visitor(object):
    def visit(self, node, *args, **kwargs):
        meth = None
        for cls in node.__class__.__mro__:
            meth_name = 'visit_' + cls.__name__
            meth = getattr(self, meth_name, None)
            if meth:
                break
    
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
    
    production code which is untestable:
    
        data = Data()