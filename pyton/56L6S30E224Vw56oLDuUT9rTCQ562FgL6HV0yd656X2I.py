
        
        import codecs
import subprocess
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
        outfile, = args
    
        params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
            for tc in test_cases:
            info_dict = tc.get('info_dict', {})
            if not (info_dict.get('id') and info_dict.get('ext')):
                raise Exception('Test definition incorrect. The output file cannot be known. Are both \'id\' and \'ext\' keys present?')
    
        def debug(self, msg):
        pass
    
    from youtube_dl.jsinterp import JSInterpreter
    
    from test.helper import assertRegexpMatches
    
            print('****************** Testing Edit Distance DP Algorithm ******************')
        print()
    
    	hexrep = format(i,'08x')
	thing = ''
	for i in [3,2,1,0]:
		thing += hexrep[2*i:2*i+2]
	return thing
    
        freqPairs = list(freqToLetter.items())
    freqPairs.sort(key = getItemAtIndexZero, reverse = True)
    
            if pattern not in allPatterns:
            allPatterns[pattern] = [word]
        else:
            allPatterns[pattern].append(word)
    
        def database_forwards(self, app_label, schema_editor, from_state, to_state):
        if schema_editor.connection.vendor != 'postgresql':
            return
        schema_editor.execute('CREATE EXTENSION IF NOT EXISTS %s' % schema_editor.quote_name(self.name))
        # Clear cached, stale oids.
        get_hstore_oids.cache_clear()
        get_citext_oids.cache_clear()
        # Registering new type handlers cannot be done before the extension is
        # installed, otherwise a subsequent data migration would use the same
        # connection.
        register_type_handlers(schema_editor.connection)
    
            r = None
        try:
            r = Redirect.objects.get(site=current_site, old_path=full_path)
        except Redirect.DoesNotExist:
            pass
        if r is None and settings.APPEND_SLASH and not request.path.endswith('/'):
            try:
                r = Redirect.objects.get(
                    site=current_site,
                    old_path=request.get_full_path(force_append_slash=True),
                )
            except Redirect.DoesNotExist:
                pass
        if r is not None:
            if r.new_path == '':
                return self.response_gone_class()
            return self.response_redirect_class(r.new_path)
    
        def save(self, must_create=False):
        if self.session_key is None:
            return self.create()
        if must_create:
            func = self._cache.add
        elif self._cache.get(self.cache_key) is not None:
            func = self._cache.set
        else:
            raise UpdateError
        result = func(self.cache_key,
                      self._get_session(no_load=must_create),
                      self.get_expiry_age())
        if must_create and not result:
            raise CreateError
    
        class Meta(AbstractBaseSession.Meta):
        db_table = 'django_session'

    
    from httpie.plugins import plugin_manager
from httpie.context import Environment
    
            Use `self.raw_auth` to access the raw value passed through
        `--auth, -a`.
    
        class Plugin(AuthPlugin):
        auth_type = 'test-prompt-false'
        prompt_password = False
    
    
def test_unicode_url_query_arg_item(httpbin):
    r = http(httpbin.url + '/get', u'test==%s' % UNICODE)
    assert HTTP_OK in r
    assert r.json['args'] == {'test': UNICODE}, r
    
    import pytest
    
            if module.check_mode:
            mp_id = get_monitoring_policy(oneandone_conn, monitoring_policy_id)
            if (monitoring_policy_processes and mp_id):
                return True
            return False
    
            # if we reach this point we can assume that the host was taken to the desired state
    
    
def ensure(module, client):
    name = module.params['cn']
    state = module.params['state']
    
    
def do_send_request(module, url, params, key):
    data = json.dumps(params)
    headers = {
        'Content-Type': 'application/json',
        'x-stackdriver-apikey': key
    }
    response, info = fetch_url(module, url, headers=headers, data=data, method='POST')
    if info['status'] != 200:
        module.fail_json(msg='Unable to send msg: %s' % info['msg'])
    
    # If true, show URL addresses after external links.
#
# man_show_urls = False
    
        # If the temperature is not a number this can cause issues
    # with Polymer components, so bail early there.
    if not isinstance(temperature, Number):
        raise TypeError(
            'Temperature is not a number: {}'.format(temperature))
    
    _LOGGER = logging.getLogger(__name__)