
        
            def save(self, must_create=False):
        '''
        Save the current session data to the database. If 'must_create' is
        True, raise a database error if the saving operation doesn't create a
        new entry (as opposed to possibly updating an existing entry).
        '''
        if self.session_key is None:
            return self.create()
        data = self._get_session(no_load=must_create)
        obj = self.create_model_instance(data)
        using = router.db_for_write(self.model, instance=obj)
        try:
            with transaction.atomic(using=using):
                obj.save(force_insert=must_create, force_update=not must_create, using=using)
        except IntegrityError:
            if must_create:
                raise CreateError
            raise
        except DatabaseError:
            if not must_create:
                raise UpdateError
            raise
    
        The Django sessions framework is entirely cookie-based. It does
    not fall back to putting session IDs in URLs. This is an intentional
    design decision. Not only does that behavior make URLs ugly, it makes
    your site vulnerable to session-ID theft via the 'Referer' header.
    
    
def x_robots_tag(func):
    @wraps(func)
    def inner(request, *args, **kwargs):
        response = func(request, *args, **kwargs)
        response['X-Robots-Tag'] = 'noindex, noodp, noarchive'
        return response
    return inner
    
            tokens_b = []
        # Random next
        is_random_next = False
        if len(current_chunk) == 1 or rng.random() < 0.5:
          is_random_next = True
          target_b_length = target_seq_length - len(tokens_a)
    
      # It is recommended that you use this optimizer for fine tuning, since this
  # is how the model was trained (note that the Adam m/v variables are NOT
  # loaded from init_checkpoint.)
  optimizer = AdamWeightDecayOptimizer(
      learning_rate=learning_rate,
      weight_decay_rate=0.01,
      beta_1=0.9,
      beta_2=0.999,
      epsilon=1e-6,
      exclude_from_weight_decay=['LayerNorm', 'layer_norm', 'bias'])
    
        per_example_loss = -tf.reduce_sum(one_hot_labels * log_probs, axis=-1)
    loss = tf.reduce_mean(per_example_loss)
    
      def testSetParseFnsDefaultsFromFire(self):
    # Fire should use the decorator to know how to parse string arguments.
    self.assertEqual(core.Fire(WithDefaults, command=['example1']), (10, int))
    self.assertEqual(core.Fire(WithDefaults, command=['example1', '10']),
                     (10, float))
    self.assertEqual(core.Fire(WithDefaults, command=['example1', '13']),
                     (13, float))
    self.assertEqual(core.Fire(WithDefaults, command=['example1', '14.0']),
                     (14, float))
    
    '''Tests importing the fire module.'''
    
      def testFireTraceGetResult(self):
    t = trace.FireTrace('start')
    self.assertEqual(t.GetResult(), 'start')
    t.AddAccessedProperty('t', 'final', None, 'example.py', 10)
    self.assertEqual(t.GetResult(), 't')
    
    '''Tests for fire docstrings module.'''
    
        Returns:
      The terminal (x,y) size for fd or None on error.
    '''
    try:
      # This magic incantation converts a struct from ioctl(2) containing two
      # binary shorts to a (rows, columns) int tuple.
      rc = struct.unpack(b'hh', fcntl.ioctl(fd, termios.TIOCGWINSZ, 'junk'))
      return (rc[1], rc[0]) if rc else None
    except:  # pylint: disable=bare-except
      return None
    
            # Parse the command.
        if c in (None,    # EOF.
                 'q',     # Quit.
                 'Q',     # Quit.
                 '\x03',  # ^C  (unix & windows terminal interrupt)
                 '\x1b',  # ESC.
                ):
          # Quit.
          return
        elif c in ('/', '?'):
          c = self._GetSearchCommand(c)
        elif c.isdigit():
          # Collect digits for operation count.
          digits += c
          continue
    
        # 根据分辨率查找配置文件
    if os.path.exists(config_file):
        with open(config_file, 'r') as f:
            print('正在从 {} 加载配置文件'.format(config_file))
            return json.load(f)
    else:
        with open('{}/config/default.json'.format(sys.path[0]), 'r') as f:
            print('Load default config')
            return json.load(f)
    
    
def computing_error(last_press_time, target_board_x, target_board_y, last_piece_x, last_piece_y, temp_piece_x,
                    temp_piece_y):
    '''
    计算跳跃实际误差
    '''
    target_distance = math.sqrt(
        (target_board_x - last_piece_x) ** 2 + (target_board_y - last_piece_y) ** 2)  # 上一轮目标跳跃距离
    actual_distance = math.sqrt((temp_piece_x - last_piece_x) ** 2 + (temp_piece_y - last_piece_y) ** 2)  # 上一轮实际跳跃距离
    jump_error_value = math.sqrt((target_board_x - temp_piece_x) ** 2 + (target_board_y - temp_piece_y) ** 2)  # 跳跃误差
    
    
def jump(distance):
    press_time = distance * 1.35
    press_time = int(press_time)
    cmd = 'adb shell input swipe 320 410 320 410 ' + str(press_time)
    print(cmd)
    os.system(cmd)