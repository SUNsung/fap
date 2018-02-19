
        
            try:
        # hide console in MS windows
        startupinfo = subprocess.STARTUPINFO()
        startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startupinfo.wShowWindow = subprocess.SW_HIDE
    
        def mark(self):
        '''
        Tell the stream to start buffering if it hasn't already.  Return
        current input position, index(), or some other marker so that
        when passed to rewind() you get back to the same spot.
        rewind(mark()) should not affect the input cursor.  The Lexer
        track line/col info as well as input index so its markers are
        not pure input indexes.  Same for tree node streams.
        '''
    
        # exceptions:  division by zero, overflow
    if not b:
        raise ZeroDivisionError('division by zero')
    if a >= DBL_MIN_OVERFLOW * b:
        raise OverflowError('int/int too large to represent as a float')
    
            abbrs = fileobj.read(tzh_charcnt)
    
    Usage:
while True:
    try:
        chunk = Chunk(file)
    except EOFError:
        break
    chunktype = chunk.getname()
    while True:
        data = chunk.read(nbytes)
        if not data:
            pass
        # do something with data
    
    FLAGS = re.VERBOSE | re.MULTILINE | re.DOTALL
    
            m = match_number(string, idx)
        if m is not None:
            integer, frac, exp = m.groups()
            if frac or exp:
                res = parse_float(integer + (frac or '') + (exp or ''))
            else:
                res = parse_int(integer)
            return res, m.end()
        elif nextchar == 'N' and string[idx:idx + 3] == 'NaN':
            return parse_constant('NaN'), idx + 3
        elif nextchar == 'I' and string[idx:idx + 8] == 'Infinity':
            return parse_constant('Infinity'), idx + 8
        elif nextchar == '-' and string[idx:idx + 9] == '-Infinity':
            return parse_constant('-Infinity'), idx + 9
        else:
            raise StopIteration(idx)
    
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
    
        @support.requires_IEEE_754
    def test_plus_minus_0j(self):
        # test that -0j and 0j literals are not identified
        z1, z2 = 0j, -0j
        self.assertEqual(atan2(z1.imag, -1.), atan2(0., -1.))
        self.assertEqual(atan2(z2.imag, -1.), atan2(-0., -1.))
    
            for start, end, step in test_ranges:
            iter1 = range(start, end, step)
            iter2 = pyrange(start, end, step)
            test_id = 'range({}, {}, {})'.format(start, end, step)
            # check first 100 entries
            self.assert_iterators_equal(iter1, iter2, test_id, limit=100)
    
    # 截图距离 * time_coefficient = 按键时长
# time_coefficient:
#    iphonex: 0.00125
#    iphone6: 0.00196
#    iphone6s plus: 0.00120
time_coefficient = 0.00120
    
        def get_screen(self):
        process = os.popen(self.adb_path + ' shell wm size')
        output = process.read()
        return output
    
    
# Magic Number，不设置可能无法正常执行，请根据具体截图从上到下按需
# 设置，设置保存在 config 文件夹中
config = config.open_accordant_config()
under_game_score_y = config['under_game_score_y']
# 长按的时间系数，请自己根据实际情况调节
press_coefficient = config['press_coefficient']
# 二分之一的棋子底座高度，可能要调节
piece_base_height_1_2 = config['piece_base_height_1_2']
# 棋子的宽度，比截图中量到的稍微大一点比较安全，可能要调节
piece_body_width = config['piece_body_width']