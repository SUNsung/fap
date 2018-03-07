
        
        with open('update/LATEST_VERSION', 'w') as f:
    f.write(version)
    
            webpage = self._download_webpage(url, playlist_id)
        title = self._html_search_regex(
            r'<h1 class='playlist-name'[^>]*?>(.*?)</h1>', webpage, 'title')
        description = self._html_search_regex(
            r'<p class='excerpt'[^>]*?>(.*?)</p>',
            webpage, 'description', fatal=False)
        urls = re.findall(
            r'<li class='lecture-preview'>\s*?<a target='_blank' href='([^']+)'>',
            webpage)
        entries = [self.url_result(u) for u in urls]
    
            flv_id = self._html_search_regex(
            r'<a[^>]+href=['\']/download/\?v=(\d+)', webpage, 'video id')
    
    
@app.before_request
def before_request():
    g.user = None
    if 'user_id' in session:
        g.user = query_db('select * from user where user_id = ?',
                          [session['user_id']], one=True)
    
    
def test_register(client):
    '''Make sure registering works'''
    rv = register(client, 'user1', 'default')
    assert b'You were successfully registered ' \
           b'and can login now' in rv.data
    rv = register(client, 'user1', 'default')
    assert b'The username is already taken' in rv.data
    rv = register(client, '', 'default')
    assert b'You have to enter a username' in rv.data
    rv = register(client, 'meh', '')
    assert b'You have to enter a password' in rv.data
    rv = register(client, 'meh', 'x', 'y')
    assert b'The two passwords do not match' in rv.data
    rv = register(client, 'meh', 'foo', email='broken')
    assert b'You have to enter a valid email address' in rv.data
    
        def deploy_cert(self, domain, cert_path, key_path, chain_path=None,
                    fullchain_path=None):
        '''Installs cert'''
        cert_path, key_path, chain_path = self.copy_certs_and_keys(
            cert_path, key_path, chain_path)
        self._configurator.deploy_cert(
            domain, cert_path, key_path, chain_path, fullchain_path)
