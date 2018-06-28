
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
        def test_stream_with_auth_does_not_set_transfer_encoding_header(self, httpbin):
        '''Ensure that a byte stream with size > 0 will not set both a Content-Length
        and Transfer-Encoding header.
        '''
        auth = ('user', 'pass')
        url = httpbin('post')
        file_obj = io.BytesIO(b'test data')
        r = requests.Request('POST', url, auth=auth, data=file_obj)
        prepared_request = r.prepare()
        assert 'Transfer-Encoding' not in prepared_request.headers
        assert 'Content-Length' in prepared_request.headers
    
    
if __name__ == '__main__':
    main()

    
            #: A CookieJar of Cookies the server sent back.
        self.cookies = cookiejar_from_dict({})
    
    
class LookupDict(dict):
    '''Dictionary lookup object.'''
    
                self._start_queue_management_thread()
            self._adjust_process_count()
            return f
    submit.__doc__ = _base.Executor.submit.__doc__
    
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
    
    # List of directories, relative to source directory, that shouldn't be searched
# for source files.
exclude_trees = ['_build']
    
    
class ThreadPoolWaitTests(ThreadPoolMixin, WaitTests):
    
        # build a new DiagnosticFilter merging all filters
    #  for the provided filetypes
    spec = []
    for filetype in filetypes:
      type_specific = self._all_filters.get( filetype, [] )
      spec.extend( type_specific )
    
    
def SyntaxGroupsFromOutput_Basic_test():
  assert_that( syntax_parse._SyntaxGroupsFromOutput( '''
foogroup xxx foo bar
             zoo goo
             links to Statement''' ),
               has_item( 'foogroup' ) )
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
    
  def Response( self ):
    if self._cached_response:
      return self._cached_response
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      def __init__( self, bufnr, user_options, async_diags ):
    self.number = bufnr
    self._parse_tick = 0
    self._handled_tick = 0
    self._parse_request = None
    self._async_diags = async_diags
    self._diag_interface = DiagnosticInterface( bufnr, user_options )
    
            For example: Given the url pattern /([0-9]{4})/([a-z-]+)/, this method
        would return ('/%s/%s/', 2).
        '''
        pattern = self.regex.pattern
        if pattern.startswith('^'):
            pattern = pattern[1:]
        if pattern.endswith('$'):
            pattern = pattern[:-1]
    
    
class CloseReasonHandler(TestWebSocketHandler):
    def open(self):
        self.on_close_called = False
        self.close(1001, 'goodbye')
    
    
def _decode_fields_v2(value):
    def _consume_field(s):
        length, _, rest = s.partition(b':')
        n = int(length)
        field_value = rest[:n]
        # In python 3, indexing bytes returns small integers; we must
        # use a slice to get a byte string as in python 2.
        if rest[n:n + 1] != b'|':
            raise ValueError('malformed v2 signed value field')
        rest = rest[n + 1:]
        return field_value, rest