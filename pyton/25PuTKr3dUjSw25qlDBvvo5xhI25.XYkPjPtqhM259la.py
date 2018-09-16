
        
                return view(**kwargs)
    
            :param name: Name of attribute to get.
        :param: default: Value to set and return if the attribute is not
            present.
    
    
def _lookup_req_object(name):
    top = _request_ctx_stack.top
    if top is None:
        raise RuntimeError(_request_ctx_err_msg)
    return getattr(top, name)
    
        To integrate applications, :class:`Flask` has a hook to intercept URL build
    errors through :attr:`Flask.url_build_error_handlers`.  The `url_for`
    function results in a :exc:`~werkzeug.routing.BuildError` when the current
    app does not have a URL for the given endpoint and values.  When it does, the
    :data:`~flask.current_app` calls its :attr:`~Flask.url_build_error_handlers` if
    it is not ``None``, which can return a string to use as the result of
    `url_for` (instead of `url_for`'s default to raise the
    :exc:`~werkzeug.routing.BuildError` exception) or re-raise the exception.
    An example::
    
        If you configure your own :class:`logging.StreamHandler`, you may want to
    use this for the stream. If you are using file or dict configuration and
    can't import this directly, you can refer to it as
    ``ext://flask.logging.wsgi_errors_stream``.
    '''
    return request.environ['wsgi.errors'] if request else sys.stderr
    
        def delete(self, session_key=None):
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        self._cache.delete(self.cache_key_prefix + session_key)
    
        @classmethod
    def get_session_store_class(cls):
        raise NotImplementedError
    
        def _urls(self, page, protocol, domain):
        urls = []
        latest_lastmod = None
        all_items_lastmod = True  # track if all items have a lastmod
        for item in self.paginator.page(page).object_list:
            loc = '%s://%s%s' % (protocol, domain, self.__get('location', item))
            priority = self.__get('priority', item)
            lastmod = self.__get('lastmod', item)
            if all_items_lastmod:
                all_items_lastmod = lastmod is not None
                if (all_items_lastmod and
                        (latest_lastmod is None or lastmod > latest_lastmod)):
                    latest_lastmod = lastmod
            url_info = {
                'item': item,
                'location': loc,
                'lastmod': lastmod,
                'changefreq': self.__get('changefreq', item),
                'priority': str(priority if priority is not None else ''),
            }
            urls.append(url_info)
        if all_items_lastmod and latest_lastmod:
            self.latest_lastmod = latest_lastmod
        return urls
    
        n_iter = 40
    
        samples : array-like of ints (1d or 0d)
        The number of samples to generate as input.
    
                gc.collect()
            print('- benchmarking RidgeRegression')
            clf = Ridge(alpha=alpha, fit_intercept=False)
            tstart = time()
            clf.fit(X_train, y_train)
            ridge_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                        y_test)
            ridge_results[i, j, 1] = time() - tstart
    
    print('='*80 + '\n#' + '    Text vectorizers benchmark' + '\n' + '='*80 + '\n')
print('Using a subset of the 20 newsrgoups dataset ({} documents).'
      .format(len(text)))
print('This benchmarks runs in ~20 min ...')
    
        def _err(self, msg):
        sys.stderr.write(msg + os.linesep)
        self.exitcode = 1
    
    from w3lib.url import is_url
    
    
class Command(ScrapyCommand):
    
        def __init__(self, crawler):
        self._crawler = crawler
        self._schemes = {}  # stores acceptable schemes on instancing
        self._handlers = {}  # stores instanced handlers for schemes
        self._notconfigured = {}  # remembers failed handlers
        handlers = without_none_values(
            crawler.settings.getwithbase('DOWNLOAD_HANDLERS'))
        for scheme, clspath in six.iteritems(handlers):
            self._schemes[scheme] = clspath