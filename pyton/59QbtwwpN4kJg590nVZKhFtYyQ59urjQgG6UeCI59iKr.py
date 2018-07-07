
        
            # noinspection PyProtectedMember
    @property
    def headers(self):
        original = self._orig.raw._original_response
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
            if now - self._prev_time >= self._update_interval:
            downloaded = self.status.downloaded
            try:
                speed = ((downloaded - self._prev_bytes) /
                         (now - self._prev_time))
            except ZeroDivisionError:
                speed = 0
    
            '''
        return headers
    
        Assumes `from __future__ import division`.
    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
            '''
        self.args.output_file_specified = bool(self.args.output_file)
        if self.args.download:
            # FIXME: Come up with a cleaner solution.
            if not self.args.output_file and not self.env.stdout_isatty:
                # Use stdout as the download output file.
                self.args.output_file = self.env.stdout
            # With `--download`, we write everything that would normally go to
            # `stdout` to `stderr` instead. Let's replace the stream so that
            # we don't have to use many `if`s throughout the codebase.
            # The response body will be treated separately.
            self.env.stdout = self.env.stderr
            self.env.stdout_isatty = self.env.stderr_isatty
        elif self.args.output_file:
            # When not `--download`ing, then `--output` simply replaces
            # `stdout`. The file is opened for appending, which isn't what
            # we want in this case.
            self.args.output_file.seek(0)
            try:
                self.args.output_file.truncate()
            except IOError as e:
                if e.errno == errno.EINVAL:
                    # E.g. /dev/null on Linux.
                    pass
                else:
                    raise
            self.env.stdout = self.args.output_file
            self.env.stdout_isatty = False
    
        xx = np.arange(100, 100 + n * step, step)
    plt.figure('scikit-learn vs. glmnet benchmark results')
    plt.title('Regression in high dimensional spaces (%d samples)' % n_samples)
    plt.plot(xx, scikit_results, 'b-', label='scikit-learn')
    plt.plot(xx, glmnet_results, 'r-', label='glmnet')
    plt.legend()
    plt.xlabel('number of features')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    
if __name__ == '__main__':
    ap = argparse.ArgumentParser()
    ap.add_argument('metrics', nargs='*', default=sorted(METRICS),
                    help='Specifies metrics to benchmark, defaults to all. '
                         'Choices are: {}'.format(sorted(METRICS)))
    ap.add_argument('--formats', nargs='+', choices=sorted(FORMATS),
                    help='Specifies multilabel formats to benchmark '
                         '(defaults to all).')
    ap.add_argument('--samples', type=int, default=1000,
                    help='The number of samples to generate')
    ap.add_argument('--classes', type=int, default=10,
                    help='The number of classes')
    ap.add_argument('--density', type=float, default=.2,
                    help='The average density of labels per sample')
    ap.add_argument('--plot', choices=['classes', 'density', 'samples'],
                    default=None,
                    help='Plot time with respect to this parameter varying '
                         'up to the specified value')
    ap.add_argument('--n-steps', default=10, type=int,
                    help='Plot this many points for each metric')
    ap.add_argument('--n-times',
                    default=5, type=int,
                    help='Time performance over n_times trials')
    args = ap.parse_args()
    
    import time
    
        class_name = info['fullname'].split('.')[0]
    if type(class_name) != str:
        # Python 2 only
        class_name = class_name.encode('utf-8')
    module = __import__(info['module'], fromlist=[class_name])
    obj = attrgetter(info['fullname'])(module)
    
    try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
    import numpy as np
from sklearn.covariance import EllipticEnvelope
from sklearn.svm import OneClassSVM
import matplotlib.pyplot as plt
import matplotlib.font_manager
from sklearn.datasets import load_boston
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
    acc_clf1, acc_clf2 = [], []
n_features_range = range(1, n_features_max + 1, step)
for n_features in n_features_range:
    score_clf1, score_clf2 = 0, 0
    for _ in range(n_averages):
        X, y = generate_data(n_train, n_features)