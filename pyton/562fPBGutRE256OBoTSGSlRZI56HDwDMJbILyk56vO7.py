
        
        
class PyTest(TestCommand):
    # `$ python setup.py test' simply installs minimal requirements
    # and runs the tests with no fancy stuff like parallel execution.
    def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = [
            '--doctest-modules', '--verbose',
            './httpie', './tests'
        ]
        self.test_suite = True
    
    
def test_missing_auth(httpbin):
    r = http(
        '--auth-type=basic',
        'GET',
        httpbin + '/basic-auth/user/password',
        error_exit_ok=True
    )
    assert HTTP_OK not in r
    assert '--auth required' in r.stderr

    
        def test_download_interrupted(self, httpbin_both):
        devnull = open(os.devnull, 'w')
        downloader = Downloader(output_file=devnull, progress_file=devnull)
        downloader.start(Response(
            url=httpbin_both.url + '/',
            headers={'Content-Length': 5}
        ))
        downloader.chunk_downloaded(b'1234')
        downloader.finish()
        assert downloader.interrupted

    
        def test_request_body_from_file_by_path(self, httpbin):
        r = http('--verbose',
                 'POST', httpbin.url + '/post', '@' + FILE_PATH_ARG)
        assert HTTP_OK in r
        assert FILE_CONTENT in r, r
        assert ''Content-Type': 'text/plain'' in r
    
                gc.collect()
            print('- benchmarking Lasso')
            clf = Lasso(alpha=alpha, fit_intercept=False,
                        precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lasso_results.append(time() - tstart)
    
                print('K-Means')
            tstart = time()
            kmeans = KMeans(init='k-means++', n_clusters=10).fit(data)
    
    import gc
import sys
from time import time
    
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

    
    import numpy as np
import scipy.sparse as sp
    
        fig = plt.figure('scikit-learn sample w/o replacement benchmark results')
    plt.title('n_population = %s, n_times = %s' %
              (opts.n_population, opts.n_times))
    ax = fig.add_subplot(111)
    for name in sampling_algorithm:
        ax.plot(ratio, time[name], label=name)
    
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

    
    
def json_urlread(url):
    try:
        return json.loads(urlopen(url).read().decode('utf8'))
    except Exception:
        print('Error reading', url, file=sys.stderr)
        raise
    
    
def user_role(name, rawtext, text, lineno,
              inliner, options=None, content=None):
    '''Sphinx role for linking to a user profile. Defaults to linking to
    GitHub profiles, but the profile URIS can be configured via the
    ``issues_user_uri`` config value.
    
    
if not os.path.exists(DATA_FOLDER):
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
            self._hass.bus.fire(EVENT_NAME, {
            EVENT_DATA_NAME: self.name,
            EVENT_DATA_ADDRESS: self.address,
            EVENT_DATA_QUEUED_TIME: time_diff,
            EVENT_DATA_TYPE: hass_click_type
        })
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
        return scanner if scanner.success_init else None
    
                    response = await self.websession.get(url)
    
            self.last_results = {}
        self.token = _get_token(self.host, self.username, self.password)
    
    
if __name__ == '__main__':
    
    
class Specification(object):
    def and_specification(self, candidate):
        raise NotImplementedError()
    
    
class Radio(object):
    
        def template():
        skeleton(getter, action)
    
    
def construct_building(cls):
    building = cls()
    building.build_floor()
    building.build_size()
    return building
    
        @lazy_property
    def relatives(self):
        # Get all relatives, let's assume that it costs much time.
        relatives = 'Many relatives.'
        return relatives
    
            if start == end:
            return path
        shortest = None
        for node in self.graph.get(start, []):
            if node not in path:
                newpath = self.find_shortest_path(node, end, path[:])
                if newpath:
                    if not shortest or len(newpath) < len(shortest):
                        shortest = newpath
        return shortest
    
        def on_switchover(self):
        super(Standby, self).on_switchover()  # message ignored
        self._hsm._next_state('active')