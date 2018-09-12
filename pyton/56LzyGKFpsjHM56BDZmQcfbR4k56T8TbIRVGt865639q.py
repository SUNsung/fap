
        
            '''
)
output_options.add_argument(
    '--stream', '-S',
    action='store_true',
    default=False,
    help='''
    Always stream the output by line, i.e., behave like `tail -f'.
    
        for chunk in stream:
        buf.write(chunk)
        if flush:
            outfile.flush()
    
        def inner(r):
        r.headers['Authorization'] = header
        return r
    
            if isinstance(expiry, datetime):
            return expiry
        expiry = expiry or settings.SESSION_COOKIE_AGE   # Checks both None and 0 cases
        return modification + timedelta(seconds=expiry)
    
        def create(self):
        # Because a cache can fail silently (e.g. memcache), we don't know if
        # we are failing to create a new session because of a key collision or
        # because the cache is missing. So we try for a (large) number of times
        # and then raise an exception. That's the risk you shoulder if using
        # cache backing.
        for i in range(10000):
            self._session_key = self._get_new_session_key()
            try:
                self.save(must_create=True)
            except CreateError:
                continue
            self.modified = True
            return
        raise RuntimeError(
            'Unable to create a new session key. '
            'It is likely that the cache is unavailable.')
    
    
def x_robots_tag(func):
    @wraps(func)
    def inner(request, *args, **kwargs):
        response = func(request, *args, **kwargs)
        response['X-Robots-Tag'] = 'noindex, noodp, noarchive'
        return response
    return inner
    
        if dataset_name == 'forestcover':
        dataset = fetch_covtype()
        X = dataset.data
        y = dataset.target
        # normal data are those with attribute 2
        # abnormal those with attribute 4
        s = (y == 2) + (y == 4)
        X = X[s, :]
        y = y[s]
        y = (y != 2).astype(int)
    
    
if __name__ == '__main__':
    from mpl_toolkits.mplot3d import axes3d  # register the 3d projection
    import matplotlib.pyplot as plt
    
        #------------------------------------------------------------
    # varying D
    D_results_build = dict([(alg, np.zeros(len(Drange)))
                            for alg in algorithms])
    D_results_query = dict([(alg, np.zeros(len(Drange)))
                            for alg in algorithms])
    
        op.add_option('--random-seed',
                  dest='random_seed', default=13, type=int,
                  help='Seed used by the random number generators.')
    
    ###############################################################################
clf = SGDRegressor(penalty='l1', alpha=.2, fit_intercept=True, max_iter=2000,
                   tol=None)
clf.fit(X_train, y_train)
print('model sparsity: %f' % sparsity_ratio(clf.coef_))
    
    # to store the results
scikit_classifier_results = []
scikit_regressor_results = []
    
    # Gather data for each version directory, including symlinks
dirs = {}
symlinks = {}
root_listing = json_urlread(ROOT_URL)
for path_details in root_listing:
    name = path_details['name']
    if not (name[:1].isdigit() or name in NAMED_DIRS):
        continue
    if path_details['type'] == 'dir':
        html = urlopen(RAW_FMT % name).read().decode('utf8')
        version_num = VERSION_RE.search(html).group(1)
        pdf_size = get_pdf_size(name)
        dirs[name] = (version_num, pdf_size)
    
    if platform.system() in ('FreeBSD', 'Darwin'):
    server_root_tmp = FREEBSD_DARWIN_SERVER_ROOT
else:
    server_root_tmp = LINUX_SERVER_ROOT
    
        # TODO: decoder/encoder should accept cls? Otherwise, subclassing
    # JSONObjectWithFields is tricky...
    header_cls = Header
    header = jose.Field(
        'header', omitempty=True, default=header_cls(),
        decoder=header_cls.from_json)
    
        def setUp(self):
        key = jose.jwk.JWKRSA(key=KEY.public_key())
        contact = (
            'mailto:admin@foo.com',
            'tel:1234',
        )
        agreement = 'https://letsencrypt.org/terms'
    
    REWRITE_HTTPS_ARGS = [
    '^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[L,NE,R=permanent]']
'''Apache version<2.3.9 rewrite rule arguments used for redirections to
https vhost'''
    
        def test_bad_parse(self):
        # pylint: disable=protected-access
        self.config.parser.parse_file(os.path.join(
            self.config.parser.root, 'conf-available', 'bad_conf_file.conf'))
        self.assertRaises(
            errors.PluginError, self.config.check_parsing_errors, 'httpd.aug')
    
        def test_include_fullpath_trailing_slash(self):
        self.verify_fnmatch(self.config_path + '//')
    
        def test_nonexistent_like(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                for like in entrypoint.OVERRIDE_CLASSES.keys():
                    mock_like.return_value = [like]
                    self.assertEqual(entrypoint.get_configurator(),
                                     entrypoint.OVERRIDE_CLASSES[like])
    
        if not info_only and not dry_run:
        if not kwargs['caption']:
            print('Skipping danmaku.')
            return
        try:
            title = get_filename(title)
            print('Downloading %s ...\n' % (title + '.cmt.json'))
            cmt = get_srt_json(vid)
            with open(os.path.join(output_dir, title + '.cmt.json'), 'w', encoding='utf-8') as x:
                x.write(cmt)
        except:
            pass
    
            html = get_content(self.url)
    
        if re.match(r'https?://movie', url):
        title = match1(html, 'name='description' content='([^']+)')
        tid = match1(url, 'trailer/(\d+)')
        real_url = 'https://movie.douban.com/trailer/video_url?tid=%s' % tid
        type, ext, size = url_info(real_url)
    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
        vids = matchall(content, yinyuetai_embed_patterns)
    for vid in vids:
        found = True
        yinyuetai_download_by_id(vid, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        def publish(self, msg):
        self.provider.notify(msg)
    
    
class Dog(object):
    
    ### OUTPUT ###
# Name: Jhon    Occupation: Coder
# Before we access `relatives`:
# {'call_count2': 0, 'name': 'Jhon', 'occupation': 'Coder'}
# Jhon's relatives: Many relatives.
# After we've accessed `relatives`:
# {'relatives': 'Many relatives.', 'call_count2': 0, 'name': 'Jhon', 'occupation': 'Coder'}
# Father and mother
# {'_lazy__parents': 'Father and mother', 'relatives': 'Many relatives.', 'call_count2': 1, 'name': 'Jhon', 'occupation': 'Coder'}
# Father and mother
# 1

    
        def test_object(queue):
        pool = ObjectPool(queue, True)
        print('Inside func: {}'.format(pool.item))
    
        def now(self):
        current_time = datetime.datetime.now()
        current_time_formatted = '{}:{}'.format(current_time.hour,
                                                current_time.minute)
        return current_time_formatted
    
        def on_diagnostics_failed(self):
        raise UnsupportedTransition
    
    *Where is the pattern used practically?
The Grok framework uses adapters to make objects work with a
particular API without modifying the objects themselves:
http://grok.zope.org/doc/current/grok_overview.html#adapters
    
    
def request_configuration(hass, config, name, host, serialnumber):
    '''Request configuration steps from the user.'''
    configurator = hass.components.configurator
    
    from homeassistant.const import CONF_ID
from homeassistant.components.config import EditIdBasedConfigView
from homeassistant.components.automation import (
    PLATFORM_SCHEMA, DOMAIN, async_reload)
import homeassistant.helpers.config_validation as cv
    
    
class CheckConfigView(HomeAssistantView):
    '''Hassbian packages endpoint.'''
    
        # Load all known devices.
    # We just need the devices so set consider_home and home range
    # to 0
    for device in load_config(yaml_path, hass, 0):
        # check if device is a valid bluetooth device
        if device.mac and device.mac[:4].upper() == BLE_PREFIX:
            if device.track:
                _LOGGER.debug('Adding %s to BLE tracker', device.mac)
                devs_to_track.append(device.mac[4:])
            else:
                _LOGGER.debug('Adding %s to BLE do not track', device.mac)
                devs_donot_track.append(device.mac[4:])