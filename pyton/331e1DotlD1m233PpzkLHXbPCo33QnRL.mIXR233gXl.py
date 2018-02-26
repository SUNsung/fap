
@keras_test
def test_model_trainability_switch():
    # a non-trainable model has no trainable weights
    x = Input(shape=(1,))
    y = Dense(2)(x)
    model = Model(x, y)
    model.trainable = False
    assert model.trainable_weights == []
    
    if ngram_range > 1:
    print('Adding {}-gram features'.format(ngram_range))
    # Create set of unique n-gram from the training set.
    ngram_set = set()
    for input_list in x_train:
        for i in range(2, ngram_range + 1):
            set_of_ngram = create_ngram_set(input_list, ngram_value=i)
            ngram_set.update(set_of_ngram)
    
    from keras.models import Sequential
from keras.engine.training import _weighted_masked_objective
from keras.layers import TimeDistributed, Masking, Dense
from keras.utils.test_utils import keras_test
from keras import losses
from keras import backend as K
    
        # prime the model with 'ab' sequence and let it generate the learned alphabet
    sentence = alphabet[:sequence_length]
    generated = sentence
    for iteration in range(number_of_chars - sequence_length):
        x = np.zeros((1, sequence_length, number_of_chars))
        for t, char in enumerate(sentence):
            x[0, t, ord(char) - ord('a')] = 1.
        preds = model.predict(x, verbose=0)[0]
        next_char = chr(np.argmax(preds) + ord('a'))
        generated += next_char
        sentence = sentence[1:] + next_char
    
    
def test_elu():
    x = K.placeholder(ndim=2)
    f = K.function([x], [activations.elu(x, 0.5)])
    
    
@keras_test
def test_vector_regression():
    '''
    Perform float data prediction (regression) using 2 layer MLP
    with tanh and sigmoid activations.
    '''
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         output_shape=(num_classes,),
                                                         classification=False)
    
        model.summary()
    json_str = model.to_json()
    model_from_json(json_str)
    
            return contracts
    
        def test_from_bytes(self):
        def check(tests, byteorder, signed=False):
            for test, expected in tests.items():
                try:
                    self.assertEqual(
                        int.from_bytes(test, byteorder, signed=signed),
                        expected)
                except Exception as err:
                    raise AssertionError(
                        'failed to convert {0} with byteorder={1!r} and signed={2}'
                        .format(test, byteorder, signed)) from err
    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if self.seekable:
            try:
                n = self.chunksize - self.size_read
                # maybe fix alignment
                if self.align and (self.chunksize & 1):
                    n = n + 1
                self.file.seek(n, 1)
                self.size_read = self.size_read + n
                return
            except OSError:
                pass
        while self.size_read < self.chunksize:
            n = min(8192, self.chunksize - self.size_read)
            dummy = self.read(n)
            if not dummy:
                raise EOFError

    
        def scan_once(string, idx):
        try:
            return _scan_once(string, idx)
        finally:
            memo.clear()
    
        def _artcmd(self, line, file=None):
        '''Internal: process a HEAD, BODY or ARTICLE command.'''
        resp, lines = self._longcmd(line, file)
        resp, art_num, message_id = self._statparse(resp)
        return resp, ArticleInfo(art_num, message_id, lines)
    
        # override in derived classes
    def _extractrgb(self, mo):
        return [int(x) for x in mo.group('red', 'green', 'blue')]
    
        def test_iterator_pickling(self):
        testcases = [(13,), (0, 11), (-22, 10), (20, 3, -1),
                     (13, 21, 3), (-2, 2, 2), (2**65, 2**65+2)]
        for proto in range(pickle.HIGHEST_PROTOCOL + 1):
            for t in testcases:
                it = itorg = iter(range(*t))
                data = list(range(*t))