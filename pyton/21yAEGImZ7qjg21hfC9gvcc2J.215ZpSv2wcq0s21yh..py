
        
        
def format_size(bytes):
    return '%s (%d bytes)' % (format_bytes(bytes), bytes)
    
        # Are checkable fields missing from the test case definition?
    test_info_dict = dict((key, value if not isinstance(value, compat_str) or len(value) < 250 else 'md5:' + md5(value))
                          for key, value in got_dict.items()
                          if value and key in ('id', 'title', 'description', 'uploader', 'upload_date', 'timestamp', 'uploader_id', 'location', 'age_limit'))
    missing_keys = set(test_info_dict.keys()) - set(expected_dict.keys())
    if missing_keys:
        def _repr(v):
            if isinstance(v, compat_str):
                return ''%s'' % v.replace('\\', '\\\\').replace(''', '\\'').replace('\n', '\\n')
            else:
                return repr(v)
        info_dict_str = ''
        if len(missing_keys) != len(expected_dict):
            info_dict_str += ''.join(
                '    %s: %s,\n' % (_repr(k), _repr(v))
                for k, v in test_info_dict.items() if k not in missing_keys)
    
            return {
            '_type': 'url_transparent',
            'display_id': display_id,
            'url': 'kaltura:%s:%s' % (partner_id, entry_id),
            'ie_key': 'Kaltura',
            'title': title
        }

    
        _TEST = {
        'url': 'http://www.defense.gouv.fr/layout/set/ligthboxvideo/base-de-medias/webtv/attaque-chimique-syrienne-du-21-aout-2013-1',
        'md5': '75bba6124da7e63d2d60b5244ec9430c',
        'info_dict': {
            'id': '11213',
            'ext': 'mp4',
            'title': 'attaque-chimique-syrienne-du-21-aout-2013-1'
        }
    }
    
    from twisted import version as _txv
twisted_version = (_txv.major, _txv.minor, _txv.micro)
    
                tested_methods = conman.tested_methods_from_spidercls(spidercls)
            if opts.list:
                for method in tested_methods:
                    contract_reqs[spidercls.name].append(method)
            elif tested_methods:
                self.crawler_process.crawl(spidercls)
    
    from . import Contract
    
        def handleHeader(self, key, value):
        self.headers.appendlist(key, value)
    
    
class Application(tornado.web.Application):
    def __init__(self):
        handlers = [
            (r'/', MainHandler),
            (r'/auth/login', AuthLoginHandler),
            (r'/auth/logout', AuthLogoutHandler),
        ]
        settings = dict(
            cookie_secret='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE_HERE__',
            login_url='/auth/login',
            template_path=os.path.join(os.path.dirname(__file__), 'templates'),
            static_path=os.path.join(os.path.dirname(__file__), 'static'),
            xsrf_cookies=True,
            facebook_api_key=options.facebook_api_key,
            facebook_secret=options.facebook_secret,
            ui_modules={'Post': PostModule},
            debug=True,
            autoescape=None,
        )
        tornado.web.Application.__init__(self, handlers, **settings)
    
    # Repeat the entire benchmark this many times (on different ports)
# This gives JITs time to warm up, etc.  Pypy needs 3-5 runs at
# --n=15000 for its JIT to reach full effectiveness
define('num_runs', type=int, default=1)
    
        # tornado.gen
    'Multi',
]