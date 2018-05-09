
        
        ] + _py_files('scrapy/contrib') + _py_files('scrapy/contrib_exp')
    
    
class Command(ScrapyCommand):
    requires_project = True
    default_settings = {'LOG_ENABLED': False}
    
        def from_method(self, method, results):
        contracts = self.extract_contracts(method)
        if contracts:
            # calculate request args
            args, kwargs = get_spec(Request.__init__)
            kwargs['callback'] = method
            for contract in contracts:
                kwargs = contract.adjust_request_args(kwargs)
    
        name = 'scrapes'
    
        platforms = 'any',
    zip_safe = True,
    include_package_data = True,
    
    __all__ = ['ehow_download']
    
            total_count = 0
        translated_count = 0
        with open(fn) as f:
            catalog = read_po(f)
            for msg in catalog:
                total_count += 1
                if is_translated(msg):
                    translated_count += 1
        pct = translated_count / float(total_count) * 100
        click.echo('% -7s % 2d%%' % (
            locale,
            pct,
        ), err=True)
        if pct >= MINIMUM and locale not in rv:
            rv.append(locale)
    with open(catalog_file, 'w') as f:
        json.dump({
            'supported_locales': sorted(rv)
        }, f, indent=2)
        f.write('\n')
    
        def is_employee(self, user):
        if not user:
            return False
        return user.employee
    
        def __call__(self, environ, start_response):
        def custom_start_response(status, headers, exc_info = None):
            fixed = []
            seen = set()
            for head, val in reversed(headers):
                head = head.lower()
                key = (head, val.split('=', 1)[0])
                if key not in seen:
                    fixed.insert(0, (head, val))
                    seen.add(key)
            return start_response(status, fixed, exc_info)
        return self.app(environ, custom_start_response)
    
    from pylons import request
from pylons import app_globals as g
from reddit_base import RedditController
from r2.lib.pages import AdminPage, AdminAwards
from r2.lib.pages import AdminAwardGive, AdminAwardWinners
from r2.lib.validator import *
    
            def builder_wrapper(thing = None):
            kw = {}
            if not thing:
                kw['url'] = url
                kw['title'] = title
            return ButtonLite(thing,
                              image = 1 if buttonimage is None else buttonimage,
                              target = '_new' if newwindow else '_parent',
                              styled = styled, **kw)
    
    @memoize('renderurl_cached', time=60)
def renderurl_cached(path):
    # Needed so http://reddit.com/help/ works
    fp = path.rstrip('/')
    u = 'https://code.reddit.com/wiki' + fp + '?stripped=1'
    
        def GET_cachehealth(self):
        results = {}
        behaviors = {
            # Passed on to poll(2) in milliseconds
            'connect_timeout': 1000,
            # Passed on to setsockopt(2) in microseconds
            'receive_timeout': int(1e6),
            'send_timeout': int(1e6),
        }
        for server in cache._CACHE_SERVERS:
            try:
                if server.startswith('udp:'):
                    # libmemcached doesn't support UDP get/fetch operations
                    continue
                mc = pylibmc.Client([server], behaviors=behaviors)
                # it's ok that not all caches are mcrouter, we'll just ignore
                # the miss either way
                mc.get('__mcrouter__.version')
                results[server] = 'OK'
            except pylibmc.Error as e:
                g.log.warning('Health check for %s FAILED: %s', server, e)
                results[server] = 'FAILED %s' % e
        return json.dumps(results)
