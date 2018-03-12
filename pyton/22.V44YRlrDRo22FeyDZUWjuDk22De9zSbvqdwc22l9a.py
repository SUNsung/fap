
        
        intersphinx_mapping = {
    'python': ('https://docs.python.org/3/', None),
    'werkzeug': ('http://werkzeug.pocoo.org/docs/', None),
    'click': ('http://click.pocoo.org/', None),
    'jinja': ('http://jinja.pocoo.org/docs/', None),
    'itsdangerous': ('https://pythonhosted.org/itsdangerous', None),
    'sqlalchemy': ('https://docs.sqlalchemy.org/en/latest/', None),
    'wtforms': ('https://wtforms.readthedocs.io/en/latest/', None),
    'blinker': ('https://pythonhosted.org/blinker/', None),
}
    
    
def get_db():
    '''Opens a new database connection if there is none yet for the
    current application context.
    '''
    if not hasattr(g, 'sqlite_db'):
        g.sqlite_db = connect_db()
    return g.sqlite_db
    
    
@app.cli.command('initdb')
def initdb_command():
    '''Creates the database tables.'''
    init_db()
    print('Initialized the database.')
    
    
def login(client, username, password):
    '''Helper function to login'''
    return client.post('/login', data={
        'username': username,
        'password': password
    }, follow_redirects=True)
    
    
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.