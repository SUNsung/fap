
        
        # choose a random port to avoid colliding with TIME_WAIT sockets left over
# from previous runs.
define('min_port', type=int, default=8000)
define('max_port', type=int, default=9000)
    
        logging.warning('Starting fetch with curl client')
    curl_client = CurlAsyncHTTPClient()
    curl_client.fetch('http://localhost:%d/' % options.port,
                      callback=callback)
    IOLoop.current().start()
    
    
def main():
    parse_command_line()
    if options.dump:
        print(tmpl.code)
        sys.exit(0)
    t = Timer(render)
    results = t.timeit(options.num) / options.num
    print('%0.3f ms per iteration' % (results * 1000))
    
        def _sock_state_cb(self, fd: int, readable: bool, writable: bool) -> None:
        state = (IOLoop.READ if readable else 0) | (IOLoop.WRITE if writable else 0)
        if not state:
            self.io_loop.remove_handler(fd)
            del self.fds[fd]
        elif fd in self.fds:
            self.io_loop.update_handler(fd, state)
            self.fds[fd] = state
        else:
            self.io_loop.add_handler(fd, self._handle_events, state)
            self.fds[fd] = state
    
        def tearDown(self):
        asyncio.set_event_loop_policy(self.orig_policy)
        self.executor.shutdown()
    
        def test_json_decode(self):
        # json_decode accepts both bytes and unicode, but strings it returns
        # are always unicode.
        self.assertEqual(json_decode(b''foo''), u'foo')
        self.assertEqual(json_decode(u''foo''), u'foo')
    
            print('Empty input')
        assert_equal(merge_sort.sort([]), [])
    
    
if __name__ == '__main__':
    main()
    
    		while current is not None and current.data is not data:
			parent = current
			if data < current.data:
				current = current.leftChild
				isLeft = True 
			else:
				current = current.rightChild
				isLeft = False
    
            self.simple_event = self.autopatch(g.stats, 'simple_event')
    
        def test_del_msg_failure_with_sender(self):
        '''Del_msg fails: Returns 200 and does not set del_on_recipient.'''
        message = MagicMock(spec=Message)
        message.name = 'msg_3'
        message.to_id = self.id + 1
        message.del_on_recipient = False
    
        def test_nosigning_login(self):
        res = self.do_login(
            headers={
                signing.SIGNATURE_UA_HEADER: None,
                signing.SIGNATURE_BODY_HEADER: None,
            },
            expect_errors=True,
        )
        self.assert_403_response(res, 'signing.ua.invalid.invalid_format')
    
            # Only controls chosen in the no-variant case.
        for variant, percentage in FeatureState.DEFAULT_CONTROL_GROUPS.items():
            count = counters['no_variants'][variant]
            # The variant percentage is expressed as a part of 100, so we need
            # to calculate the fraction-of-1 percentage and scale it
            # accordingly.
            scaled_percentage = float(count) / (FeatureState.NUM_BUCKETS / 100)
            self.assertEqual(scaled_percentage, percentage)
        for variant, percentage in three_variants.items():
            count = counters['three_variants'][variant]
            scaled_percentage = float(count) / (FeatureState.NUM_BUCKETS / 100)
            self.assertEqual(scaled_percentage, percentage)
        for variant, percentage in three_variants_more.items():
            count = counters['three_variants_more'][variant]
            scaled_percentage = float(count) / (FeatureState.NUM_BUCKETS / 100)
            self.assertEqual(scaled_percentage, percentage)
    
            # Scenario: call is successful; pass customer_ip
        return_value = create_authorization_hold(self.customer_id,
                                                 self.payment_profile_id,
                                                 self.amount, 12345,
                                                 '127.0.0.1')
        self.assertTrue(CreateRequest.called)
        args, kwargs = CreateRequest.call_args
        self.assertEqual(kwargs['extraOptions'], {'x_customer_ip': '127.0.0.1'})
        self.assertEqual(return_value, self.transaction_id)
    
        def test_no_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
        url = self.provider.resize_image(image)
        self.assertEqual(url, 'https://example.com/a.jpg')
    
        def _assert_validity(self, body, header, success, error, **expected):
        request = MagicMock(body=body, headers={})
        if header:
            request.headers[signing.SIGNATURE_BODY_HEADER] = header
        signature = signing.valid_post_signature(request)
        self.assertEqual(signature.is_valid(), bool(success))
        if error:
            self.assertIn(error.code, [code for code, _ in signature.errors])
        else:
            self.assertEqual(len(signature.errors), 0)
        has_mac = expected.pop('has_mac', False)
        for k, v in expected.iteritems():
            got = getattr(signature, k)
            self.assertEqual(got, v, 'signature.%s: %s != %s' % (k, got, v))