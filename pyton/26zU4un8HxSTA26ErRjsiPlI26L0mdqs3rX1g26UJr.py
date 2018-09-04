
        
            dirname = 'cifar-100-python'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-100-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
    import gzip
import os
    
        def get_config(self):
        return {'l1': float(self.l1),
                'l2': float(self.l2)}
    
        # Test single image
    x = np.random.uniform(0, 255, (10, 10, 3))
    inputs = Input(shape=x.shape)
    outputs = Lambda(utils.preprocess_input, output_shape=x.shape)(inputs)
    model = Model(inputs, outputs)
    assert model.predict(x[np.newaxis])[0].shape == x.shape
    
    
@keras_test
def test_prelu():
    layer_test(layers.PReLU, kwargs={},
               input_shape=(2, 3, 4))
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
    See documentation in docs/topics/shell.rst
'''
from threading import Thread
    
            if config.PROXY_ENABLE:
            if config.PROXY_USER:
                self.proxy = '%s://%s:%s@%s:%d' % \
                    (config.PROXY_TYPE, config.PROXY_USER, config.PROXY_PASSWD, config.PROXY_HOST, config.PROXY_PORT)
            else:
                self.proxy = '%s://%s:%d' % \
                    (config.PROXY_TYPE, config.PROXY_HOST, config.PROXY_PORT)
        else:
            self.proxy = None
    
            Python does not have any size restrictions, but the compilation of
        such large source files seems to be pretty memory hungry. The memory
        consumption of the python process grew to >1.5GB when importing a
        15MB lexer, eating all my swap space and I was to impacient to see,
        if it could finish at all. With packed initializers that are unpacked
        at import time of the lexer module, everything works like a charm.
        
        '''
        
        ret = []
        for i in range(len(string) / 2):
            (n, v) = ord(string[i*2]), ord(string[i*2+1])
    
    
    def matchAny(self, input):
        '''Match the wildcard: in a symbol'''
    
    
class PollErrorTest(unittest.TestCase):
    '''Tests for acme.errors.PollError.'''
    
        def test_default_decoder_raises_deserialization_error(self):
        from acme.fields import RFC3339Field
        self.assertRaises(
            jose.DeserializationError, RFC3339Field.default_decoder, '')
    
            ip_addr:* == ip_addr
    
        @unittest.skip('causes undesirable side-effects (#20128)')
    def test_modules(self):
        # See Helper.listmodules().
        num_header_lines = 2
        num_module_lines_min = 5  # Playing it safe.
        num_footer_lines = 3
        expected = num_header_lines + num_module_lines_min + num_footer_lines
    
    def ext_decompress(data):
    global has_cmdline_bunzip2
    if has_cmdline_bunzip2 is None:
        has_cmdline_bunzip2 = bool(shutil.which('bunzip2'))
    if has_cmdline_bunzip2:
        return subprocess.check_output(['bunzip2'], input=data)
    else:
        return bz2.decompress(data)
    
    --Pepé
''')
    
    def test():
    manager = MyManager()
    manager.start()
    
    con.close()

    
            depending on self.param value
        '''
        self._instance_method_choices[self.param].__get__(self)()
    
        def setDB(self, db):
        self._db = db
    
    ### OUTPUT ###
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# HexViewer: Subject Data 1 has data 0xa
# Setting Data 2 = 15
# HexViewer: Subject Data 2 has data 0xf
# DecimalViewer: Subject Data 2 has data 15
# Setting Data 1 = 3
# DecimalViewer: Subject Data 1 has data 3
# HexViewer: Subject Data 1 has data 0x3
# Setting Data 2 = 5
# HexViewer: Subject Data 2 has data 0x5
# DecimalViewer: Subject Data 2 has data 5
# Detach HexViewer from data1 and data2.
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# Setting Data 2 = 15
# DecimalViewer: Subject Data 2 has data 15

    
        def __init__(self):
        self.msg_queue = []
        self.subscribers = {}
    
        @abstractmethod
    def is_satisfied_by(self, candidate):
        pass
    
        def __enter__(self):
        if self.item is None:
            self.item = self._queue.get()
        return self.item
    
        def set_time_provider(self, time_provider):
        self.time_provider = time_provider
    
    
class Unit(object):
    
    ### OUTPUT ###
# PRODUCT LIST:
# (Fetching from Data Store)
# cheese
# eggs
# milk
#
# (Fetching from Data Store)
# PRODUCT INFORMATION:
# Name: Cheese, Price: 2.00, Quantity: 10
# (Fetching from Data Store)
# PRODUCT INFORMATION:
# Name: Eggs, Price: 0.20, Quantity: 100
# (Fetching from Data Store)
# PRODUCT INFORMATION:
# Name: Milk, Price: 1.50, Quantity: 10
# (Fetching from Data Store)
# That product 'arepas' does not exist in the records
