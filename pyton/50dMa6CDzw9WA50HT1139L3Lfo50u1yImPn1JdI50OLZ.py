
        
            classifiers = proj_info['classifiers'],
    
    site = Bigthink()
download = site.download_by_url

    
    
def huaban_download(url, output_dir='.', **kwargs):
    if re.match(r'http://huaban\.com/boards/\d+/', url):
        huaban_download_board(url, output_dir, **kwargs)
    else:
        print('Only board (画板) pages are supported currently')
        print('ex: http://huaban.com/boards/12345678/')
    
            # extract title
        self.title = match1(content,
                            r'<meta property='og:description' name='og:description' content='([^']+)'')
    
        #title
    title = ''
    profile_api = 'https://www.showroom-live.com/api/room/profile?room_id={room_id}'.format(room_id = room_id)
    html = loads(get_content(profile_api))
    try:
        title = html['main_name']
    except KeyError:
        title = 'Showroom_{room_id}'.format(room_id = room_id)
    
    
    def decode(self, s, _w=WHITESPACE.match):
        '''Return the Python representation of ``s`` (a ``str`` instance
        containing a JSON document).
    
    
class _AsyncDeprecatedProperty:
    def warn(self, cls):
        clsname = cls.__name__
        warnings.warn(
            '{cls}.async is deprecated; use {cls}.async_'.format(cls=clsname),
            DeprecationWarning)
    
        def test_varargs14_kw(self):
        msg = r'^product\(\) takes at most 1 keyword argument \(2 given\)$'
        self.assertRaisesRegex(TypeError, msg,
                               itertools.product, 0, repeat=1, foo=2)
    
        def test_pointer_type_name(self):
        LargeNamedType = type('T' * 2 ** 25, (Structure,), {})
        self.assertTrue(POINTER(LargeNamedType))
    
    def download_pdf(link, location, name):
    try:
        response = requests.get(link)
        with open(os.path.join(location, name), 'wb') as f:
        	f.write(response.content)
        	f.close()
    except HTTPError:
        print('>>> Error 404: cannot be downloaded!\n') 
        raise   
    except socket.timeout:
        print(' '.join(('can't download', link, 'due to connection timeout!')) )
        raise