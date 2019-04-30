
        
            return render_template('blog/create.html')
    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
        #: Tag classes to bind when creating the serializer. Other tags can be
    #: added later using :meth:`~register`.
    default_tags = [
        TagDict, PassDict, TagTuple, PassList, TagBytes, TagMarkup, TagUUID,
        TagDateTime,
    ]
    
    
class View(object):
    '''Alternative way to use view functions.  A subclass has to implement
    :meth:`dispatch_request` which is called with the view arguments from
    the URL routing system.  If :attr:`methods` is provided the methods
    do not have to be passed to the :meth:`~flask.Flask.add_url_rule`
    method explicitly::
    
    import requests.auth
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    error_msg = None
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
        @cookies.setter
    def cookies(self, jar):
        '''
        :type jar: CookieJar
        '''
        # http://docs.python.org/2/library/cookielib.html#cookie-objects
        stored_attrs = ['value', 'path', 'secure', 'expires']
        self['cookies'] = {}
        for cookie in jar:
            self['cookies'][cookie.name] = {
                attname: getattr(cookie, attname)
                for attname in stored_attrs
            }
    
    
def SendCompleterAvailableRequest( filetypes ):
  request = CompleterAvailableRequest( filetypes )
  # This is a blocking call.
  request.Start()
  return request.Response()

    
    
def _HandlePollResponse( response, diagnostics_handler ):
  if isinstance( response, list ):
    for notification in response:
      if 'message' in notification:
        PostVimMessage( notification[ 'message' ],
                        warning = False,
                        truncate = True )
      elif 'diagnostics' in notification:
        diagnostics_handler.UpdateWithNewDiagnosticsForFile(
          notification[ 'filepath' ],
          notification[ 'diagnostics' ] )
  elif response is False:
    # Don't keep polling for this file
    return False
  # else any truthy response means 'nothing to see here; poll again in a
  # while'
    
    
class ShutdownRequest( BaseRequest ):
  def __init__( self ):
    super( ShutdownRequest, self ).__init__()
    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds
    
    
def FormatDebugInfoResponse_NoResponse_test():
  assert_that(
    FormatDebugInfoResponse( None ),
    equal_to( 'Server errored, no debug info from server\n' )
  )
    
    def main():
    for name, fn in [('sequential',
                      functools.partial(download_urls_sequential, URLS)),
                     ('processes',
                      functools.partial(download_urls_with_executor,
                                        URLS,
                                        ProcessPoolExecutor(10))),
                     ('threads',
                      functools.partial(download_urls_with_executor,
                                        URLS,
                                        ThreadPoolExecutor(10)))]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        url_map = fn()
        sys.stdout.write('%.2f seconds (%d of %d downloaded)\n' %
                         (time.time() - start, len(url_map), len(URLS)))
    
    # A list of ignored prefixes for module index sorting.
#modindex_common_prefix = []
    
    def is_prime(n):
    if n % 2 == 0:
        return False