
        
            :param id: id of post to get
    :param check_author: require the current user to be the author
    :return: the post with author information
    :raise 404: if a post with the given id doesn't exist
    :raise 403: if the current user isn't the author
    '''
    post = get_db().execute(
        'SELECT p.id, title, body, created, author_id, username'
        ' FROM post p JOIN user u ON p.author_id = u.id'
        ' WHERE p.id = ?',
        (id,)
    ).fetchone()
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
            .. versionadded:: 0.11
        '''
        mappings = []
        if len(mapping) == 1:
            if hasattr(mapping[0], 'items'):
                mappings.append(mapping[0].items())
            else:
                mappings.append(mapping[0])
        elif len(mapping) > 1:
            raise TypeError(
                'expected at most 1 positional argument, got %d' % len(mapping)
            )
        mappings.append(kwargs.items())
        for mapping in mappings:
            for (key, value) in mapping:
                if key.isupper():
                    self[key] = value
        return True
    
        :param data: Bytes in unknown UTF encoding.
    :return: UTF encoding name
    '''
    head = data[:4]
    
        def to_json(self, value):
        return value.hex
    
            url = url_parse(path)
        base_url = '{scheme}://{netloc}/{path}'.format(
            scheme=url.scheme or url_scheme,
            netloc=url.netloc or http_host,
            path=app_root.lstrip('/')
        )
        path = url.path
    
        def iter_lines(self, chunk_size):
        yield self.body, b''
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
        if 'win32' in str(sys.platform).lower():
        # Terminal colors for Windows
        install_requires.append('colorama>=0.2.4')
    
    
def test_credentials_in_url_auth_flag_has_priority(httpbin_both):
    '''When credentials are passed in URL and via -a at the same time,
     then the ones from -a are used.'''
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:wrong')
    r = http('--auth=user:password', 'GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
    
def test_unicode_json_item_verbose(httpbin):
    r = http('--verbose', '--json',
             'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
    
def calibration(prob,outcome,n_bins=10):
    '''Calibration measurement for a set of predictions.
    
    fare_bracket_size = 10
number_of_price_brackets = fare_ceiling / fare_bracket_size
number_of_classes = 3                             # I know there were 1st, 2nd and 3rd classes on board.
number_of_classes = len(np.unique(data[0::,2]))   # But it's better practice to calculate this from the Pclass directly:
                                                  # just take the length of an array of UNIQUE values in column index 2
    
    '''
Example: compute A^n + B^n on 2 GPUs
Results on 8 cores with 2 GTX-980:
 * Single GPU computation time: 0:00:11.277449
 * Multi GPU computation time: 0:00:07.131701
'''
#Create random large matrix
A = np.random.rand(1e4, 1e4).astype('float32')
B = np.random.rand(1e4, 1e4).astype('float32')
    
        LOGPATS  = r'(\S+) (\S+) \[(.*?)\] (\S+) (\S+) ' \
               r'(\S+) (\S+) (\S+) ('([^']+)'|-) ' \
               r'(\S+) (\S+) (\S+) (\S+) (\S+) (\S+) ' \
               r'('([^']+)'|-) ('([^']+)'|-)'
    NUM_ENTRIES_PER_LINE = 17
    logpat = re.compile(LOGPATS)
    
            def is_prime(num):
            if num == 2:
                return True
            for i in range(2, int(num ** 0.5) + 1):
                if num % i == 0:
                    return False
            return True
    
            for i in range(row_begin, row_end+1):
            res.append(matrix[i][col_end])
        col_end -= 1