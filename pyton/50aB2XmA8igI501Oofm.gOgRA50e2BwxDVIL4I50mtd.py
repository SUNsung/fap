
        
            def check(self, value):
        return callable(getattr(value, '__html__', None))
    
            for blueprint in self.app.iter_blueprints():
            loader = blueprint.jinja_loader
            if loader is not None:
                for template in loader.list_templates():
                    result.add(template)
    
        with open(filename, 'w') as f:
        f.write(contents)
    
    
def test_config_from_envvar():
    env = os.environ
    try:
        os.environ = {}
        app = flask.Flask(__name__)
        with pytest.raises(RuntimeError) as e:
            app.config.from_envvar('FOO_SETTINGS')
        assert ''FOO_SETTINGS' is not set' in str(e.value)
        assert not app.config.from_envvar('FOO_SETTINGS', silent=True)
    
        with app.test_request_context():
        assert buffer == []
        try:
            raise Exception('dummy')
        except Exception:
            pass
    assert buffer == [None]
    
      def setUp(self):
    FLAGS.train_data = os.path.join(self.get_temp_dir(), 'test-text.txt')
    FLAGS.eval_data = os.path.join(self.get_temp_dir(), 'eval-text.txt')
    FLAGS.save_path = self.get_temp_dir()
    with open(FLAGS.train_data, 'w') as f:
      f.write(
          '''alice was beginning to get very tired of sitting by her sister on
          the bank, and of having nothing to do: once or twice she had peeped
          into the book her sister was reading, but it had no pictures or
          conversations in it, 'and what is the use of a book,' thought alice
          'without pictures or conversations?' So she was considering in her own
          mind (as well as she could, for the hot day made her feel very sleepy
          and stupid), whether the pleasure of making a daisy-chain would be
          worth the trouble of getting up and picking the daisies, when suddenly
          a White rabbit with pink eyes ran close by her.\n''')
      with open(FLAGS.eval_data, 'w') as f:
        f.write('alice she rabbit once\n')
    
          with self.assertRaises(tf.errors.OutOfRangeError):
        sess.run([result.key, result.uint8image])
    
    
class PtbReaderTest(tf.test.TestCase):
    
    TEST_POSITION = go.Position(
    utils_test.BOARD_SIZE,
    board=TEST_BOARD,
    n=3,
    komi=6.5,
    caps=(1, 2),
    ko=None,
    recent=(go.PlayerMove(go.BLACK, (0, 1)),
            go.PlayerMove(go.WHITE, (0, 8)),
            go.PlayerMove(go.BLACK, (1, 0))),
    to_play=go.BLACK,
)
    
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
    
      def get_move(self, color):
    self.accomodate_out_of_turn(color)
    move = self.suggest_move(self.position)
    if self.should_resign():
      return gtp.RESIGN
    return coords.to_pygtp(move)
    
        Args:
      value: the value to be propagated (1 = black wins, -1 = white wins)
      up_to: the node to propagate until.
    '''
    self.W += value
    if self.parent is None or self is up_to:
      return
    self.parent.backup_value(value, up_to)
    
      def test_pick_moves(self):
    player = initialize_basic_player()
    root = player.root
    root.child_N[coords.to_flat(utils_test.BOARD_SIZE, (2, 0))] = 10
    root.child_N[coords.to_flat(utils_test.BOARD_SIZE, (1, 0))] = 5
    root.child_N[coords.to_flat(utils_test.BOARD_SIZE, (3, 0))] = 1
    
        if len(sys.argv) == 2:
        main(sys.argv[1])
    else:
        print('Choose one path as argument one')

    
        '''
    # Constants, depending only on the floating-point format in use.
    # We use an extra 2 bits of precision for rounding purposes.
    PRECISION = sys.float_info.mant_dig + 2
    SHIFT_MAX = sys.float_info.max_exp - PRECISION
    Q_MAX = 1 << PRECISION
    ROUND_HALF_TO_EVEN_CORRECTION = [0, -1, -2, 1, 0, -1, 2, 1]
    
        def test_create_other_buttons(self):
        for state in (False, True):
            var = self.engine.backvar
            var.set(state)
            frame, others = self.btn_test_setup(
                self.dialog.create_other_buttons)
            buttons = frame.pack_slaves()
            for spec, button in zip(others, buttons):
                val, label = spec
                self.assertEqual(button['text'], label)
                if val == state:
                    # hit other button, then this one
                    # indexes depend on button order
                    self.assertEqual(var.get(), state)
    
        def scan_once(string, idx):
        try:
            return _scan_once(string, idx)
        finally:
            memo.clear()
    
    def escape(m):
    all, tail = m.group(0, 1)
    assert all.startswith('\\')
    esc = simple_escapes.get(tail)
    if esc is not None:
        return esc
    if tail.startswith('x'):
        hexes = tail[1:]
        if len(hexes) < 2:
            raise ValueError('invalid hex string escape ('\\%s')' % tail)
        try:
            i = int(hexes, 16)
        except ValueError:
            raise ValueError('invalid hex string escape ('\\%s')' % tail) from None
    else:
        try:
            i = int(tail, 8)
        except ValueError:
            raise ValueError('invalid octal string escape ('\\%s')' % tail) from None
    return chr(i)