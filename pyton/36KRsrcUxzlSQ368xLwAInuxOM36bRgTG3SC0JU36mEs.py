
        
            for strides in [(1, 1), (2, 2)]:
        layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': 3,
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_last'},
                   input_shape=(num_samples, num_row, num_col, stack_size))
    
    
def assert_args_presence(args, doc, member, name):
    args_not_in_doc = [arg not in doc for arg in args]
    if any(args_not_in_doc):
        raise ValueError(
            '{} {} arguments are not present in documentation '.format(name, list(
                compress(args, args_not_in_doc))), member.__module__)
    words = doc.replace('*', '').split()
    # Check arguments styling
    styles = [arg + ':' not in words for arg in args]
    if any(styles):
        raise ValueError(
            '{} {} are not style properly 'argument': documentation'.format(name, list(
                compress(args, styles))), member.__module__)
    
    # get tensor representations of our images
base_image = K.variable(preprocess_image(base_image_path))
style_reference_image = K.variable(preprocess_image(style_reference_image_path))
    
    
def _runner(init, shape, target_mean=None, target_std=None,
            target_max=None, target_min=None):
    variable = K.variable(init(shape))
    output = K.get_value(variable)
    lim = 3e-2
    if target_std is not None:
        assert abs(output.std() - target_std) < lim
    if target_mean is not None:
        assert abs(output.mean() - target_mean) < lim
    if target_max is not None:
        assert abs(output.max() - target_max) < lim
    if target_min is not None:
        assert abs(output.min() - target_min) < lim
    
    
@pytest.mark.skipif(K.backend() != 'tensorflow', reason='Requires TensorFlow backend')
@keras_test
def test_embedding_with_clipnorm():
    model = Sequential()
    model.add(layers.Embedding(input_dim=1, output_dim=1))
    model.compile(optimizer=optimizers.SGD(clipnorm=0.1), loss='mse')
    model.fit(np.array([[0]]), np.array([[[0.5]]]), epochs=1)
    
    from .theplatform import theplatform_download_by_pid
    
        video_url = match1(html, r'filepath=(.+)&sec')
    video_url = video_url.replace('&mid', '?mid')
    
    
def extract_board_data(url):
    json_data = extract_json_data(url, limit=LIMIT)
    pin_list = json_data['pins']
    title = json_data['title']
    pin_count = json_data['pin_count']
    pin_count -= len(pin_list)
    
    __all__ = ['showroom_download']
    
    import os
import sys
import unittest
    
    class Chunk:
    def __init__(self, file, align=True, bigendian=True, inclheader=False):
        import struct
        self.closed = False
        self.align = align      # whether to align to word (2-byte) boundaries
        if bigendian:
            strflag = '>'
        else:
            strflag = '<'
        self.file = file
        self.chunkname = file.read(4)
        if len(self.chunkname) < 4:
            raise EOFError
        try:
            self.chunksize = struct.unpack_from(strflag+'L', file.read(4))[0]
        except struct.error:
            raise EOFError from None
        if inclheader:
            self.chunksize = self.chunksize - 8 # subtract header
        self.size_read = 0
        try:
            self.offset = self.file.tell()
        except (AttributeError, OSError):
            self.seekable = False
        else:
            self.seekable = True
    
            Note, this function is purposefully not defined at the module scope so
        that data it needs from its parent function (within whose context it
        is defined) does not need to be of module scope.
        '''
        line_iterator = _line_iterator()
        fromlines,tolines=[],[]
        while True:
            # Collecting lines of text until we have a from/to pair
            while (len(fromlines)==0 or len(tolines)==0):
                try:
                    from_line, to_line, found_diff = next(line_iterator)
                except StopIteration:
                    return
                if from_line is not None:
                    fromlines.append((from_line,found_diff))
                if to_line is not None:
                    tolines.append((to_line,found_diff))
            # Once we have a pair, remove them from the collection and yield it
            from_line, fromDiff = fromlines.pop(0)
            to_line, to_diff = tolines.pop(0)
            yield (from_line,to_line,fromDiff or to_diff)
    
    
class JSONDecoder(object):
    '''Simple JSON <http://json.org> decoder
    
    >>> from nntplib import NNTP
>>> s = NNTP('news')
>>> resp, count, first, last, name = s.group('comp.lang.python')
>>> print('Group', name, 'has', count, 'articles, range', first, 'to', last)
Group comp.lang.python has 51 articles, range 5770 to 5821
>>> resp, subs = s.xhdr('subject', '{0}-{1}'.format(first, last))
>>> resp = s.quit()
>>>
    
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
    
        def find_byrgb(self, rgbtuple):
        '''Return name for rgbtuple'''
        try:
            return self.__byrgb[rgbtuple]
        except KeyError:
            raise BadColor(rgbtuple) from None
    
            # Check that the path is legal
        if not self.is_rpc_path_valid():
            self.report_404()
            return
    
            a = int(10 * sys.maxsize)
        b = int(100 * sys.maxsize)
        c = int(50 * sys.maxsize)
    
        def test_from_buffer_memoryview(self):
        a = [c_char.from_buffer(memoryview(bytearray(b'a')))]
        a.append(a)
        del a
        gc.collect()  # Should not crash