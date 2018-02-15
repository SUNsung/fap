            @wraps(cb)
            def wrapper(response):
                try:
                    results.startTest(self.testcase_pre)
                    self.pre_process(response)
                    results.stopTest(self.testcase_pre)
                except AssertionError:
                    results.addFailure(self.testcase_pre, sys.exc_info())
                except Exception:
                    results.addError(self.testcase_pre, sys.exc_info())
                else:
                    results.addSuccess(self.testcase_pre)
                finally:
                    return list(iterate_spider_output(cb(response)))
    
        old_layer = keras.layers.ConvLSTM2D(5, nb_row=3, nb_col=3, name='conv')
    new_layer = keras.layers.ConvLSTM2D(5, (3, 3), name='conv')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        layer_test(local.LocallyConnected1D,
               kwargs={'filters': filters,
                       'kernel_size': filter_length,
                       'padding': padding,
                       'kernel_regularizer': 'l2',
                       'bias_regularizer': 'l2',
                       'activity_regularizer': 'l2',
                       'strides': strides},
               input_shape=(num_samples, num_steps, input_dim))
    
    arxiv:1504.00941v2 [cs.NE] 7 Apr 2015
http://arxiv.org/pdf/1504.00941v2.pdf
    
            x = np.random.random((1,) + shape)
    
        # Arguments
        img: PIL Image instance.
        data_format: Image data format.
    
            d = deque('superman')
        self.assertEqual(d[0], 's')
        self.assertEqual(d[-1], 'n')
        d = deque()
        self.assertRaises(IndexError, d.__getitem__, 0)
        self.assertRaises(IndexError, d.__getitem__, -1)
    
            morsel_b = cookies.Morsel()
        morsel_b.update(attribs)
        morsel_b.set(*base_case)
        morsel_b['comment'] = 'bar'
        self.assertFalse(morsel_a == morsel_b)
        self.assertTrue(morsel_a != morsel_b)
    
            try:
            if s[end] in _ws:
                end += 1
                if s[end] in _ws:
                    end = _w(s, end + 1).end()
        except IndexError:
            pass
    
        def _longcmdstring(self, line, file=None):
        '''Internal: send a command and get the response plus following text.
        Same as _longcmd() and _getlongresp(), except that the returned `lines`
        are unicode strings rather than bytes objects.
        '''
        self._putcmd(line)
        resp, list = self._getlongresp(file)
        return resp, [line.decode(self.encoding, self.errors)
                      for line in list]
    
        expect = textwrap.dedent('''\
    [
        [
            'blorpie'
        ],
        [
            'whoops'
        ],
        [],
        'd-shtaeou',
        'd-nthiouh',
        'i-vhbjkhnth',
        {
            'nifty': 87
        },
        {
            'morefield': false,
            'field': 'yes'
        }
    ]
    ''')
    
            y = X.from_buffer_copy(a)
        self.assertEqual(y.c_int, a[0])
        self.assertFalse(y.init_called)