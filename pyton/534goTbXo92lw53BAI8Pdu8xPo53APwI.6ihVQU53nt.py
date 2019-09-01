
        
                # Add a 'Vary: Cookie' header if the session was accessed at all.
        if session.accessed:
            response.vary.add('Cookie')
    
        @app.route('/')
    def index():
        pass
    
        # import app with module's absolute path
    cli_app_path = os.path.abspath(
        os.path.join(os.path.dirname(__file__), 'test_apps', 'cliapp', 'app.py')
    )
    obj = ScriptInfo(app_import_path=cli_app_path)
    app = obj.load_app()
    assert app.name == 'testapp'
    assert obj.load_app() is app
    obj = ScriptInfo(app_import_path=cli_app_path + ':testapp')
    app = obj.load_app()
    assert app.name == 'testapp'
    assert obj.load_app() is app
    
    In the second benchmark, we increase the number of dimensions of the
training set. Then we plot the computation time as function of
the number of dimensions.
    
    
if __name__ == '__main__':
    # NOTE: we put the following in a 'if __name__ == '__main__'' protected
    # block to be able to use a multi-core grid search that also works under
    # Windows, see: http://docs.python.org/library/multiprocessing.html#windows
    # The multiprocessing module is used as the backend of joblib.Parallel
    # that is used when n_jobs != 1 in GridSearchCV
    
    solutions = os.listdir(exercise_dir)
    
    # Plot the results (= shape of the data points cloud)
plt.figure(1)  # two clusters
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X1[:, 0], X1[:, 1], color='black')
bbox_args = dict(boxstyle='round', fc='0.8')
arrow_args = dict(arrowstyle='->')
plt.annotate('several confounded points', xy=(24, 19),
             xycoords='data', textcoords='data',
             xytext=(13, 10), bbox=bbox_args, arrowprops=arrow_args)
plt.xlim((xx1.min(), xx1.max()))
plt.ylim((yy1.min(), yy1.max()))
plt.legend((legend1_values_list[0].collections[0],
            legend1_values_list[1].collections[0],
            legend1_values_list[2].collections[0]),
           (legend1_keys_list[0], legend1_keys_list[1], legend1_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('accessibility to radial highways')
plt.xlabel('pupil-teacher ratio by town')
    
    from sklearn import datasets, cluster
from sklearn.feature_extraction.image import grid_to_graph
    
        # ============
    # Create cluster objects
    # ============
    ward = cluster.AgglomerativeClustering(
        n_clusters=params['n_clusters'], linkage='ward')
    complete = cluster.AgglomerativeClustering(
        n_clusters=params['n_clusters'], linkage='complete')
    average = cluster.AgglomerativeClustering(
        n_clusters=params['n_clusters'], linkage='average')
    single = cluster.AgglomerativeClustering(
        n_clusters=params['n_clusters'], linkage='single')
    
    n = 1000
p = 10
X = np.random.normal(size=n * p).reshape((n, p))
y = X[:, 0] + 2 * X[:, 1] + np.random.normal(size=n * 1) + 5
pls1 = PLSRegression(n_components=3)
pls1.fit(X, y)
# note that the number of components exceeds 1 (the dimension of y)
print('Estimated betas')
print(np.round(pls1.coef_, 1))
    
        '''
    
        achall = achallenges.KeyAuthorizationAnnotatedChallenge(
        challb=acme_util.DNS01, domain=DOMAIN, account_key=KEY)
    
            data = {
            'kind': 'dns#change',
            'additions': [
                {
                    'kind': 'dns#resourceRecordSet',
                    'type': 'TXT',
                    'name': record_name + '.',
                    'rrdatas': add_records,
                    'ttl': record_ttl,
                },
            ],
        }
    
    
@pytest.fixture()
def context(request):
    # Fixture request is a built-in pytest fixture describing current test request.
    integration_test_context = nginx_context.IntegrationTestsContext(request)
    try:
        yield integration_test_context
    finally:
        integration_test_context.cleanup()
    
        if len( namespaces ) > 1:
      choices = [ '{0} {1}'.format( i + 1, n )
                  for i, n in enumerate( namespaces ) ]
      choice = vimsupport.PresentDialog( 'Insert which namespace:', choices )
      if choice < 0:
        return
      namespace = namespaces[ choice ]
    else:
      namespace = namespaces[ 0 ]
    
      current_buffer = VimBuffer( 'buffer',
                              contents = [ '†åsty_π.t' ],
                              filetype = FILETYPE,
                              omnifunc = Omnifunc )
    
    from ycm.client.base_request import BaseRequest
    
    
def FormatDebugInfoResponse_ExtraConfFoundButNotLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found but not loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    
from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      def shutdown( self, wait=True ):
    with self._shutdown_lock:
      self._shutdown = True
      self._work_queue.put( None )
    if wait:
      for t in self._threads:
        t.join()
  shutdown.__doc__ = _base.Executor.shutdown.__doc__

    
            Args:
            fn: A callable that will take as many arguments as there are
                passed iterables.
            timeout: The maximum number of seconds to wait. If None, then there
                is no limit on the wait time.
    
                if work_item.future.set_running_or_notify_cancel():
                call_queue.put(_CallItem(work_id,
                                         work_item.fn,
                                         work_item.args,
                                         work_item.kwargs),
                               block=True)
            else:
                del pending_work_items[work_id]
                continue
    
            params = apigateway_listener.extract_path_params('/foo/bar/baz', '/foo/{proxy+}')
        self.assertEqual(params, {'proxy+': 'bar/baz'})
    
        def test_non_ascii_chars(self):
        dynamodb = aws_stack.connect_to_resource('dynamodb')
    
        Each time step incurs -1 reward, and stepping into the cliff incurs -100 reward
    and a reset to the start. An episode terminates when the agent reaches the goal.
    '''
    metadata = {'render.modes': ['human', 'ansi']}
    
        def render_observation(self):
        x = self.read_head_position
        label = 'Observation Grid    : '
        x_str = ''
        for j in range(-1, self.rows+1):
            if j != -1:
                x_str += ' ' * len(label)
            for i in range(-2, self.input_width + 2):
                if i == x[0] and j == x[1]:
                    x_str += colorize(self._get_str_obs((i, j)), 'green', highlight=True)
                else:
                    x_str += self._get_str_obs((i, j))
            x_str += '\n'
        x_str = label + x_str
        return x_str
