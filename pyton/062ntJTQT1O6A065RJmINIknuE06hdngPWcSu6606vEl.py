
        
            s.register(Tag1, index=-1)
    assert isinstance(s.order[-2], Tag1)
    
        implements_to_string = _identity
    
        seems_fishy = False
    if total_found == 0:
        info.append('Error: the template could not be found.')
        seems_fishy = True
    elif total_found > 1:
        info.append('Warning: multiple loaders returned a match for the template.')
        seems_fishy = True
    
        If :meth:`open_session` returns ``None`` Flask will call into
    :meth:`make_null_session` to create a session that acts as replacement
    if the session support cannot work because some requirement is not
    fulfilled.  The default :class:`NullSession` class that is created
    will complain that the secret key was not set.
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
    
def _render(template, context, app):
    '''Renders the template and fires the signal'''
    
        from site_app import app
    assert app.instance_path == \
        modules_tmpdir.join('var').join('site_app-instance')
    
    import pytest
    
            # Force Python to track this dictionary at all times.
        # This is necessary since Python only starts tracking
        # dicts if they contain mutable objects.  It's a horrible,
        # horrible hack but makes this kinda testable.
        loc.__storage__['FOOO'] = [1, 2, 3]
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
                handler_result = self.handler(sock)
    
                # Consume content and release the original connection
            # to allow our new request to reuse the same one.
            r.content
            r.close()
            prep = r.request.copy()
            extract_cookies_to_jar(prep._cookies, r.request, r.raw)
            prep.prepare_cookies(prep._cookies)
    
        def has_header(self, name):
        return name in self._r.headers or name in self._new_headers
    
            :param conn: The urllib3 connection object associated with the cert.
        :param url: The requested URL.
        :param verify: Either a boolean, in which case it controls whether we verify
            the server's TLS certificate, or a string, in which case it must be a path
            to a CA bundle to use
        :param cert: The SSL certificate to verify.
        '''
        if url.lower().startswith('https') and verify:
    
        print('Classifier Training')
    print('===================')
    accuracy, train_time, test_time = {}, {}, {}
    for name in sorted(args['estimators']):
        clf = ESTIMATORS[name]
        try:
            clf.set_params(random_state=0)
        except (TypeError, ValueError):
            pass
    
    if __name__ == '__main__':
    barplot_neighbors(dataset='digits')
    barplot_neighbors(dataset='dense')
    plt.show()

    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
    pages = {
    u'ar': u'http://ar.wikipedia.org/wiki/%D9%88%D9%8A%D9%83%D9%8A%D8%A8%D9%8A%D8%AF%D9%8A%D8%A7',
    u'de': u'http://de.wikipedia.org/wiki/Wikipedia',
    u'en': u'https://en.wikipedia.org/wiki/Wikipedia',
    u'es': u'http://es.wikipedia.org/wiki/Wikipedia',
    u'fr': u'http://fr.wikipedia.org/wiki/Wikip%C3%A9dia',
    u'it': u'http://it.wikipedia.org/wiki/Wikipedia',
    u'ja': u'http://ja.wikipedia.org/wiki/Wikipedia',
    u'nl': u'http://nl.wikipedia.org/wiki/Wikipedia',
    u'pl': u'http://pl.wikipedia.org/wiki/Wikipedia',
    u'pt': u'http://pt.wikipedia.org/wiki/Wikip%C3%A9dia',
    u'ru': u'http://ru.wikipedia.org/wiki/%D0%92%D0%B8%D0%BA%D0%B8%D0%BF%D0%B5%D0%B4%D0%B8%D1%8F',
#    u'zh': u'http://zh.wikipedia.org/wiki/Wikipedia',
}
    
    
if __name__ == '__main__':
    # NOTE: we put the following in a 'if __name__ == '__main__'' protected
    # block to be able to use a multi-core grid search that also works under
    # Windows, see: http://docs.python.org/library/multiprocessing.html#windows
    # The multiprocessing module is used as the backend of joblib.Parallel
    # that is used when n_jobs != 1 in GridSearchCV
    
        # TASK: print the mean and std for each candidate along with the parameter
    # settings for all the candidates explored by grid search.
    n_candidates = len(grid_search.cv_results_['params'])
    for i in range(n_candidates):
        print(i, 'params - %s; mean - %0.2f; std - %0.2f'
                 % (grid_search.cv_results_['params'][i],
                    grid_search.cv_results_['mean_test_score'][i],
                    grid_search.cv_results_['std_test_score'][i]))
    
    for f in solutions:
    if not f.endswith('.py'):
        continue
    
        __unicode__ = __str__
    
        def get(self):
        params = self._oauth_request_parameters(
            'http://www.example.com/api/asdf',
            dict(key='uiop', secret='5678'),
            parameters=dict(foo='bar'))
        self.write(params)
    
        def test_timeout_environment_variable(self):
        @gen_test(timeout=0.5)
        def test_long_timeout(self):
            yield gen.sleep(0.25)
    
        def test_get_query_arguments(self):
        # send as a post so we can ensure the separation between query
        # string and body arguments.
        body = urllib_parse.urlencode(dict(foo='hello'))
        response = self.fetch('/get_argument?source=query&foo=bar',
                              method='POST', body=body)
        self.assertEqual(response.body, b'bar')
        response = self.fetch('/get_argument?source=query&foo=',
                              method='POST', body=body)
        self.assertEqual(response.body, b'')
        response = self.fetch('/get_argument?source=query',
                              method='POST', body=body)
        self.assertEqual(response.body, b'default')
    
        def __init__(self):
        self.time_provider = datetime.datetime
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
        @property
    def data(self):
        return self._data
    
    
class Specification(object):
    
    print 'POTFILE := ' + os.path.join(I18N_PATH, 'r2.pot')
    
        @require_oauth2_scope('identity')
    @validate(
        VUser(),
    )
    @api_doc(
        section=api_section.account,
        uri='/api/v1/me/trophies',
    )
    def GET_trophies(self):
        '''Return a list of trophies for the current user.'''
        return self.api_wrapper(get_usertrophies(c.oauth_user))
    
    class EmbedController(RedditController):
    allow_stylesheets = True
    
    import pylibmc
from pylons import request, response
from pylons import app_globals as g
from pylons.controllers.util import abort