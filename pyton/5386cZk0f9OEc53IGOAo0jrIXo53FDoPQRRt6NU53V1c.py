
        
            import pprint
    if getVersionMajorMinor() >= (3, 6):
        # XXX this is extra-fragile
        path = os.path.join(path_to_lib,
            '_sysconfigdata_%s_darwin_darwin.py' % (ABIFLAGS,))
    else:
        path = os.path.join(path_to_lib, '_sysconfigdata.py')
    fp = open(path, 'r')
    data = fp.read()
    fp.close()
    # create build_time_vars dict
    exec(data)
    vars = {}
    for k, v in build_time_vars.items():
        if type(v) == type(''):
            for p in (include_path, lib_path):
                v = v.replace(' ' + p, '')
                v = v.replace(p + ' ', '')
        vars[k] = v
    
            expected = {9: 1, 18: 2, 19: 2, 27: 3, 28: 3, 29: 3, 36: 4, 37: 4,
                    38: 4, 39: 4, 45: 5, 46: 5, 47: 5, 48: 5, 49: 5, 54: 6,
                    55: 6, 56: 6, 57: 6, 58: 6, 59: 6, 63: 7, 64: 7, 65: 7,
                    66: 7, 67: 7, 68: 7, 69: 7, 72: 8, 73: 8, 74: 8, 75: 8,
                    76: 8, 77: 8, 78: 8, 79: 8, 81: 9, 82: 9, 83: 9, 84: 9,
                    85: 9, 86: 9, 87: 9, 88: 9, 89: 9}
        actual = {k: v for v in range(10) for k in range(v * 9, v * 10)}
        self.assertEqual(k, 'Local Variable')
        self.assertEqual(actual, expected)
    
    def _parse_datetime(date_str, time_str=None):
    '''Parse a pair of (date, time) strings, and return a datetime object.
    If only the date is given, it is assumed to be date and time
    concatenated together (e.g. response to the DATE command).
    '''
    if time_str is None:
        time_str = date_str[-6:]
        date_str = date_str[:-6]
    hours = int(time_str[:2])
    minutes = int(time_str[2:4])
    seconds = int(time_str[4:])
    year = int(date_str[:-4])
    month = int(date_str[-4:-2])
    day = int(date_str[-2:])
    # RFC 3977 doesn't say how to interpret 2-char years.  Assume that
    # there are no dates before 1970 on Usenet.
    if year < 70:
        year += 2000
    elif year < 100:
        year += 1900
    return datetime.datetime(year, month, day, hours, minutes, seconds)
    
        def put(self, item, block=True, timeout=None):
        '''Put an item into the queue.
    
            self.assertEqual(len(res), 2)
    
        def _pprint_chain_map(self, object, stream, indent, allowance, context, level):
        if not len(object.maps):
            stream.write(repr(object))
            return
        cls = object.__class__
        stream.write(cls.__name__ + '(')
        indent += len(cls.__name__) + 1
        for i, m in enumerate(object.maps):
            if i == len(object.maps) - 1:
                self._format(m, stream, indent, allowance + 1, context, level)
                stream.write(')')
            else:
                self._format(m, stream, indent, 1, context, level)
                stream.write(',\n' + ' ' * indent)
    
    
def collect_urandom(info_add):
    import os
    
    
def clear_caches():
    # Clear the warnings registry, so they can be displayed again
    for mod in sys.modules.values():
        if hasattr(mod, '__warningregistry__'):
            del mod.__warningregistry__
    
    
_HELPTEXT = 'Options for matching the histograms between the source and destination faces'
    
    from keras.engine import Layer, InputSpec
from keras import initializers, regularizers, constraints
from keras import backend as K
from keras.utils.generic_utils import get_custom_objects
    
        def draw_landmarks_mesh(self, color_id=4, thickness=1):
        ''' Draw the facial landmarks '''
        color = self.colors[color_id]
        for alignment in self.alignments:
            landmarks = alignment['landmarksXY']
            logger.trace('Drawing Landmarks Mesh: (landmarks: %s, color: %s, thickness: %s)',
                         landmarks, color, thickness)
            for key, val in FACIAL_LANDMARKS_IDXS.items():
                points = np.array([landmarks[val[0]:val[1]]], np.int32)
                fill_poly = bool(key in ('right_eye', 'left_eye', 'mouth'))
                cv2.polylines(self.image,  # pylint: disable=no-member
                              points,
                              fill_poly,
                              color,
                              thickness)