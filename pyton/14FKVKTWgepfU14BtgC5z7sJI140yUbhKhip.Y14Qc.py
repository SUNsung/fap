
        
            auth.login()
    # current user can't modify other user's post
    assert client.post('/1/update').status_code == 403
    assert client.post('/1/delete').status_code == 403
    # current user doesn't see edit link
    assert b'href='/1/update'' not in client.get('/').data
    
        try:
        try:
            with _Mgr():
                raise AssertionError()
        except:  # noqa: B001
            # We intentionally use a bare except here. See the comment above
            # regarding a pypy bug as to why.
            raise
    except TypeError:
        BROKEN_PYPY_CTXMGR_EXIT = True
    except AssertionError:
        pass
    
            #: a dictionary with all options that were passed to the
        #: :meth:`~flask.Flask.register_blueprint` method.
        self.options = options
    
            buf.append(
            '  Make sure to directly send your %s-request to this URL '
            'since we can't make browsers or HTTP clients redirect '
            'with form data reliably or without user interaction.' % request.method
        )
        buf.append('\n\nNote: this exception is only raised in debug mode')
        AssertionError.__init__(self, ''.join(buf).encode('utf-8'))
    
    This typically means that you attempted to use functionality that needed
to interface with the current application object in some way. To solve
this, set up an application context with app.app_context().  See the
documentation for more information.\
'''
    
        CHUNK_SIZE = 1
    
        config['implicit_content_type'] = 'form'
    config.save()
    config.load()
    assert 'implicit_content_type' not in config
    assert config['default_options'] == ['--form']
    
        def test_print_overridable_when_stdout_redirected(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=h', 'GET', httpbin.url + '/get', env=env)
        assert HTTP_OK in r

    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
    def empty_cell(empty=True):
    '''Create an empty cell.'''
    def f():
        print(a)
    # the intent of the following line is simply 'if False:';  it's
    # spelt this way to avoid the danger that a future optimization
    # might simply remove an 'if False:' code block.
    if not empty:
        a = 1729
    return f.__closure__[0]
    
            if isinstance(obj, types.ModuleType):
            return self.loadTestsFromModule(obj)
        elif isinstance(obj, type) and issubclass(obj, case.TestCase):
            return self.loadTestsFromTestCase(obj)
        elif (isinstance(obj, types.FunctionType) and
              isinstance(parent, type) and
              issubclass(parent, case.TestCase)):
            name = parts[-1]
            inst = parent(name)
            # static methods follow a different path
            if not isinstance(getattr(inst, name), types.FunctionType):
                return self.suiteClass([inst])
        elif isinstance(obj, suite.TestSuite):
            return obj
        if callable(obj):
            test = obj()
            if isinstance(test, suite.TestSuite):
                return test
            elif isinstance(test, case.TestCase):
                return self.suiteClass([test])
            else:
                raise TypeError('calling %s returned %s, not a test' %
                                (obj, test))
        else:
            raise TypeError('don't know how to make test from: %s' % obj)
    
        # 'The specifier name is a ``dotted name'' that may resolve either to
    # a module, a test case class, a TestSuite instance, a test method
    # within a test case class, or a callable object which returns a
    # TestCase or TestSuite instance.'
    #
    # What happens when the module is found, but the attribute isn't?
    def test_loadTestsFromName__unknown_attr_name_on_package(self):
        loader = unittest.TestLoader()
    
    
class TestSymbolGeneration(unittest.TestCase):
    
        def testSeekPreStartMultiStream(self):
        self.createTempFile(streams=2)
        with BZ2File(self.filename) as bz2f:
            bz2f.seek(-150)
            self.assertEqual(bz2f.tell(), 0)
            self.assertEqual(bz2f.read(), self.TEXT * 2)
    
    # Create the base text message.
msg = EmailMessage()
msg['Subject'] = 'Ayons asperges pour le déjeuner'
msg['From'] = Address('Pepé Le Pew', 'pepe', 'example.com')
msg['To'] = (Address('Penelope Pussycat', 'penelope', 'example.com'),
             Address('Fabrette Pussycat', 'fabrette', 'example.com'))
msg.set_content('''\
Salut!
    
    '''Send the contents of a directory as a MIME message.'''
    
    # If we want to print a preview of the message content, we can extract whatever
# the least formatted payload is and print the first three lines.  Of course,
# if the message has no plain text part printing the first three lines of html
# is probably useless, but this is just a conceptual example.
simplest = msg.get_body(preferencelist=('plain', 'html'))
print()
print(''.join(simplest.get_content().splitlines(keepends=True)[:3]))
    
        print('-' * 20)
    
    def plus(a, b):
    time.sleep(0.5*random.random())
    return a + b
    
    if os.path.exists(DB_FILE):
    os.remove(DB_FILE)
    
    '''
*What is this pattern about?