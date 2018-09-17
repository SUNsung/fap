
        
            def create_release(self, tag_name, name=None, body='', draft=False, prerelease=False):
        data = {
            'tag_name': tag_name,
            'target_commitish': 'master',
            'name': name,
            'body': body,
            'draft': draft,
            'prerelease': prerelease,
        }
        req = sanitized_Request(self._API_URL, json.dumps(data).encode('utf-8'))
        return self._call(req)
    
    now = datetime.datetime.now()
now_iso = now.isoformat() + 'Z'
    
    README_FILE = 'README.md'
helptext = sys.stdin.read()
    
    
if __name__ == '__main__':
    main()

    
        for release in releases:
        compat_print(release['name'])
        for asset in release['assets']:
            asset_name = asset['name']
            total_bytes += asset['download_count'] * asset['size']
            if all(not re.match(p, asset_name) for p in (
                    r'^youtube-dl$',
                    r'^youtube-dl-\d{4}\.\d{2}\.\d{2}(?:\.\d+)?\.tar\.gz$',
                    r'^youtube-dl\.exe$')):
                continue
            compat_print(
                ' %s size: %s downloads: %d'
                % (asset_name, format_size(asset['size']), asset['download_count']))
    
                if b'\0' in line:
                raise BinarySuppressedError()
    
            :param headers: The headers as text.
    
        def register(self, *plugins):
        for plugin in plugins:
            self._plugins.append(plugin)
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
        '''
    args = httpie.cli.parser.parse_args(args=[url], env=MockEnvironment())
    assert args.auth
    assert args.auth.username == 'username'
    assert args.auth.password == ''
    
    
def test_version():
    r = http('--version', error_exit_ok=True)
    assert r.exit_status == httpie.ExitStatus.OK
    # FIXME: py3 has version in stdout, py2 in stderr
    assert httpie.__version__ == r.stderr.strip() + r.strip()
    
        def test_CRLF_headers_only(self, httpbin):
        r = http('--headers', 'GET', httpbin.url + '/get')
        body = self._validate_crlf(r)
        assert not body, 'Garbage after headers: %r' % r
    
    
DATASET_GENERATORS = {
    'perturbed_logarithm': generate_perturbed_logarithm_dataset,
    'logistic': generate_logistic_dataset,
    'pathological': generate_pathological_dataset,
}
    
    plt.xlim([-0.05, 1.05])
plt.ylim([-0.05, 1.05])
plt.xlabel('False Positive Rate')
plt.ylabel('True Positive Rate')
plt.title('Receiver operating characteristic')
plt.legend(loc='lower right')
plt.show()

    
    
@ignore_warnings
def benchmark(metrics=tuple(v for k, v in sorted(METRICS.items())),
              formats=tuple(v for k, v in sorted(FORMATS.items())),
              samples=1000, classes=4, density=.2,
              n_times=5):
    '''Times metric calculations for a number of inputs
    
            mbkmeans.fit(X)
        delta = time() - tstart
        print('Speed: %0.3fs' % delta)
        print('Inertia: %0.3fs' % mbkmeans.inertia_)
        print()
    
                gc.collect()
            print('benchmarking scikit-learn randomized_svd: n_iter=0')
            tstart = time()
            randomized_svd(X, rank, n_iter=0)
            results['scikit-learn randomized_svd (n_iter=0)'].append(
                time() - tstart)
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
        # op.add_option('--random-seed',
    #               dest='random_seed', default=13, type=int,
    #               help='Seed used by the random number generators.')
    
    from sklearn.datasets import fetch_20newsgroups
from sklearn.feature_extraction.text import (CountVectorizer, TfidfVectorizer,
                                             HashingVectorizer)
    
    
FILEPATH = os.path.join(
    os.path.abspath(os.path.dirname(os.path.dirname(__file__))), 'blns.txt')
'''Path to the file'''
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'EnvironmentProject'
        db.create_table(
            'sentry_environmentproject', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), (
                    'environment', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Environment']
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['EnvironmentProject'])
    
            # Adding unique constraint on 'UserOption', fields ['user', 'organization', 'key']
        db.create_unique('sentry_useroption', ['user_id', 'organization_id', 'key'])