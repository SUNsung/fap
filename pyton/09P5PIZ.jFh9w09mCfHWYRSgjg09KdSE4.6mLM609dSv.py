
        
            # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        return (x_train, y_train), (x_test, y_test)

    
        # Test single image
    x = np.random.uniform(0, 255, (10, 10, 3))
    inputs = Input(shape=x.shape)
    outputs = Lambda(utils.preprocess_input, output_shape=x.shape)(inputs)
    model = Model(inputs, outputs)
    assert model.predict(x[np.newaxis])[0].shape == x.shape
    
        ```python
         ..
         # Not needed to change the device scope for model definition:
         model = Xception(weights=None, ..)
    
    x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
    
def test_invalid_convert_kernel():
    with pytest.raises(ValueError):
        conv_utils.convert_kernel(np.zeros((10, 20)))
    
        def test_post(self):
        params = urllib.parse.urlencode(
            {'spam' : 1, 'eggs' : 'python', 'bacon' : 123456})
        headers = {'Content-type' : 'application/x-www-form-urlencoded'}
        res = self.request('/cgi-bin/file2.py', 'POST', params, headers)
    
        ################################################################
    ### Tests for TestLoader.loadTestsFromName()
    
    try:
    WindowsError
except NameError:
    pass
else:
    PYTHON2_EXCEPTIONS += ('WindowsError',)
    
    # Send the message via local SMTP server.
with smtplib.SMTP('localhost') as s:
    s.send_message(msg)

    
    ##
    
    
if __name__ == '__main__':
    multiprocessing.freeze_support()
    test()

    
        Args:
        x(tf.Tensor):
        kernel_size(int or list of int):
        out_channels(int):
        act_fn(function):
        strides(int or list of int):
        padding(str):
        name(str):
        reuse(bool):
    
    from ...utils import get_shape, get_w
    
    
def repeat(x, n):
    '''
    Examples:
        x.shape == [batch_size, n_input]
        x = repeat(x, n_step)
        x.shape == [batch_size, n_step, n_input]
    
    Win1251BulgarianModel = {
  'char_to_order_map': win1251BulgarianCharToOrderMap,
  'precedence_matrix': BulgarianLangModel,
  'typical_positive_ratio': 0.969392,
  'keep_english_letter': False,
  'charset_name': 'windows-1251',
  'language': 'Bulgarian',
}

    
        def get_confidence(self):
        return self.distribution_analyzer.get_confidence()

    
    
class SingleByteCharSetProber(CharSetProber):
    SAMPLE_SIZE = 64
    SB_ENOUGH_REL_THRESHOLD = 1024  #  0.25 * SAMPLE_SIZE^2
    POSITIVE_SHORTCUT_THRESHOLD = 0.95
    NEGATIVE_SHORTCUT_THRESHOLD = 0.05
    
            # If we've seen escape sequences, use the EscCharSetProber, which
        # uses a simple state machine to check for known escape sequences in
        # HZ and ISO-2022 encodings, since those are the only encodings that
        # use such sequences.
        if self._input_state == InputState.ESC_ASCII:
            if not self._esc_charset_prober:
                self._esc_charset_prober = EscCharSetProber(self.lang_filter)
            if self._esc_charset_prober.feed(byte_str) == ProbingState.FOUND_IT:
                self.result = {'encoding':
                               self._esc_charset_prober.charset_name,
                               'confidence':
                               self._esc_charset_prober.get_confidence(),
                               'language':
                               self._esc_charset_prober.language}
                self.done = True
        # If we've seen high bytes (i.e., those with values greater than 127),
        # we need to do more complicated checks using all our multi-byte and
        # single-byte probers that are left.  The single-byte probers
        # use character bigram distributions to determine the encoding, whereas
        # the multi-byte probers use a combination of character unigram and
        # bigram distributions.
        elif self._input_state == InputState.HIGH_BYTE:
            if not self._charset_probers:
                self._charset_probers = [MBCSGroupProber(self.lang_filter)]
                # If we're checking non-CJK encodings, use single-byte prober
                if self.lang_filter & LanguageFilter.NON_CJK:
                    self._charset_probers.append(SBCSGroupProber())
                self._charset_probers.append(Latin1Prober())
            for prober in self._charset_probers:
                if prober.feed(byte_str) == ProbingState.FOUND_IT:
                    self.result = {'encoding': prober.charset_name,
                                   'confidence': prober.get_confidence(),
                                   'language': prober.language}
                    self.done = True
                    break
            if self.WIN_BYTE_DETECTOR.search(byte_str):
                self._has_win_bytes = True
    
        def __unicode__(self):
        if self.request_id is not None:
            msg = self._message or '<empty message>'
            return u'Request {0}: {1}'.format(self.request_id, msg)
        else:
            return self._message
    
    class BrokenRecordableEnv(object):
    metadata = {'render.modes': [None, 'rgb_array']}
    
    if not os.path.isfile(ROLLOUT_FILE):
    logger.info('No rollout file found. Writing empty json file to {}'.format(ROLLOUT_FILE))
    with open(ROLLOUT_FILE, 'w') as outfile:
        json.dump({}, outfile, indent=2)