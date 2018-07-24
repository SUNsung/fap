
        
        anchor = '###'
min_entries_per_section = 3
auth_keys = ['apiKey', 'OAuth', 'X-Mashape-Key', 'No']
punctuation = ['.', '?', '!']
https_keys = ['Yes', 'No']
cors_keys = ['Yes', 'No', 'Unknown']
    
        def save_session(self, app, session, response):
        '''This is called for actual sessions returned by :meth:`open_session`
        at the end of the request.  This is still called during a request
        context so if you absolutely need access to the request you can do
        that.
        '''
        raise NotImplementedError()
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
        def get_source(self, environment, template):
        if self.app.config['EXPLAIN_TEMPLATE_LOADING']:
            return self._get_source_explained(environment, template)
        return self._get_source_fast(environment, template)
    
    
def test_explicit_instance_paths(modules_tmpdir):
    with pytest.raises(ValueError) as excinfo:
        flask.Flask(__name__, instance_path='instance')
    assert 'must be absolute' in str(excinfo.value)
    
        @app.route('/')
    def index():
        calls.append('handler')
        return 'ignored anyway'
    
        @app.route('/')
    def index():
        return flask.render_template('template_filter.html', value='abcd')
    
            print('benchmarking scikit-learn: ')
        scikit_results.append(bench(ScikitLasso, X, Y, X_test, Y_test, coef_))
        print('benchmarking glmnet: ')
        glmnet_results.append(bench(GlmnetLasso, X, Y, X_test, Y_test, coef_))
    
                k_results_build[algorithm][i] = (t1 - t0)
            k_results_query[algorithm][i] = (t2 - t1)
    
    def plot(func):
    random_state = check_random_state(0)
    one_core = []
    multi_core = []
    sample_sizes = range(1000, 6000, 1000)
    
    # TASK: Predict the outcome on the testing set in a variable named y_predicted
    
    plt.figure(2)  # 'banana' shape
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X2[:, 0], X2[:, 1], color='black')
plt.xlim((xx2.min(), xx2.max()))
plt.ylim((yy2.min(), yy2.max()))
plt.legend((legend2_values_list[0].collections[0],
            legend2_values_list[1].collections[0],
            legend2_values_list[2].collections[0]),
           (legend2_keys_list[0], legend2_keys_list[1], legend2_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('% lower status of the population')
plt.xlabel('average number of rooms per dwelling')
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
    This example demonstrates how to generate a dataset and bicluster it
using the Spectral Co-Clustering algorithm.
    
    The example is engineered to show the effect of the choice of different
metrics. It is applied to waveforms, which can be seen as
high-dimensional vector. Indeed, the difference between metrics is
usually more pronounced in high dimension (in particular for euclidean
and cityblock).
    
    
def inet_pton(address_family, ip_string):
    addr = sockaddr()
    addr.sa_family = address_family
    addr_size = ctypes.c_int(ctypes.sizeof(addr))
    
    - RecognitionException
  - MismatchedRangeException
  - MismatchedSetException
    - MismatchedNotSetException
    .
  - MismatchedTokenException
  - MismatchedTreeNodeException
  - NoViableAltException
  - EarlyExitException
  - FailedPredicateException
  .
.
    
    
    {
    {        tokens.insertAfter('pass1', t, 'text to put after t');}
        tokens.insertAfter('pass2', u, 'text after u');}
        System.out.println(tokens.toString('pass1'));
        System.out.println(tokens.toString('pass2'));
    
        def test_parse_from_file3(self):
        with open(util.get_data_filename('multiline_quotes.conf')) as handle:
            parsed = util.filter_comments(load(handle))
        self.assertEqual(
            parsed,
            [[['http'],
                [[['server'],
                    [['listen', '*:443'],
                    [['location', '/'],
                        [['body_filter_by_lua',
                          '\'ngx.ctx.buffered = (ngx.ctx.buffered or '')'
                          ' .. string.sub(ngx.arg[1], 1, 1000)\n'
                          '                            '
                          'if ngx.arg[2] then\n'
                          '                              '
                          'ngx.var.resp_body = ngx.ctx.buffered\n'
                          '                            end\'']]]]]]]])
    
        def setUp(self):
        from acme.errors import PollError
        self.timeout = PollError(
            exhausted=set([mock.sentinel.AR]),
            updated={})
        self.invalid = PollError(exhausted=set(), updated={
            mock.sentinel.AR: mock.sentinel.AR2})
    
    # Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'certbot-apache', u'certbot-apache Documentation',
     author, 'certbot-apache', 'One line description of project.',
     'Miscellaneous'),
]