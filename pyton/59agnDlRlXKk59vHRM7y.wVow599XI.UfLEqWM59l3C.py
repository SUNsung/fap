
        
        
def import_state_tuples(state_tuples, name, num_replicas):
  restored = []
  for i in range(len(state_tuples) * num_replicas):
    c = tf.get_collection_ref(name)[2 * i + 0]
    h = tf.get_collection_ref(name)[2 * i + 1]
    restored.append(tf.contrib.rnn.LSTMStateTuple(c, h))
  return tuple(restored)
    
      Args:
    data_path: string path to the directory where simple-examples.tgz has
      been extracted.
    
    flags = tf.app.flags
    
    
if __name__ == '__main__':
  tf.test.main()

    
      A node knows how to compute the action scores of all of its children,
  so that a decision can be made about which move to explore next. Upon
  selecting a move, the children dictionary is updated with a new node.
    
      def test_dont_pick_unexpanded_child(self):
    probs = np.array([0.001] * (
        utils_test.BOARD_SIZE * utils_test.BOARD_SIZE + 1))
    # make one move really likely so that tree search goes down that path twice
    # even with a virtual loss
    probs[17] = 0.999
    root = MCTSNode(utils_test.BOARD_SIZE, go.Position(utils_test.BOARD_SIZE))
    root.incorporate_results(probs, 0, root)
    leaf1 = root.select_leaf()
    self.assertEqual(leaf1.fmove, 17)
    leaf1.add_virtual_loss(up_to=root)
    # the second select_leaf pick should return the same thing, since the child
    # hasn't yet been sent to neural net for eval + result incorporation
    leaf2 = root.select_leaf()
    self.assertIs(leaf1, leaf2)
    
      def test_japanese_handicap_handling(self):
    intermediate_board = utils_test.load_board('''
      .........
      .........
      ......X..
      .........
      ....O....
      .........
      ..X......
      .........
      .........
    ''')
    intermediate_position = go.Position(
        utils_test.BOARD_SIZE,
        intermediate_board,
        n=1,
        komi=5.5,
        caps=(0, 0),
        recent=(go.PlayerMove(go.WHITE, coords.from_kgs(
            utils_test.BOARD_SIZE, 'E5')),),
        to_play=go.BLACK,
    )
    final_board = utils_test.load_board('''
      .........
      .........
      ......X..
      .........
      ....O....
      .........
      ..XX.....
      .........
      .........
    ''')
    final_position = go.Position(
        utils_test.BOARD_SIZE,
        final_board,
        n=2,
        komi=5.5,
        caps=(0, 0),
        recent=(
            go.PlayerMove(go.WHITE, coords.from_kgs(
                utils_test.BOARD_SIZE, 'E5')),
            go.PlayerMove(go.BLACK, coords.from_kgs(
                utils_test.BOARD_SIZE, 'D3')),),
        to_play=go.WHITE,
    )
    positions_w_context = list(replay_sgf(
        utils_test.BOARD_SIZE, JAPANESE_HANDICAP_SGF))
    self.assertEqualPositions(
        intermediate_position, positions_w_context[1].position)
    final_replayed_position = positions_w_context[-1].position.play_move(
        positions_w_context[-1].next_move)
    self.assertEqualPositions(final_position, final_replayed_position)
    
    
@csrf_protect
def render_flatpage(request, f):
    '''
    Internal interface to the flat page view.
    '''
    # If registration is required for accessing this page, and the user isn't
    # logged in, redirect to the login page.
    if f.registration_required and not request.user.is_authenticated:
        from django.contrib.auth.views import redirect_to_login
        return redirect_to_login(request.path)
    if f.template_name:
        template = loader.select_template((f.template_name, DEFAULT_TEMPLATE))
    else:
        template = loader.get_template(DEFAULT_TEMPLATE)
    
        If you have already calculated the mean of your data, you can pass it as
    the optional second argument ``xbar`` to avoid recalculating it:
    
        def test_big_queue_popleft(self):
        pass
        d = deque()
        append, pop = d.append, d.popleft
        for i in range(BIG):
            append(i)
        for i in range(BIG):
            x = pop()
            if x != i:
                self.assertEqual(x, i)
    
        def setFeature(self, name, state):
        if self.supportsFeature(name):
            state = state and 1 or 0
            try:
                settings = self._settings[(_name_xform(name), state)]
            except KeyError:
                raise xml.dom.NotSupportedErr(
                    'unsupported feature: %r' % (name,)) from None
            else:
                for name, value in settings:
                    setattr(self._options, name, value)
        else:
            raise xml.dom.NotFoundErr('unknown feature: ' + repr(name))
    
        def nearest(self, red, green, blue):
        '''Return the name of color nearest (red, green, blue)'''
        # BAW: should we use Voronoi diagrams, Delaunay triangulation, or
        # octree for speeding up the locating of nearest point?  Exhaustive
        # search is inefficient, but seems fast enough.
        nearest = -1
        nearest_name = ''
        for name, aliases in self.__byrgb.values():
            r, g, b = self.__byname[name.lower()]
            rdelta = red - r
            gdelta = green - g
            bdelta = blue - b
            distance = rdelta * rdelta + gdelta * gdelta + bdelta * bdelta
            if nearest == -1 or distance < nearest:
                nearest = distance
                nearest_name = name
        return nearest_name
    
            a = int(10 * sys.maxsize)
        b = int(100 * sys.maxsize)
        c = int(50 * sys.maxsize)
    
        def test_from_buffer_with_offset(self):
        a = array.array('i', range(16))
        x = (c_int * 15).from_buffer(a, sizeof(c_int))
    
        def test_3(self):
        class X(Structure):
            pass
        class Y(Structure):
            _fields_ = [('x', X)] # finalizes X
        self.assertRaises(AttributeError, setattr, X, '_fields_', [])
    
        def request_time(self):
        '''Returns the amount of time it took for this request to execute.'''
        if self._finish_time is None:
            return time.time() - self._start_time
        else:
            return self._finish_time - self._start_time
    
            # IOLoop.start() bypasses some of the reactor initialization.
        # Fire off the necessary events if they weren't already triggered
        # by reactor.run().
        def start_if_necessary():
            if not self._started:
                self.fireSystemEvent('startup')
        self._io_loop.add_callback(start_if_necessary)
    
        def test_pre_wrap(self):
        # A pre-wrapped callback is run in the context in which it was
        # wrapped, not when it was added to the IOLoop.
        def f1():
            self.assertIn('c1', self.active_contexts)
            self.assertNotIn('c2', self.active_contexts)
            self.stop()
    
    try:
    from concurrent import futures
except ImportError:
    futures = None
    
        def create_client(self, **kwargs):
        return SimpleAsyncHTTPClient(force_instance=True,
                                     defaults=dict(validate_cert=False),
                                     **kwargs)