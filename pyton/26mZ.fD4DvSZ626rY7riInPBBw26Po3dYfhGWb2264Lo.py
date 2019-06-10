
        
            def write_ip(self, ip, host, handshake):
        with self.lock:
            self.out_fd.write('%s %s gws %d 0 0\n' % (ip, host, handshake))
            self.out_fd.flush()
    
        global pteredor_is_running
    pteredor_is_running = True
    server_list = prober.eval_servers()
    pteredor_is_running = False
    
        # Every 128 frames (the default batch size), batch process the list of frames to find faces
    if len(frames) == 128:
        batch_of_face_locations = face_recognition.batch_face_locations(frames, number_of_times_to_upsample=0)
    
            distance_results = api.face_distance(faces_to_compare, face_encoding)
        self.assertEqual(type(distance_results), np.ndarray)
        self.assertEqual(len(distance_results), 0)
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
        :param face_image: The image that contains one or more faces
    :param known_face_locations: Optional - the bounding boxes of each face if you already know them.
    :param num_jitters: How many times to re-sample the face when calculating encoding. Higher is more accurate, but slower (i.e. 100 is 100x slower)
    :return: A list of 128-dimensional face encodings (one for each face in the image)
    '''
    raw_landmarks = _raw_face_landmarks(face_image, known_face_locations, model='small')
    return [np.array(face_encoder.compute_face_descriptor(face_image, raw_landmark_set, num_jitters)) for raw_landmark_set in raw_landmarks]
    
    def dedent(line, indent_depth):
    if line.startswith(' ' * indent_depth):
        return line[indent_depth:]
    if line.startswith('\t'):
        return line[1:]
    return line
    
        def _next_state(self, state):
        try:
            self._current_state = self.states[state]
        except KeyError:
            raise UnsupportedState
    
    
class TestData(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.dec_obs = DecimalViewer()
        cls.hex_obs = HexViewer()
        cls.sub = Data('Data')
        # inherited behavior already tested with TestSubject
        cls.sub.attach(cls.dec_obs)
        cls.sub.attach(cls.hex_obs)
    
        def test_given_standby_on_message_diagnostics_failed_shall_raise_exception_and_keep_in_state(cls):
        with cls.assertRaises(UnsupportedTransition):
            cls.hsm.on_message('diagnostics failed')
        cls.assertEqual(isinstance(cls.hsm._current_state, Standby), True)
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
        def __call__(cls, *args, **kwargs):
        key = FlyweightMeta._serialize_params(cls, *args, **kwargs)
        pool = getattr(cls, 'pool', {})
    
    for x, w in jieba.analyse.textrank(s, withWeight=True):
    print('%s %s' % (x, w))
    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
    jieba.enable_parallel()
    
            # return its order if it is hiragana
        if len(byte_str) > 1:
            second_char = byte_str[1]
            if (first_char == 202) and (0x9F <= second_char <= 0xF1):
                return second_char - 0x9F, char_len
    
    Win1251BulgarianModel = {
  'char_to_order_map': win1251BulgarianCharToOrderMap,
  'precedence_matrix': BulgarianLangModel,
  'typical_positive_ratio': 0.969392,
  'keep_english_letter': False,
  'charset_name': 'windows-1251',
  'language': 'Bulgarian',
}

    
    BIG5_SM_MODEL = {'class_table': BIG5_CLS,
                 'class_factor': 5,
                 'state_table': BIG5_ST,
                 'char_len_table': BIG5_CHAR_LEN_TABLE,
                 'name': 'Big5'}
    
        MINIMUM_THRESHOLD = 0.20
    HIGH_BYTE_DETECTOR = re.compile(b'[\x80-\xFF]')
    ESC_DETECTOR = re.compile(b'(\033|~{)')
    WIN_BYTE_DETECTOR = re.compile(b'[\x80-\x9F]')
    ISO_WIN_MAP = {'iso-8859-1': 'Windows-1252',
                   'iso-8859-2': 'Windows-1250',
                   'iso-8859-5': 'Windows-1251',
                   'iso-8859-6': 'Windows-1256',
                   'iso-8859-7': 'Windows-1253',
                   'iso-8859-8': 'Windows-1255',
                   'iso-8859-9': 'Windows-1254',
                   'iso-8859-13': 'Windows-1257'}
    }