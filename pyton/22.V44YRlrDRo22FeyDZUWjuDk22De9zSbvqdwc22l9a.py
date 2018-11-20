
        
            changelog_file, version, build_path = args
    
    now = datetime.datetime.now()
now_iso = now.isoformat() + 'Z'
    
    MOCK_MODULES = ['face_recognition_models', 'Click', 'dlib', 'numpy', 'PIL']
sys.modules.update((mod_name, Mock()) for mod_name in MOCK_MODULES)
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
    # To run this, you need a Raspberry Pi 2 (or greater) with face_recognition and
# the picamera[array] module installed.
# You can follow this installation instructions to get your RPi set up:
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
                for face_location in face_locations:
                # Print the location of each face in this frame
                top, right, bottom, left = face_location
                print(' - A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    
if __name__ == '__main__':
    main()

    
        # Print the location of each facial feature in this image
    for facial_feature in face_landmarks.keys():
        print('The {} in this face has the following points: {}'.format(facial_feature, face_landmarks[facial_feature]))
    
            if match[0]:
            name = 'Barack Obama'
    
        # 讲识别结果以json键值对的数据结构输出
    result = {
        'face_found_in_image': face_found,
        'is_picture_of_obama': is_obama
    }
    return jsonify(result)
    
        # string conversion routines
    def _str_header(self, name, symbol='`'):
        return ['.. rubric:: ' + name, '']
    
    max_colwidth_doc = '''
: int
    The maximum width in characters of a column in the repr of
    a pandas data structure. When the column overflows, a '...'
    placeholder is embedded in the output.
'''
    
    
class UnpackValueError(UnpackException, ValueError):
    pass
    
        if engine == 'numexpr':
        try:
            import numexpr as ne
        except ImportError:
            pytest.skip('no numexpr')
        else:
            if (LooseVersion(ne.__version__) <
                    LooseVersion(_MIN_NUMEXPR_VERSION)):
                with pytest.raises(ImportError):
                    testit()
            else:
                testit()
    else:
        testit()

    
            index = getattr(tm, 'make{}'.format(index))
        df = DataFrame({'a': list('abc'),
                        'b': list(range(1, 4)),
                        'c': np.arange(3, 6).astype('u1'),
                        'd': np.arange(4.0, 7.0, dtype='float64'),
                        'e': [True, False, True],
                        'f': pd.Categorical(list('abc')),
                        'g': pd.date_range('20130101', periods=3),
                        'h': pd.date_range('20130101',
                                           periods=3,
                                           tz='US/Eastern')}
                       )
    
    
def test_match():
    cases = [
        (None, b'\xc0'),
        (False, b'\xc2'),
        (True, b'\xc3'),
        (0, b'\x00'),
        (127, b'\x7f'),
        (128, b'\xcc\x80'),
        (256, b'\xcd\x01\x00'),
        (-1, b'\xff'),
        (-33, b'\xd0\xdf'),
        (-129, b'\xd1\xff\x7f'),
        ({1: 1}, b'\x81\x01\x01'),
        (1.0, b'\xcb\x3f\xf0\x00\x00\x00\x00\x00\x00'),
        ((), b'\x90'),
        (tuple(range(15)), (b'\x9f\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09'
                            b'\x0a\x0b\x0c\x0d\x0e')),
        (tuple(range(16)), (b'\xdc\x00\x10\x00\x01\x02\x03\x04\x05\x06\x07'
                            b'\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f')),
        ({}, b'\x80'),
        ({x: x for x in range(15)},
         (b'\x8f\x00\x00\x01\x01\x02\x02\x03\x03\x04\x04\x05\x05\x06\x06\x07'
          b'\x07\x08\x08\t\t\n\n\x0b\x0b\x0c\x0c\r\r\x0e\x0e')),
        ({x: x for x in range(16)},
         (b'\xde\x00\x10\x00\x00\x01\x01\x02\x02\x03\x03\x04\x04\x05\x05\x06'
          b'\x06\x07\x07\x08\x08\t\t\n\n\x0b\x0b\x0c\x0c\r\r\x0e\x0e'
          b'\x0f\x0f')),
    ]
    
    def quat_rot_vec(q, v0):
    q_v0 = np.array([0, v0[0], v0[1], v0[2]])
    q_v = quat_mul(q, quat_mul(q_v0, quat_conjugate(q)))
    v = q_v[1:]
    return v
    
            row, col = self.s // self.ncol, self.s % self.ncol
        desc = self.desc.tolist()
        desc = [[c.decode('utf-8') for c in line] for line in desc]
        desc[row][col] = utils.colorize(desc[row][col], 'red', highlight=True)
        if self.lastaction is not None:
            outfile.write('  ({})\n'.format(['Left','Down','Right','Up'][self.lastaction]))
        else:
            outfile.write('\n')
        outfile.write('\n'.join(''.join(line) for line in desc)+'\n')
    
        The purpose is to have agents optimise their exploration parameters (e.g. how far to
    explore from previous actions) based on previous experience. Because the goal changes
    each episode a state-value or action-value function isn't able to provide any additional
    benefit apart from being able to tell whether to increase or decrease the next guess.
    
        def step(self, action):
        assert self.action_space.contains(action)
        if self.np_random.rand() < self.slip:
            action = not action  # agent slipped, reverse action taken
        if action:  # 'backwards': go back to the beginning, get small reward
            reward = self.small
            self.state = 0
        elif self.state < self.n - 1:  # 'forwards': go up along the chain
            reward = 0
            self.state += 1
        else:  # 'forwards': stay at the end of the chain, collect large reward
            reward = self.large
        done = False
        return self.state, reward, done, {}
    
    # We keep the actual reraising in different modules, since the
# reraising code uses syntax mutually exclusive to Python 2/3.
if sys.version_info[0] < 3:
    from .reraise_impl_py2 import reraise_impl #pylint: disable=E0401
else:
    from .reraise_impl_py3 import reraise_impl
    
    # TODO: don't hardcode sizeof_int here
def _bigint_from_bytes(bytes):
    sizeof_int = 4
    padding = sizeof_int - len(bytes) % sizeof_int
    bytes += b'\0' * padding
    int_count = int(len(bytes) / sizeof_int)
    unpacked = struct.unpack('{}I'.format(int_count), bytes)
    accum = 0
    for i, val in enumerate(unpacked):
        accum += 2 ** (sizeof_int * 8 * i) * val
    return accum