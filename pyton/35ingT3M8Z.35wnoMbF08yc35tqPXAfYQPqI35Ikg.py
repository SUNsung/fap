
        
        
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
        '''
    exit_status = ExitStatus.OK
    downloader = None
    show_traceback = args.debug or args.traceback
    
        # If both `auth_parse` and `prompt_password` are set to `True`,
    # and the value of `-a` lacks the password part,
    # then the user will be prompted to type the password in.
    prompt_password = True
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
        ERROR_TIMEOUT = 2
    ERROR_TOO_MANY_REDIRECTS = 6
    
    import numpy as np
import keras
from keras.datasets import reuters
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.preprocessing.text import Tokenizer
    
    
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
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_normal(tensor_shape):
    _runner(initializers.RandomNormal(mean=0, stddev=1), tensor_shape,
            target_mean=0., target_std=1)
    
    
@keras_test
def test_convert_weights():
    def get_model(shape, data_format):
        model = Sequential()
        model.add(Conv2D(filters=2,
                         kernel_size=(4, 3),
                         input_shape=shape,
                         data_format=data_format))
        model.add(Flatten())
        model.add(Dense(5))
        return model
    
    
def class_to_source_link(cls):
    module_name = cls.__module__
    assert module_name[:6] == 'keras.'
    path = module_name.replace('.', '/')
    path += '.py'
    line = inspect.getsourcelines(cls)[-1]
    link = ('https://github.com/keras-team/'
            'keras/blob/master/' + path + '#L' + str(line))
    return '[[source]](' + link + ')'
    
    - Experiment with GRU, LSTM, and JZS1-3 as they give subtly different results.
    
            # prepare real images sorted by class label
        real_labels = y_train[(epoch - 1) * num_rows * num_classes:
                              epoch * num_rows * num_classes]
        indices = np.argsort(real_labels, axis=0)
        real_images = x_train[(epoch - 1) * num_rows * num_classes:
                              epoch * num_rows * num_classes][indices]
    
            d = deque(s)
        d.rotate(-1)            # verify rot(-1)
        self.assertEqual(''.join(d), 'bcdea')
        d.rotate()              # check default to 1
        self.assertEqual(tuple(d), s)
    
        def test_extra_data(self):
        s = '[1, 2, 3]5'
        msg = 'Extra data'
        self.assertRaisesRegex(self.JSONDecodeError, msg, self.loads, s)
    
        def __init__(self, path, factory=None, create=True):
        '''Initialize an MH instance.'''
        Mailbox.__init__(self, path, factory, create)
        if not os.path.exists(self._path):
            if create:
                os.mkdir(self._path, 0o700)
                os.close(os.open(os.path.join(self._path, '.mh_sequences'),
                                 os.O_CREAT | os.O_EXCL | os.O_WRONLY, 0o600))
            else:
                raise NoSuchMailboxError(self._path)
        self._locked = False
    
        def xhdr(self, hdr, str, *, file=None):
        '''Process an XHDR command (optional server extension).  Arguments:
        - hdr: the header type (e.g. 'subject')
        - str: an article nr, a message id, or a range nr1-nr2
        - file: Filename string or file object to store the result in
        Returns:
        - resp: server response if successful
        - list: list of (nr, value) strings
        '''
        pat = re.compile('^([0-9]+) ?(.*)\n?')
        resp, lines = self._longcmdstring('XHDR {0} {1}'.format(hdr, str), file)
        def remove_number(line):
            m = pat.match(line)
            return m.group(1, 2) if m else line
        return resp, [remove_number(line) for line in lines]
    
        def test_sort_keys_flag(self):
        infile = self._create_infile()
        rc, out, err = assert_python_ok('-m', 'json.tool', '--sort-keys', infile)
        self.assertEqual(rc, 0)
        self.assertEqual(out.splitlines(),
                         self.expect_without_sort_keys.encode().splitlines())
        self.assertEqual(err, b'')

    
        def test_pool_behavior_with_single_object_inside(self):
        sample_queue = queue.Queue()
        sample_queue.put('yam')
        with ObjectPool(sample_queue) as obj:
            # print('Inside with: {}'.format(obj))
            self.assertEqual(obj, 'yam')
        self.assertFalse(sample_queue.empty())
        self.assertTrue(sample_queue.get() == 'yam')
        self.assertTrue(sample_queue.empty())
        
    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def get_current_time_as_html_fragment(self, time_provider):
        current_time = time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
        @staticmethod
    def _static_method_1():
        print('executed method 1!')
    
    
# Example usage...
def main():
    data1 = Data('Data 1')
    data2 = Data('Data 2')
    view1 = DecimalViewer()
    view2 = HexViewer()
    data1.attach(view1)
    data1.attach(view2)
    data2.attach(view2)
    data2.attach(view1)