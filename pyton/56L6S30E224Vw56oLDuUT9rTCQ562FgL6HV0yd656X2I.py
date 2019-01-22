
        
            def complete_call(self):
        self.call.state = CallState.COMPLETE
        self.call_center.notify_call_completed(self.call)
    
            (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
        def process_query(self, query):
        query = self.parse_query(query)
        results = self.memory_cache.get(query)
        if results is None:
            results = self.reverse_index_cluster.process_search(query)
            self.memory_cache.set(query, results)
        return results
    
    
class DispatchingJinjaLoader(BaseLoader):
    '''A loader that looks for templates in the application and all
    the blueprint folders.
    '''
    
            # We attach the view class to the view function for two reasons:
        # first of all it allows us to easily figure out what class-based
        # view this thing came from, secondly it's also used for instantiating
        # the view class so you can actually replace it with something else
        # for testing purposes and debugging.
        view.view_class = cls
        view.__name__ = name
        view.__doc__ = cls.__doc__
        view.__module__ = cls.__module__
        view.methods = cls.methods
        view.provide_automatic_options = cls.provide_automatic_options
        return view
    
        .. versionadded:: 1.0
    '''
    
    
@pytest.fixture
def test_apps(monkeypatch):
    monkeypatch.syspath_prepend(
        os.path.abspath(os.path.join(
            os.path.dirname(__file__), 'test_apps'))
    )
    
    
def delete(module, connection, name):
    ''' Delete an Elasticache backup. '''
    try:
        response = connection.delete_snapshot(SnapshotName=name)
        changed = True
    except botocore.exceptions.ClientError as e:
        if e.response['Error']['Code'] == 'SnapshotNotFoundFault':
            response = {}
            changed = False
        elif e.response['Error']['Code'] == 'InvalidSnapshotState':
            module.fail_json(msg='Error: InvalidSnapshotState. The snapshot is not in an available state or failed state to allow deletion.'
                             'You may need to wait a few minutes.')
        else:
            module.fail_json(msg='Unable to delete the snapshot.', exception=traceback.format_exc())
    return response, changed
    
    
if __name__ == '__main__':
    main()

    
        if not module.params.get('api_url'):
        oneandone_conn = oneandone.client.OneAndOneService(
            api_token=module.params.get('auth_token'))
    else:
        oneandone_conn = oneandone.client.OneAndOneService(
            api_token=module.params.get('auth_token'), api_url=module.params.get('api_url'))
    
    
class CannotDropError(Exception):
    pass
    
        module = AnsibleModule(
        argument_spec=dict(
            token=dict(required=True, no_log=True),
            environment=dict(required=True),
            user=dict(required=False),
            repo=dict(required=False),
            revision=dict(required=False),
            url=dict(required=False, default='https://api.honeybadger.io/v1/deploys'),
            validate_certs=dict(default='yes', type='bool'),
        ),
        supports_check_mode=True
    )
    
        elif not running and state == 'started':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('start')
        if status in ['initializing', 'running'] or 'start pending' in status:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not started' % name, status=status)
    
            if module.params['subdue_begin'] is not None and module.params['subdue_end'] is not None:
            subdue = {'begin': module.params['subdue_begin'],
                      'end': module.params['subdue_end'],
                      }
            if 'subdue' not in check or check['subdue'] != subdue:
                check['subdue'] = subdue
                changed = True
                reasons.append('`subdue\' did not exist or was different')
        else:
            if 'subdue' in check:
                del check['subdue']
                changed = True
                reasons.append('`subdue\' was removed')
    
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
    
    
METRICS = {
    'f1': partial(f1_score, average='micro'),
    'f1-by-sample': partial(f1_score, average='samples'),
    'accuracy': accuracy_score,
    'hamming': hamming_loss,
    'jaccard': jaccard_similarity_score,
}
    
    
def benchmark(estimator, data):
    gc.collect()
    print('Benching %s' % estimator)
    t0 = time()
    estimator.fit(data)
    training_time = time() - t0
    data_t = estimator.transform(data)
    data_r = estimator.inverse_transform(data_t)
    reconstruction_error = np.mean(np.abs(data - data_r))
    return {'time': training_time, 'error': reconstruction_error}
    
                gc.collect()
            print('benchmarking lars_path (without Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            lars_path(X, y, method='lasso')
            delta = time() - tstart
            print('%0.3fs' % delta)
            results['lars_path (without Gram)'].append(delta)
    
            plt.text(1.01, 0.5, title_string,
                 transform=ax.transAxes, rotation=-90,
                 ha='left', va='center', fontsize=20)
    
    from sklearn.utils import check_random_state
from sklearn.metrics.pairwise import pairwise_distances
from sklearn.metrics.pairwise import pairwise_kernels
    
    
def setup(app):
    # Format template for issues URI
    # e.g. 'https://github.com/sloria/marshmallow/issues/{issue}
    app.add_config_value('issues_uri', default=None, rebuild='html')
    # Shortcut for GitHub, e.g. 'sloria/marshmallow'
    app.add_config_value('issues_github_path', default=None, rebuild='html')
    # Format template for user profile URI
    # e.g. 'https://github.com/{user}'
    app.add_config_value('issues_user_uri', default=None, rebuild='html')
    app.add_role('issue', issue_role)
    app.add_role('user', user_role)

    
            # split the paragraph into fake smaller paragraphs to make the
        # problem harder e.g. more similar to tweets
        if lang in ('zh', 'ja'):
        # FIXME: whitespace tokenizing does not work on chinese and japanese
            continue
        words = content.split()
        n_groups = len(words) / n_words_per_short_text
        if n_groups < 1:
            continue
        groups = np.array_split(words, n_groups)
    
    import os
import tarfile
from contextlib import closing
    
    This example illustrates the need for robust covariance estimation
on a real data set. It is useful both for outlier detection and for
a better understanding of the data structure.
    
    # Author: Emmanuelle Gouillart <emmanuelle.gouillart@nsup.org>
# License: BSD 3 clause
    
        def start_requests(self):
        url = self.benchurl
        if self.latency is not None:
            url += '?latency={0}'.format(self.latency)
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
        def run(self, args, opts):
        # load contracts
        contracts = build_component_list(self.settings.getwithbase('SPIDER_CONTRACTS'))
        conman = ContractsManager(load_object(c) for c in contracts)
        runner = TextTestRunner(verbosity=2 if opts.verbose else 1)
        result = TextTestResult(runner.stream, runner.descriptions, runner.verbosity)
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
    from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
    
        def run(self, args, opts):
        if opts.list:
            self._list_templates()
            return
        if opts.dump:
            template_file = self._find_template(opts.dump)
            if template_file:
                with open(template_file, 'r') as f:
                    print(f.read())
            return
        if len(args) != 2:
            raise UsageError()
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}