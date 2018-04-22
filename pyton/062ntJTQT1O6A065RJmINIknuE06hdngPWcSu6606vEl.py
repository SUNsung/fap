
        
            #: When data is read or written, this is set to ``True``. Used by
    # :class:`.SecureCookieSessionInterface` to add a ``Vary: Cookie``
    #: header, which allows caching proxies to cache different pages for
    #: different users.
    accessed = False
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
    
def test_get_namespace():
    app = flask.Flask(__name__)
    app.config['FOO_OPTION_1'] = 'foo option 1'
    app.config['FOO_OPTION_2'] = 'foo option 2'
    app.config['BAR_STUFF_1'] = 'bar stuff 1'
    app.config['BAR_STUFF_2'] = 'bar stuff 2'
    foo_options = app.config.get_namespace('FOO_')
    assert 2 == len(foo_options)
    assert 'foo option 1' == foo_options['option_1']
    assert 'foo option 2' == foo_options['option_2']
    bar_options = app.config.get_namespace('BAR_', lowercase=False)
    assert 2 == len(bar_options)
    assert 'bar stuff 1' == bar_options['STUFF_1']
    assert 'bar stuff 2' == bar_options['STUFF_2']
    foo_options = app.config.get_namespace('FOO_', trim_namespace=False)
    assert 2 == len(foo_options)
    assert 'foo option 1' == foo_options['foo_option_1']
    assert 'foo option 2' == foo_options['foo_option_2']
    bar_options = app.config.get_namespace('BAR_', lowercase=False, trim_namespace=False)
    assert 2 == len(bar_options)
    assert 'bar stuff 1' == bar_options['BAR_STUFF_1']
    assert 'bar stuff 2' == bar_options['BAR_STUFF_2']
    
        logging.root.handlers[:] = root_handlers
    logging.root.setLevel(root_level)
    
    Available hooks:
    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary (will be form-encoded), bytes, or file-like object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
    
class TestTestServer:
    
    Requests is an HTTP library, written in Python, for human beings. Basic GET
usage:
    
    
class URLRequired(RequestException):
    '''A valid URL is required to make a request.'''
    
    packages = ['requests']
    
    
def _lcut_internal_no_hmm(s):
    return dt._lcut_internal_no_hmm(s)
    
    result = jieba.tokenize('永和服装饰品有限公司')
for tk in result:
    print('word %s\t\t start: %d \t\t end:%d' % (tk[0],tk[1],tk[2]))
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
        def testPosseg(self):
        import jieba.posseg as pseg
        for content in test_contents:
            result = pseg.cut(content)
            assert isinstance(result, types.GeneratorType), 'Test Posseg Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test Posseg error on content: %s' % content
            print(' , '.join([w.word + ' / ' + w.flag for w in result]), file=sys.stderr)
        print('testPosseg', file=sys.stderr)
    
    latex_symbols = {
    }
    
    Authors:
    
    def test_autocall_binops():
    '''See https://github.com/ipython/ipython/issues/81'''
    ip.magic('autocall 2')
    f = lambda x: x
    ip.user_ns['f'] = f
    try:
        nt.assert_equal(ip.prefilter('f 1'),'f(1)')
        for t in ['f +1', 'f -1']:
            nt.assert_equal(ip.prefilter(t), t)
    
    A print function that pretty prints sympy Basic objects.
    
        def checkTables(self):
        version = int(self.execute('PRAGMA user_version').fetchone()[0])
        self.log.debug('Db version: %s, needed: %s' % (version, self.version))
        if version < self.version:
            self.createTables()
        else:
            self.execute('VACUUM')
    
        def removeCerts(self):
        if config.keep_ssl_cert:
            return False
        for file_name in ['cert-rsa.pem', 'key-rsa.pem']:
            file_path = '%s/%s' % (config.data_dir, file_name)
            if os.path.isfile(file_path):
                os.unlink(file_path)
    
    ACTION_HEADER_PREFIX = 'DynamoDBStreams_20120810'
    
        # make test request to gateway
    result = requests.get(url)
    assert result.status_code == 200
    assert to_str(result.content) == '{}'
    data = {'data': 123}
    result = requests.post(url, data=json.dumps(data))
    assert result.status_code == 200
    assert json.loads(to_str(result.content)) == data