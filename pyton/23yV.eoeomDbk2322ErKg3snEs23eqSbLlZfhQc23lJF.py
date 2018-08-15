    # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
        def test_get_display_name_ending_with_obsolete(self):
        display_name = self._test_get_x(parser.get_display_name,
            'simple phrase.(with trailing comment):boo',
            'simple phrase.(with trailing comment)',
            ''simple phrase.' ',
            [errors.ObsoleteHeaderDefect]*2,
            ':boo')
        self.assertEqual(len(display_name), 4)
        self.assertEqual(display_name[3].comments, ['with trailing comment'])
        self.assertEqual(display_name.display_name, 'simple phrase.')
    
        @unittest.skipIf(sys.flags.optimize >= 2,
                     'Docstrings are omitted with -O2 and above')
    @unittest.skipIf(hasattr(sys, 'gettrace') and sys.gettrace(),
                     'trace function introduces __locals__ unexpectedly')
    def test_virtualClassAttributeWithOneMeta(self):
        class Meta(type):
            def __dir__(cls):
                return ['__class__', '__module__', '__name__', 'LIFE']
            def __getattr__(self, name):
                if name =='LIFE':
                    return 42
                return super().__getattr(name)
        class Class(metaclass=Meta):
            pass
        output = StringIO()
        helper = pydoc.Helper(output=output)
        helper(Class)
        expected_text = expected_virtualattribute_pattern1 % __name__
        result = output.getvalue().strip()
        self.assertEqual(expected_text, result)
    
            def booh(self):
            raise AttributeError('booh')
    
            # Make sure slot names are proper identifiers
        try:
            class C(object):
                __slots__ = [None]
        except TypeError:
            pass
        else:
            self.fail('[None] slots not caught')
        try:
            class C(object):
                __slots__ = ['foo bar']
        except TypeError:
            pass
        else:
            self.fail('['foo bar'] slots not caught')
        try:
            class C(object):
                __slots__ = ['foo\0bar']
        except TypeError:
            pass
        else:
            self.fail('['foo\\0bar'] slots not caught')
        try:
            class C(object):
                __slots__ = ['1']
        except TypeError:
            pass
        else:
            self.fail('['1'] slots not caught')
        try:
            class C(object):
                __slots__ = ['']
        except TypeError:
            pass
        else:
            self.fail('[''] slots not caught')
        class C(object):
            __slots__ = ['a', 'a_b', '_a', 'A0123456789Z']
        # XXX(nnorwitz): was there supposed to be something tested
        # from the class above?
    
        def setUp(self):
        r'''
        Create this structure:
    
        def transform_range(self, node, results):
        if (id(node) not in self.transformed_xranges and
            not self.in_special_context(node)):
            range_call = Call(Name('range'), [results['args'].clone()])
            # Encase the range call in list().
            list_call = Call(Name('list'), [range_call],
                             prefix=node.prefix)
            # Put things that were after the range() call after the list call.
            for n in results['rest']:
                list_call.append_child(n)
            return list_call
    
        def test_argument_unpacking_1(self):
        self.validate('''f(a, *b, *c, d)''')
    
              # Build info
          cmdclass = {'build_ext': PyBuildExt,
                      'build_scripts': PyBuildScripts,
                      'install': PyBuildInstall,
                      'install_lib': PyBuildInstallLib},
          # The struct module is defined here, because build_ext won't be
          # called unless there's at least one extension module defined.
          ext_modules=[Extension('_struct', ['_struct.c'])],
    
    
def extract_zip(externals_dir, zip_path):
    with zipfile.ZipFile(os.fspath(zip_path)) as zf:
        zf.extractall(os.fspath(externals_dir))
        return externals_dir / zf.namelist()[0].split('/')[0]
    
    In Blackboard pattern several specialised sub-systems (knowledge sources)
assemble their knowledge to build a possibly partial or approximate solution.
In this way, the sub-systems work together to solve the problem,
where the solution is the sum of its parts.
    
        def amount(self, val):
        print(val, end=' ')
        return self
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    
    
    
class MoveFileCommand(object):
    
    
class AndSpecification(CompositeSpecification):
    _one = Specification()
    _other = Specification()
    
        for i in range(1, num_tests + 1):
        logging.info('running test case %d', i)
        url = options.url + '/runCase?case=%d&agent=%s' % (i, options.name)
        test_ws = yield websocket_connect(url, None, compression_options={})
        while True:
            message = yield test_ws.read_message()
            if message is None:
                break
            test_ws.write_message(message, binary=isinstance(message, bytes))
    
        @classmethod
    def send_updates(cls, chat):
        logging.info('sending message to %d waiters', len(cls.waiters))
        for waiter in cls.waiters:
            try:
                waiter.write_message(chat)
            except:
                logging.error('Error sending message', exc_info=True)
    
        def new_future_import(self, old):
        new = FromImport('__future__',
                         [Name('absolute_import', prefix=' '), Comma(),
                          Name('division', prefix=' '), Comma(),
                          Name('print_function', prefix=' ')])
        if old is not None:
            new.prefix = old.prefix
        return new
    
    define('port', default=8888, help='run on the given port', type=int)
define('facebook_api_key', help='your Facebook application API key', type=str)
define('facebook_secret', help='your Facebook application secret', type=str)
    
        def _log(self):
        pass
    
        # Tornado configures logging from command line opts and returns remaining args.
    filenames = options.parse_command_line()
    if not filenames:
        print('Provide a list of filenames to upload.', file=sys.stderr)
        sys.exit(1)
    
    # Release handle to the webcam
video_capture.release()
cv2.destroyAllWindows()

    
            self.assertEqual(len(detected_faces), 1)
        self.assertEqual(detected_faces[0].top(), 142)
        self.assertEqual(detected_faces[0].bottom(), 409)