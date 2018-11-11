
        
        '''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
        elif METHOD == 'LIST':
        domain = compat_urllib_parse_urlparse(test['url']).netloc
        if not domain:
            print('\nFail: {0}'.format(test['name']))
            continue
        domain = '.'.join(domain.split('.')[-2:])
    
    now = datetime.datetime.now()
now_iso = now.isoformat() + 'Z'
    
    import youtube_dl
    
        with io.open(infile, encoding='utf-8') as inf:
        readme = inf.read()
    
        def test_youporn(self):
        self._assert_restricted(
            'http://www.youporn.com/watch/505835/sex-ed-is-it-safe-to-masturbate-daily/',
            '505835.mp4', 2, old_age=25)
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
        # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
        with app.app_context():
        db = get_db()
        post = db.execute('SELECT * FROM post WHERE id = 1').fetchone()
        assert post['title'] == 'updated'
    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
        .. versionadded:: 0.8
    '''
    
        :param template_name_or_list: the name of the template to be
                                  rendered, or an iterable with template names
                                  the first one existing will be rendered
    :param context: the variables that should be available in the
                    context of the template.
    '''
    ctx = _app_ctx_stack.top
    ctx.app.update_template_context(context)
    return _render(ctx.app.jinja_env.get_or_select_template(template_name_or_list),
                   context, ctx.app)
    
            return super(FlaskCliRunner, self).invoke(cli, args, **kwargs)

    
                def dispatch_request(self, name):
                return 'Hello %s!' % name
    
    # Load the CIFAR10 data.
(x_train, y_train), (x_test, y_test) = cifar10.load_data()
    
    
def test_fashion_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = fashion_mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
            You can specify the initial state of RNN layers numerically by
        calling `reset_states` with the keyword argument `states`. The value of
        `states` should be a numpy array or list of numpy arrays representing
        the initial state of the RNN layer.
    
            self.recurrent_kernel_i = self.recurrent_kernel[:, :self.units]
        self.recurrent_kernel_f = (
            self.recurrent_kernel[:, self.units: self.units * 2])
        self.recurrent_kernel_c = (
            self.recurrent_kernel[:, self.units * 2: self.units * 3])
        self.recurrent_kernel_o = self.recurrent_kernel[:, self.units * 3:]
    
        @property
    def activation(self):
        return self.cell.activation
    
    # try using different optimizers and different optimizer configs
model.compile('adam', 'binary_crossentropy', metrics=['accuracy'])
    
    
  def Done( self ):
    return True
    
    
def EndsWithPython_Bad( path ):
  ok_( not _EndsWithPython( path ),
       'Path {0} does end with a Python name.'.format( path ) )
    
    
def KeywordsFromSyntaxListOutput_CppSyntax_test():
  expected_keywords = (
    'int_fast32_t', 'FILE', 'size_t', 'bitor', 'typedef', 'const', 'struct',
    'uint8_t', 'fpos_t', 'thread_local', 'unsigned', 'uint_least16_t', 'do',
    'intptr_t', 'uint_least64_t', 'return', 'auto', 'void', '_Complex',
    'break', '_Alignof', 'not', 'using', '_Static_assert', '_Thread_local',
    'public', 'uint_fast16_t', 'this', 'continue', 'char32_t', 'int16_t',
    'intmax_t', 'static', 'clock_t', 'sizeof', 'int_fast64_t', 'mbstate_t',
    'try', 'xor', 'uint_fast32_t', 'int_least8_t', 'div_t', 'volatile',
    'template', 'char16_t', 'new', 'ldiv_t', 'int_least16_t', 'va_list',
    'uint_least8_t', 'goto', 'noreturn', 'enum', 'static_assert', 'bitand',
    'compl', 'imaginary', 'jmp_buf', 'throw', 'asm', 'ptrdiff_t', 'uint16_t',
    'or', 'uint_fast8_t', '_Bool', 'int32_t', 'float', 'private', 'restrict',
    'wint_t', 'operator', 'not_eq', '_Imaginary', 'alignas', 'union', 'long',
    'uint_least32_t', 'int_least64_t', 'friend', 'uintptr_t', 'int8_t', 'else',
    'export', 'int_fast8_t', 'catch', 'true', 'case', 'default', 'double',
    '_Noreturn', 'signed', 'typename', 'while', 'protected', 'wchar_t',
    'wctrans_t', 'uint64_t', 'delete', 'and', 'register', 'false', 'int',
    'uintmax_t', 'off_t', 'char', 'int64_t', 'int_fast16_t', 'DIR', '_Atomic',
    'time_t', 'xor_eq', 'namespace', 'virtual', 'complex', 'bool', 'mutable',
    'if', 'int_least32_t', 'sig_atomic_t', 'and_eq', 'ssize_t', 'alignof',
    '_Alignas', '_Generic', 'extern', 'class', 'typeid', 'short', 'for',
    'uint_fast64_t', 'wctype_t', 'explicit', 'or_eq', 'switch', 'uint32_t',
    'inline' )