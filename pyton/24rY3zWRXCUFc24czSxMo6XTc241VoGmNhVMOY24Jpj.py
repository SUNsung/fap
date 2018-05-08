
        
          is_chief = FLAGS.task == 0
  sv = tf.train.Supervisor(
      logdir=FLAGS.train_dir,
      is_chief=is_chief,
      save_summaries_secs=30,
      save_model_secs=30,
      local_init_op=local_init_op,
      ready_for_local_init_op=ready_for_local_init_op,
      global_step=global_step)
    
          with self.assertRaises(tf.errors.OutOfRangeError):
        sess.run([result.key, result.uint8image])
    
    
def to_kgs(board_size, coord):
  '''Converts from a MiniGo coordinate to a KGS coordinate.'''
  if coord is None:
    return 'pass'
  y, x = coord
  return '{}{}'.format(_KGS_COLUMNS[x], board_size - y)
    
    
if __name__ == '__main__':
  tf.test.main()
    
    NO_HANDICAP_SGF = '''(;CA[UTF-8]SZ[9]PB[Murakawa Daisuke]PW[Iyama Yuta]KM[6.5]
                   HA[0]RE[W+1.5]GM[1];B[fd];W[cf];B[eg];W[dd];B[dc];W[cc];
                   B[de];W[cd];B[ed];W[he];B[ce];W[be];B[df];W[bf];B[hd];
                   W[ge];B[gd];W[gg];B[db];W[cb];B[cg];W[bg];B[gh];W[fh];
                   B[hh];W[fg];B[eh];W[ei];B[di];W[fi];B[hg];W[dh];B[ch];
                   W[ci];B[bh];W[ff];B[fe];W[hf];B[id];W[bi];B[ah];W[ef];
                   B[dg];W[ee];B[di];W[ig];B[ai];W[ih];B[fb];W[hi];B[ag];
                   W[ab];B[bd];W[bc];B[ae];W[ad];B[af];W[bd];B[ca];W[ba];
                   B[da];W[ie])'''
    
    
def add_stones(board_size, pos, black_stones_added, white_stones_added):
  working_board = np.copy(pos.board)
  go.place_stones(working_board, go.BLACK, black_stones_added)
  go.place_stones(working_board, go.WHITE, white_stones_added)
  new_position = Position(
      board_size, board=working_board, n=pos.n, komi=pos.komi,
      caps=pos.caps, ko=pos.ko, recent=pos.recent, to_play=pos.to_play)
  return new_position
    
      def to_sgf(self, use_comments=True):
    assert self.result_string is not None
    pos = self.root.position
    if use_comments:
      comments = self.comments or ['No comments.']
      comments[0] = ('Resign Threshold: %0.3f\n' %
                     self.resign_threshold) + comments[0]
    else:
      comments = []
    return sgf_wrapper.make_sgf(
        self.board_size, pos.recent, self.result_string,
        white_name=os.path.basename(self.network.save_file) or 'Unknown',
        black_name=os.path.basename(self.network.save_file) or 'Unknown',
        comments=comments)
    
        # With dirichelet noise, majority of density should be in one node.
    max_p = np.max(player.root.child_prior)
    self.assertGreater(max_p, 3/(utils_test.BOARD_SIZE ** 2 + 1))
    
        remapped_group_index1 = [
        lt1_mapping.get(gid, go.MISSING_GROUP_ID)
        for gid in lib_tracker1.group_index.ravel().tolist()]
    remapped_group_index2 = [
        lt2_mapping.get(gid, go.MISSING_GROUP_ID)
        for gid in lib_tracker2.group_index.ravel().tolist()]
    self.assertEqual(remapped_group_index1, remapped_group_index2)
    
        def ok(self, event=None):  # Do not replace.
        '''If entry is valid, bind it to 'result' and destroy tk widget.
    
        Coercion rules are currently an implementation detail. See the CoerceTest
    test class in test_statistics for details.
    '''
    # See http://bugs.python.org/issue24068.
    assert T is not bool, 'initial type T is bool'
    # If the types are the same, no need to coerce anything. Put this
    # first, so that the usual case (no coercion needed) happens as soon
    # as possible.
    if T is S:  return T
    # Mixed int & other coerce to the other type.
    if S is int or S is bool:  return T
    if T is int:  return S
    # If one is a (strict) subclass of the other, coerce to the subclass.
    if issubclass(S, T):  return S
    if issubclass(T, S):  return T
    # Ints coerce to the other type.
    if issubclass(T, int):  return S
    if issubclass(S, int):  return T
    # Mixed fraction & float coerces to float (or float subclass).
    if issubclass(T, Fraction) and issubclass(S, float):
        return S
    if issubclass(T, float) and issubclass(S, Fraction):
        return T
    # Any other combination is disallowed.
    msg = 'don't know how to coerce %s and %s'
    raise TypeError(msg % (T.__name__, S.__name__))
    
    
class TestDecode:
    def test_decimal(self):
        rval = self.loads('1.1', parse_float=decimal.Decimal)
        self.assertTrue(isinstance(rval, decimal.Decimal))
        self.assertEqual(rval, decimal.Decimal('1.1'))
    
    def factorial(n, m):
    if (n > m):
        return factorial(m, n)
    elif m == 0:
        return 1
    elif n == m:
        return n
    else:
        return factorial(n, (n+m)//2) * factorial((n+m)//2 + 1, m)
    
    Usually an IFF-type file consists of one or more chunks.  The proposed
usage of the Chunk class defined here is to instantiate an instance at
the start of each chunk and read from the instance until it reaches
the end, after which a new instance can be instantiated.  At the end
of the file, creating a new instance will fail with an EOFError
exception.
    
        expect = textwrap.dedent('''\
    [
        [
            'blorpie'
        ],
        [
            'whoops'
        ],
        [],
        'd-shtaeou',
        'd-nthiouh',
        'i-vhbjkhnth',
        {
            'nifty': 87
        },
        {
            'morefield': false,
            'field': 'yes'
        }
    ]
    ''')
    
        def test_3(self):
        class X(Structure):
            pass
        class Y(Structure):
            _fields_ = [('x', X)] # finalizes X
        self.assertRaises(AttributeError, setattr, X, '_fields_', [])
    
        def test_convert(self):
        self.assertRaises(TypeError, bool, 42, 42)
        self.assertIs(bool(10), True)
        self.assertIs(bool(1), True)
        self.assertIs(bool(-1), True)
        self.assertIs(bool(0), False)
        self.assertIs(bool('hello'), True)
        self.assertIs(bool(''), False)
        self.assertIs(bool(), False)
    
        def test_reversed_pickle(self):
        orig = self.type2test([4, 5, 6, 7])
        data = [10, 11, 12, 13, 14, 15]
        for proto in range(pickle.HIGHEST_PROTOCOL + 1):
            # initial iterator
            itorig = reversed(orig)
            d = pickle.dumps((itorig, orig), proto)
            it, a = pickle.loads(d)
            a[:] = data
            self.assertEqual(type(it), type(itorig))
            self.assertEqual(list(it), data[len(orig)-1::-1])