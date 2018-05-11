
        
        
class Word2VecTest(tf.test.TestCase):
    
    
class Word2VecTest(tf.test.TestCase):
    
        self.assertEqual(captured, set())
    
      def cmd_loadsgf(self, arguments):
    args = arguments.split()
    if len(args) == 2:
      file_, movenum = args
      movenum = int(movenum)
      print('movenum =', movenum, file=sys.stderr)
    else:
      file_ = args[0]
      movenum = None
    
        # and even after injecting noise, we should still not select an illegal move
    for _ in range(10):
      root.inject_noise()
      leaf = root.select_leaf()
      self.assertNotEqual(leaf.fmove, 1)
    
      It does NOT return the very final position, as there is no follow up.
  To get the final position, call pwc.position.play_move(pwc.next_move)
  on the last PositionWithContext returned.
  Example usage:
  with open(filename) as f:
    for position_w_context in replay_sgf(f.read()):
      print(position_w_context.position)
    
      def should_resign(self):
    '''Returns true if the player resigned.
    
      def test_proper_move_transform(self):
    # Check that the reinterpretation of 362 = 19*19 + 1 during symmetry
    # application is consistent with coords.from_flat
    move_array = np.arange(utils_test.BOARD_SIZE ** 2 + 1)
    coord_array = np.zeros([utils_test.BOARD_SIZE, utils_test.BOARD_SIZE])
    for c in range(utils_test.BOARD_SIZE ** 2):
      coord_array[coords.from_flat(utils_test.BOARD_SIZE, c)] = c
    for s in symmetries.SYMMETRIES:
      with self.subTest(symmetry=s):
        transformed_moves = symmetries.apply_symmetry_pi(
            utils_test.BOARD_SIZE, s, move_array)
        transformed_board = symmetries.apply_symmetry_feat(s, coord_array)
        for new_coord, old_coord in enumerate(transformed_moves[:-1]):
          self.assertEqual(
              old_coord,
              transformed_board[
                  coords.from_flat(utils_test.BOARD_SIZE, new_coord)])
    
    # Windows users: You only need to change PATH, rest is platform independent
PATH = '/tmp/tf_custom_estimators'
    
        def syntax(self):
        return '[options] <spider>'
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')
