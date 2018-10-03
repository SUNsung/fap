
        
            def report_out_of_quota(self, appid):
        self.logger.warn('report_out_of_quota:%s', appid)
        with self.lock:
            if appid not in self.out_of_quota_appids:
                self.out_of_quota_appids.append(appid)
            try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
    
def check_create_data_path():
    if not os.path.isdir(data_path):
        os.mkdir(data_path)
    
    MIN_TOKEN_TYPE = UP+1
	
INVALID_TOKEN_TYPE = 0
    
                # late import to avoid cyclic dependencies
            from antlr3.streams import TokenStream, CharStream
            from antlr3.tree import TreeNodeStream
    
    
    def getSourceName(self):
        return self.name
    
        def setType(self, ttype):
        self.type = ttype
    
        def setup(self):
        N = 500
        M = 10
        self.df = DataFrame(np.random.randn(N, M))
        self.df['Name'] = ['A'] * N
    
    from jinja2 import FileSystemLoader
from jinja2.sandbox import SandboxedEnvironment
import sphinx
from sphinx.jinja2glue import BuiltinTemplateLoader
    
        :raises: :py:class:`DiffAssertionError`
    '''
    diffs = diff_dicts(data, expected_data)
    if diffs:
        raise DiffAssertionError(diffs)
    
            return contextlib.nested(
            patch.object(VByName, 'run', return_value=thing if ret else None),
            patch.object(VModhash, 'run', side_effect=None),
            patch.object(VUser, 'run', side_effect=None),
            patch.object(thing, '_commit', side_effect=None),
            patch.object(Account, '_id', self.id, create=True),
            patch.object(g.events, 'message_event', side_effect=None),
        )
    
        @patch('r2.lib.authorize.api.CreateCustomerProfileTransactionRequest')
    def test_capture_authorization_hold(self, CreateRequest):
        _response = Mock()
        _request = Mock()
        _request.make_request.return_value = (True, _response)
        CreateRequest.return_value = _request
    
        # IE<8 XSS
    def test_invalid_function(self):
        testcase = u'*{color:expression(alert(1));}'
        self.assertInvalid(testcase)
    
            width = 108
        url = self.provider.resize_image(image, width, max_ratio=max_ratio)
        self.assertEqual(url,
                ('https://example.com/a.jpg?fit=crop&crop=%s&arh=%s&w=%s'
                    % (crop, max_ratio, width)))
    
            # verify compression
        data = [('a.b.c.w', 1), ('a.b.c.x', 2), ('a.b.c.y', 3), ('a.b.z', 4),
                ('bbb', 5), ('bbc', 6)]
        conn = self.connect(compress=True)
        conn.send(reversed(data))
        self.assertEquals(
            ['a.b.c.w:1\n^06x:2\n^06y:3\n^04z:4\nbbb:5\nbbc:6'],
            conn.sock.datagrams)
        conn = self.connect(compress=False)
        conn.send(reversed(data))
        self.assertEquals(
            ['bbc:6\nbbb:5\na.b.z:4\na.b.c.y:3\na.b.c.x:2\na.b.c.w:1'],
            conn.sock.datagrams)
    
        def test_decrypt(self):
        from r2.lib.tracking import _decrypt
        decrypted = _decrypt(ENCRYPTED, SECRET)
        self.assertEquals(MESSAGE, decrypted)
