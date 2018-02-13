
@mock.patch('httpie.core.get_response')
def test_timeout(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
            if downloader and exit_status == ExitStatus.OK:
            # Last response body download.
            download_stream, download_to = downloader.start(final_response)
            write_stream(
                stream=download_stream,
                outfile=download_to,
                flush=False,
            )
            downloader.finish()
            if downloader.interrupted:
                exit_status = ExitStatus.ERROR
                log_error('Incomplete download: size=%d; downloaded=%d' % (
                    downloader.status.total_size,
                    downloader.status.downloaded
                ))
        return exit_status
    
    output_options.add_argument(
    '--download', '-d',
    action='store_true',
    default=False,
    help='''
    Do not print the response body to stdout. Rather, download it and store it
    in a file. The filename is guessed unless specified with --output
    [filename]. This action is similar to the default behaviour of wget.
    
        # Used only when requested with --check-status:
    ERROR_HTTP_3XX = 3
    ERROR_HTTP_4XX = 4
    ERROR_HTTP_5XX = 5
    
        def __iter__(self):
        return iter(self._plugins)
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    
    
if __name__ == '__main__':
    main()

    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        def test_valid(self):
        assert is_valid_cidr('192.168.1.0/24')
    
        def resolve_redirects(self, resp, req, stream=False, timeout=None,
                          verify=True, cert=None, proxies=None, yield_requests=False, **adapter_kwargs):
        '''Receives a Response. Returns a generator of Responses or Requests.'''
    
        def park_vehicle(self, vehicle):
        spot = self._find_available_spot(vehicle)
        if spot is None:
            return None
        else:
            spot.park_vehicle(vehicle)
            return spot
    
            (foo, p1), 2
        (bar, p1), 3
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        yield key, sum(values)
    
      user_options_store.SetAll( base.BuildServerConf() )
    
    __author__ = 'Brian Quinlan (brian@sweetapp.com)'
    
    # The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'
    
      with patch( 'ycm.client.event_notification.EventNotification.'
              'PostDataToHandlerAsync' ) as post_data_to_handler_async:
    with MockVimBuffers( [ current_buffer ], current_buffer ):
      ycm.OnFileReadyToParse()
      assert_that(
        # Positional arguments passed to PostDataToHandlerAsync.
        post_data_to_handler_async.call_args[ 0 ],
        contains(
          has_entry( 'syntax_keywords', has_items( 'foo', 'bar' ) ),
          'event_notification'
        )
      )
    
    
def _GetAllDescendentats( root_group ):
  descendants = []
  for child in root_group.children:
    descendants.append( child )
    descendants.extend( _GetAllDescendentats( child ) )
  return descendants
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    extension_mapping = {
    'rss': ('xml', 'application/atom+xml; charset=UTF-8'),
    'xml': ('xml', 'application/atom+xml; charset=UTF-8'),
    'js': ('js', 'text/javascript; charset=UTF-8'),
    'embed': ('htmllite', 'text/javascript; charset=UTF-8'),
    'mobile': ('mobile', 'text/html; charset=UTF-8'),
    'png': ('png', 'image/png'),
    'css': ('css', 'text/css'),
    'csv': ('csv', 'text/csv; charset=UTF-8'),
    'api': (api_type(), 'application/json; charset=UTF-8'),
    'json-html': (api_type('html'), 'application/json; charset=UTF-8'),
    'json-compact': (api_type('compact'), 'application/json; charset=UTF-8'),
    'compact': ('compact', 'text/html; charset=UTF-8'),
    'json': (api_type(), 'application/json; charset=UTF-8'),
    'i': ('compact', 'text/html; charset=UTF-8'),
}
    
        def send403(self):
        c.site = DefaultSR()
        if 'usable_error_content' in request.environ:
            return request.environ['usable_error_content']
        else:
            res = pages.RedditError(
                title=_('forbidden (%(domain)s)') % dict(domain=g.domain),
                message=_('you are not allowed to do that'),
                explanation=request.GET.get('explanation'))
            return res.render()
    
        def GET_cachehealth(self):
        results = {}
        behaviors = {
            # Passed on to poll(2) in milliseconds
            'connect_timeout': 1000,
            # Passed on to setsockopt(2) in microseconds
            'receive_timeout': int(1e6),
            'send_timeout': int(1e6),
        }
        for server in cache._CACHE_SERVERS:
            try:
                if server.startswith('udp:'):
                    # libmemcached doesn't support UDP get/fetch operations
                    continue
                mc = pylibmc.Client([server], behaviors=behaviors)
                # it's ok that not all caches are mcrouter, we'll just ignore
                # the miss either way
                mc.get('__mcrouter__.version')
                results[server] = 'OK'
            except pylibmc.Error as e:
                g.log.warning('Health check for %s FAILED: %s', server, e)
                results[server] = 'FAILED %s' % e
        return json.dumps(results)
