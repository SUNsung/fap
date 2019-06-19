
        
        
def add_error(line_num, message):
    '''adds an error to the dynamic error list'''
    err = '(L{:03d}) {}'.format(line_num + 1, message)
    errors.append(err)
    
        if text.endswith('>'):
        words, text = text[:-1].rsplit('<', 1)
        words = words.strip()
    else:
        words = None
    
        @app.route('/hello')
    def hello():
        return 'Hello, World!'
    
    
@click.command('init-db')
@with_appcontext
def init_db_command():
    '''Clear existing data and create new tables.'''
    init_db()
    click.echo('Initialized the database.')
    
    import pytest
    
    
@pytest.mark.parametrize(
    ('username', 'password', 'message'),
    (
        ('', '', b'Username is required.'),
        ('a', '', b'Password is required.'),
        ('test', 'test', b'already registered'),
    ),
)
def test_register_validate_input(client, username, password, message):
    response = client.post(
        '/auth/register', data={'username': username, 'password': password}
    )
    assert message in response.data
    
        if app:
        bp = app.blueprints.get(request.blueprint) if request else None
        kwargs.setdefault(
            'cls', bp.json_decoder if bp and bp.json_decoder else app.json_decoder
        )
    else:
        kwargs.setdefault('cls', JSONDecoder)
    
            editor = self.settings['EDITOR']
        try:
            spidercls = self.crawler_process.spider_loader.load(args[0])
        except KeyError:
            return self._err('Spider not found: %s' % args[0])
    
        def short_desc(self):
        return 'Fetch a URL using the Scrapy downloader'
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
            'A TLS/SSL connection established with [this method] may
         understand the SSLv3, TLSv1, TLSv1.1 and TLSv1.2 protocols.'
        '''
    
        text = html.remove_tags_with_content(text, ('script', 'noscript'))
    text = html.replace_entities(text)
    text = html.remove_comments(text)
    return _ajax_crawlable_re.search(text) is not None
