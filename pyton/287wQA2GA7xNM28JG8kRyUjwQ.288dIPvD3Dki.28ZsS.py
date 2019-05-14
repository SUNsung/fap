
        
        
class CallCenter(object):
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
    
class RemoveDuplicateUrls(MRJob):
    
        def __init__(self, key, value):
        self.key = key
        self.value = value
    
    
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
            def register_template(state):
            state.app.jinja_env.globals[name or f.__name__] = f
    
    
def _lookup_app_object(name):
    top = _app_ctx_stack.top
    if top is None:
        raise RuntimeError(_app_ctx_err_msg)
    return getattr(top, name)
    
                for a in self.addons[:]:
                if a.path not in ctx.options.scripts:
                    ctx.log.info('Un-loading script: %s' % a.path)
                    ctx.master.addons.remove(a)
                    self.addons.remove(a)
    
        def configure(self, updated):
        if 'stickycookie' in updated:
            if ctx.options.stickycookie:
                flt = flowfilter.parse(ctx.options.stickycookie)
                if not flt:
                    raise exceptions.OptionsError(
                        'stickycookie: invalid filter expression: %s' % ctx.options.stickycookie
                    )
                self.flt = flt
            else:
                self.flt = None
    
    
    class Point(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.x_int = self._io.read_u4be()
            self.y_int = self._io.read_u4be()
    
        def test_del_msg_failure_with_null_msg(self):
        '''Del_msg fails: Returns 200 and does not set del_on_recipient.'''
        message = MagicMock(spec=Message)
        message.name = 'msg_3'
        message.to_id = self.id
        message.del_on_recipient = False
    
        def test_login(self):
        with self.mock_login():
            res = self.do_login()
            self.assert_success(res)
    
            def simulate_percent_loggedout(wanted_percent):
            cfg = {'percent_loggedout': wanted_percent}
            for i in xrange(num_users):
                loid = self.generate_loid()
                self.world.current_loid = mock.Mock(return_value=loid)
                self.world.is_user_loggedin = mock.Mock(return_value=False)
                feature_state = self.world._make_state(cfg)
                yield feature_state.is_enabled()
    
            # Scenario: capture_authorization_hold raises AuthorizationHoldNotFound
        capture_authorization_hold.side_effect = AuthorizationHoldNotFound('')
        return_value = charge_transaction(self.user, transaction_id,
                                          campaign_id)
        self.assertTrue(bid.void.called)
        self.assertEqual(return_value, (False, TRANSACTION_NOT_FOUND))
    
        def test_invalid_property(self):
        testcase = u'*{foo: red;}'
        self.assertInvalid(testcase)
    
        def test_flat_modules_only_include_sources_once(self):
        test_files = ['foo.js', 'bar.js', 'baz.js', 'qux.js']
        test_files_dup = test_files * 2
        test_module = TestModule('test_module', *test_files_dup)
        self.assertEqual(test_module.build(), concat_sources(test_files))
    
            perm_set = TestPermissionSet()
        self.assertTrue(perm_set.is_valid())
        perm_set['x'] = True
        self.assertTrue(perm_set.is_valid())
        perm_set[perm_set.ALL] = True
        self.assertTrue(perm_set.is_valid())
        perm_set['z'] = True
        self.assertFalse(perm_set.is_valid())
    
        def test_bacon_reader_detector(self):
        user_agent = 'BaconReader/3.0 (iPhone; iOS 9.3.2; Scale/2.00)'
        outs = detect(user_agent)
        self.assertEqual(outs['browser']['name'], BaconReaderDetector.name)

    
        def test_benign(self):
        '''A typical example of what we might get out of `safemarkdown()`'''
        testcase = '''
            <!-- SC_OFF -->
            <div class='md'><a href='http://zombo.com/'>Welcome</a></div>
            <!-- SC_ON -->
        '''
        self.assertFragmentValid(testcase)
    
        def test_different_queries(self):
        u = UrlParser('http://example.com/')
        u2 = UrlParser('http://example.com/?foo')
        u3 = UrlParser('http://example.com/?foo=bar')
        self.assertNotEquals(u, u2)
        self.assertNotEquals(u2, u3)