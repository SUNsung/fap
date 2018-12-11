
        
        '''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
        return inner
    
        def _handle_requests(self):
        for _ in range(self.requests_to_handle):
            sock = self._accept_connection()
            if not sock:
                break
    
       >>> payload = dict(key1='value1', key2='value2')
   >>> r = requests.post('https://httpbin.org/post', data=payload)
   >>> print(r.text)
   {
     ...
     'form': {
       'key2': 'value2',
       'key1': 'value1'
     },
     ...
   }
    
        def get_policy(self):
        '''Return the CookiePolicy instance used.'''
        return self._policy
    
        @pytest.mark.parametrize(
        'value, expected', (
            ([('key', 'val')], [('key', 'val')]),
            ((('key', 'val'), ), [('key', 'val')]),
            ({'key': 'val'}, [('key', 'val')]),
            (None, None)
        ))
    def test_valid(self, value, expected):
        assert to_key_val_list(value) == expected
    
    def _init():
    for code, titles in _codes.items():
        for title in titles:
            setattr(codes, title, code)
            if not title.startswith(('\\', '/')):
                setattr(codes, title.upper(), code)
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
        mime, ext, size = url_info(real_url)
    
        elif 'subject' in url:
        titles = re.findall(r'data-title='([^']*)'>', html)
        song_id = re.findall(r'<li class='song-item' id='([^']*)'', html)
        song_ssid = re.findall(r'data-ssid='([^']*)'', html)
        get_song_url = 'http://music.douban.com/j/songlist/get_song_url'
    
        service = url.split('/')[2].split('.')[0]
    
        #Unless specified otherwise by the user, this is the default colorscheme
    colorscheme = 'basic'
    
    # List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
exclude_patterns = ['_build']
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')