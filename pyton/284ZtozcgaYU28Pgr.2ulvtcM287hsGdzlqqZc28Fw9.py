
        
        try:
    import pkg_resources
    get_module_res = lambda *res: pkg_resources.resource_stream(__name__,
                                                                os.path.join(*res))
except ImportError:
    get_module_res = lambda *res: open(os.path.normpath(os.path.join(
                            os.getcwd(), os.path.dirname(__file__), *res)), 'rb')
    
        STOP_WORDS = set((
        'the', 'of', 'is', 'and', 'to', 'in', 'that', 'we', 'for', 'an', 'are',
        'by', 'be', 'as', 'on', 'with', 'can', 'if', 'from', 'which', 'you', 'it',
        'this', 'then', 'at', 'have', 'all', 'not', 'one', 'has', 'or', 'that'
    ))
    
    
if len(args) < 1:
    print(USAGE)
    sys.exit(1)
    
    if len(sys.argv)>3:
    n_top_words = int(sys.argv[3])
    
    
'''
    
    
# Subclass of boto's TypeDeserializer for DynamoDB
# to adjust for DynamoDB Stream format.
class TypeDeserializer(boto3.dynamodb.types.TypeDeserializer):
    def _deserialize_n(self, value):
        return float(value)
    
            expanded2 = multipart_content.expand_multipart_filename(data2, headers)
        self.assertIs(expanded2, data2, 'Should not have changed content of data with no filename to interpolate')
    
    
def do_run():
    # Only run the tests if the $TEST_ERROR_INJECTION environment variable is set. This is to reduce the
    # testing time, because the injected errors result in retries and timeouts that slow down the tests overall.
    return os.environ.get('TEST_ERROR_INJECTION') in ('true', '1')

    
    TEST_BUCKET_NAME_WITH_NOTIFICATIONS = 'test_bucket_notif_1'
TEST_QUEUE_NAME_FOR_S3 = 'test_queue'
TEST_TOPIC_NAME = 'test_topic_name_for_sqs'
TEST_S3_TOPIC_NAME = 'test_topic_name_for_s3_to_sns_to_sqs'
TEST_QUEUE_NAME_FOR_SNS = 'test_queue_for_sns'
    
            zip_file = testutil.create_lambda_archive(
            load_file(TEST_LAMBDA_PYTHON),
            get_content=True,
            runtime=LAMBDA_RUNTIME_PYTHON36
        )
        testutil.create_lambda_function(
            func_name=TEST_LAMBDA_NAME_1,
            zip_file=zip_file,
            runtime=LAMBDA_RUNTIME_PYTHON36
        )
        testutil.create_lambda_function(
            func_name=TEST_LAMBDA_NAME_2,
            zip_file=zip_file,
            runtime=LAMBDA_RUNTIME_PYTHON36
        )
    
            response = ssm_client.get_parameters(
            Names=['test_put'],
        )
    
                def process_records(records):
                print(records)
    
    
def publish_event(time_before, result, kwargs):
    event_publisher.fire_event(
        event_publisher.EVENT_LAMBDA_INVOKE_FUNC,
        payload={'f': _func_name(kwargs), 'd': now_utc() - time_before, 'r': result[0]})
    
    
def main():
    test = TestSelectionSort()
    selection_sort = SelectionSort()
    test.test_selection_sort(selection_sort.sort)
    try:
        test.test_selection_sort(selection_sort.sort_recursive)
        test.test_selection_sort(selection_sort.sor_iterative_alt)
    except NameError:
        # Alternate solutions are only defined
        # in the solutions file
        pass
    
            print('Test: Multiple dequeue in a row')
        assert_equal(queue.dequeue(), 1)
        assert_equal(queue.dequeue(), 2)
    
    		return current.data