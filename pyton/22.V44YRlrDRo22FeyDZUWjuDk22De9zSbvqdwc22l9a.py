
        
                def get_auth(self, username=None, password=None):
            assert self.raw_auth == USERNAME
            assert username == USERNAME
            assert password is None
            return basic_auth()
    
        def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
        # If both `auth_parse` and `prompt_password` are set to `True`,
    # and the value of `-a` lacks the password part,
    # then the user will be prompted to type the password in.
    prompt_password = True
    
        # noinspection PyUnboundLocalVariable
    return '%.*f %s' % (precision, n / factor, suffix)

    
        # To avoid having to always use the '|safe' filter in flatpage templates,
    # mark the title and content as already safe (since they are raw HTML
    # content in the first place).
    f.title = mark_safe(f.title)
    f.content = mark_safe(f.content)
    
    
@keras_test
def test_loss_masking():
    weighted_loss = _weighted_masked_objective(losses.get('mae'))
    shape = (3, 4, 2)
    x = np.arange(24).reshape(shape)
    y = 2 * x
    
    # this will contain our generated image
if K.image_data_format() == 'channels_first':
    combination_image = K.placeholder((1, 3, img_nrows, img_ncols))
else:
    combination_image = K.placeholder((1, img_nrows, img_ncols, 3))
    
    
@keras_test
def test_vector_classification_functional():
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    # Test with functional API
    inputs = layers.Input(shape=(x_train.shape[-1],))
    x = layers.Dense(16, activation=keras.activations.relu)(inputs)
    x = layers.Dense(8)(x)
    x = layers.Activation('relu')(x)
    outputs = layers.Dense(num_classes, activation='softmax')(x)
    model = keras.models.Model(inputs, outputs)
    model.compile(loss=keras.losses.sparse_categorical_crossentropy,
                  optimizer=keras.optimizers.RMSprop(),
                  metrics=['acc'])
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    
        # the loss calc occurs elsewhere, so use a dummy lambda func for the loss
    model.compile(loss={'ctc': lambda y_true, y_pred: y_pred}, optimizer=sgd)
    if start_epoch > 0:
        weight_file = os.path.join(OUTPUT_DIR, os.path.join(run_name, 'weights%02d.h5' % (start_epoch - 1)))
        model.load_weights(weight_file)
    # captures output of softmax so we can decode the output during visualization
    test_func = K.function([input_data], [y_pred])
    
            #out = subprocess.check_output(cmd, startupinfo=startupinfo)
        process = subprocess.Popen(cmd, stdout=subprocess.PIPE, startupinfo=startupinfo)
        out, unused_err = process.communicate()
        retcode = process.poll()
        if retcode:
            return out + '\n retcode:%s\n unused_err:%s\n' % (retcode, unused_err)
    except Exception as e:
        out = 'Exception:%r' % e
    
        def ok(self, event=None):  # Do not replace.
        '''If entry is valid, bind it to 'result' and destroy tk widget.
    
        def test_empty_objects(self):
        self.assertEqual(self.loads('{}'), {})
        self.assertEqual(self.loads('[]'), [])
        self.assertEqual(self.loads(''''), '')
    
    
import time
try:
    from test.support import import_fresh_module
except ImportError:
    from test.test_support import import_fresh_module
    
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
    
    WHITESPACE = re.compile(r'[ \t\n\r]*', FLAGS)
WHITESPACE_STR = ' \t\n\r'
    
            class complex2(complex): pass
        self.assertAlmostEqual(complex(complex2(1+1j)), 1+1j)
        self.assertAlmostEqual(complex(real=17, imag=23), 17+23j)
        self.assertAlmostEqual(complex(real=17+23j), 17+23j)
        self.assertAlmostEqual(complex(real=17+23j, imag=23), 17+46j)
        self.assertAlmostEqual(complex(real=1+2j, imag=3+4j), -3+5j)
    
        def test_pickling(self):
        testcases = [(13,), (0, 11), (-22, 10), (20, 3, -1),
                     (13, 21, 3), (-2, 2, 2), (2**65, 2**65+2)]
        for proto in range(pickle.HIGHEST_PROTOCOL + 1):
            for t in testcases:
                with self.subTest(proto=proto, test=t):
                    r = range(*t)
                    self.assertEqual(list(pickle.loads(pickle.dumps(r, proto))),
                                     list(r))