
        
            print()
    print('Classification performance:')
    print('===========================')
    print()
    print('%s %s %s %s' % ('Classifier  ', 'train-time', 'test-time',
                           'Accuracy'))
    print('-' * 44)
    for name in sorted(accuracy, key=accuracy.get):
        print('%s %s %s %s' % (name.ljust(16),
                               ('%.4fs' % train_time[name]).center(10),
                               ('%.4fs' % test_time[name]).center(10),
                               ('%.4f' % accuracy[name]).center(10)))
    
    
def plot_feature_errors(all_errors, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_errors['pca'], label='PCA')
    plot_results(all_components, all_errors['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. n_components\n'
                 'LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Mean absolute error')
    
    plot(euclidean_distances)
plot(rbf_kernels)
plt.show()

    
       ###########################################################################
    # Set custom automatic method selection
    sampling_algorithm['custom-auto'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='auto',
                                       random_state=random_state)
    
                std = X_train.std(axis=0)
            mean = X_train.mean(axis=0)
            X_train = (X_train - mean) / std
            X_test = (X_test - mean) / std
    
    input data sparsity: 0.050000
true coef sparsity: 0.000100
test data sparsity: 0.027400
model sparsity: 0.000024
r^2 on test data (dense model) : 0.233651
r^2 on test data (sparse model) : 0.233651
Wrote profile results to sparsity_benchmark.py.lprof
Timer unit: 1e-06 s
    
    ROOT_URL = 'https://api.github.com/repos/scikit-learn/scikit-learn.github.io/contents/'  # noqa
RAW_FMT = 'https://raw.githubusercontent.com/scikit-learn/scikit-learn.github.io/master/%s/documentation.html'  # noqa
VERSION_RE = re.compile(r'\bVERSION:\s*'([^']+)'')
NAMED_DIRS = ['dev', 'stable']
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (14 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
        self._cached_response = self.HandleFuture( self._response_future,
                                               truncate_message = True )
    
    
  def Start( self ):
    self.PostDataToHandler( {},
                            'shutdown',
                            TIMEOUT_SECONDS,
                            display_message = False )
    
    
class FakeResponse( object ):
  '''A fake version of a requests response object, just about suitable for
  mocking a server response. Not usually used directly. See
  MockServerResponse* methods'''
  def __init__( self, response, exception ):
    self._json = response
    self._exception = exception
    self.status_code = requests.codes.ok
    self.text = not exception
    
    
@patch( 'ycm.vimsupport.GetVariableValue',
        GetVariableValue_CompleteItemIs( 'Test' ) )
@patch( 'ycm.vimsupport.ReplaceChunks' )
def PostCompleteFixIt_ApplyFixIt_EmptyFixIt_test( replace_chunks, *args ):
  completions = [
    BuildCompletionFixIt( [ { 'chunks': [] } ] )
  ]
  with _SetUpCompleteDone( completions ) as request:
    request._OnCompleteDone_FixIt()
    replace_chunks.assert_called_once_with( [], silent = True )
    
        def do_something(self, something):
        return 'Doing %s' % something
    
    ### OUTPUT ###
# Setting up the Test
# Inserting the execution begin status in the Database
# Executing the test
# Tearing down
# Updating the test results in Database
# Reporting the results of Test
# Setting up the Test
# Inserting the execution begin status in the Database
# Reporter Class is preparing to report the results
# Problem in setup. Test not executed.
# Test not executed. No tear down required.
# Setting up the Test
# Inserting the execution begin status in the Database
# Executing the test
# Tearing down
# Updating the test results in Database
# Reporting the results of Test

    
        print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    print(u'Setting Data 1 = 3')
    data1.data = 3
    print(u'Setting Data 2 = 5')
    data2.data = 5
    print(u'Detach HexViewer from data1 and data2.')
    data1.detach(view2)
    data2.detach(view2)
    print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    
        def scan(self):
        self.state.scan()
    
    The idea is to abstract the creation of objects depending on business
logic, platform choice, etc.
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
        try:
        cognito.client.resend_confirmation_code(
            Username=email,
            ClientId=cognito.client_id
        )
    except ClientError as err:
        raise _map_aws_exception(err)
    
    from homeassistant.components.device_tracker import DOMAIN
    
            if self.accountname in _CONFIGURING:
            request_id = _CONFIGURING.pop(self.accountname)
            configurator = self.hass.components.configurator
            configurator.request_done(request_id)