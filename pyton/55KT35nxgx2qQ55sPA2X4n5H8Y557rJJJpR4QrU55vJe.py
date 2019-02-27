
        
        from httpie import sessions
from httpie import __version__
from httpie.compat import str
from httpie.input import SSL_VERSION_ARG_MAPPING
from httpie.plugins import plugin_manager
from httpie.utils import repr_dict_nice
    
        @property
    def config(self):
        if not hasattr(self, '_config'):
            self._config = Config(directory=self.config_dir)
            if self._config.is_new():
                self._config.save()
            else:
                self._config.load()
        return self._config
    
    
def load_json_preserve_order(s):
    return json.loads(s, object_pairs_hook=OrderedDict)
    
        try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)

    
    
def best_server(probe_nat=False):
    best_server = None
    prober = new_pteredor(probe_nat=probe_nat)
    prober.qualified = True
    if not probe_nat:
        prober.nat_type = 'unknown'
        prober.rs_cone_flag = 0
    
        try:
        if cookie:
            if 'rc4' not in options:
                metadata = zlib.decompress(base64.b64decode(cookie), -zlib.MAX_WBITS)
                payload = input_data or ''
            else:
                metadata = zlib.decompress(rc4crypt(base64.b64decode(cookie), __password__), -zlib.MAX_WBITS)
                payload = rc4crypt(input_data, __password__) if input_data else ''
        else:
            if 'rc4' in options:
                input_data = rc4crypt(input_data, __password__)
            metadata_length = struct.unpack('!h', input_data[:2])
            metadata = zlib.decompress(input_data[2:2+metadata_length], -zlib.MAX_WBITS)
            payload = input_data[2+metadata_length:]
        headers = dict(x.split(':', 1) for x in metadata.splitlines() if x)
        method = headers.pop('G-Method')
        url = headers.pop('G-Url')
    except (zlib.error, KeyError, ValueError):
        import traceback
        start_response('500 Internal Server Error', [('Content-Type', 'text/html')])
        yield message_html('500 Internal Server Error', 'Bad Request (metadata) - Possible Wrong Password', '<pre>%s</pre>' % traceback.format_exc())
        raise StopIteration
    
    
runtime_version_str = __version__
runtime_version = version_str_to_tuple(runtime_version_str)
    
                ret += [v] * n
    
    
class JWS(jose.JWS):
    '''ACME-specific JWS. Includes none, url, and kid in protected header.'''
    signature_cls = Signature
    __slots__ = jose.JWS._orig_slots  # pylint: disable=no-member
    
            '''
        error_files = self.aug.match('/augeas//error')
    
    
    def __eq__(self, other):
        if isinstance(other, self.__class__):
            return (self.filep == other.filep and self.path == other.path and
                    self.addrs == other.addrs and
                    self.get_names() == other.get_names() and
                    self.ssl == other.ssl and
                    self.enabled == other.enabled and
                    self.modmacro == other.modmacro)
    
        _multiprocess_can_split_ = True