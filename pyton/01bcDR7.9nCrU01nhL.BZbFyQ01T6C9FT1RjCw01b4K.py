
        
        
def maybe_restore_pretrained_model(sess, saver_for_restore, model_dir):
  '''Restores pretrained model if there is no ckpt model.'''
  ckpt = tf.train.get_checkpoint_state(FLAGS.train_dir)
  checkpoint_exists = ckpt and ckpt.model_checkpoint_path
  if checkpoint_exists:
    tf.logging.info('Checkpoint exists in FLAGS.train_dir; skipping '
                    'pretraining restore')
    return
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      def test_add_child_idempotency(self):
    root = MCTSNode(utils_test.BOARD_SIZE, go.Position(utils_test.BOARD_SIZE))
    child = root.maybe_add_child(17)
    current_children = copy.copy(root.children)
    child2 = root.maybe_add_child(17)
    self.assertEqual(child, child2)
    self.assertEqual(current_children, root.children)
    
      def assertEqualData(self, data1, data2):
    # Assert that two data are equal, where both are of form:
    # data = List<Tuple<feature_array, pi_array, value>>
    self.assertEqual(len(data1), len(data2))
    for datum1, datum2 in zip(data1, data2):
      # feature
      self.assertEqualNPArray(datum1[0], datum2[0])
      # pi
      self.assertEqualNPArray(datum1[1], datum2[1])
      # value
      self.assertEqual(datum1[2], datum2[2])
    
        self.assertEqualPositions(last_position, last_position2)
    
    tf.logging.set_verbosity(tf.logging.ERROR)
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        def park_vehicle(self, vehicle):
        pass
    
        def insert_crawled_link(self, url, signature):
        '''Add the given link to `crawled_links`.'''
        pass
    
        def bfs(self, source, dest):
        # Use self.visited_ids to track visited nodes
        # Use self.lookup to translate a person_id to a Person
        pass

    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
            Emit key value pairs of the form:
    
        for url in urls:
        if not url.startswith('http'):
            print('markdown file name: ' + url)
            continue
        if check_live_url(url):
            print(url)
        else:
            print(url, file=sys.stderr)