
        
        if hasattr(ctypes, 'windll'):
    WSAStringToAddressA = ctypes.windll.ws2_32.WSAStringToAddressA
    WSAAddressToStringA = ctypes.windll.ws2_32.WSAAddressToStringA
else:
    def not_windows():
        raise SystemError(
            'Invalid platform. ctypes.windll must be available.'
        )
    WSAStringToAddressA = not_windows
    WSAAddressToStringA = not_windows
    
    Here is a little overview over the most commonly used classes provided by
this runtime:
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
            This is different from rewind in its multi-directional
        requirement and in that its argument is strictly an input cursor
        (index).
    
                                s = self.eot[s]
                            input.consume()
                            # TODO: I had this as return accept[eot[s]]
                            # which assumed here that the EOT edge always
                            # went to an accept...faster to do this, but
                            # what about predicated edges coming from EOT
                            # target?
                            continue
    
            result_item = result_queue.get(block=True)
        if result_item is not None:
            work_item = pending_work_items[result_item.work_id]
            del pending_work_items[result_item.work_id]
    
    # If true, '()' will be appended to :func: etc. cross-reference text.
#add_function_parentheses = True
    
    if __name__ == '__main__':
    main()

    
    
def FormatDebugInfoResponse_ExtraConfFoundAndLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': True,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found and loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    from ycm.tests.test_utils import MockVimModule
MockVimModule()
    
        @YouCompleteMeInstance( { 'log_level': 'debug',
                              'keep_logfiles': 1 } )
    def Debug_test( ycm ):
        ...
  '''
  def Decorator( test ):
    @functools.wraps( test )
    def Wrapper( *args, **kwargs ):
      ycm = YouCompleteMe( MakeUserOptions( custom_options ) )
      WaitUntilReady()
      ycm.CheckIfServerIsReady()
      try:
        test( ycm, *args, **kwargs )
      finally:
        StopServer( ycm )
    return Wrapper
  return Decorator

    
    
def LastEnteredCharIsIdentifierChar_FiletypeHtml_test():
  with MockCurrentFiletypes( ['html'] ):
    with MockCurrentColumnAndLineContents( 3, 'ab-' ):
      ok_( base.LastEnteredCharIsIdentifierChar() )
    
    API_TYPES = ('api', 'json')
RSS_TYPES = ('rss', 'xml')
    
        def current_subreddit(self):
        site = self.stacked_proxy_safe_get(c, 'site')
        if not site:
            # In non-request code (eg queued jobs), there isn't necessarily a
            # site name (or other request-type data).  In those cases, we don't
            # want to trigger any subreddit-specific code.
            return ''
        return site.name
    
    
def register_api_templates(template_name, template_class):
    for style in ('api', 'api-html', 'api-compact'):
        tpm.add_handler(
            name=template_name,
            style=style,
            handler=template_class,
        )
    
    from pylons import request
from pylons import app_globals as g
from reddit_base import RedditController
from r2.lib.pages import AdminPage, AdminAwards
from r2.lib.pages import AdminAwardGive, AdminAwardWinners
from r2.lib.validator import *
    
    class ButtonsController(RedditController):
    def get_wrapped_link(self, url, link = None, wrapper = None):
        try:
            links = []
            if link:
                links = [link]
            else:
                sr = None if isinstance(c.site, FakeSubreddit) else c.site
                try:
                    links = Link._by_url(url, sr)
                except NotFound:
                    pass
    
            An iden is given as the `captcha` field with a `BAD_CAPTCHA`
        error, you should use this endpoint if you get a
        `BAD_CAPTCHA` error response.