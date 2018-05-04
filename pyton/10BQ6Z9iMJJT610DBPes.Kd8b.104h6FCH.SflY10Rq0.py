
        
          pretrain_ckpt = tf.train.get_checkpoint_state(model_dir)
  if not (pretrain_ckpt and pretrain_ckpt.model_checkpoint_path):
    raise ValueError(
        'Asked to restore model from %s but no checkpoint found.' % model_dir)
  saver_for_restore.restore(sess, pretrain_ckpt.model_checkpoint_path)
    
    import word2vec_optimized
    
      def test_pass(self):
    self.assertEqual(coords.from_sgf(''), None)
    self.assertEqual(coords.from_flat(utils_test.BOARD_SIZE, 81), None)
    self.assertEqual(coords.from_kgs(utils_test.BOARD_SIZE, 'pass'), None)
    self.assertEqual(coords.from_pygtp(utils_test.BOARD_SIZE, (0, 0)), None)
    
      def test_train(self):
    with tempfile.TemporaryDirectory() as working_dir, \
        tempfile.NamedTemporaryFile() as tf_record:
      preprocessing.make_dataset_from_sgf(
          utils_test.BOARD_SIZE, 'example_game.sgf', tf_record.name)
      dualnet.train(
          working_dir, [tf_record.name], 1, model_params.DummyMiniGoParams())
    
    
TEST_POSITION3 = go.Position(utils_test.BOARD_SIZE)
for coord in ((0, 0), (0, 1), (0, 2), (0, 3), (1, 1)):
  TEST_POSITION3.play_move(coord, mutate=True)
# resulting position should look like this:
# X.XO.....
# .X.......
# .........
    
        final = sgf_positions[-1].position.play_move(
        sgf_positions[-1].next_move)
    
      def clear(self):
    if self.position and len(self.position.recent) > 1:
      try:
        sgf = self.to_sgf()
        with open(datetime.datetime.now().strftime(
            '%Y-%m-%d-%H:%M.sgf'), 'w') as f:
          f.write(sgf)
      except NotImplementedError:
        pass
      except:
        print('Error saving sgf', file=sys.stderr, flush=True)
    self.position = go.Position(komi=self.komi)
    self.initialize_game(self.position)
    
      # pylint: disable=unused-argument
  # pylint: disable=unused-variable
def make_sgf(board_size, move_history, result_string, ruleset='Chinese',
             komi=7.5, white_name=PROGRAM_IDENTIFIER,
             black_name=PROGRAM_IDENTIFIER, comments=[]):
  '''Turn a game into SGF.
    
      def test_make_sgf(self):
    all_pwcs = list(replay_sgf(utils_test.BOARD_SIZE, NO_HANDICAP_SGF))
    second_last_position, last_move, _ = all_pwcs[-1]
    last_position = second_last_position.play_move(last_move)
    
      def test_ridiculously_parallel_tree_search(self):
    player = initialize_almost_done_player()
    # Test that an almost complete game
    # will tree search with # parallelism > # legal moves.
    for i in range(10):
      player.tree_search(num_parallel=50)
    self.assertNoPendingVirtualLosses(player.root)
    
    
class TestSymmetryOperations(utils_test.MiniGoUnitTest):
    
        try:
        s1 = os.lstat(path)
    except OSError:
        # the OSError should be handled with more care
        # it could be a 'permission denied' but path is still a mount
        return False
    else:
        # A symlink can never be a mount point
        if os.path.stat.S_ISLNK(s1.st_mode):
            return False
    
        port = None
    for matching in ['bracketed_hostport', 'hostport']:
        m = patterns[matching].match(address)
        if m:
            (address, port) = m.groups()
            port = int(port)
            continue
    
    
class TerminalModule(TerminalBase):