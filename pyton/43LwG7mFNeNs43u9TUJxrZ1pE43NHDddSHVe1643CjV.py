
        
                url = ep_url.format(self.vid)
        meta = json.loads(get_content(url))
        streams = meta['playlist']
        for stream in streams:
            definition = stream['code']
            for s in stream['playinfo']:
                codec = 'h' + s['codec'][2:]
                # h.264 -> h264
                for st in self.__class__.stream_types:
                    s_id = '{}_{}'.format(definition, codec)
                    if codec == 'h264':
                        s_id = definition
                    if s_id == st['id']:
                        clear_info = self.__class__.dec_playinfo(s, self.__class__.coeff)
                        cdn_list = self.__class__.get_cdninfo(clear_info['hashid'])
                        base_url = cdn_list[0]
                        vf = urllib.parse.quote(s['vf'])
                        video_size = int(s['filesize'])
                        token = urllib.parse.quote(base64.b64encode(clear_info['token'].encode('utf8')))
                        video_url = '{}?token={}&vf={}'.format(base_url, token, vf)
                        self.streams[s_id] = dict(size=video_size, src=[video_url], container='mp4')
    
        if title is None:
      title = url[0]
    
    class Imgur(VideoExtractor):
    name = 'Imgur'
    
            self.assertEqual(result['Message'], {'message': 'abc'})
    
        # with a probability of 1, always throw errors
    config.KINESIS_ERROR_PROBABILITY = 1.0
    test_all_errors = kinesis.put_records(StreamName=TEST_STREAM_NAME, Records=records)
    assert_equal(test_all_errors['FailedRecordCount'], 1)
    
        for (disposition, _) in _iter_multipart_parts(data_bytes, boundary):
        if disposition.get('name') == 'file' and 'filename' in disposition:
            filename = disposition['filename']
            break
    
    
class TestIAMIntegrations(unittest.TestCase):
    
            # publish message to SNS, receive it from SQS, assert that messages are equal
        message = u'ö§a1'_!?,. £$-'
        self.sns_client.publish(TopicArn=self.topic_arn, Message=message)
        msgs = self.sqs_client.receive_message(QueueUrl=self.queue_url)
        msg_received = msgs['Messages'][0]
        msg_received = json.loads(to_str(msg_received['Body']))
        msg_received = msg_received['Message']
        self.assertEqual(message, msg_received)
    
        def test_put_rule(self):
        self.events_client.put_rule(Name='test_rule', EventPattern=json.dumps(TEST_EVENT_PATTERN))
        rules = self.events_client.list_rules(NamePrefix='test_rule')['Rules']
    
    def config_cython():
    '''Try to configure cython and return cython configuration'''
    if not with_cython:
        return []
    # pylint: disable=unreachable
    if os.name == 'nt':
        print('WARNING: Cython is not supported on Windows, will compile without cython module')
        return []
    
    # Horovod: pin context to local rank
context = mx.cpu(hvd.local_rank()) if args.no_cuda else mx.gpu(hvd.local_rank())
num_workers = hvd.size()
    
    
if num_gpus > 8 :
    print('The machine has {} gpus. We will run the test on 8 gpus.'.format(num_gpus))
    print('There is a limit for all PCI-E hardware on creating number of P2P peers. The limit is 8.')
    num_gpus = 8;
    
    
def main():
    '''Entrypoint for test_converter'''
    parser = argparse.ArgumentParser(description='Test Caffe converter')
    parser.add_argument('--cpu', action='store_true', help='use cpu?')
    parser.add_argument('--image_url', type=str,
                        default='https://github.com/dmlc/web-data/raw/master/mxnet/doc/'\
                                'tutorials/python/predict_image/cat.jpg',
                        help='input image to test inference, can be either file path or url')
    args = parser.parse_args()
    if args.cpu:
        gpus = [-1]
        default_batch_size = 32
    else:
        num_gpus = mx.context.num_gpus()
        assert num_gpus, 'At least one GPU is needed to run test_converter in GPU mode'
        default_batch_size = 32 * num_gpus
    
    
def check_layer_bidirectional_varseqlen(size, in_size):
    weights = {}
    for d in ['l', 'r']:
        weights['lstm_{}0_i2h_weight'.format(d)] = mx.random.uniform(shape=(size*4, in_size))
        weights['lstm_{}0_h2h_weight'.format(d)] = mx.random.uniform(shape=(size*4, size))
        weights['lstm_{}0_i2h_bias'.format(d)] = mx.random.uniform(shape=(size*4,))
        weights['lstm_{}0_h2h_bias'.format(d)] = mx.random.uniform(shape=(size*4,))
    
        def test_crout_matrix_decomposition(self):
        self.assertEqual(([[9.0, 0.0], [7.0, 0.0]],
                          [[1.0, 1.0], [0.0, 1.0]]),
                         crout_matrix_decomposition.crout_matrix_decomposition(
                             [[9, 9], [7, 7]]))
    
            nested_list = [2, 1, [3, [4, 5], 6], 7, [8]]
        flattened = flatten_iter(nested_list)
        self.assertEqual(next(flattened), 2)
        self.assertEqual(next(flattened), 1)
        self.assertEqual(next(flattened), 3)
        self.assertEqual(next(flattened), 4)
        self.assertEqual(next(flattened), 5)
        self.assertEqual(next(flattened), 6)
        self.assertEqual(next(flattened), 7)
        self.assertEqual(next(flattened), 8)
        self.assertRaises(StopIteration, next, flattened)
    
                i = int.from_bytes(byte, 'big')
            self.buffer.extend(list('{0:08b}'.format(i)))
    
                    # case 1: node's red, can not get black node
                # set brother is black and parent is red 
                if node_brother.color == 1:
                    node_brother.color = 0
                    node.parent.color = 1
                    self.left_rotate(node.parent)
                    node_brother = node.parent.right
    
        def testDiscoverRequest(self, announcer, announcer_remote):
        assert len(announcer_remote.known_peers) == 0
        with Spy.Spy(announcer_remote, 'handleMessage') as responses:
            announcer_remote.broadcast({'cmd': 'discoverRequest', 'params': {}}, port=announcer.listen_port)
            time.sleep(0.1)
    
            # Remove include
        filter_storage.includeRemove(site.address, 'filters.json')
    
        def list(self, inner_path, *args, **kwags):
        if '.zip' in inner_path or '.tar.gz' in inner_path:
            match = re.match('^(.*\.(?:tar.gz|tar.bz2|zip))(.*)', inner_path)
            archive_inner_path, path_within = match.groups()
            archive = self.openArchive(archive_inner_path)
            path_within = path_within.lstrip('/')