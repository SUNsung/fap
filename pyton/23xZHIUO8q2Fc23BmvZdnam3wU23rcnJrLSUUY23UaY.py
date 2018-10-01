
        
        
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
    
def _default_template_ctx_processor():
    '''Default template context processor.  Injects `request`,
    `session` and `g`.
    '''
    reqctx = _request_ctx_stack.top
    appctx = _app_ctx_stack.top
    rv = {}
    if appctx is not None:
        rv['g'] = appctx.g
    if reqctx is not None:
        rv['request'] = reqctx.request
        rv['session'] = reqctx.session
    return rv
    
        test_time = 0.0
    refleak = False  # True if the test leaked references.
    try:
        abstest = get_abs_module(ns, test)
        clear_caches()
        with saved_test_environment(test, ns.verbose, ns.quiet, pgo=ns.pgo) as environment:
            start_time = time.time()
            the_module = importlib.import_module(abstest)
            # If the test has a test_main, that will run the appropriate
            # tests.  If not, use normal unittest test loading.
            test_runner = getattr(the_module, 'test_main', None)
            if test_runner is None:
                def test_runner():
                    loader = unittest.TestLoader()
                    tests = loader.loadTestsFromModule(the_module)
                    for error in loader.errors:
                        print(error, file=sys.stderr)
                    if loader.errors:
                        raise Exception('errors while loading tests')
                    support.run_unittest(tests)
            if ns.huntrleaks:
                refleak = dash_R(the_module, test, test_runner, ns.huntrleaks)
            else:
                test_runner()
            test_time = time.time() - start_time
        post_test_cleanup()
    except support.ResourceDenied as msg:
        if not ns.quiet and not ns.pgo:
            print(test, 'skipped --', msg, flush=True)
        return RESOURCE_DENIED, test_time
    except unittest.SkipTest as msg:
        if not ns.quiet and not ns.pgo:
            print(test, 'skipped --', msg, flush=True)
        return SKIPPED, test_time
    except KeyboardInterrupt:
        raise
    except support.TestFailed as msg:
        if not ns.pgo:
            if display_failure:
                print('test', test, 'failed --', msg, file=sys.stderr,
                      flush=True)
            else:
                print('test', test, 'failed', file=sys.stderr, flush=True)
        return FAILED, test_time
    except:
        msg = traceback.format_exc()
        if not ns.pgo:
            print('test', test, 'crashed --', msg, file=sys.stderr,
                  flush=True)
        return FAILED, test_time
    else:
        if refleak:
            return FAILED, test_time
        if environment.changed:
            return ENV_CHANGED, test_time
        return PASSED, test_time
    
        def run(self):
        try:
            stop = False
            while not stop:
                stop = self._runtest()
        except BaseException:
            self.output.put((None, None, None, None))
            raise
    
        suite = unittest.TestSuite()
    suite.addTest(unittest.makeSuite(TestTests))
    stream = io.StringIO()
    runner_cls = get_test_runner_class(sum(a == '-v' for a in sys.argv))
    runner = runner_cls(sys.stdout)
    result = runner.run(suite)
    print('Output:', stream.getvalue())
    print('XML: ', end='')
    for s in ET.tostringlist(result.get_xml_element()):
        print(s.decode(), end='')
    print()

    
        # unpack non-capturing groups
    for i in range(len(subpattern))[::-1]:
        op, av = subpattern[i]
        if op is SUBPATTERN:
            group, add_flags, del_flags, p = av
            if group is None and not add_flags and not del_flags:
                subpattern[i: i+1] = p
    
    
# Are two open files really referencing the same file?
# (Not necessarily the same file descriptor!)
def sameopenfile(fp1, fp2):
    '''Test whether two open file objects reference the same file'''
    s1 = os.fstat(fp1)
    s2 = os.fstat(fp2)
    return samestat(s1, s2)
    
        @unittest.skipIf(posix is None, 'Test requires posix module')
    def test_ismount_different_device(self):
        # Simulate the path being on a different device from its parent by
        # mocking out st_dev.
        save_lstat = os.lstat
        def fake_lstat(path):
            st_ino = 0
            st_dev = 0
            if path == ABSTFN:
                st_dev = 1
                st_ino = 1
            return posix.stat_result((0, st_ino, st_dev, 0, 0, 0, 0, 0, 0, 0))
        try:
            os.lstat = fake_lstat
            self.assertIs(posixpath.ismount(ABSTFN), True)
        finally:
            os.lstat = save_lstat
    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
        def main_method(self):
        '''will execute either _instance_method_1 or _instance_method_2
    
        def undo(self):
        self.rename(self.dest, self.src)
    
        def attach(self, observer):
        if observer not in self._observers:
            self._observers.append(observer)
    
    
def main():
    message_center = Provider()
    
    ### OUTPUT ###
# We have a lovely Cat
# It says meow
#
# We have a lovely Dog
# It says woof
# ====================
# We have a lovely Cat
# It says meow
# ====================
# We have a lovely Cat
# It says meow
# ====================

    
    '''
*What is this pattern about?
This patterns aims to reduce the number of classes required by an
application. Instead of relying on subclasses it creates objects by
copying a prototypical instance at run-time.
    
        def now(self):
        current_time_is_always_midnight = '24:01'
        return current_time_is_always_midnight

    
    
class Scientist(AbstractExpert):
    @property
    def is_eager_to_contribute(self):
        return random.randint(0, 1)