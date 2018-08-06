
        
        from dragnn.protos import spec_pb2
from dragnn.python import spec_builder
    
        try:
      with open(FLAGS.actual_file) as actual:
        content_actual = actual.read()
    except IOError as e:
      self.fail('Error opening '%s': %s' % (FLAGS.actual_file, e.strerror))
    
        if s1.st_dev != s2.st_dev:
        return True     # path/.. on a different device as path
    if s1.st_ino == s2.st_ino:
        return True     # path/.. is the same i-node as path, i.e. path=='/'
    return False

    
            url = 'https://api.shippable.com/runs?projectIds=%s&runNumbers=%s' % (project_id, run_number)
    
    from ansible.utils.vars import combine_vars
    
    
class ExponentialBackoffStrategyTestCase(unittest.TestCase):
    def test_no_retries(self):
        strategy = _exponential_backoff(retries=0)
        result = list(strategy())
        self.assertEquals(result, [], 'list should be empty')
    
        def _dicts(self, ajvars):
        print(ajvars)
        res28 = self._dict_jinja28(ajvars)
        res29 = self._dict_jinja29(ajvars)
        # res28_other = self._dict_jinja28(ajvars, {'other_key': 'other_value'})
        # other = {'other_key': 'other_value'}
        # res29_other = self._dict_jinja29(ajvars, *other)
        print('res28: %s' % res28)
        print('res29: %s' % res29)
        # print('res28_other: %s' % res28_other)
        # print('res29_other: %s' % res29_other)
        # return (res28, res29, res28_other, res29_other)
        # assert ajvars == res28
        # assert ajvars == res29
        return (res28, res29)
    
            from certbot_dns_dnsimple.dns_dnsimple import Authenticator
    
    default_role = 'py:obj'
    
        def setUp(self):
        from acme.errors import MissingNonce
        self.response = mock.MagicMock(headers={})
        self.response.request.method = 'FOO'
        self.error = MissingNonce(self.response)
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)
    
    # Additional templates that should be rendered to pages, maps page names to
# template names.
#html_additional_pages = {}
    
    See file_uploader.py in this directory for code that uploads files in this format.
'''
    
    
class LoginHandler(BaseHandler, TwitterMixin):
    @gen.coroutine
    def get(self):
        if self.get_argument('oauth_token', None):
            user = yield self.get_authenticated_user()
            del user['description']
            self.set_secure_cookie(self.COOKIE_NAME, json_encode(user))
            self.redirect(self.get_argument('next', '/'))
        else:
            yield self.authorize_redirect(callback_uri=self.request.full_url())
    
        logging.warning('Starting fetch with simple client')
    simple_client = SimpleAsyncHTTPClient()
    simple_client.fetch('http://localhost:%d/' % options.port,
                        callback=callback)
    IOLoop.current().start()
    
            truncated = False
        for object_name in object_names[start_pos:]:
            if not object_name.startswith(prefix):
                break
            if len(contents) >= max_keys:
                truncated = True
                break
            object_path = self._object_path(bucket_name, object_name)
            c = {'Key': object_name}
            if not terse:
                info = os.stat(object_path)
                c.update({
                    'LastModified': datetime.datetime.utcfromtimestamp(
                        info.st_mtime),
                    'Size': info.st_size,
                })
            contents.append(c)
            marker = object_name
        self.render_xml({'ListBucketResult': {
            'Name': bucket_name,
            'Prefix': prefix,
            'Marker': marker,
            'MaxKeys': max_keys,
            'IsTruncated': truncated,
            'Contents': contents,
        }})
    
        # Do a little work. Alternately, could leave this script running and
    # poke at it with a browser.
    client = httpclient.AsyncHTTPClient()
    yield client.fetch('http://127.0.0.1:8888/dummy/')
    yield client.fetch('http://127.0.0.1:8888/dummyasync/', raise_error=False)