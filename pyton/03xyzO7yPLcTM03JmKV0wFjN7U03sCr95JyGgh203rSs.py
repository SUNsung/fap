
        
            parameters = component.spec.network_unit.parameters
    self._num_labels = int(parameters['num_labels'])
    
        Returns:
      tf.Group op incrementing 'step' by 1 and 'total' by total.
    '''
    update_total = tf.assign_add(self._total, total, use_locking=True)
    update_step = tf.assign_add(self._step, 1, use_locking=True)
    return tf.group(update_total, update_step)
    
        # Check that the loss op is present.
    op_names = [op.name for op in tf.get_default_graph().get_operations()]
    self.assertTrue('train_test/compute_loss/'
                    'sigmoid_cross_entropy_with_logits' in op_names)
    
        try:
      with open(FLAGS.expected_file) as expected:
        content_expected = expected.read()
    except IOError as e:
      self.fail('Error opening '%s': %s' % (FLAGS.expected_file, e.strerror))
    
          # Add learning rate. If the learning rate is optimized externally, then
      # just create an assign op.
      if self.hyperparams.pbt_optimize_learning_rate:
        self.master_vars['learning_rate'] = tf.get_variable(
            'learning_rate',
            initializer=tf.constant(
                self.hyperparams.learning_rate, dtype=tf.float32))
        lr_assign_input = tf.placeholder(tf.float32, [],
                                         'pbt/assign/learning_rate/Value')
        tf.assign(
            self.master_vars['learning_rate'],
            value=lr_assign_input,
            name='pbt/assign/learning_rate')
      else:
        self.master_vars['learning_rate'] = _create_learning_rate(
            self.hyperparams, self.master_vars['step'])
    
    
if __name__ == '__main__':
    main(sys.argv[1:])

    
        'hostport': re.compile(
        r'''^
            ((?:                        # We want to match:
                [^:\[\]]                # (a non-range character
                |                       # ...or...
                \[[^\]]*\]              # a complete bracketed expression)
            )*)                         # repeated as many times as possible
            :([0-9]+)                   # followed by a port number
            $
        ''', re.X
    ),
    
    try:
    import json
except ImportError:
    import simplejson as json
    
        return results

    
    
class _ProactorWritePipeTransport(_ProactorBaseWritePipeTransport):
    def __init__(self, *args, **kw):
        super().__init__(*args, **kw)
        self._read_fut = self._loop._proactor.recv(self._sock, 16)
        self._read_fut.add_done_callback(self._pipe_closed)
    
    def partial_product(start, stop):
    '''Product of integers in range(start, stop, 2), computed recursively.
    start and stop should both be odd, with start <= stop.
    
            with self.assertRaisesRegex(TypeError, r'object.__init__\(\) takes no argument'):
            object.__init__(E(), 42)
    
            class C(B):
            def __getattr__(self, name):
                if name == 'foo':
                    return ('getattr', name)
                else:
                    raise AttributeError
            def __setattr__(self, name, value):
                if name == 'foo':
                    self.setattr = (name, value)
                else:
                    return B.__setattr__(self, name, value)
            def __delattr__(self, name):
                if name == 'foo':
                    self.delattr = name
                else:
                    return B.__delattr__(self, name)
    
    def _is_import_binding(node, name, package=None):
    ''' Will reuturn node if node will import name, or node
        will import * from package.  None is returned otherwise.
        See test cases for examples. '''
    
        PATTERN = '''
    power< head=any+
         trailer< '.' method=('keys'|'items'|'values'|
                              'iterkeys'|'iteritems'|'itervalues'|
                              'viewkeys'|'viewitems'|'viewvalues') >
         parens=trailer< '(' ')' >
         tail=any*
    >
    '''
    
    if __name__ == '__main__':
    unittest.main()

    
        def configure_ctypes_darwin(self, ext):
        # Darwin (OS X) uses preconfigured files, in
        # the Modules/_ctypes/libffi_osx directory.
        srcdir = sysconfig.get_config_var('srcdir')
        ffi_srcdir = os.path.abspath(os.path.join(srcdir, 'Modules',
                                                  '_ctypes', 'libffi_osx'))
        sources = [os.path.join(ffi_srcdir, p)
                   for p in ['ffi.c',
                             'x86/darwin64.S',
                             'x86/x86-darwin.S',
                             'x86/x86-ffi_darwin.c',
                             'x86/x86-ffi64.c',
                             'powerpc/ppc-darwin.S',
                             'powerpc/ppc-darwin_closure.S',
                             'powerpc/ppc-ffi_darwin.c',
                             'powerpc/ppc64-darwin_closure.S',
                             ]]
    
    
def run_configure(configure, do_script):
    print('perl Configure '+configure+' no-idea no-mdc2')
    os.system('perl Configure '+configure+' no-idea no-mdc2')
    print(do_script)
    os.system(do_script)
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
        fftv = Publisher(message_center)
    
        def test_items_recoil(self):
        with ObjectPool(self.sample_queue, True) as pool:
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
    '''
A class that uses different static function depending of a parameter passed in
init. Note the use of a single dictionary instead of multiple conditions
'''
    
            # they can be executed later on
        for cmd in command_stack:
            cmd.execute()
    
    
if __name__ == '__main__':
    print('Specification')
    andrey = User()
    ivan = User(super_user=True)
    vasiliy = 'not User instance'
    
    # Get a reference to the Raspberry Pi camera.
# If this fails, make sure you have a camera connected to the RPi and that you
# enabled your camera in raspi-config and rebooted first.
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)
    
    for image in TEST_IMAGES:
    size = image.split('-')[1].split('.')[0]
    print('Timings at {}:'.format(size))
    
        # Find all the faces and face enqcodings in the frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
    # Find all the faces and face encodings in the unknown image
face_locations = face_recognition.face_locations(unknown_image)
face_encodings = face_recognition.face_encodings(unknown_image, face_locations)
    
    # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title, author, documentclass
# [howto/manual]).
latex_documents = [
    ('index', 'face_recognition.tex',
     u'Face Recognition Documentation',
     u'Adam Geitgey', 'manual'),
]
    
        def test_face_landmarks_small_model(self):
        img = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg'))
        face_landmarks = api.face_landmarks(img, model='small')