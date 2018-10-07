
        
            BLACKJACK = 21
    
        def get_person(self, person_id):
        person_server = self.lookup[person_id]
        return person_server.people[person_id]
    
        def crawl(self):
        while True:
            page = self.data_store.extract_max_priority_page()
            if page is None:
                break
            if self.data_store.crawled_similar(page.signature):
                self.data_store.reduce_priority_link_to_crawl(page.url)
            else:
                self.crawl_page(page)
            page = self.data_store.extract_max_priority_page()

    
    
class HasKey(PostgresSimpleLookup):
    lookup_name = 'has_key'
    operator = '?'
    prepare_rhs = False
    
    
class ArrayMinLengthValidator(MinLengthValidator):
    message = ngettext_lazy(
        'List contains %(show_value)d item, it should contain no fewer than %(limit_value)d.',
        'List contains %(show_value)d items, it should contain no fewer than %(limit_value)d.',
        'limit_value')
    
        @property
    def cache_key(self):
        return self.cache_key_prefix + self._get_or_create_session_key()
    
        def load(self):
        try:
            data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            data = None
    
        @classmethod
    def default_decoder(cls, value):
        try:
            return pyrfc3339.parse(value)
        except ValueError as error:
            raise jose.DeserializationError(error)
    
    from acme import client
from acme import messages
    
        :param str vhost_path: Augeas virtual host path
    
            :param list ex_errs: Existing errors before save
    
    
MOD_SSL_CONF_DEST = 'options-ssl-apache.conf'
'''Name of the mod_ssl config file as saved in `IConfig.config_dir`.'''
    
    
class AddrTest(unittest.TestCase):
    '''Test obj.Addr.'''
    def setUp(self):
        from certbot_apache.obj import Addr
        self.addr = Addr.fromstring('*:443')