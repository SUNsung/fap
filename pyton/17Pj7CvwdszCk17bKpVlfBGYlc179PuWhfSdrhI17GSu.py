
        
        
class WeaknessForm(forms.ModelForm):
    extra_field = forms.CharField()
    
        def _rmrf(self, dname):
        if os.path.commonprefix([self.test_dir, os.path.abspath(dname)]) != self.test_dir:
            return
        shutil.rmtree(dname)

    
            def _decorator(view_func):
            @wraps(view_func)
            def _wrapped_view(request, *args, **kwargs):
                if hasattr(middleware, 'process_request'):
                    result = middleware.process_request(request)
                    if result is not None:
                        return result
                if hasattr(middleware, 'process_view'):
                    result = middleware.process_view(request, view_func, args, kwargs)
                    if result is not None:
                        return result
                try:
                    response = view_func(request, *args, **kwargs)
                except Exception as e:
                    if hasattr(middleware, 'process_exception'):
                        result = middleware.process_exception(request, e)
                        if result is not None:
                            return result
                    raise
                if hasattr(response, 'render') and callable(response.render):
                    if hasattr(middleware, 'process_template_response'):
                        response = middleware.process_template_response(request, response)
                    # Defer running of process_response until after the template
                    # has been rendered:
                    if hasattr(middleware, 'process_response'):
                        def callback(response):
                            return middleware.process_response(request, response)
                        response.add_post_render_callback(callback)
                else:
                    if hasattr(middleware, 'process_response'):
                        return middleware.process_response(request, response)
                return response
            return _wrapped_view
        return _decorator
    return _make_decorator
    
              # We can also increment through all of the fields
          #  attached to this feature.
          for field in feature:
              # Get the name of the field (e.g. 'description')
              nm = field.name
    
        @property
    def layer_name(self):
        'Return the name of the layer for the feature.'
        name = capi.get_feat_name(self._layer._ldefn)
        return force_str(name, self.encoding, strings_only=True)
    
        # #### Layer properties ####
    @property
    def extent(self):
        'Return the extent (an Envelope) of this layer.'
        env = OGREnvelope()
        capi.get_extent(self.ptr, byref(env), 1)
        return Envelope(env)
    
            self.output.write(SUMMARY.format(
            downloaded=humanize_bytes(actually_downloaded),
            total=(self.status.total_size
                   and humanize_bytes(self.status.total_size)),
            speed=humanize_bytes(speed),
            time=time_taken,
        ))
        self.output.flush()

    
    
# bdist_wheel
extras_require = {
    # http://wheel.readthedocs.io/en/latest/#defining-conditional-dependencies
    'python_version == '3.0' or python_version == '3.1'': ['argparse>=1.2.1'],
    ':sys_platform == 'win32'': ['colorama>=0.2.4'],
}
    
        kwargs = {
        'stream': True,
        'method': args.method.lower(),
        'url': args.url,
        'headers': headers,
        'data': data,
        'verify': {
            'yes': True,
            'true': True,
            'no': False,
            'false': False,
        }.get(args.verify.lower(), args.verify),
        'cert': cert,
        'timeout': args.timeout,
        'auth': args.auth,
        'proxies': {p.key: p.value for p in args.proxy},
        'files': args.files,
        'allow_redirects': args.follow,
        'params': args.params,
    }
    
        @property
    def body(self):
        body = self._orig.body
        if isinstance(body, str):
            # Happens with JSON/form request data parsed from the command line.
            body = body.encode('utf8')
        return body or b''

    
        def process_body(self, chunk):
        if not isinstance(chunk, str):
            # Text when a converter has been used,
            # otherwise it will always be bytes.
            chunk = chunk.decode(self.msg.encoding, 'replace')
        chunk = self.formatting.format_body(content=chunk, mime=self.mime)
        return chunk.encode(self.output_encoding, 'replace')
    
    
def test_default_headers_case_insensitive(httpbin):
    '''
    <https://github.com/jakubroztocil/httpie/issues/644>
    '''
    r = http(
        '--debug',
        '--print=H',
        httpbin.url + '/post',
        'CONTENT-TYPE:application/json-patch+json',
        'a=b',
    )
    assert 'CONTENT-TYPE: application/json-patch+json' in r
    assert 'Content-Type' not in r
    
    Finally, for the last data set, it is hard to say that one sample is more
abnormal than another sample as they are uniformly distributed in a
hypercube. Except for the :class:`sklearn.svm.OneClassSVM` which overfits a
little, all estimators present decent solutions for this situation. In such a
case, it would be wise to look more closely at the scores of abnormality of
the samples as a good estimator should assign similar scores to all the
samples.
    
        loss = _LOSSES['binary_crossentropy']()
    for y_train in (np.zeros(shape=100), np.ones(shape=100)):
        y_train = y_train.astype(np.float64)
        baseline_prediction = loss.get_baseline_prediction(y_train, 1)
        assert_all_finite(baseline_prediction)
        assert np.allclose(loss.inverse_link_function(baseline_prediction),
                           y_train[0])
    
        # TASK: Build a vectorizer / classifier pipeline that filters out tokens
    # that are too rare or too frequent
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    parameters = {
        'vect__ngram_range': [(1, 1), (1, 2)],
    }
    grid_search = GridSearchCV(pipeline, parameters, n_jobs=-1)
    grid_search.fit(docs_train, y_train)
    
    
plt.show()

    
    
# Plot the distances
for index, metric in enumerate(['cosine', 'euclidean', 'cityblock']):
    avg_dist = np.zeros((n_clusters, n_clusters))
    plt.figure(figsize=(5, 4.5))
    for i in range(n_clusters):
        for j in range(n_clusters):
            avg_dist[i, j] = pairwise_distances(X[y == i], X[y == j],
                                                metric=metric).mean()
    avg_dist /= avg_dist.max()
    for i in range(n_clusters):
        for j in range(n_clusters):
            plt.text(i, j, '%5.3f' % avg_dist[i, j],
                     verticalalignment='center',
                     horizontalalignment='center')