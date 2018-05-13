
        
          Returns:
    A 1D np.array containing the periodic hann window.
  '''
  return 0.5 - (0.5 * np.cos(2 * np.pi / window_length *
                             np.arange(window_length)))
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    
def to_pygtp(board_size, coord):
  '''Converts from a MiniGo coordinate to a pygtp coordinate.'''
  if coord is None:
    return gtp.PASS
  return coord[1] + 1, board_size - coord[0]

    
        self.assertEqual(coords.to_sgf((0, 8)), 'ia')
    self.assertEqual(coords.to_flat(utils_test.BOARD_SIZE, (0, 8)), 8)
    self.assertEqual(coords.to_kgs(utils_test.BOARD_SIZE, (0, 8)), 'J9')
    self.assertEqual(coords.to_pygtp(utils_test.BOARD_SIZE, (0, 8)), (9, 9))
    
      def test_add_child(self):
    root = MCTSNode(utils_test.BOARD_SIZE, go.Position(utils_test.BOARD_SIZE))
    child = root.maybe_add_child(17)
    self.assertIn(17, root.children)
    self.assertEqual(child.parent, root)
    self.assertEqual(child.fmove, 17)
    
        # print some stats on anything with probability > 1%
    if self.verbosity > 2:
      print(self.root.describe(), file=sys.stderr)
      print('\n\n', file=sys.stderr)
    if self.verbosity > 3:
      print(self.root.position, file=sys.stderr)
    
      def test_chinese_handicap_handling(self):
    intermediate_board = utils_test.load_board('''
      .........
      .........
      ......X..
      .........
      .........
      .........
      .........
      .........
      .........
    ''')
    intermediate_position = go.Position(
        utils_test.BOARD_SIZE,
        intermediate_board,
        n=1,
        komi=5.5,
        caps=(0, 0),
        recent=(go.PlayerMove(go.BLACK, coords.from_kgs(
            utils_test.BOARD_SIZE, 'G7')),),
        to_play=go.BLACK,
    )
    final_board = utils_test.load_board('''
      ....OX...
      .O.OOX...
      O.O.X.X..
      .OXXX....
      OX...XX..
      .X.XXO...
      X.XOOXXX.
      XXXO.OOX.
      .XOOX.O..
    ''')
    final_position = go.Position(
        utils_test.BOARD_SIZE,
        final_board,
        n=50,
        komi=5.5,
        caps=(7, 2),
        ko=None,
        recent=(
            go.PlayerMove(
                go.WHITE, coords.from_kgs(utils_test.BOARD_SIZE, 'E9')),
            go.PlayerMove(
                go.BLACK, coords.from_kgs(utils_test.BOARD_SIZE, 'F9')),),
        to_play=go.WHITE
    )
    positions_w_context = list(replay_sgf(
        utils_test.BOARD_SIZE, CHINESE_HANDICAP_SGF))
    self.assertEqualPositions(
        intermediate_position, positions_w_context[1].position)
    self.assertEqual(
        positions_w_context[1].next_move, coords.from_kgs(
            utils_test.BOARD_SIZE, 'C3'))
    final_replayed_position = positions_w_context[-1].position.play_move(
        positions_w_context[-1].next_move)
    self.assertEqualPositions(final_position, final_replayed_position)
    
        # Train the Model.
    classifier.train(
        input_fn=lambda:iris_data.train_input_fn(train_x, train_y, args.batch_size),
        steps=args.train_steps)
    
        for url in urls:
        if not url.startswith('http'):
            print('markdown file name: ' + url)
            continue
        if check_live_url(url):
            print(url)
        else:
            print(url, file=sys.stderr)