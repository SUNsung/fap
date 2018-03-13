
        
            clf.fit(X_train, str_y_train, batch_size=batch_size, epochs=epochs)
    
        # same for Sequential
    model = Sequential()
    model.add(Dense(2, input_dim=1))
    model.trainable = False
    assert model.trainable_weights == []
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test, batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
    This is achieved through the optimization of a loss function
that has 3 components: 'style loss', 'content loss',
and 'total variation loss':
    
    
def test_serialization():
    all_activations = ['max_norm', 'non_neg',
                       'unit_norm', 'min_max_norm']
    for name in all_activations:
        fn = constraints.get(name)
        ref_fn = getattr(constraints, name)()
        assert fn.__class__ == ref_fn.__class__
        config = constraints.serialize(fn)
        fn = constraints.deserialize(config)
        assert fn.__class__ == ref_fn.__class__
    
        result = f([test_values])[0]
    expected = softplus(test_values)
    assert_allclose(result, expected, rtol=1e-05)
    
        intermediate = Sequential()
    intermediate.add(Merge([left, right], mode='sum'))
    intermediate.add(Dense(num_hidden))
    intermediate.add(Activation('relu'))
    
    # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title,
#  author, documentclass [howto, manual, or own class]).
latex_documents = [
    (master_doc, 'certbot-nginx.tex', u'certbot-nginx Documentation',
     u'Let\'s Encrypt Project', 'manual'),
]
    
    '''
import zope.interface
    
        def test_create_option_buttons(self):
        e = self.engine
        for state in (0, 1):
            for var in (e.revar, e.casevar, e.wordvar, e.wrapvar):
                var.set(state)
            frame, options = self.btn_test_setup(
                    self.dialog.create_option_buttons)
            for spec, button in zip (options, frame.pack_slaves()):
                var, label = spec
                self.assertEqual(button['text'], label)
                self.assertEqual(var.get(), state)
    
    
class ModuleName(Query):
    'Get a module name for Open Module menu entry.'
    # Used in open_module (editor.EditorWindow until move to iobinding).
    
    def py_make_scanner(context):
    parse_object = context.parse_object
    parse_array = context.parse_array
    parse_string = context.parse_string
    match_number = NUMBER_RE.match
    strict = context.strict
    parse_float = context.parse_float
    parse_int = context.parse_int
    parse_constant = context.parse_constant
    object_hook = context.object_hook
    object_pairs_hook = context.object_pairs_hook
    memo = context.memo
    
        def _set_async(self, flag):
        if flag:
            raise xml.dom.NotSupportedErr(
                'asynchronous document loading is not supported')
    
        print('$(target)$(debug_suffix)%s: $(temp_dir) $(OBJS)' % (target_ext))
    print('\tlink -out:$(target)$(debug_suffix)%s %s' %
          (target_ext, target_link_flags), '@<<')
    print('\t$(OBJS)')
    print('\t$(LIBS)')
    print('\t$(ADDN_LINK_FILES)')
    print('\t$(pythonlib) $(lcustom) $(l_debug)')
    print('\t$(resources)')
    print('<<')
    print()
    print('clean:')
    print('\t-del /f *.obj')
    print('\t-del /f $(target).exe')

    
        def unique_names(self):
        # sorted
        if not self.__allnames:
            self.__allnames = []
            for name, aliases in self.__byrgb.values():
                self.__allnames.append(name)
            self.__allnames.sort(key=str.lower)
        return self.__allnames
    
        def test_infile_stdout(self):
        infile = self._create_infile()
        rc, out, err = assert_python_ok('-m', 'json.tool', infile)
        self.assertEqual(rc, 0)
        self.assertEqual(out.splitlines(), self.expect.encode().splitlines())
        self.assertEqual(err, b'')