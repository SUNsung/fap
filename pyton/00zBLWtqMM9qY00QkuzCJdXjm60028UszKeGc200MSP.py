
        
                Keyword:                   'bold #004461',   # class: 'k'
        Keyword.Constant:          'bold #004461',   # class: 'kc'
        Keyword.Declaration:       'bold #004461',   # class: 'kd'
        Keyword.Namespace:         'bold #004461',   # class: 'kn'
        Keyword.Pseudo:            'bold #004461',   # class: 'kp'
        Keyword.Reserved:          'bold #004461',   # class: 'kr'
        Keyword.Type:              'bold #004461',   # class: 'kt'
    
    
class TestLookupDict:
    
        @pytest.mark.skip(reason='this fails non-deterministically under pytest-xdist')
    def test_request_recovery(self):
        '''can check the requests content'''
        # TODO: figure out why this sometimes fails when using pytest-xdist.
        server = Server.basic_response_server(requests_to_handle=2)
        first_request = b'put your hands up in the air'
        second_request = b'put your hand down in the floor'
    
            return dict(
            (attr, getattr(self, attr, None))
            for attr in self.__attrs__
        )
    
            :param url: URL for the new :class:`Request` object.
        :param data: (optional) Dictionary, list of tuples, bytes, or file-like
            object to send in the body of the :class:`Request`.
        :param \*\*kwargs: Optional arguments that ``request`` takes.
        :rtype: requests.Response
        '''
    
    Executor.submit() called:
- creates a uniquely numbered _WorkItem and adds it to the 'Work Items' dict
- adds the id of the _WorkItem to the 'Work Ids' queue
    
        def test_cancel(self):
        f1 = create_future(state=PENDING)
        f2 = create_future(state=RUNNING)
        f3 = create_future(state=CANCELLED)
        f4 = create_future(state=CANCELLED_AND_NOTIFIED)
        f5 = create_future(state=FINISHED, exception=IOError())
        f6 = create_future(state=FINISHED, result=5)
    
    
GENERIC_RESPONSE = {
  'clang': {
    'has_support': True,
    'version': 'Clang version'
  },
  'completer': {
    'items': [
      {
        'key': 'key',
        'value': 'value'
      }
    ],
    'name': 'Completer name',
    'servers': [
      {
        'address': '127.0.0.1',
        'executable': '/path/to/executable',
        'extras': [
          {
            'key': 'key',
            'value': 'value'
          }
        ],
        'is_running': True,
        'logfiles': [
          '/path/to/stdout/logfile',
          '/path/to/stderr/logfile'
        ],
        'name': 'Server name',
        'pid': 12345,
        'port': 1234
      }
    ]
  },
  'extra_conf': {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  },
  'python': {
    'executable': '/path/to/python/interpreter',
    'version': 'Python version'
  }
}
    
    
def _EndsWithPython( path ):
  '''Check if given path ends with a python 2.7 or 3.4+ name.'''
  return path and PYTHON_BINARY_REGEX.search( path ) is not None
    
    TIMEOUT_SECONDS = 0.1
    
    
  def Start( self ):
    self._keepalive_thread.start()
    
    
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
    
        def delete(self, bucket, object_name):
        object_name = urllib.unquote(object_name)
        path = self._object_path(bucket, object_name)
        if not path.startswith(self.application.directory) or \
           not os.path.isfile(path):
            raise web.HTTPError(404)
        os.unlink(path)
        self.set_status(204)
        self.finish()
    
    coverage_skip_undoc_in_source = True
coverage_ignore_modules = [
    'tornado.platform.asyncio',
    'tornado.platform.caresresolver',
    'tornado.platform.twisted',
]
# I wish this could go in a per-module file...
coverage_ignore_classes = [
    # tornado.gen
    'Runner',