
        
            auto_json = args.data and not args.form
    if args.json or auto_json:
        default_headers['Accept'] = JSON_ACCEPT
        if args.json or (auto_json and args.data):
            default_headers['Content-Type'] = JSON_CONTENT_TYPE
    
            headers = [
            '%s: %s' % (
                name,
                value if isinstance(value, str) else value.decode('utf8')
            )
            for name, value in headers.items()
        ]
    
        def __init__(self, **kwargs):
        '''
        :param env: an class:`Environment` instance
        :param kwargs: additional keyword argument that some
                       processor might require.
    
        name = 'Basic HTTP auth'
    auth_type = 'basic'
    
        '''
    return path.replace('\\', '\\\\\\')
    
    
def test_auth_plugin_require_auth_false_and_auth_provided(httpbin):
    
        def test_print_overridable_when_stdout_redirected(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=h', 'GET', httpbin.url + '/get', env=env)
        assert HTTP_OK in r

    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
    
def _plot(results, metrics, formats, title, x_ticks, x_label,
          format_markers=('x', '|', 'o', '+'),
          metric_colors=('c', 'm', 'y', 'k', 'g', 'r', 'b')):
    '''
    Plot the results by metric, format and some other variable given by
    x_label
    '''
    fig = plt.figure('scikit-learn multilabel metrics benchmarks')
    plt.title(title)
    ax = fig.add_subplot(111)
    for i, metric in enumerate(metrics):
        for j, format in enumerate(formats):
            ax.plot(x_ticks, results[i, j].flat,
                    label='{}, {}'.format(metric, format),
                    marker=format_markers[j],
                    color=metric_colors[i % len(metric_colors)])
    ax.set_xlabel(x_label)
    ax.set_ylabel('Time (s)')
    ax.legend()
    plt.show()
    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
        ###########################################################################
    # List sampling algorithm
    ###########################################################################
    # We assume that sampling algorithm has the following signature:
    #   sample(n_population, n_sample)
    #
    sampling_algorithm = {}
    
    from time import time
    
    File: sparsity_benchmark.py
Function: benchmark_sparse_predict at line 56
Total time: 0.39274 s
    
        mem_usage = memory_usage(run_vectorizer(Vectorizer, text, **params))
    
        xx = np.arange(start_dim, start_dim + n * step, step)
    plt.subplot(212)
    plt.title('Learning in high dimensional spaces')
    plt.plot(xx, scikit_classifier_results, 'g-', label='classification')
    plt.plot(xx, scikit_regressor_results, 'r-', label='regression')
    plt.legend(loc='upper left')
    plt.xlabel('number of dimensions')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
        Example: ::