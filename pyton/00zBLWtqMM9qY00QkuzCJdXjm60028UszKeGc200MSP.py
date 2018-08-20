
        
                :param obj: an import name or object
        '''
        if isinstance(obj, string_types):
            obj = import_string(obj)
        for key in dir(obj):
            if key.isupper():
                self[key] = getattr(obj, key)
    
        If you configure your own :class:`logging.StreamHandler`, you may want to
    use this for the stream. If you are using file or dict configuration and
    can't import this directly, you can refer to it as
    ``ext://flask.logging.wsgi_errors_stream``.
    '''
    return request.environ['wsgi.errors'] if request else sys.stderr
    
            def __init__(self, name, doc=None):
            self.name = name
            self.__doc__ = doc
        def _fail(self, *args, **kwargs):
            raise RuntimeError('signalling support is unavailable '
                               'because the blinker library is '
                               'not installed.')
        send = lambda *a, **kw: None
        connect = disconnect = has_receivers_for = receivers_for = \
            temporarily_connected_to = connected_to = _fail
        del _fail
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
            with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(data)
            sock.close()
    
            p = PreparedRequest()
        p.prepare(
            method=request.method.upper(),
            url=request.url,
            files=request.files,
            data=request.data,
            json=request.json,
            headers=merge_setting(request.headers, self.headers, dict_class=CaseInsensitiveDict),
            params=merge_setting(request.params, self.params),
            auth=merge_setting(auth, self.auth),
            cookies=merged_cookies,
            hooks=merge_hooks(request.hooks, self.hooks),
        )
        return p
    
    def sample_user_agent():
    'Document what this Certbot's user agent string will be like.'
    
    
class AddrTest(unittest.TestCase):
    '''Test obj.Addr.'''
    def setUp(self):
        from certbot_apache.obj import Addr
        self.addr = Addr.fromstring('*:443')
    
            cert = os.path.join(cert_and_key_dir, 'cert')
        shutil.copy(cert_path, cert)
        key = os.path.join(cert_and_key_dir, 'key')
        shutil.copy(key_path, key)
        if chain_path:
            chain = os.path.join(cert_and_key_dir, 'chain')
            shutil.copy(chain_path, chain)
        else:
            chain = None
    
    
class ValidatorTest(unittest.TestCase):
    def setUp(self):
        self.validator = validator.Validator()
    
            return link_list
    
    
    {
def extract_json_data(url, **params):
    url = construct_url(url, **params)
    html = get_content(url, headers=fake_headers)
    json_string = match1(html, r'app.page\['board'\] = (.*?});')
    json_data = json.loads(json_string)
    return json_data
    
    from ..common import *
from ..extractor import VideoExtractor
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
        stream_types = [
        {'id': '720p HD'},
        {'id': '360p SD'},
    ]
    
        #title
    title = ''
    profile_api = 'https://www.showroom-live.com/api/room/profile?room_id={room_id}'.format(room_id = room_id)
    html = loads(get_content(profile_api))
    try:
        title = html['main_name']
    except KeyError:
        title = 'Showroom_{room_id}'.format(room_id = room_id)
    
    
def is_translated(msg):
    if isinstance(msg.string, basestring):
        return bool(msg.string)
    for item in msg.string:
        if not item:
            return False
    return True