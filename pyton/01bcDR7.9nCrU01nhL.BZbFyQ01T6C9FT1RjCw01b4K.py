
        
        _codes = {
    }
    
    
@pytest.mark.parametrize(
    'value, length', (
        ('', 0),
        ('T', 1),
        ('Test', 4),
        ('Cont', 0),
        ('Other', -5),
        ('Content', None),
    ))
def test_iter_slices(value, length):
    if length is None or (length <= 0 and len(value) > 0):
        # Reads all content at once
        assert len(list(iter_slices(value, length))) == 1
    else:
        assert len(list(iter_slices(value, 1))) == length
    
    
def check_compatibility(urllib3_version, chardet_version):
    urllib3_version = urllib3_version.split('.')
    assert urllib3_version != ['dev']  # Verify urllib3 isn't installed from git.
    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary, list of tuples, bytes, or file-like
        object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
            start = datetime.now()
        ridge = linear_model.Ridge(alpha=1.)
        ridge.fit(X, Y)
        time_ridge[i] = total_seconds(datetime.now() - start)
    
        if args.plot is not None:
        max_val = getattr(args, args.plot)
        if args.plot in ('classes', 'samples'):
            min_val = 2
        else:
            min_val = 0
        steps = np.linspace(min_val, max_val, num=args.n_steps + 1)[1:]
        if args.plot in ('classes', 'samples'):
            steps = np.unique(np.round(steps).astype(int))
        setattr(args, args.plot, steps)
    
                print('Fast K-Means')
            # let's prepare the data in small chunks
            mbkmeans = MiniBatchKMeans(init='k-means++',
                                       n_clusters=10,
                                       batch_size=chunk)
            tstart = time()
            mbkmeans.fit(data)
            delta = time() - tstart
            print('Speed: %0.3fs' % delta)
            print('Inertia: %f' % mbkmeans.inertia_)
            print()
            print()
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
                gc.collect()
            print('benchmarking scikit-learn randomized_svd: n_iter=0')
            tstart = time()
            randomized_svd(X, rank, n_iter=0)
            results['scikit-learn randomized_svd (n_iter=0)'].append(
                time() - tstart)
    
                print('=======================')
            print('Round %d %d' % (i, j))
            print('n_features:', n_features)
            print('n_samples:', n_train)
    
    ROOT_URL = 'https://api.github.com/repos/scikit-learn/scikit-learn.github.io/contents/'  # noqa
RAW_FMT = 'https://raw.githubusercontent.com/scikit-learn/scikit-learn.github.io/master/%s/documentation.html'  # noqa
VERSION_RE = re.compile(r'\bVERSION:\s*'([^']+)'')
NAMED_DIRS = ['dev', 'stable']
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
    from . import flash_briefings, intent, smart_home
from .const import (
    CONF_AUDIO, CONF_DISPLAY_URL, CONF_TEXT, CONF_TITLE, CONF_UID, DOMAIN,
    CONF_FILTER, CONF_ENTITY_CONFIG)
    
    
@asyncio.coroutine
def async_trigger(hass, config, action):
    '''Listen for state changes based on configuration.'''
    if CONF_AT in config:
        at_time = config.get(CONF_AT)
        hours, minutes, seconds = at_time.hour, at_time.minute, at_time.second
    else:
        hours = config.get(CONF_HOURS)
        minutes = config.get(CONF_MINUTES)
        seconds = config.get(CONF_SECONDS)
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/browser/
'''
import voluptuous as vol
    
        def _get_value(self, hass, data, config_key):
        '''Get value.'''
        customize = hass.data.get(DATA_CUSTOMIZE, {}).get(config_key) or {}
        return {'global': customize, 'local': data.get(config_key, {})}
    
        @asyncio.coroutine
    def get(self, request):
        '''Request suite status.'''
        inp = yield from hassbian_status(request.app['hass'], self._test_mode)
    
            # At this point it is difficult to tell if a connection is established.
        # So just check for null objects.
        if self.fritz_box is None or not self.fritz_box.modelname:
            self.success_init = False