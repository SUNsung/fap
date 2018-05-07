
        
        
def test_auth_plugin_require_auth_false_and_auth_provided(httpbin):
    
        @property
    def encoding(self):
        return 'utf8'
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    error_msg = None
    
        def log_error(msg, *args, **kwargs):
        msg = msg % args
        level = kwargs.get('level', 'error')
        assert level in ['error', 'warning']
        env.stderr.write('\nhttp: %s: %s\n' % (level, msg))
    
        @property
    def interrupted(self):
        return (
            self.finished and
            self.status.total_size and
            self.status.total_size != self.status.downloaded
        )
    
    import requests.auth
    
        '''
    
    
class PluginManager(object):
    
      # Edit final timestep to have class label and weight = 1.
  final_timestep.set_label(int(class_label)).set_weight(1.0)
    
        self.assertEqualNPArray(f[:, :, 4], utils_test.load_board('''
      .X.......
      .........''' + EMPTY_ROW * 7))
    
        # ...and retaking ko is always illegal
    if self.ko is not None:
      legal_moves[self.ko] = 0
    
      def test_place_stone(self):
    board = utils_test.load_board('X........' + EMPTY_ROW * 8)
    lib_tracker = LibertyTracker.from_board(utils_test.BOARD_SIZE, board)
    lib_tracker.add_stone(BLACK, coords.from_kgs(utils_test.BOARD_SIZE, 'B9'))
    self.assertEqual(len(lib_tracker.groups), 1)
    self.assertNotEqual(
        lib_tracker.group_index[coords.from_kgs(
            utils_test.BOARD_SIZE, 'A9')], go.MISSING_GROUP_ID)
    self.assertEqual(lib_tracker.liberty_cache[coords.from_kgs(
        utils_test.BOARD_SIZE, 'A9')], 3)
    self.assertEqual(lib_tracker.liberty_cache[coords.from_kgs(
        utils_test.BOARD_SIZE, 'B9')], 3)
    sole_group = lib_tracker.groups[lib_tracker.group_index[coords.from_kgs(
        utils_test.BOARD_SIZE, 'A9')]]
    self.assertEqual(sole_group.stones, coords_from_kgs_set('A9 B9'))
    self.assertEqual(sole_group.liberties,
                     coords_from_kgs_set('C9 A8 B8'))
    self.assertEqual(sole_group.color, BLACK)
    
      def cmd_q_heatmap(self, arguments):
    sort_order = list(range(self._game.size * self._game.size + 1))
    reverse = True if self._game.root.position.to_play is go.BLACK else False
    sort_order.sort(
        key=lambda i: self._game.root.child_Q[i], reverse=reverse)
    return self.heatmap(sort_order, self._game.root, 'child_Q')
    
    
class MCTSNode(object):
  '''A node of a MCTS search tree.
    
        # Compute evaluation metrics.
    accuracy = tf.metrics.accuracy(labels=labels,
                                   predictions=predicted_classes,
                                   name='acc_op')
    metrics = {'accuracy': accuracy}
    tf.summary.scalar('accuracy', accuracy[1])
    
      @tf.test.mock.patch.dict(premade_estimator.__dict__,
                           {'load_data': four_lines_data})
  def test_premade_estimator(self):
    premade_estimator.main([None, '--train_steps=1'])
    
    # Can't import these from paths.py because that uses `future` imports
DIR_OF_CURRENT_SCRIPT = os.path.dirname( os.path.abspath( __file__ ) )
DIR_OF_YCMD = os.path.join( DIR_OF_CURRENT_SCRIPT, '..', '..', 'third_party',
                            'ycmd' )
    
            for future in as_completed(future_to_url):
            try:
                url_to_content[future_to_url[future]] = future.result()
            except:
                pass
        return url_to_content
    finally:
        executor.shutdown()
    
    def with_process_pool_executor():
    with ProcessPoolExecutor(10) as executor:
        return list(executor.map(is_prime, PRIMES))
    
    
def ExtractKeywordsFromGroup_Basic_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )