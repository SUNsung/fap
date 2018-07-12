
        
            def from_mapping(self, *mapping, **kwargs):
        '''Updates the config like :meth:`update` ignoring items with non-upper
        keys.
    
        with pytest.raises(AttributeError):
        import unimportable

    
    
def test_wsgi_errors_stream(app, client):
    @app.route('/')
    def index():
        app.logger.error('test')
        return ''
    
        try:
        with app.test_request_context('/', environ_overrides={'HTTP_HOST': 'localhost'}):
            pass
    except ValueError as e:
        assert str(e) == (
            'the server name provided '
            '('localhost.localdomain:5000') does not match the '
            'server name from the WSGI environment ('localhost')'
        )
    
        def __enter__(self):
        from scrapy.utils.test import get_testenv
        pargs = [sys.executable, '-u', '-m', 'scrapy.utils.benchserver']
        self.proc = subprocess.Popen(pargs, stdout=subprocess.PIPE,
                                     env=get_testenv())
        self.proc.stdout.readline()
    
            try:
            self.min_bound = int(self.args[1])
        except IndexError:
            self.min_bound = 1
    
        def fetch(self, request, spider):
        def _deactivate(response):
            self.active.remove(request)
            return response
    
        def process_request(self, request, spider):
        for k, v in self._headers:
            request.headers.setdefault(k, v)
