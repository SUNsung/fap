
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
        kwargs = {
        'stream': True,
        'method': args.method.lower(),
        'url': args.url,
        'headers': headers,
        'data': data,
        'verify': {
            'yes': True,
            'true': True,
            'no': False,
            'false': False,
        }.get(args.verify.lower(), args.verify),
        'cert': cert,
        'timeout': args.timeout,
        'auth': args.auth,
        'proxies': {p.key: p.value for p in args.proxy},
        'files': args.files,
        'allow_redirects': args.follow,
        'params': args.params,
    }
    
    
class BufferedPrettyStream(PrettyStream):
    '''The same as :class:`PrettyStream` except that the body is fully
    fetched before it's processed.
    
    from httpie import ExitStatus
from httpie.core import main
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
    
if __name__ == '__main__':
    blackboard = Blackboard()
    
        >>> molly.say('Hi Team! Meeting at 3 PM today.')
    [Molly says]: Hi Team! Meeting at 3 PM today.
    >>> mark.say('Roger that!')
    [Mark says]: Roger that!
    >>> ethan.say('Alright.')
    [Ethan says]: Alright.
    '''
    
        >>> data1.data = 3
    DecimalViewer: Subject Data 1 has data 3
    HexViewer: Subject Data 1 has data 0x3
    
    
if __name__ == '__main__':
    import doctest
    doctest.testmod()

    
    *What does this example do?
The code shows a way to localize words in two languages: English and
Greek. 'get_localizer' is the factory function that constructs a
localizer depending on the language chosen. The localizer object will
be an instance from a different class according to the language
localized. However, the main code does not have to worry about which
localizer will be instantiated, since the method 'localize' will be called
in the same way independently of the language.
    
        graphic = CompositeGraphic()
    
        def test_get_bucket_name(self):
        bucket_name = 'test-bucket'
        s3_key = '/some-folder/some-key.txt'
    
            result = apigateway_listener.get_resource_for_path('/foo/bar', {'/{param1}/bar1': {}, '/foo/bar2': {}})
        self.assertEqual(result, None)

    
            # Write contents to memory rather than a file.
        upload_file_object = BytesIO()
        with gzip.GzipFile(fileobj=upload_file_object, mode='w') as filestream:
            filestream.write(data.encode('utf-8'))
    
    TEST_STREAM_NAME = 'firehose_test_' + short_uid()
TEST_TAG_1 = {'Key': 'MyTag', 'Value': 'TestValue'}
TEST_TAG_2 = {'Key': 'AnotherTag', 'Value': 'AnotherValue'}
TEST_TAGS = [TEST_TAG_1, TEST_TAG_2]
    
    # set up logger
LOGGER = logging.getLogger(__name__)
    
        # make sure domain deletion works
    es_client.delete_elasticsearch_domain(DomainName=TEST_DOMAIN_NAME)
    assert_false(TEST_DOMAIN_NAME in
        [d['DomainName'] for d in es_client.list_domain_names()['DomainNames']])
    
        def test_python_lambda_running_in_docker(self):
        if not use_docker():
            return
    
        def printConnected(self):
        if self.hostname and self.port:
            infoMsg = 'connection to %s server '%s:%d' established' % (conf.dbms, self.hostname, self.port)
            logger.info(infoMsg)
    
        def checkDbms(self):
        errMsg = ''checkDbms' method must be defined '
        errMsg += 'into the specific DBMS plugin'
        raise SqlmapUndefinedMethod(errMsg)
    
    from lib.core.data import logger
from plugins.generic.enumeration import Enumeration as GenericEnumeration
    
    import os
import re
    
            None or no argument seeds from current time or from an operating
        system specific randomness source if available.