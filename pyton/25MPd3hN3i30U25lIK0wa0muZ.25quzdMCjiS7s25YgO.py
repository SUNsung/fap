
        
            try:
        citext_oids = get_citext_oids(connection.alias)
        array_type = psycopg2.extensions.new_array_type(citext_oids, 'citext[]', psycopg2.STRING)
        psycopg2.extensions.register_type(array_type, None)
    except ProgrammingError:
        # citext is not available on the database.
        #
        # The same comments in the except block of the above call to
        # register_hstore() also apply here.
        pass

    
        def __eq__(self, other):
        return (
            isinstance(other, self.__class__) and
            self.keys == other.keys and
            self.messages == other.messages and
            self.strict == other.strict
        )
    
        def has_key(self, key):
        return key in self._session
    
        @property
    def cache_key(self):
        return self.cache_key_prefix + self._get_or_create_session_key()
    
        @classmethod
    def get_session_store_class(cls):
        raise NotImplementedError
    
        plt.legend(['Ridge', 'OLS', 'LassoLars'], loc='upper left')
    plt.axis('tight')
    plt.show()

    
        if args.show_plot:
        plt.plot(*zip(*timings))
        plt.title('Average time taken running isotonic regression')
        plt.xlabel('Number of observations')
        plt.ylabel('Time (s)')
        plt.axis('tight')
        plt.loglog()
        plt.show()

    
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
    
                gc.collect()
            print('benchmarking orthogonal_mp (with Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            orthogonal_mp(X, y, precompute=True,
                          n_nonzero_coefs=n_informative)
            delta = time() - tstart
            print('%0.3fs' % delta)
            omp_gram[i_f, i_s] = delta
    
      * scikit-learn
    
        fn = os.path.relpath(fn,
                         start=os.path.dirname(__import__(package).__file__))
    try:
        lineno = inspect.getsourcelines(obj)[1]
    except Exception:
        lineno = ''
    return url_fmt.format(revision=revision, package=package,
                          path=fn, lineno=lineno)
    
        Examples: ::
    
            env.scrapy_all_settings.append({
            'docname': env.docname,
            'setting_name': setting_name,
            'refid': refid,
        })
    
    def _print_header(settings, inproject):
    if inproject:
        print('Scrapy %s - project: %s\n' % (scrapy.__version__, \
            settings['BOT_NAME']))
    else:
        print('Scrapy %s - no active project\n' % scrapy.__version__)
    
            name, domain = args[0:2]
        module = sanitize_module_name(name)
    
            if network_ok:
            self.last_check_time = time.time()
            self.report_ok()
            xlog.debug('network %s is ok, cost:%d ms', self.type, 1000 * (time.time() - time_now))
        else:
            xlog.warn('network %s fail', self.type)
            self.network_stat = 'Fail'
            self.last_check_time = time.time()
    
        def __init__(self, logger):
        self.logger = logger
    
    - tree.CommonTree: A basic and most commonly used Tree implementation.
    
        def prepare(self, **kwargs):
    
            assert vid
    
        def __init__(self):
        super().__init__()
        self.api_data = None
    
    headers = {
    'DNT': '1',
    'Accept-Encoding': 'gzip, deflate, sdch, br',
    'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/49.0.2623.75 Safari/537.36',
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
    'Cache-Control': 'max-age=0',
    'Referer': 'http://www.dilidili.com/',
    'Connection': 'keep-alive',
    'Save-Data': 'on',
}
    
            for i in range(len(titles)):
            title = titles[i]
            datas = {
                'sid': song_id[i],
                'ssid': song_ssid[i]
            }
            post_params = urllib.parse.urlencode(datas).encode('utf-8')
            try:
                resp = urllib.request.urlopen(get_song_url, post_params)
                resp_data = json.loads(resp.read().decode('utf-8'))
                real_url = resp_data['r']
                type, ext, size = url_info(real_url)
                print_info(site_info, title, type, size)
            except:
                pass