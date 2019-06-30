
        
                return '\r\n'.join(headers)
    
        def format_headers(self, headers):
        for p in self.enabled_plugins:
            headers = p.format_headers(headers)
        return headers
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_current_version():
    version = Environment().config['__meta__']['httpie']
    assert version == __version__

    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
def test_unicode_headers(httpbin):
    # httpbin doesn't interpret utf8 headers
    r = http(httpbin.url + '/headers', u'Test:%s' % UNICODE)
    assert HTTP_OK in r
    
        return o

    
    
class Dense(object):
    '''全连接层的类实现，方便 reuse'''
    
    tf_float = tf.float32
zeros = tf.initializers.zeros
truncated_normal = tf.initializers.truncated_normal