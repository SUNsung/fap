
        
                if color_scheme != PRESET_STYLE and env.colors == 256:
            fmt_class = Terminal256Formatter
        else:
            fmt_class = TerminalFormatter
        self.formatter = fmt_class(style=style_class)
    
        def process_body(self, chunk):
        if not isinstance(chunk, str):
            # Text when a converter has been used,
            # otherwise it will always be bytes.
            chunk = chunk.decode(self.msg.encoding, 'replace')
        chunk = self.formatting.format_body(content=chunk, mime=self.mime)
        return chunk.encode(self.output_encoding, 'replace')
    
    
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
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        '''
    
    
def test_json_input_preserve_order(httpbin_both):
    r = http('PATCH', httpbin_both + '/patch',
             'order:={'map':{'1':'first','2':'second'}}')
    assert HTTP_OK in r
    assert r.json['data'] == \
        '{'order': {'map': {'1': 'first', '2': 'second'}}}'

    
    
@pytest.fixture(autouse=True)
def shell_config(mocker):
    path_mock = mocker.patch('thefuck.entrypoints.not_configured.Path',
                             new_callable=MagicMock)
    return path_mock.return_value \
        .expanduser.return_value \
        .open.return_value \
        .__enter__.return_value
    
    
output = '''sshfs: OsxfuseRequirement unsatisfied!
    
        from urllib3.packages.ordered_dict import OrderedDict
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
            #: Case-insensitive Dictionary of Response Headers.
        #: For example, ``headers['content-encoding']`` will return the
        #: value of a ``'Content-Encoding'`` response header.
        self.headers = CaseInsensitiveDict()
    
        def test_precedence(self):
        content = '''
        <?xml version='1.0' encoding='XML'?>
        <meta charset='HTML5'>
        <meta http-equiv='Content-type' content='text/html;charset=HTML4' />
        '''.strip()
        assert get_encodings_from_content(content) == ['HTML5', 'HTML4', 'XML']
    
    from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
        args = parser.parse_args()
    
        n_times : int
        Time calling the metric n_times times.
    
    import numpy as np
    
        for i, DD in enumerate(Drange):
        print('D = %i (%i out of %i)' % (DD, i + 1, len(Drange)))
        X = get_data(N, DD, dataset)
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=k,
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
                gc.collect()
            print('benchmarking scikit-learn randomized_svd: n_iter=%d '
                  % n_iter)
            tstart = time()
            randomized_svd(X, rank, n_iter=n_iter)
            results['scikit-learn randomized_svd (n_iter=%d)'
                    % n_iter].append(time() - tstart)
    
    from sklearn import clone
from sklearn.externals.six.moves import xrange
from sklearn.random_projection import (SparseRandomProjection,
                                       GaussianRandomProjection,
                                       johnson_lindenstrauss_min_dim)
    
                tstart = time()
            clf.fit(X_train, y_train)
            sgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                      y_test)
            sgd_results[i, j, 1] = time() - tstart
    
        if path_details['type'] == 'symlink':
        symlinks[name] = json_urlread(path_details['_links']['self'])['target']
    
    import codecs
    
    
    def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
        if 'stream_id' in kwargs and kwargs['stream_id']:
            # Extract the stream
            stream_id = kwargs['stream_id']
    
    #----------------------------------------------------------------------
#helper
#https://stackoverflow.com/questions/2148119/how-to-convert-an-xml-string-to-a-dictionary-in-python
def dictify(r,root=True):
    if root:
        return {r.tag : dictify(r, False)}
    d=copy(r.attrib)
    if r.text:
        d['_text']=r.text
    for x in r.findall('./*'):
        if x.tag not in d:
            d[x.tag]=[]
        d[x.tag].append(dictify(x,False))
    return d
    
        print_info(site_info, title, mime, size)
    if not info_only:
        download_urls([real_url], title, ext, size, output_dir=output_dir, merge=merge)
    
        elif 'subject' in url:
        titles = re.findall(r'data-title='([^']*)'>', html)
        song_id = re.findall(r'<li class='song-item' id='([^']*)'', html)
        song_ssid = re.findall(r'data-ssid='([^']*)'', html)
        get_song_url = 'http://music.douban.com/j/songlist/get_song_url'
    
        q = parse_qs(urlparse(url).query)
    
    
# -- Options for Texinfo output -------------------------------------------
    
    
@asyncio.coroutine
def async_setup(hass, config):
    '''Activate Alexa component.'''
    config = config.get(DOMAIN, {})
    flash_briefings_config = config.get(CONF_FLASH_BRIEFINGS)
    
        try:
        if cognito.check_token():
            cloud.id_token = cognito.id_token
            cloud.access_token = cognito.access_token
            cloud.write_user_info()
    except ClientError as err:
        raise _map_aws_exception(err)
    
        def _get_value(self, hass, data, config_key):
        '''Get value.'''
        customize = hass.data.get(DATA_CUSTOMIZE, {}).get(config_key) or {}
        return {'global': customize, 'local': data.get(config_key, {})}
    
            now = dt_util.now()
        actiontec_data = self.get_actiontec_data()
        if not actiontec_data:
            return False
        self.last_results = [Device(data['mac'], name, now)
                             for name, data in actiontec_data.items()
                             if data['timevalid'] > -60]
        _LOGGER.info('Scan successful')
        return True
    
            if self.accountname in _CONFIGURING:
            request_id = _CONFIGURING.pop(self.accountname)
            configurator = self.hass.components.configurator
            configurator.request_done(request_id)
    
        def _make_request(self):
        # Weirdly enough, this doesn't seem to require authentication
        data = [{
            'request': {
                'sinceRevision': 0
            },
            'action': 'http://linksys.com/jnap/devicelist/GetDevices'
        }]
        headers = {'X-JNAP-Action': 'http://linksys.com/jnap/core/Transaction'}
        return requests.post('http://{}/JNAP/'.format(self.host),
                             timeout=DEFAULT_TIMEOUT,
                             headers=headers,
                             json=data)

    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        filter_named = [result.name for result in self.last_results
                        if result.mac == device]
    
    
DEPENDENCIES = ['http']
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client['mac'] == device:
                return client['host']
        return None