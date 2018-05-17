
        
        
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
        def __exit__(self, exc_type, exc_value, traceback):
        if exc_type is None:
            self.stop_event.wait(self.WAIT_EVENT_TIMEOUT)
        else:
            if self.wait_to_close_event:
                # avoid server from waiting for event timeouts
                # if an exception is found in the main thread
                self.wait_to_close_event.set()
    
                sock2.connect(address)
            sock2.sendall(second_request)
            sock2.close()
    
    
class CookieConflictError(RuntimeError):
    '''There are two cookies that meet the criteria specified in the cookie jar.
    Use .get and .set and include domain and path args in order to be more specific.
    '''
    
    import sys
    
        # Redirection.
    300: ('multiple_choices',),
    301: ('moved_permanently', 'moved', '\\o-'),
    302: ('found',),
    303: ('see_other', 'other'),
    304: ('not_modified',),
    305: ('use_proxy',),
    306: ('switch_proxy',),
    307: ('temporary_redirect', 'temporary_moved', 'temporary'),
    308: ('permanent_redirect',
          'resume_incomplete', 'resume',),  # These 2 to be removed in 3.0
    
    def test_fragment_not_sent_with_request():
    '''Verify that the fragment portion of a URI isn't sent to the server.'''
    def response_handler(sock):
        req = consume_socket_content(sock, timeout=0.5)
        sock.send(
            b'HTTP/1.1 200 OK\r\n'
            b'Content-Length: '+bytes(len(req))+b'\r\n'
            b'\r\n'+req
        )
    
        tokens = header.split(';')
    content_type, params = tokens[0].strip(), tokens[1:]
    params_dict = {}
    items_to_strip = '\'' '
    
    
if __name__ == '__main__':
    SalesRanker.run()

    
        def remove_from_tail(self):
        pass
    
    - tree.CommonTreeNodeStream: A basic and most commonly used tree.TreeNodeStream
  implementation.
  
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
                        s = snext
                    input.consume()
                    continue
    
            matchedSymbol = self.recoverFromMismatchedToken(input, ttype, follow)
        return matchedSymbol
    
            else:
            raise TypeError('Invalid arguments')
    
    
    def __str__(self):
        return 'NoViableAltException(%r!=[%r])' % (
            self.unexpectedType, self.grammarDecisionDescription
            )
    __repr__ = __str__
    
        sqrt_n = int(math.floor(math.sqrt(n)))
    for i in range(3, sqrt_n + 1, 2):
        if n % i == 0:
            return False
    return True
    
        def test_done(self):
        self.assertFalse(PENDING_FUTURE.done())
        self.assertFalse(RUNNING_FUTURE.done())
        self.assertTrue(CANCELLED_FUTURE.done())
        self.assertTrue(CANCELLED_AND_NOTIFIED_FUTURE.done())
        self.assertTrue(EXCEPTION_FUTURE.done())
        self.assertTrue(SUCCESSFUL_FUTURE.done())
    
      for filter_type in iterkeys( config ):
    compiler = FILTER_COMPILERS.get( filter_type )
    
        @require_oauth2_scope('mysubreddits')
    @validate(
        VUser(),
    )
    @api_doc(
        section=api_section.account,
        uri='/api/v1/me/karma',
    )
    def GET_karma(self):
        '''Return a breakdown of subreddit karma.'''
        karmas = c.oauth_user.all_karmas(include_old=False)
        resp = KarmaListJsonTemplate().render(karmas)
        return self.api_wrapper(resp.finalize())
    
    from reddit_base import RedditController, UnloggedUser
from r2.lib.pages import (ButtonLite, ButtonDemoPanel, WidgetDemoPanel,
                          BoringPage)
from r2.lib.pages.things import wrap_links
from r2.models import *
from r2.lib.validator import *
from pylons import request, response
from pylons import tmpl_context as c
from pylons.i18n import _