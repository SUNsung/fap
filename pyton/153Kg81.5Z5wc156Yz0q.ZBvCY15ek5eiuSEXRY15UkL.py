
        
          counter = collections.Counter(data)
  count_pairs = sorted(counter.items(), key=lambda x: (-x[1], x[0]))
    
      def testPtbRawData(self):
    tmpdir = tf.test.get_temp_dir()
    for suffix in 'train', 'valid', 'test':
      filename = os.path.join(tmpdir, 'ptb.%s.txt' % suffix)
      with tf.gfile.GFile(filename, 'w') as fh:
        fh.write(self._string_data)
    # Smoke test
    output = reader.ptb_raw_data(tmpdir)
    self.assertEqual(len(output), 4)
    
      def test_place_stone_opposite_color(self):
    board = utils_test.load_board('X........' + EMPTY_ROW * 8)
    lib_tracker = LibertyTracker.from_board(utils_test.BOARD_SIZE, board)
    lib_tracker.add_stone(WHITE, coords.from_kgs(utils_test.BOARD_SIZE, 'B9'))
    self.assertEqual(len(lib_tracker.groups), 2)
    self.assertNotEqual(
        lib_tracker.group_index[coords.from_kgs(
            utils_test.BOARD_SIZE, 'A9')], go.MISSING_GROUP_ID)
    self.assertNotEqual(
        lib_tracker.group_index[coords.from_kgs(
            utils_test.BOARD_SIZE, 'B9')], go.MISSING_GROUP_ID)
    self.assertEqual(lib_tracker.liberty_cache[coords.from_kgs(
        utils_test.BOARD_SIZE, 'A9')], 1)
    self.assertEqual(lib_tracker.liberty_cache[coords.from_kgs(
        utils_test.BOARD_SIZE, 'B9')], 2)
    black_group = lib_tracker.groups[lib_tracker.group_index[coords.from_kgs(
        utils_test.BOARD_SIZE, 'A9')]]
    white_group = lib_tracker.groups[lib_tracker.group_index[coords.from_kgs(
        utils_test.BOARD_SIZE, 'B9')]]
    self.assertEqual(black_group.stones, coords_from_kgs_set('A9'))
    self.assertEqual(black_group.liberties, coords_from_kgs_set('A8'))
    self.assertEqual(black_group.color, BLACK)
    self.assertEqual(white_group.stones, coords_from_kgs_set('B9'))
    self.assertEqual(white_group.liberties, coords_from_kgs_set('C9 B8'))
    self.assertEqual(white_group.color, WHITE)
    
      def heatmap(self, sort_order, node, prop):
    return '\n'.join(['{!s:6} {}'.format(
        coords.to_kgs(coords.from_flat(key)), node.__dict__.get(prop)[key])
                      for key in sort_order if node.child_N[key] > 0][:20])
    
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
    
    from six.moves import StringIO
    
        def __init__(self):
        self.users_by_id = {}  # key: user id, value: User
    
        c = Controller(blackboard)
    contributions = c.run_loop()
    
    from __future__ import print_function
    
        # if not sample_queue.empty():

    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
        def test_2nd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1380'
        self.assertEqual(station, expected_station)
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
        @staticmethod
    def _static_method_2():
        print('executed method 2!')