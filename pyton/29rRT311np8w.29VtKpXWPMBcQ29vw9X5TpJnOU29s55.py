
        
            def __init__(self):
        self.name = 'btree_gist'
    
            # No redirect was found. Return the response.
        return response

    
        def delete(self, session_key=None):
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        self._cache.delete(self.cache_key_prefix + session_key)
    
        def cycle_key(self):
        '''
        Keep the same data but with a new key. Call save() and it will
        automatically save a cookie with a new key at the end of the request.
        '''
        self.save()
    
    
@html_safe
class BoundField:
    'A Field plus data'
    def __init__(self, form, field, name):
        self.form = form
        self.field = field
        self.name = name
        self.html_name = form.add_prefix(name)
        self.html_initial_name = form.add_initial_prefix(name)
        self.html_initial_id = form.add_initial_prefix(self.auto_id)
        if self.field.label is None:
            self.label = pretty_name(name)
        else:
            self.label = self.field.label
        self.help_text = field.help_text or ''
    
        def test_lower_items(self):
        assert list(self.case_insensitive_dict.lower_items()) == [('accept', 'application/json')]
    
    # ---------
# Specifics
# ---------
    
    
class MockResponse(object):
    '''Wraps a `httplib.HTTPMessage` to mimic a `urllib.addinfourl`.
    
            :rtype: dict
        '''
        proxies = proxies if proxies is not None else {}
        headers = prepared_request.headers
        url = prepared_request.url
        scheme = urlparse(url).scheme
        new_proxies = proxies.copy()
        no_proxy = proxies.get('no_proxy')
    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary, list of tuples, bytes, or file-like
        object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
        return table
    
        if num in lowPrimes:
        return True
    
    def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % (name)) or os.path.exists('%s_privkey.txt' % (name)):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \nUse a different name or delete these files and re-run this program.' % (name, name))
        sys.exit()
    
        def __init__(self, size_table, charge_factor=None, lim_charge=None):
        self.size_table = size_table
        self.values = [None] * self.size_table
        self.lim_charge = 0.75 if lim_charge is None else lim_charge
        self.charge_factor = 1 if charge_factor is None else charge_factor
        self.__aux_list = []
        self._keys = {}
    
            while self.values[new_key] is not None \
                and self.values[new_key] != key:
            i += 1
            new_key = self.hash_function(key + i*i) if not \
                self.balanced_factor() >= self.lim_charge else None
    
    try:
	xrange		#Python 2
except NameError:
	xrange = range	#Python 3
    
        context['show_on_github_url'] = show_url
    context['edit_on_github_url'] = edit_url
    
        if unit_2 == LENGTH_MILES:
        result = __meters_to_miles(meters)
    elif unit_2 == LENGTH_FEET:
        result = __meters_to_feet(meters)
    elif unit_2 == LENGTH_KILOMETERS:
        result = __meters_to_kilometers(meters)
    
        assert bump_version(Version('0.56.3'), 'patch') == \
        Version('0.56.4')
    assert bump_version(Version('0.56.3.b3'), 'patch') == \
        Version('0.56.3')
    assert bump_version(Version('0.56.0.dev0'), 'patch') == \
        Version('0.56.0')
    
        with patch.object(hass.loop, 'stop'):
        yield from hass.async_stop()
    assert len(calls) == 1