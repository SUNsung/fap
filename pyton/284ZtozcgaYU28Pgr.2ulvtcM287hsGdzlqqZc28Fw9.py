
        
            cmd = cmd.split()
    
        layer_test(local.LocallyConnected1D,
               kwargs={'filters': filters,
                       'kernel_size': filter_length,
                       'padding': padding,
                       'kernel_regularizer': 'l2',
                       'bias_regularizer': 'l2',
                       'activity_regularizer': 'l2',
                       'strides': strides},
               input_shape=(num_samples, num_steps, input_dim))
    
    
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
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        def fn_output_shape(tup):
        s1, s2 = tup
        return (s1[0], s1[1] + s2[1]) + s1[2:]
    
        if args.plot is not None:
        print('Displaying plot', file=sys.stderr)
        title = ('Multilabel metrics with %s' %
                 ', '.join('{0}={1}'.format(field, getattr(args, field))
                           for field in ['samples', 'classes', 'density']
                           if args.plot != field))
        _plot(results, args.metrics, args.formats, title, steps, args.plot)

    
    
def benchmark(estimator, data):
    gc.collect()
    print('Benching %s' % estimator)
    t0 = time()
    estimator.fit(data)
    training_time = time() - t0
    data_t = estimator.transform(data)
    data_r = estimator.inverse_transform(data_t)
    reconstruction_error = np.mean(np.abs(data - data_r))
    return {'time': training_time, 'error': reconstruction_error}
    
        op.add_option('--algorithm',
                  dest='selected_algorithm',
                  default=default_algorithms,
                  type=str,
                  help='Comma-separated list of transformer to benchmark. '
                       'Default: %default. \nAvailable: %default')
    
    REVISION_CMD = 'git rev-parse --short HEAD'
    
        # decode the payload explicitly as UTF-8 since lxml is confused for some
    # reason
    with codecs.open(html_filename,'r','utf-8') as html_file:
        html_content = html_file.read()
    tree = ElementTree(lxml.html.document_fromstring(html_content))
    i = 0
    j = 0
    for p in tree.findall('//p'):
        content = p.text_content()
        if len(content) < 100:
            # skip paragraphs that are too short - probably too noisy and not
            # representative of the actual language
            continue
    
    First example
-------------
The first example illustrates how robust covariance estimation can help
concentrating on a relevant cluster when another one exists. Here, many
observations are confounded into one and break down the empirical covariance
estimation.
Of course, some screening tools would have pointed out the presence of two
clusters (Support Vector Machines, Gaussian Mixture Models, univariate
outlier detection, ...). But had it been a high-dimensional example, none
of these could be applied that easily.
    
        @classmethod
    def setUpClass(cls):
        cls.dec_obs = DecimalViewer()
        cls.hex_obs = HexViewer()
        cls.sub = Data('Data')
        # inherited behavior already tested with TestSubject
        cls.sub.attach(cls.dec_obs)
        cls.sub.attach(cls.hex_obs)
    
        def setUp(cls):
        ''' Function/test case scope setup. '''
        cls.output = StringIO()
        cls.saved_stdout = sys.stdout
        sys.stdout = cls.output
    
        print('After subclassing: ')
    for k in RegistryHolder.REGISTRY:
        print(k)
    
    from dft.constructor_injection import TimeDisplay, MidnightTimeProvider, ProductionCodeTimeProvider, datetime
    
    from __future__ import print_function
    
    '''
http://code.activestate.com/recipes/413838-memento-closure/
    
        def update(self, subject):
        print(u'HexViewer: Subject %s has data 0x%x' %
              (subject.name, subject.data))