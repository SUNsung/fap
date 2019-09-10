
        
            :param cookie_dict: Dict of key/values to insert into CookieJar.
    :param cookiejar: (optional) A cookiejar to add the cookies to.
    :param overwrite: (optional) If False, will not replace cookies
        already in the jar with new ones.
    :rtype: CookieJar
    '''
    if cookiejar is None:
        cookiejar = RequestsCookieJar()
    
    # A dictionary with options for the search language support, empty by default.
# Now only 'ja' uses this config value
# html_search_options = {'type': 'default'}
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    # Keep OrderedDict for backwards compatibility.
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
        def test_copy(self):
        cid = CaseInsensitiveDict({
            'Accept': 'application/json',
            'user-Agent': 'requests',
        })
        cid_copy = cid.copy()
        assert cid == cid_copy
        cid['changed'] = True
        assert cid != cid_copy
    
            This function eventually generates a ``Cookie`` header from the
        given cookies using cookielib. Due to cookielib's design, the header
        will not be regenerated if it already exists, meaning this function
        can only be called once for the life of the
        :class:`PreparedRequest <PreparedRequest>` object. Any subsequent calls
        to ``prepare_cookies`` will have no actual effect, unless the 'Cookie'
        header is removed beforehand.
        '''
        if isinstance(cookies, cookielib.CookieJar):
            self._cookies = cookies
        else:
            self._cookies = cookiejar_from_dict(cookies)
    
    with open('README.md', 'r', 'utf-8') as f:
    readme = f.read()
with open('HISTORY.md', 'r', 'utf-8') as f:
    history = f.read()
    
        def test_basic_response(self):
        '''the basic response server returns an empty http response'''
        with Server.basic_response_server() as (host, port):
            r = requests.get('http://{}:{}'.format(host, port))
            assert r.status_code == 200
            assert r.text == u''
            assert r.headers['Content-Length'] == '0'
    
       >>> payload = dict(key1='value1', key2='value2')
   >>> r = requests.post('https://httpbin.org/post', data=payload)
   >>> print(r.text)
   {
     ...
     'form': {
       'key1': 'value1',
       'key2': 'value2'
     },
     ...
   }
    
            with warnings.catch_warnings():
            warnings.simplefilter('ignore', ScrapyDeprecationWarning)
            lx = BaseSgmlLinkExtractor(tag=tag_func, attr=attr_func,
                                       unique=unique, process_value=process_value, strip=strip,
                                       canonicalized=canonicalize)
    
    
def issue_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/issues/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'issue ' + text, refuri=ref, **options)
    return [node], []
    
    
class Root(Resource):
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
        def run_loop(self):
        while self.blackboard.common_state['progress'] < 100:
            for expert in self.blackboard.experts:
                if expert.is_eager_to_contribute:
                    expert.contribute()
        return self.blackboard.common_state['contributions']
    
    '''
https://www.djangospin.com/design-patterns-python/mediator/
    
        def not_specification(self):
        raise NotImplementedError()
    
    
class Borg(object):
    __shared_state = {}
    
        def product_information(self, product):
        return self.data['products'].get(product, None)
    
    '''
*What is this pattern about?
The composite pattern describes a group of objects that is treated the
same way as a single instance of the same type of object. The intent of
a composite is to 'compose' objects into tree structures to represent
part-whole hierarchies. Implementing the composite pattern lets clients
treat individual objects and compositions uniformly.
    
        >>> arr = [1, 2, 3, 4, 999]
    >>> import scipy.stats
    >>> fmt = '{0:.6f}'  # limit the printed precision to 6 digits
    >>> print(fmt.format(scipy.stats.kurtosis(arr[:-1], bias=False)))
    -1.200000
    >>> print(fmt.format(scipy.stats.kurtosis(arr, bias=False)))
    4.999874
    >>> s = pd.Series(arr)
    >>> s.expanding(4).kurt()
    0         NaN
    1         NaN
    2         NaN
    3   -1.200000
    4    4.999874
    dtype: float64
    '''
    )