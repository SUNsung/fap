
        
        print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    # The suffix of source filenames.
source_suffix = '.rst'
    
        def test_youtube(self):
        self._assert_restricted('07FYdnEawAQ', '07FYdnEawAQ.mp4', 10)
    
    import io
import re
    
    
if __name__ == '__main__':
    main()

    
        function_name = module.params.get('function_name')
    if function_name:
        try:
            # get_policy returns a JSON string so must convert to dict before reassigning to its key
            lambda_facts.update(policy=json.loads(client.get_policy(FunctionName=function_name)['Policy']))
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(policy={})
            else:
                module.fail_json_aws(e, msg='Trying to get {0} policy'.format(function_name))
    else:
        module.fail_json(msg='Parameter function_name required for query=policy.')
    
    
def protocol_to_string(protocol):
    protocol = protocol_to_tuple(protocol)
    if protocol[0] is True:
        return 'Tcp'
    elif protocol[1] is True:
        return 'Udp'
    elif protocol[2] is True:
        return 'Icmp'
    elif protocol[3] is True:
        return 'Other'
    elif protocol[4] is True:
        return 'Any'
    
        # Insert state-specific attributes to body
    if state == 'started':
        for k in ('source_system', 'env', 'owner', 'description'):
            v = module.params[k]
            if v is not None:
                body[k] = v
    
        module.exit_json(changed=True, device=device)
    
            print('benchmarking scikit-learn: ')
        scikit_results.append(bench(ScikitLasso, X, Y, X_test, Y_test, coef_))
        print('benchmarking glmnet: ')
        glmnet_results.append(bench(GlmnetLasso, X, Y, X_test, Y_test, coef_))
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    ratio = scikits_time / scipy_time
    
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
    
    Line #      Hits         Time  Per Hit   % Time  Line Contents
==============================================================
    51                                           @profile
    52                                           def benchmark_dense_predict():
    53       301          640      2.1      0.1      for _ in range(300):
    54       300       532339   1774.5     99.9          clf.predict(X_test)
    
        This is called by sphinx.ext.linkcode
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    This example demonstrates how to generate a checkerboard dataset and
bicluster it using the Spectral Biclustering algorithm.
    
    # Create a graph capturing local connectivity. Larger number of neighbors
# will give more homogeneous clusters to the cost of computation
# time. A very large number of neighbors gives more evenly distributed
# cluster sizes, but may not impose the local manifold structure of
# the data
knn_graph = kneighbors_graph(X, 30, include_self=False)
    
    '''
print(__doc__)
    
    '''
=========================================================
Feature agglomeration
=========================================================
    
            ref_suite = unittest.TestSuite([testcase_1])
        self.assertEqual(list(suite), [ref_suite])
    
    for excname in PYTHON3_IMPORTERROR_EXCEPTIONS:
    REVERSE_NAME_MAPPING[('builtins', excname)] = ('exceptions', 'ImportError')

    
    class NTEventLogHandler(logging.Handler):
    '''
    A handler class which sends events to the NT Event Log. Adds a
    registry entry for the specified application name. If no dllname is
    provided, win32service.pyd (which contains some basic message
    placeholders) is used. Note that use of these placeholders will make
    your event logs big, as the entire message source is held in the log.
    If you want slimmer logs, you have to pass in the name of your own DLL
    which contains the message definitions you want to use in the event log.
    '''
    def __init__(self, appname, dllname=None, logtype='Application'):
        logging.Handler.__init__(self)
        try:
            import win32evtlogutil, win32evtlog
            self.appname = appname
            self._welu = win32evtlogutil
            if not dllname:
                dllname = os.path.split(self._welu.__file__)
                dllname = os.path.split(dllname[0])
                dllname = os.path.join(dllname[0], r'win32service.pyd')
            self.dllname = dllname
            self.logtype = logtype
            self._welu.AddSourceToRegistry(appname, dllname, logtype)
            self.deftype = win32evtlog.EVENTLOG_ERROR_TYPE
            self.typemap = {
                logging.DEBUG   : win32evtlog.EVENTLOG_INFORMATION_TYPE,
                logging.INFO    : win32evtlog.EVENTLOG_INFORMATION_TYPE,
                logging.WARNING : win32evtlog.EVENTLOG_WARNING_TYPE,
                logging.ERROR   : win32evtlog.EVENTLOG_ERROR_TYPE,
                logging.CRITICAL: win32evtlog.EVENTLOG_ERROR_TYPE,
         }
        except ImportError:
            print('The Python Win32 extensions for NT (service, event '\
                        'logging) appear not to be available.')
            self._welu = None
    
            for button, filename, name in button_sources:
            with  self.subTest(name=name):
                button.invoke()
                fn = findfile(filename, subdir='idlelib')
                get = dialog._current_textview.viewframe.textframe.text.get
                with open(fn, encoding='utf-8') as f:
                    self.assertEqual(f.readline().strip(), get('1.0', '1.end'))
                    f.readline()
                    self.assertEqual(f.readline().strip(), get('3.0', '3.end'))
                dialog._current_textview.destroy()
    
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

    
    from email.policy import default
    
            try:
            print(list(pool.imap(f, list(range(10)))))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from list(pool.imap())')
        else:
            raise AssertionError('expected ZeroDivisionError')