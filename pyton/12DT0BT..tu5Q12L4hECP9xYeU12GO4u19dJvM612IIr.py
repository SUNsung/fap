
        
            # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
            self.assertTrue(
            isinstance(got, compat_str),
            'Expected a %s object, but got %s for field %s' % (
                compat_str.__name__, type(got).__name__, field))
        self.assertTrue(
            match_rex.match(got),
            'field %s (value: %r) should match %r' % (field, got, match_str))
    elif isinstance(expected, compat_str) and expected.startswith('startswith:'):
        start_str = expected[len('startswith:'):]
        self.assertTrue(
            isinstance(got, compat_str),
            'Expected a %s object, but got %s for field %s' % (
                compat_str.__name__, type(got).__name__, field))
        self.assertTrue(
            got.startswith(start_str),
            'field %s (value: %r) should start with %r' % (field, got, start_str))
    elif isinstance(expected, compat_str) and expected.startswith('contains:'):
        contains_str = expected[len('contains:'):]
        self.assertTrue(
            isinstance(got, compat_str),
            'Expected a %s object, but got %s for field %s' % (
                compat_str.__name__, type(got).__name__, field))
        self.assertTrue(
            contains_str in got,
            'field %s (value: %r) should contain %r' % (field, got, contains_str))
    elif isinstance(expected, type):
        self.assertTrue(
            isinstance(got, expected),
            'Expected type %r for field %s, but got value %r of type %r' % (expected, field, got, type(got)))
    elif isinstance(expected, dict) and isinstance(got, dict):
        expect_dict(self, got, expected)
    elif isinstance(expected, list) and isinstance(got, list):
        self.assertEqual(
            len(expected), len(got),
            'Expect a list of length %d, but got a list of length %d for field %s' % (
                len(expected), len(got), field))
        for index, (item_got, item_expected) in enumerate(zip(got, expected)):
            type_got = type(item_got)
            type_expected = type(item_expected)
            self.assertEqual(
                type_expected, type_got,
                'Type mismatch for list item at index %d for field %s, expected %r, got %r' % (
                    index, field, type_expected, type_got))
            expect_value(self, item_got, item_expected, field)
    else:
        if isinstance(expected, compat_str) and expected.startswith('md5:'):
            self.assertTrue(
                isinstance(got, compat_str),
                'Expected field %s to be a unicode object, but got value %r of type %r' % (field, got, type(got)))
            got = 'md5:' + md5(got)
        elif isinstance(expected, compat_str) and expected.startswith('mincount:'):
            self.assertTrue(
                isinstance(got, (list, dict)),
                'Expected field %s to be a list or a dict, but it is of type %s' % (
                    field, type(got).__name__))
            expected_num = int(expected.partition(':')[2])
            assertGreaterEqual(
                self, len(got), expected_num,
                'Expected %d items in field %s, but only got %d' % (expected_num, field, len(got)))
            return
        self.assertEqual(
            expected, got,
            'Invalid value for field %s, expected %r, got %r' % (field, expected, got))
    
            input_args = _find_spec('input')
        output = _find_spec('output')
    
        try:
        if args.download:
            args.follow = True  # --download implies --follow.
            downloader = Downloader(
                output_file=args.output_file,
                progress_file=env.stderr,
                resume=args.download_resume
            )
            downloader.pre_request(args.headers)
    
        def __init__(self, mime):
        self.mime = mime
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
        def test_verify_custom_ca_bundle_invalid_path(self, httpbin_secure):
        # since 2.14.0 requests raises IOError
        with pytest.raises((SSLError, IOError)):
            http(httpbin_secure.url + '/get', '--verify', '/__not_found__')
    
        def _get_path(self):
        '''Return the config file path without side-effects.'''
        raise NotImplementedError()
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
            if self.args.files and not self.args.form:
            # `http url @/path/to/file`
            file_fields = list(self.args.files.keys())
            if file_fields != ['']:
                self.error(
                    'Invalid file fields (perhaps you meant --form?): %s'
                    % ','.join(file_fields))
    
        print('duration: %0.3fs' % delta)
    print('rmse: %f' % rmse(Y_test, clf.predict(X_test)))
    print('mean coef abs diff: %f' % abs(ref_coef - clf.coef_.ravel()).mean())
    return delta
    
            # Create flat baselines to compare the variation over batch size
        all_times['pca'].extend([results_dict['pca']['time']] *
                                len(batch_sizes))
        all_errors['pca'].extend([results_dict['pca']['error']] *
                                 len(batch_sizes))
        all_times['rpca'].extend([results_dict['rpca']['time']] *
                                 len(batch_sizes))
        all_errors['rpca'].extend([results_dict['rpca']['error']] *
                                  len(batch_sizes))
        for batch_size in batch_sizes:
            ipca = IncrementalPCA(n_components=n_components,
                                  batch_size=batch_size)
            results_dict = {k: benchmark(est, data) for k, est in [('ipca',
                                                                   ipca)]}
            all_times['ipca'].append(results_dict['ipca']['time'])
            all_errors['ipca'].append(results_dict['ipca']['error'])
    
        print('Transformer performance:')
    print('===========================')
    print('Results are averaged over %s repetition(s).' % opts.n_times)
    print('')
    print('%s | %s | %s' % ('Transformer'.ljust(30),
                            'fit'.center(12),
                            'transform'.center(12)))
    print(31 * '-' + ('|' + '-' * 14) * 2)
    
        op.add_option('--algorithm',
                  dest='selected_algorithm',
                  default=default_algorithms,
                  type=str,
                  help='Comma-separated list of transformer to benchmark. '
                       'Default: %default. \nAvailable: %default')
    
    First, we fix a training set, increase the number of
samples to classify and plot number of classified samples as a
function of time.
    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    plt.xlabel('n_features / n_samples')
plt.ylabel('Classification accuracy')
    
    # 2 independent random clusterings with equal cluster number
    
    plt.show()

    
    
class Command(ScrapyCommand):