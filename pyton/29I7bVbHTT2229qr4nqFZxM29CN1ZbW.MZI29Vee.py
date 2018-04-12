
        
            old_layer = keras.layers.LSTM(input_dim=5, input_length=3,
                                  output_dim=2, name='d', consume_less='mem')
    new_layer = keras.layers.LSTM(2, input_shape=[3, 5], name='d', implementation=1)
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        # Output shape
        5D tensor with shape:
        - If `data_format` is `'channels_last'`:
            `(batch, first_cropped_axis, second_cropped_axis, third_cropped_axis, depth)`
        - If `data_format` is `'channels_first'`:
            `(batch, depth, first_cropped_axis, second_cropped_axis, third_cropped_axis)`
    '''
    
        layer_test(local.LocallyConnected1D,
               kwargs={'filters': filters,
                       'kernel_size': filter_length,
                       'padding': padding,
                       'kernel_regularizer': 'l2',
                       'bias_regularizer': 'l2',
                       'activity_regularizer': 'l2',
                       'strides': strides},
               input_shape=(num_samples, num_steps, input_dim))
    
    # Training
batch_size = 30
epochs = 2
    
    # get the symbolic outputs of each 'key' layer (we gave them unique names).
outputs_dict = dict([(layer.name, layer.output) for layer in model.layers])
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_truncated_normal(tensor_shape):
    _runner(initializers.TruncatedNormal(mean=0, stddev=1), tensor_shape,
            target_mean=0., target_std=None, target_max=2)
    
            assert_allclose(convout1, convout2, atol=1e-5)
    
        # generate char sequences of length 'sequence_length' out of alphabet and store the next char as label (e.g. 'ab'->'c')
    sequence_length = 2
    sentences = [alphabet[i: i + sequence_length] for i in range(len(alphabet) - sequence_length)]
    next_chars = [alphabet[i + sequence_length] for i in range(len(alphabet) - sequence_length)]
    
        test_values = get_standard_values()
    result = f([test_values])[0]
    assert_allclose(result, test_values, rtol=1e-05)
    
    
collect_ignore = [
    # deprecated or moved modules
    'scrapy/conf.py',
    'scrapy/stats.py',
    'scrapy/project.py',
    'scrapy/utils/decorator.py',
    'scrapy/statscol.py',
    'scrapy/squeue.py',
    'scrapy/log.py',
    'scrapy/dupefilter.py',
    'scrapy/command.py',
    'scrapy/linkextractor.py',
    'scrapy/spider.py',
    
        def __init__(self):
        Resource.__init__(self)
        self.concurrent = 0
        self.tail = deque(maxlen=100)
        self._reset_stats()
    
        def __exit__(self, exc_type, exc_value, traceback):
        self.proc.kill()
        self.proc.wait()
        time.sleep(0.2)
    
            return [token.text for token in tokens]
    
                    # throw exception unless disjoint or identical
                disjoint = (prevRop.lastIndex < rop.index
                            or prevRop.index > rop.lastIndex)
                same = (prevRop.index == rop.index
                        and prevRop.lastIndex == rop.lastIndex)
                if not disjoint and not same:
                    raise ValueError(
                        'replace op boundaries of %s overlap with previous %s'
                        % (rop, prevRop))
    
    - CommonToken: A basic and most commonly used Token implementation.
- ClassicToken: A Token object as used in ANTLR 2.x, used to %tree
  construction.
    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
                self.finish(resources[path])
    
        `mask` is a `bytes` object of length 4; `data` is a `bytes` object of any length.
    Returns a `bytes` object of the same length as `data` with the mask applied
    as specified in section 5.3 of RFC 6455.
    
        For use on platforms that don't have os.pipe() (or where pipes cannot
    be passed to select()), but do have sockets.  This includes Windows
    and Jython.
    '''
    def __init__(self):
        from .auto import set_close_exec
        # Based on Zope select_trigger.py:
        # https://github.com/zopefoundation/Zope/blob/master/src/ZServer/medusa/thread/select_trigger.py