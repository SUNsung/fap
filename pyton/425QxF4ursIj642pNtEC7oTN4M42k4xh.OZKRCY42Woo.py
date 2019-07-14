
        
            def test_list(self):
        assert list(self.case_insensitive_dict) == ['Accept']
    
        def __enter__(self):
        self.start()
        self.ready_event.wait(self.WAIT_EVENT_TIMEOUT)
        return self.host, self.port
    
        :param jar: cookielib.CookieJar (not necessarily a RequestsCookieJar)
    :param request: our own requests.Request object
    :param response: urllib3.HTTPResponse object
    '''
    if not (hasattr(response, '_original_response') and
            response._original_response):
        return
    # the _original_response field is the wrapped httplib.HTTPResponse object,
    req = MockRequest(request)
    # pull out the HTTPMessage with the headers and put it in the mock:
    res = MockResponse(response._original_response.msg)
    jar.extract_cookies(res, req)
    
            # Verify we receive an Authorization header in response, then
        # challenge again.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert expected_digest in request_content
        sock.send(text_401)
    
            # if the server thread fails to finish, the test suite will hang
        # and get killed by the jenkins timeout.
    
            self.method = method
        self.url = url
        self.headers = headers
        self.files = files
        self.data = data
        self.json = json
        self.params = params
        self.auth = auth
        self.cookies = cookies
    
        charset_re = re.compile(r'<meta.*?charset=['\']*(.+?)['\'>]', flags=re.I)
    pragma_re = re.compile(r'<meta.*?content=['\']*;?charset=(.+?)['\'>]', flags=re.I)
    xml_re = re.compile(r'^<\?xml.*?encoding=['\']*(.+?)['\'>]')
    
        def test_auth_is_retained_for_redirect_on_host(self, httpbin):
        r = requests.get(httpbin('redirect/1'), auth=('user', 'pass'))
        h1 = r.history[0].request.headers['Authorization']
        h2 = r.request.headers['Authorization']
    
    - BaseRecognizer: Base class with common recognizer functionality.
- Lexer: Base class for lexers.
- Parser: Base class for parsers.
- tree.TreeParser: Base class for %tree parser.
    
    # Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find_faces_in_picture_cnn.py
face_locations = face_recognition.face_locations(image)
    
    
def image_files_in_folder(folder):
    return [os.path.join(folder, f) for f in os.listdir(folder) if re.match(r'.*\.(jpg|jpeg|png)', f, flags=re.I)]
    
    
import unittest
import os
import numpy as np
from click.testing import CliRunner
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('two_people.jpg')
    
    
if len(args) < 1:
    print(USAGE)
    sys.exit(1)
    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
        def testPosseg_NOHMM(self):
        import jieba.posseg as pseg
        for content in test_contents:
            result = pseg.cut(content,HMM=False)
            assert isinstance(result, types.GeneratorType), 'Test Posseg Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test Posseg error on content: %s' % content
            print(' , '.join([w.word + ' / ' + w.flag for w in result]), file=sys.stderr)
        print('testPosseg_NOHMM', file=sys.stderr)
    
        :type paths: list
    :param paths: List of strings. Additional paths to prepend to the classpath.
    
    # file paths by API
API_FILE_PATHS = {}
    
        # create ES domain
    es_client.create_elasticsearch_domain(DomainName=TEST_DOMAIN_NAME)
    assert_true(TEST_DOMAIN_NAME in
        [d['DomainName'] for d in es_client.list_domain_names()['DomainNames']])
    
        # receive, assert, and delete message from SQS
    queue_url = queue_info['QueueUrl']
    assertions = []
    # make sure we receive the correct topic ARN in notifications
    assertions.append({'TopicArn': topic_info['TopicArn']})
    # make sure the notification contains message attributes
    assertions.append({'Value': test_value})
    receive_assert_delete(queue_url, assertions, sqs_client)
    
    # parameter variables
install_requires = []
dependency_links = []
package_data = {}
    
    def dimension_lambda(kwargs):
    func_name = kwargs.get('func_name')
    if not func_name:
        func_name = kwargs.get('func_arn').split(':function:')[1].split(':')[0]
    return [{
        'Name': 'FunctionName',
        'Value': func_name
    }]