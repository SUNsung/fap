
        
        Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
    
@pytest.mark.skipif(sys.version_info < (2,7), reason='Only run on Python 2.7+')
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
    
def post(url, data=None, json=None, **kwargs):
    r'''Sends a POST request.
    
        def json(self, **kwargs):
        r'''Returns the json-encoded content of a response, if any.
    
        for (sbplt, vals, quantity,
         build_time, query_time) in [(311, Nrange, 'N',
                                      N_results_build,
                                      N_results_query),
                                     (312, Drange, 'D',
                                      D_results_build,
                                      D_results_query),
                                     (313, krange, 'k',
                                      k_results_build,
                                      k_results_query)]:
        ax = plt.subplot(sbplt, yscale='log')
        plt.grid(True)
    
    if __name__ == '__main__':
    list_n_samples = np.linspace(100, 10000, 5).astype(np.int)
    list_n_features = [10, 100, 1000]
    n_test = 1000
    max_iter = 1000
    noise = 0.1
    alpha = 0.01
    sgd_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    elnet_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    ridge_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    asgd_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    for i, n_train in enumerate(list_n_samples):
        for j, n_features in enumerate(list_n_features):
            X, y, coef = make_regression(
                n_samples=n_train + n_test, n_features=n_features,
                noise=noise, coef=True)
    
        xx = range(0, n * step, step)
    plt.figure('scikit-learn tree benchmark results')
    plt.subplot(211)
    plt.title('Learning with varying number of samples')
    plt.plot(xx, scikit_classifier_results, 'g-', label='classification')
    plt.plot(xx, scikit_regressor_results, 'r-', label='regression')
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    
    
    
        def test_kid_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url, kid=self.kid)
        self.assertEqual(jws.signature.combined.nonce, self.nonce)
        self.assertEqual(jws.signature.combined.url, self.url)
        self.assertEqual(jws.signature.combined.kid, self.kid)
        self.assertEqual(jws.signature.combined.jwk, None)
        # TODO: check that nonce is in protected header
    
        def test_code(self):
        from acme.messages import Error
        self.assertEqual('malformed', self.error.code)
        self.assertEqual(None, self.error_custom.code)
        self.assertEqual(None, Error().code)
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'acme-pythondoc'
    
        After removing '/files', this function splits vhost_path into the
    file path and the remaining Augeas path.
    
            '''
        if isinstance(other, self.__class__):
            return ((self.tup == other.tup) or
                    (self.tup[0] == other.tup[0] and
                     self.is_wildcard() and other.is_wildcard()))
        return False
    
        def test_filter_args_num(self):
        '''Note: This may also fail do to Include conf-enabled/ syntax.'''
        matches = self.parser.find_dir('TestArgsDirective')
    
            self.vhosts.append(
            obj.VirtualHost(
                'path', 'aug_path', set([obj.Addr.fromstring('*:80')]),
                False, False,
                'wildcard.com', set(['*.wildcard.com'])))
    
            # Setup the configuration
        addrs = self._mod_config()
        self.configurator.save('Don't lose mod_config changes', True)
        self.configurator.make_addrs_sni_ready(addrs)
    
        Note that not all entries are resources.  Specifically, directories are
    not considered resources.  Use `is_resource()` on each entry returned here
    to check if it is a resource or not.
    '''
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.contents()
    # Is the package a namespace package?  By definition, namespace packages
    # cannot have resources.  We could use _check_location() and catch the
    # exception, but that's extra work, so just inline the check.
    elif package.__spec__.origin is None or not package.__spec__.has_location:
        return ()
    else:
        package_directory = Path(package.__spec__.origin).parent
        return os.listdir(package_directory)

    
        def test_pre_initialization_api(self):
        '''
        Checks some key parts of the C-API that need to work before the runtine
        is initialized (via Py_Initialize()).
        '''
        env = dict(os.environ, PYTHONPATH=os.pathsep.join(sys.path))
        out, err = self.run_embedded_interpreter('pre_initialization_api', env=env)
        if sys.platform == 'win32':
            expected_path = self.test_exe
        else:
            expected_path = os.path.join(os.getcwd(), 'spam')
        expected_output = f'sys.executable: {expected_path}\n'
        self.assertIn(expected_output, out)
        self.assertEqual(err, '')
    
            # test that the exit message is written with backslashreplace error
        # handler to stderr
        check_exit_message(
            r'import sys; sys.exit('surrogates:\uDCFF')',
            b'surrogates:\\udcff')
    
        def test_locale_getpreferredencoding(self):
        code = 'import locale; print(locale.getpreferredencoding(False), locale.getpreferredencoding(True))'
        out = self.get_output('-X', 'utf8', '-c', code)
        self.assertEqual(out, 'UTF-8 UTF-8')
    
    def sub(pattern, repl, string, count=0, flags=0):
    '''Return the string obtained by replacing the leftmost
    non-overlapping occurrences of the pattern in string by the
    replacement repl.  repl can be either a string or a callable;
    if a string, backslash escapes in it are processed.  If it is
    a callable, it's passed the Match object and must return
    a replacement string to be used.'''
    return _compile(pattern, flags).sub(repl, string, count)
    
        def test_is_reserved(self):
        P = self.cls
        self.assertIs(False, P('').is_reserved())
        self.assertIs(False, P('/').is_reserved())
        self.assertIs(False, P('/foo/bar').is_reserved())
        self.assertIs(True, P('con').is_reserved())
        self.assertIs(True, P('NUL').is_reserved())
        self.assertIs(True, P('NUL.txt').is_reserved())
        self.assertIs(True, P('com1').is_reserved())
        self.assertIs(True, P('com9.bar').is_reserved())
        self.assertIs(False, P('bar.com9').is_reserved())
        self.assertIs(True, P('lpt1').is_reserved())
        self.assertIs(True, P('lpt9.bar').is_reserved())
        self.assertIs(False, P('bar.lpt9').is_reserved())
        # Only the last component matters
        self.assertIs(False, P('c:/NUL/con/baz').is_reserved())
        # UNC paths are never reserved
        self.assertIs(False, P('//my/share/nul/con/aux').is_reserved())
    
    
class PyCoroutineMixin(object):
    def handle_signature(self, sig, signode):
        ret = super(PyCoroutineMixin, self).handle_signature(sig, signode)
        signode.insert(0, addnodes.desc_annotation('coroutine ', 'coroutine '))
        return ret
    
        def main_method(self):
        '''will execute either _instance_method_1 or _instance_method_2
    
    
class ConcreteHandler3(Handler):
    def _handle(self, request):
        if 20 < request <= 30:
            print('request {} handled in handler 3'.format(request))
            return True
    
        def amount(self, val):
        print(val, end=' ')
        return self
    
    ###  OUTPUT ###
# Before subclassing:
# BaseRegisteredClass
# After subclassing:
# BaseRegisteredClass
# ClassRegistree

    
    *What does this example do?
Below the 'StrategyExample' is an example of the client while the two
functions; 'execute_replacement1' and 'execute_replacement2' are
examples of the implementation or strategy. In the example we can see
that the client can vary it's 'execute' method by changing the
strategy which is responsible for implementation.
    
        def get_current_time_as_html_fragment(self, time_provider):
        current_time = time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
        def now(self):
        current_time = datetime.datetime.now()
        current_time_formatted = '{}:{}'.format(current_time.hour, current_time.minute)
        return current_time_formatted
    
        def find_all_path(self, start, end, path=None):
        path = path or []
        path.append(start)
        if start == end:
            return [path]
        paths = []
        for node in self.graph.get(start, []):
            if node not in path:
                newpaths = self.find_all_path(node, end, path[:])
                paths.extend(newpaths)
        return paths