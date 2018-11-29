
        
            @property
    def config(self):
        if not hasattr(self, '_config'):
            self._config = Config(directory=self.config_dir)
            if self._config.is_new():
                self._config.save()
            else:
                self._config.load()
        return self._config
    
        @property
    def body(self):
        '''Return a `bytes` with the message's body.'''
        raise NotImplementedError()
    
        def get_auth_plugin(self, auth_type):
        return self.get_auth_plugin_mapping()[auth_type]
    
        def test_GET_no_data_no_auto_headers(self, httpbin):
        # https://github.com/jakubroztocil/httpie/issues/62
        r = http('GET', httpbin.url + '/headers')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == '*/*'
        assert 'Content-Type' not in r.json['headers']
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        time_ridge = np.empty(n_iter)
    time_ols = np.empty(n_iter)
    time_lasso = np.empty(n_iter)
    
    # datasets available: ['http', 'smtp', 'SA', 'SF', 'shuttle', 'forestcover']
datasets = ['http', 'smtp', 'SA', 'SF', 'shuttle', 'forestcover']
    
        samples : array-like of ints (1d or 0d)
        The number of samples to generate as input.
    
        i = 0
    for c, (label, timings) in zip('br',
                                   sorted(six.iteritems(results_2))):
        i += 1
        ax = fig.add_subplot(2, 2, i + 2)
        y = np.asarray(timings)
        ax.plot(chunks, y, color=c, alpha=0.8)
        ax.set_xlabel('Chunks')
        ax.set_ylabel(label)
    
                gc.collect()
            print('benchmarking orthogonal_mp (without Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            orthogonal_mp(X, y, precompute=False,
                          n_nonzero_coefs=n_informative)
            delta = time() - tstart
            print('%0.3fs' % delta)
            omp[i_f, i_s] = delta
    
    ward = AgglomerativeClustering(n_clusters=3, linkage='ward')
    
    del sys

    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
                # trustRoot set to platformTrust() will use the platform's root CAs.
            #
            # This means that a website like https://www.cacert.org will be rejected
            # by default, since CAcert.org CA certificate is seldom shipped.
            return optionsForClientTLS(hostname.decode('ascii'),
                                       trustRoot=platformTrust(),
                                       extraCertificateOptions={
                                            'method': self._ssl_method,
                                       })
    
            crawler.signals.connect(self._close, signals.engine_stopped)
    
    site_info = 'baomihua.com'
download = baomihua_download
download_playlist = playlist_not_supported('baomihua')

    
    from ..common import *
    
    #----------------------------------------------------------------------
def ckplayer_download(url, output_dir = '.', merge = False, info_only = False, is_xml = True, **kwargs):
    if is_xml:  #URL is XML URL
        try:
            title = kwargs['title']
        except:
            title = ''
        try:
            headers = kwargs['headers']  #headers provided
            ckinfo = get_content(url, headers = headers)
        except NameError:
            ckinfo = get_content(url)
        
        ckplayer_download_by_xml(ckinfo, output_dir, merge, 
                                info_only, title = title)
    
        ep = 'http://vdn.apps.cntv.cn/api/getHttpVideoInfo.do?pid={}'
    
    
def coub_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_content(url)
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls([video_url], title, ext, size, output_dir, merge = merge, headers = headers)
    
        @classmethod
    def get_coeff(cls, magic_list):
        magic_set = set(magic_list)
        no_dup = []
        for item in magic_list:
            if item in magic_set:
                magic_set.remove(item)
                no_dup.append(item)
        # really necessary?