
        
            def __init__(self, key, value, sep, orig):
        self.key = key
        self.value = value
        self.sep = sep
        self.orig = orig
    
        elif args.form and not args.files:
        # If sending files, `requests` will set
        # the `Content-Type` for us.
        default_headers['Content-Type'] = FORM_CONTENT_TYPE
    return default_headers
    
    from httpie.utils import repr_dict_nice
    
    
class HTTPMessage(object):
    '''Abstract class for HTTP messages.'''
    
    
class PrettyStream(EncodedStream):
    '''In addition to :class:`EncodedStream` behaviour, this stream applies
    content processing.
    
        # Auth
    def get_auth_plugins(self):
        return [plugin for plugin in self if issubclass(plugin, AuthPlugin)]
    
        class Plugin(AuthPlugin):
        auth_type = 'test-prompt-false'
        prompt_password = False
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
    error_msg = None
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    #: Python 3.x?
is_py3 = (_ver[0] == 3)
    
        Requests does not use the dict interface internally; it's just for
    compatibility with external client code. All requests code should work
    out of the box with externally provided instances of ``CookieJar``, e.g.
    ``LWPCookieJar`` and ``FileCookieJar``.
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
            assert server.handler_results[0] == b''
    
        def test_encode_override(self):
        self.assertEqual('y', self.field.encode('y'))
    
        def test_repr(self):
        self.assertEqual(repr(self.addr2), 'certbot_apache.obj.Addr(('127.0.0.1', '443'))')
    
        def _call(self):
        from certbot.client import determine_user_agent
        return determine_user_agent(self.config)
    
    
class IntegrationTestsContext(certbot_context.IntegrationTestsContext):
    '''General fixture describing a certbot-nginx integration tests context'''
    def __init__(self, request):
        super(IntegrationTestsContext, self).__init__(request)
    
        lineage = domains.split(',')[0]
    server_cert = ssl.get_server_certificate(('localhost', context.tls_alpn_01_port))
    with open(os.path.join(context.workspace, 'conf/live/{0}/cert.pem'.format(lineage)), 'r') as file:
        certbot_cert = file.read()
    
    
  def Response( self ):
    return self._response
    
        if not self._response_future.done():
      # Nothing yet...
      return True
    
    from ycm.tests.test_utils import ( CurrentWorkingDirectory, ExtendedMock,
                                   MockVimModule, MockVimBuffers, VimBuffer )
MockVimModule()
    
    
def MultipleFilterTypesTypeTest_test():
    
      def run( self ):
    if not self.future.set_running_or_notify_cancel():
      return
    
        Returns:
        A named 2-tuple of sets. The first set, named 'done', contains the
        futures that completed (is finished or cancelled) before the wait
        completed. The second set, named 'not_done', contains uncompleted
        futures.
    '''
    with _AcquireFutures(fs):
        done = set(f for f in fs
                   if f._state in [CANCELLED_AND_NOTIFIED, FINISHED])
        not_done = set(fs) - done
    
    def upload_chunk_file(core, fileDir, fileSymbol, fileSize,
        file_, chunk, chunks, uploadMediaRequest):
    url = core.loginInfo.get('fileUrl', core.loginInfo['url']) + \
        '/webwxuploadmedia?f=json'
    # save it on server
    cookiesList = {name:data for name,data in core.s.cookies.items()}
    fileType = mimetypes.guess_type(fileDir)[0] or 'application/octet-stream'
    fileName = utils.quote(os.path.basename(fileDir))
    files = OrderedDict([
        ('id', (None, 'WU_FILE_0')),
        ('name', (None, fileName)),
        ('type', (None, fileType)),
        ('lastModifiedDate', (None, time.strftime('%a %b %d %Y %H:%M:%S GMT+0800 (CST)'))),
        ('size', (None, str(fileSize))),
        ('chunks', (None, None)),
        ('chunk', (None, None)),
        ('mediatype', (None, fileSymbol)),
        ('uploadmediarequest', (None, uploadMediaRequest)),
        ('webwx_data_ticket', (None, cookiesList['webwx_data_ticket'])),
        ('pass_ticket', (None, core.loginInfo['pass_ticket'])),
        ('filename' , (fileName, file_.read(524288), 'application/octet-stream'))])
    if chunks == 1:
        del files['chunk']; del files['chunks']
    else:
        files['chunk'], files['chunks'] = (None, str(chunk)), (None, str(chunks))
    headers = { 'User-Agent' : config.USER_AGENT }
    return core.s.post(url, files=files, headers=headers, timeout=config.TIMEOUT)
    
        def test_create_sns_message_body(self):
        action = {
            'Message': ['msg']
        }
        result_str = sns_listener.create_sns_message_body(self.subscriber, action)
        result = json.loads(result_str)
        try:
            uuid.UUID(result.pop('MessageId'))
        except KeyError:
            assert False, 'MessageId missing in SNS response message body'
        except ValueError:
            assert False, 'SNS response MessageId not a valid UUID'
        assert_equal(result, {'Message': 'msg', 'Type': 'Notification', 'TopicArn': 'arn'})
    
            expected_result = {'AliasArn': lambda_api.func_arn(self.FUNCTION_NAME) + ':' + self.ALIAS_NAME,
                           'FunctionVersion': '1', 'Description': '', 'Name': self.ALIAS_NAME}
        self.assertDictEqual(expected_result, result)
    
    
class ApiGatewayPathsTest (unittest.TestCase):