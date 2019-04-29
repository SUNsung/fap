
        
            return wrapped_view
    
    from flaskr.auth import login_required
from flaskr.db import get_db
    
    
def close_db(e=None):
    '''If this request connected to the database, close the
    connection.
    '''
    db = g.pop('db', None)
    
    
@pytest.mark.parametrize(('username', 'password', 'message'), (
    ('', '', b'Username is required.'),
    ('a', '', b'Password is required.'),
    ('test', 'test', b'already registered'),
))
def test_register_validate_input(client, username, password, message):
    response = client.post(
        '/auth/register',
        data={'username': username, 'password': password}
    )
    assert message in response.data
    
        def register_error_handler(self, code_or_exception, f):
        '''Non-decorator version of the :meth:`errorhandler` error attach
        function, akin to the :meth:`~flask.Flask.register_error_handler`
        application-wide function of the :class:`~flask.Flask` object but
        for error handlers limited to this blueprint.
    
        The following extra types are supported:
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
        :param source: the source code of the template to be
                   rendered
    :param context: the variables that should be available in the
                    context of the template.
    '''
    ctx = _app_ctx_stack.top
    ctx.app.update_template_context(context)
    return _render(ctx.app.jinja_env.from_string(source),
                   context, ctx.app)

    
        @property
    def max_content_length(self):
        '''Read-only view of the ``MAX_CONTENT_LENGTH`` config key.'''
        if current_app:
            return current_app.config['MAX_CONTENT_LENGTH']
    
        with app.app_context():
        rv = flask.url_for('index')
        assert rv == 'https://localhost/'
    
        strings = []
    with open(filepath, 'r') as f:
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
    #----------------------------------------------------------------------
#helper
#https://stackoverflow.com/questions/2148119/how-to-convert-an-xml-string-to-a-dictionary-in-python
def dictify(r,root=True):
    if root:
        return {r.tag : dictify(r, False)}
    d=copy(r.attrib)
    if r.text:
        d['_text']=r.text
    for x in r.findall('./*'):
        if x.tag not in d:
            d[x.tag]=[]
        d[x.tag].append(dictify(x,False))
    return d
    
        @classmethod
    def checksum(cls, sha1_str):
        if len(sha1_str) != 41:
            return False
        if not re.match(r'[0-9A-Za-z]{41}', sha1_str):
            return False
        sha1 = sha1_str[:-1]
        if (15 & sum([int(char, 16) for char in sha1])) == int(sha1_str[-1], 16):
            return True
        return False
    
        type, ext, size = url_info(url[0], True)
    size = urls_size(url)
    
        ''' 倒排索引字典 '''
    index = dict()
    ''' 频率字典：统计每个词在多少篇文档中出现 '''
    word_freq = dict()
    
    
def softmax(x, axis=-1):
    '''
    Examples:
        n_dim = x.get_shape().ndims
        assert n_dim >= 2
    
        References:
        tflearn.prelu
    '''
    if channel_shared:
        alpha_shape = get_shape(x)[-1:]
    else:
        alpha_shape = [1]
    
        with tf.variable_scope(name or 'attention_for_dense', reuse=reuse):
        W, b = get_wb([n_input, n_input])
    
            return self._call(x)

    
        Examples:
        l2_regularizer = l2(0.01)
        tf.get_variable(..., regularizer=l2_regularizer, ...)
    '''
    
    
def get_wb(shape,
           w_initializer=truncated_normal,
           b_initializer=zeros,
           w_regularizer=l2_regularizer,
           b_regularizer=None,  # 一般不对偏置做权重惩罚，可能会导致欠拟合
           name=None):
    ''''''
    name = '' if name is None else name + '_'
    W = tf.get_variable(name + 'W', shape=shape,
                        dtype=tf_float, initializer=w_initializer, regularizer=w_regularizer)
    b = tf.get_variable(name + 'b', shape=shape[-1:],
                        dtype=tf_float, initializer=b_initializer, regularizer=b_regularizer)
    return W, b
    
    # 可以通过相同的方式获取每个单词以及任一个 n-gram 的向量
print(model.wv['hello'])
print(model.wv['<h'])
'''
[-0.03481839  0.00606661  0.02581969  0.00188777  0.0325358 ]
[ 0.04481247 -0.1784363  -0.03192253  0.07162753  0.16744071]
'''
print()