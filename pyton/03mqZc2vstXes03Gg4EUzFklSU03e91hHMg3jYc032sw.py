from google.protobuf import text_format
    
      # Similar to above, we need to sum over the valid tokens.  We analogously use
  # tf.unsorted_segment_sum() with a specially-constructed set of 'batch IDs'.
  sequence_b = 1 + tf.range(batch_size, dtype=tf.int32)
  sequence_bx1 = tf.expand_dims(sequence_b, 1)
  batch_ids_bxm = valid_tokens_bxm * sequence_bx1
  batch_ids_bm = tf.reshape(batch_ids_bxm, [-1])
    
            # The scores form cycles of various sizes.
        pad = 12345.6
        scores_raw = [[[  0,   1, pad, pad],
                       [  1,   0, pad, pad],
                       [pad, pad, pad, pad],
                       [pad, pad, pad, pad]],
                      [[  0,   1,   0, pad],
                       [  0,   0,   1, pad],
                       [  1,   0,   0, pad],
                       [pad, pad, pad, pad]],
                      [[  0,   1,   0,   0],
                       [  0,   0,   1,   0],
                       [  0,   0,   0,   1],
                       [  1,   0,   0,   0]]]  # pyformat: disable
    
      short_to_original = saver_lib.shorten_resource_paths(master_spec)
  saver_lib.export_master_spec(master_spec, graph)
  saver_lib.export_to_graph(master_spec, params_path, stripped_path, graph,
                            export_moving_averages)
  saver_lib.export_assets(master_spec, short_to_original, stripped_path)
    
      # Build the TensorFlow graph.
  graph = tf.Graph()
  with graph.as_default():
    tf.set_random_seed(hyperparameters.seed)
    builder = graph_builder.MasterBuilder(master, hyperparameters)
    trainers = [
        builder.add_training_from_config(target) for target in targets
    ]
    annotator = builder.add_annotation()
    builder.add_saver()
    
    FLAGS = flags.FLAGS
    
      # Graph building.
  tf.logging.info('Building the graph')
  g = tf.Graph()
  with g.as_default(), tf.device('/device:CPU:0'):
    hyperparam_config = spec_pb2.GridPoint()
    hyperparam_config.use_moving_average = True
    builder = graph_builder.MasterBuilder(master_spec, hyperparam_config)
    annotator = builder.add_annotation()
    builder.add_saver()
    
      def testBatchOneStepPathScoresAgree(self):
    '''Ensures that path scores computed in the beam are same in the net.'''
    all_path_scores, beam_path_scores = self.PathScores(
        iterations=1, beam_size=130, max_steps=1, batch_size=22)
    self.assertArrayNear(all_path_scores[0], beam_path_scores[0], 1e-6)
    
    
class Conversion(object):
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
                if self.args.auth is None or not plugin.auth_parse:
                self.args.auth = plugin.get_auth()
            else:
                if already_parsed:
                    # from the URL
                    credentials = self.args.auth
                else:
                    credentials = parse_auth(self.args.auth)
    
        def test_repr(self):
        self.assertEqual('PollError(exhausted=%s, updated={sentinel.AR: '
                         'sentinel.AR2})' % repr(set()), repr(self.invalid))
    
    # If true, sectionauthor and moduleauthor directives will be shown in the
# output. They are ignored by default.
#show_authors = False
    
    import mock
    
        #Writing names of all directories inside 'pages' to a list
    for os_dir in os.listdir(loc):
        oslist.append(os_dir)
    
    
class MainHandler(tornado.web.RequestHandler):
    def get(self):
        self.write('Hello, world')
    
            If ``max_length`` is given, some input data may be left over
        in ``unconsumed_tail``; you must retrieve this value and pass
        it back to a future call to `decompress` if it is not empty.
        '''
        return self.decompressobj.decompress(value, max_length)
    
            yield conn.read_response(Delegate())
        yield event.wait()
        self.assertEqual(self.code, 200)
        self.assertEqual(b''.join(body), b'hello')

    
        This decorator should not be confused with the similarly-named
    `.IOLoop.run_in_executor`. In general, using ``run_in_executor``
    when *calling* a blocking method is recommended instead of using
    this decorator when *defining* a method. If compatibility with older
    versions of Tornado is required, consider defining an executor
    and using ``executor.submit()`` at the call site.
    
            if __name__ == '__main__':
            sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM, 0)
            sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
            sock.setblocking(0)
            sock.bind(('', 8888))
            sock.listen(128)
    
    
class TCPServer(object):
    r'''A non-blocking, single-threaded TCP server.
    
        def test_return_value(self):
        with self.assertRaises(ReturnValueIgnoredError):
            self.return_value(callback=self.stop)