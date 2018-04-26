
        
          @property
  def weight(self):
    return self._weight.float_list.value[0]
    
    '''Tests for models.tutorials.rnn.ptb.reader.'''
    
        self.assertEqual(coords.to_sgf((0, 0)), 'aa')
    self.assertEqual(coords.to_flat(utils_test.BOARD_SIZE, (0, 0)), 0)
    self.assertEqual(coords.to_kgs(utils_test.BOARD_SIZE, (0, 0)), 'A9')
    self.assertEqual(coords.to_pygtp(utils_test.BOARD_SIZE, (0, 0)), (1, 9))
    
        expected_board2 = utils_test.load_board('''
      .XX....OO
      X.......O
    ''' + EMPTY_ROW * 7)
    expected_position2 = Position(
        utils_test.BOARD_SIZE,
        board=expected_board2,
        n=2,
        komi=6.5,
        caps=(1, 2),
        ko=None,
        recent=(
            PlayerMove(BLACK, coords.from_kgs(utils_test.BOARD_SIZE, 'C9')),
            PlayerMove(WHITE, coords.from_kgs(utils_test.BOARD_SIZE, 'J8')),),
        to_play=BLACK,
    )
    actual_position2 = actual_position.play_move(coords.from_kgs(
        utils_test.BOARD_SIZE, 'J8'))
    self.assertEqualPositions(actual_position2, expected_position2)
    
        back_to_sgf = make_sgf(
        utils_test.BOARD_SIZE,
        last_position.recent,
        last_position.score(),
        komi=last_position.komi,
    )
    reconstructed_positions = list(replay_sgf(
        utils_test.BOARD_SIZE, back_to_sgf))
    second_last_position2, last_move2, _ = reconstructed_positions[-1]
    last_position2 = second_last_position2.play_move(last_move2)
    
      def test_inject_noise(self):
    player = initialize_basic_player()
    sum_priors = np.sum(player.root.child_prior)
    # dummyNet should return normalized priors.
    self.assertAlmostEqual(sum_priors, 1)
    self.assertTrue(np.all(player.root.child_U == player.root.child_U[0]))
    
      def assertNoPendingVirtualLosses(self, root):
    '''Raise an error if any node in this subtree has vlosses pending.'''
    queue = [root]
    while queue:
      current = queue.pop()
      self.assertEqual(current.losses_applied, 0)
      queue.extend(current.children.values())
    
    
def _py_files(folder):
    return glob.glob(folder + '/*.py') + glob.glob(folder + '/*/*.py')
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
        def _find_template(self, template):
        template_file = join(self.templates_dir, '%s.tmpl' % template)
        if exists(template_file):
            return template_file
        print('Unable to find template: %s\n' % template)
        print('Use 'scrapy genspider --list' to see all available templates.')
    
        def _getline(self, strip_crlf=True):
        '''Internal: return one line from the server, stripping _CRLF.
        Raise EOFError if the connection is closed.
        Returns a bytes object.'''
        line = self.file.readline(_MAXLINE +1)
        if len(line) > _MAXLINE:
            raise NNTPDataError('line too long')
        if self.debugging > 1:
            print('*get*', repr(line))
        if not line: raise EOFError
        if strip_crlf:
            if line[-2:] == _CRLF:
                line = line[:-2]
            elif line[-1:] in _CRLF:
                line = line[:-1]
        return line
    
        def test_help_flag(self):
        rc, out, err = assert_python_ok('-m', 'json.tool', '-h')
        self.assertEqual(rc, 0)
        self.assertTrue(out.startswith(b'usage: '))
        self.assertEqual(err, b'')
    
            # User-defined class with an __index__ method
        class I:
            def __init__(self, n):
                self.n = int(n)
            def __index__(self):
                return self.n
        self.assertEqual(list(range(I(bignum), I(bignum + 1))), [bignum])
        self.assertEqual(list(range(I(smallnum), I(smallnum + 1))), [smallnum])
    
            self.assertEqual(bool(CFUNCTYPE(None)(0)), False)
        self.assertEqual(bool(CFUNCTYPE(None)(42)), True)
    
    
class AdapterTest(unittest.TestCase):
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
        def do_action(self):
        print(self.name, self.action.name, end=' ')
        return self.action
    
        fftv.publish('cartoon')
    fftv.publish('music')
    fftv.publish('ads')
    fftv.publish('movie')
    fftv.publish('cartoon')
    fftv.publish('cartoon')
    fftv.publish('movie')
    fftv.publish('blank')
    
        print('After subclassing: ')
    for k in RegistryHolder.REGISTRY:
        print(k)