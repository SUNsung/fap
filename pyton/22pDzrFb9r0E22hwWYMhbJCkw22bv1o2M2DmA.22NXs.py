
        
            Requests that produced this error are safe to retry.
    '''
    
        @classmethod
    def basic_response_server(cls, **kwargs):
        return cls.text_response_server(
            'HTTP/1.1 200 OK\r\n' +
            'Content-Length: 0\r\n\r\n',
            **kwargs
        )
    
        :param cookie_dict: Dict of key/values to insert into CookieJar.
    :param cookiejar: (optional) A cookiejar to add the cookies to.
    :param overwrite: (optional) If False, will not replace cookies
        already in the jar with new ones.
    :rtype: CookieJar
    '''
    if cookiejar is None:
        cookiejar = RequestsCookieJar()
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'Requestsdoc'
    
        def redirect_resp_handler(sock):
        consume_socket_content(sock, timeout=0.5)
        location = u'//{}:{}/{}'.format(host, port, path)
        sock.send(
            b'HTTP/1.1 301 Moved Permanently\r\n'
            b'Content-Length: 0\r\n'
            b'Location: ' + location.encode('utf8') + b'\r\n'
            b'\r\n'
        )
        redirect_request.append(consume_socket_content(sock, timeout=0.5))
        sock.send(b'HTTP/1.1 200 OK\r\n\r\n')
    
    
def _check_cryptography(cryptography_version):
    # cryptography < 1.3.4
    try:
        cryptography_version = list(map(int, cryptography_version.split('.')))
    except ValueError:
        return
    
    
def head(url, **kwargs):
    r'''Sends a HEAD request.
    
        def test_delivery_stream_tags(self):
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME)
        self.assertEquals(TEST_TAGS, result['Tags'])
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME, exclusive_start_tag_key='MyTag')
        self.assertEquals([TEST_TAG_2], result['Tags'])
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME, limit=1)
        self.assertEquals([TEST_TAG_1], result['Tags'])
        self.assertEquals(True, result['HasMore'])

    
        def _list_stack_names(self):
        client = aws_stack.connect_to_service('cloudformation')
        stack_names = [s['StackName'] for s in client.list_stacks()['StackSummaries']]
        return stack_names
    
        def test_attribute_raw_subscribe(self):
        # create SNS topic and connect it to an SQS queue
        queue_arn = aws_stack.sqs_queue_arn(TEST_QUEUE_NAME)
        self.sns_client.subscribe(
            TopicArn=self.topic_arn,
            Protocol='sqs',
            Endpoint=queue_arn,
            Attributes={'RawMessageDelivery': 'true'}
        )