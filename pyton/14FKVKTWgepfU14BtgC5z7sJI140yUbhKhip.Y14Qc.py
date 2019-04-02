
        
        
def l1_l2(l1=0.01, l2=0.01):
    return L1L2(l1=l1, l2=l2)
    
        outputs1 = Lambda(lambda x: utils.preprocess_input(x, 'channels_last'),
                      output_shape=x.shape[1:])(inputs)
    model1 = Model(inputs, outputs1)
    out1 = model1.predict(x)
    x2 = np.transpose(x, (0, 3, 1, 2))
    inputs2 = Input(shape=x2.shape[1:])
    outputs2 = Lambda(lambda x: utils.preprocess_input(x, 'channels_first'),
                      output_shape=x2.shape[1:])(inputs2)
    model2 = Model(inputs2, outputs2)
    out2 = model2.predict(x2)
    assert_allclose(out1, out2.transpose(0, 2, 3, 1))
    
    
def test_fashion_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = fashion_mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
    # convert class vectors to binary class matrices
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
    
    # Stack of Transposed Conv2D blocks
# Notes:
# 1) Use Batch Normalization before ReLU on deep networks
# 2) Use UpSampling2D as alternative to strides>1
# - faster but not as good as strides>1
for filters in layer_filters[::-1]:
    x = Conv2DTranspose(filters=filters,
                        kernel_size=kernel_size,
                        strides=2,
                        activation='relu',
                        padding='same')(x)
    
        def test_bad_save_checkpoint(self):
        self.config.reverter.add_to_checkpoint = mock.Mock(
            side_effect=errors.ReverterError)
        self.config.parser.add_dir(
            self.vh_truth[0].path, 'Test', 'bad_save_ckpt')
        self.assertRaises(errors.PluginError, self.config.save)
    
    
class SelectVhostMultiTest(unittest.TestCase):
    '''Tests for certbot_apache.display_ops.select_vhost_multiple.'''
    
    import mock
    
            self.vhost1b = VirtualHost(
            'filep', 'vh_path', set([self.addr1]), False, False, 'localhost')
    
            # XXX: Deleting all of this is kind of scary unless the test
        #      instances really each have a complete configuration!
        shutil.rmtree('/etc/nginx')
        shutil.copytree(server_root, '/etc/nginx', symlinks=True)
    
    
def test_1():
    for o in [None, True, False, 0, 1, (1 << 6), (1 << 7) - 1, -1,
              -((1 << 5) - 1), -(1 << 5)]:
        check(1, o)
    
            # object
        exp = pd.Index([pd.Timestamp('2011-01-01 09:00', tz=tz),
                        'x',
                        pd.Timestamp('2011-01-01 11:00', tz=tz)],
                       dtype=object)
        tm.assert_index_equal(idx.fillna('x'), exp)

    
        result = s[lambda x: [True, False, True, True]]
    tm.assert_series_equal(result, s.iloc[[0, 2, 3]])