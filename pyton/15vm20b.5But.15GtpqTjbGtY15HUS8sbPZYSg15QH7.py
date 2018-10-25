
        
            Validates that the username is not already taken. Hashes the
    password for security.
    '''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
    
    
def close_db(e=None):
    '''If this request connected to the database, close the
    connection.
    '''
    db = g.pop('db', None)
    
        def to_json(self, value):
        return value.hex
    
        If there is no handler for the logger's effective level, add a
    :class:`~logging.StreamHandler` for
    :func:`~flask.logging.wsgi_errors_stream` with a basic format.
    '''
    logger = logging.getLogger('flask.app')
    
    
def _default_template_ctx_processor():
    '''Default template context processor.  Injects `request`,
    `session` and `g`.
    '''
    reqctx = _request_ctx_stack.top
    appctx = _app_ctx_stack.top
    rv = {}
    if appctx is not None:
        rv['g'] = appctx.g
    if reqctx is not None:
        rv['request'] = reqctx.request
        rv['session'] = reqctx.session
    return rv
    
        classifiers = proj_info['classifiers'],
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        stream_types = [  #this is just a sample. Will make it in prepare()
        # {'id': '1080'},
        # {'id': '720'},
        # {'id': '360'},
        # {'id': '288'},
        # {'id': '190'},
        # {'id': '180'},
        
    ]