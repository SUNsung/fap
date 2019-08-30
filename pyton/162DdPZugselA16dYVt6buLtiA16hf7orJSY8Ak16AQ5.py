
        
            def report_not_exist(self, appid, ip):
        self.logger.debug('report_not_exist:%s %s', appid, ip)
        th = threading.Thread(target=self.process_appid_not_exist, args=(appid, ip))
        th.start()
    
            self._checking_lock.acquire()
        self._checking_num += 1
        self._checking_lock.release()
    
    And tree.TreeParser finally fetches its input from a tree.TreeNodeStream:
    
        def test_get_subscribe_attributes(self):
        req_data = {
            'Attribute.entry.1.key': ['RawMessageDelivery'],
            'Attribute.entry.1.value': ['true'],
            'Attribute.entry.2.key': ['FilterPolicy'],
            'Attribute.entry.2.value': ['{'type': ['foo', 'bar']}']
        }
        attributes = sns_listener.get_subscribe_attributes(req_data)
        self.assertDictEqual(
            attributes,
            {
                'RawMessageDelivery': 'true',
                'FilterPolicy': '{'type': ['foo', 'bar']}'
            }
        )
    
    TEST_BUCKET_NAME_WITH_NOTIFICATIONS = 'test_bucket_notif_1'
TEST_QUEUE_NAME_FOR_S3 = 'test_queue'
TEST_TOPIC_NAME = 'test_topic_name_for_sqs'
TEST_S3_TOPIC_NAME = 'test_topic_name_for_s3_to_sns_to_sqs'
TEST_QUEUE_NAME_FOR_SNS = 'test_queue_for_sns'
    
    
def record(api, method, path, data, headers):
    ''' Record a given API call to a persistent file on disk '''
    file_path = get_file_path(api, create=True)
    if CURRENTLY_REPLAYING or not file_path or not should_record(api, method, path, data, headers):
        return
    entry = None
    try:
        if isinstance(data, dict):
            data = json.dumps(data)
        if data or data in [u'', b'']:
            try:
                data = to_bytes(data)
            except Exception as e:
                LOGGER.warning('Unable to call to_bytes: %s' % e)
            data = to_str(base64.b64encode(data))
        entry = {
            'a': api,
            'm': method,
            'p': path,
            'd': data,
            'h': dict(headers)
        }
        with open(file_path, 'a') as dumpfile:
            dumpfile.write('%s\n' % json.dumps(entry))
    except Exception as e:
        print('Error recording API call to persistent file: %s %s' % (e, traceback.format_exc()))
    
        # create ES domain
    es_client.create_elasticsearch_domain(DomainName=TEST_DOMAIN_NAME)
    assert_true(TEST_DOMAIN_NAME in
        [d['DomainName'] for d in es_client.list_domain_names()['DomainNames']])
    
            iam_client = aws_stack.connect_to_service('iam')