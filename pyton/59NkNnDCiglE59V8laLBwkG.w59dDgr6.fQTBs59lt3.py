
        
                :param variable_name: name of the environment variable
        :param silent: set to ``True`` if you want silent failure for missing
                       files.
        :return: bool. ``True`` if able to load config, ``False`` otherwise.
        '''
        rv = os.environ.get(variable_name)
        if not rv:
            if silent:
                return False
            raise RuntimeError('The environment variable %r is not set '
                               'and as such configuration could not be '
                               'loaded.  Set this variable and make it '
                               'point to a configuration file' %
                               variable_name)
        return self.from_pyfile(rv, silent=silent)
    
        for idx, (loader, srcobj, triple) in enumerate(attempts):
        if isinstance(srcobj, Flask):
            src_info = 'application '%s'' % srcobj.import_name
        elif isinstance(srcobj, Blueprint):
            src_info = 'blueprint '%s' (%s)' % (srcobj.name,
                                                srcobj.import_name)
        else:
            src_info = repr(srcobj)
    
                # If we have no method at all in there we don't want to add a
            # method list. This is for instance the case for the base class
            # or another subclass of a base method view that does not introduce
            # new methods.
            if methods:
                cls.methods = methods
    
        rv = parse_changelog()
    
        sys.meta_path.append(Loader())
    request.addfinalizer(sys.meta_path.pop)
    
        logging.root.handlers[:] = root_handlers
    logging.root.setLevel(root_level)
    
            gc.collect()
        self.old_objects = len(gc.get_objects())
    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_split=0.1)
score = model.evaluate(x_test, y_test,
                       batch_size=batch_size, verbose=1)
print('Test score:', score[0])
print('Test accuracy:', score[1])

    
        In this task, there are variable length inputs of integers from 1-9, and a random
    subset of unmasked outputs. Each of these outputs has a 50% probability of being
    the input number unchanged, and a 50% probability of being 2*input%10.
    
    model1 = create_network(num_classes=num_classes, **network1)
history_model1 = model1.fit(x_train,
                            y_train,
                            batch_size=batch_size,
                            epochs=epochs,
                            verbose=1,
                            validation_split=0.1)
    
        x_train = np.array(x[:int(len(x) * (1 - test_split))])
    y_train = np.array(y[:int(len(x) * (1 - test_split))])
    x_test = np.array(x[int(len(x) * (1 - test_split)):])
    y_test = np.array(y[int(len(x) * (1 - test_split)):])
    return (x_train, y_train), (x_test, y_test)

    
    # Since the output is a moving average of the input,
# the first few points of output will be NaN
# and will be dropped from the generated data
# before training the LSTM.
# Also, when lahead > 1,
# the preprocessing step later of 'rolling window view'
# will also cause some points to be lost.
# For aesthetic reasons,
# in order to maintain generated data length = input_len after pre-processing,
# add a few points to account for the values that will be lost.
to_drop = max(tsteps - 1, lahead - 1)
data_input = gen_uniform_amp(amp=0.1, xn=input_len + to_drop)
    
        def format(self, record):
        return self._fmt % record.__dict__
    
    # Being true for dangling symbolic links is also useful.
    
            self.loop._close_self_pipe.reset_mock()
        self.loop.close()
        self.assertFalse(self.loop._close_self_pipe.called)
    
        def test_empty_file_actions(self):
        pid = posix.posix_spawn(
            sys.executable,
            [sys.executable, '-c', 'pass'],
            os.environ,
            []
        )
        self.assertEqual(os.waitpid(pid, 0), (pid, 0))
    
    # Were we compiled --with-pydebug or with #define Py_DEBUG?
COMPILED_WITH_PYDEBUG = hasattr(sys, 'gettotalrefcount')
    
        for url in urls:
        if not url.startswith('http'):
            print('markdown file name: ' + url)
            continue
        if check_live_url(url):
            print(url)
        else:
            print(url, file=sys.stderr)
    
    from babel.messages.pofile import read_po
    
        def test_fd_command_line_interface_hog_model(self):
        target_string = 'obama.jpg'
        runner = CliRunner()
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg')
    
    # Load a sample picture and learn how to recognize it.
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
    
def run_test(setup, test, iterations_per_test=5, tests_to_run=10):
    fastest_execution = min(timeit.Timer(test, setup=setup).repeat(tests_to_run, iterations_per_test))
    execution_time = fastest_execution / iterations_per_test
    fps = 1.0 / execution_time
    return execution_time, fps
    
    while True:
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
    # Convert the image to a PIL-format image so that we can draw on top of it with the Pillow library
# See http://pillow.readthedocs.io/ for more about PIL/Pillow
pil_image = Image.fromarray(unknown_image)
# Create a Pillow ImageDraw Draw instance to draw with
draw = ImageDraw.Draw(pil_image)
    
    
# -- Options for HTML output -------------------------------------------
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('two_people.jpg')