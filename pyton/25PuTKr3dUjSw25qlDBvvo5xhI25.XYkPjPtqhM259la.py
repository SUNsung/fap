
        
            x = Input(shape=(1,))
    y = inner_model(x)
    outer_model = Model(x, y)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
        _, fname = tempfile.mkstemp('.h5')
    model.save(fname)
    
            if isinstance(self._output_shape, python_types.LambdaType):
            output_shape = func_dump(self._output_shape)
            output_shape_type = 'lambda'
        elif callable(self._output_shape):
            output_shape = self._output_shape.__name__
            output_shape_type = 'function'
        else:
            output_shape = self._output_shape
            output_shape_type = 'raw'
    
        model.compile(optimizer, loss=['mse', 'mae'])
    model.compile(optimizer, loss='mse', loss_weights={'dense_1': 0.2, 'dropout': 0.8})
    model.compile(optimizer, loss='mse', loss_weights=[0.2, 0.8])
    
    - Preprocessing
    Sequence Preprocessing
    Text Preprocessing
    Image Preprocessing
    
    # Training
batch_size = 30
epochs = 2
    
        print('Classifier Training')
    print('===================')
    accuracy, train_time, test_time = {}, {}, {}
    for name in sorted(args['estimators']):
        clf = ESTIMATORS[name]
        try:
            clf.set_params(random_state=0)
        except (TypeError, ValueError):
            pass
    
                tick_vals += list(xvals + 0.5 * width)
            tick_labels += ['%i' % val for val in vals]
    
        # Sort legend labels
    handles, labels = ax.get_legend_handles_labels()
    hl = sorted(zip(handles, labels), key=operator.itemgetter(1))
    handles2, labels2 = zip(*hl)
    ax.legend(handles2, labels2, loc=0)
    
        def add_example(self, x, y, label):
        self.model.data.append((x, y, label))
        self.model.changed('example_added')
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
    calibrated_classifier = sig_clf.calibrated_classifiers_[0]
prediction = np.vstack([calibrator.predict(this_p)
                        for calibrator, this_p in
                        zip(calibrated_classifier.calibrators_, p.T)]).T
prediction /= prediction.sum(axis=1)[:, None]
    
        if (has_actual_code and not has_question_marks):
        linebuffer = clean_trailing_newlines(linebuffer)
        write_with_harness(codefile, sourcefile, start_linenum, linebuffer)
    return (line, linenum)
    
    
PREFS_JSON_SPEC = VValidatedJSON.PartialObject({
    k[len('pref_'):]: v for k, v in
    vprefs.PREFS_VALIDATORS.iteritems()
})
    
        def GET_widget_demo_page(self):
        return BoringPage(_('reddit widget'),
                          show_sidebar = False, 
                          content=WidgetDemoPanel()).render()
