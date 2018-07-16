
        
        
    
    from scrapy.http import Request, Response
from scrapy.middleware import MiddlewareManager
from scrapy.utils.defer import mustbe_deferred
from scrapy.utils.conf import build_component_list
    
    
class DownloadTimeoutMiddleware(object):
    
        @classmethod
    def from_crawler(cls, crawler):
        return cls(crawler)
    
    A Parser needs a TokenStream as input (which in turn is usually fed by a
Lexer):
    
            self.decisionNumber = decisionNumber
        self.eot = eot
        self.eof = eof
        self.min = min
        self.max = max
        self.accept = accept
        self.special = special
        self.transition = transition
    
        To avoid English-only error messages and to generally make things
    as flexible as possible, these exceptions are not created with strings,
    but rather the information necessary to generate an error.  Then
    the various reporting methods in Parser and Lexer can be overridden
    to generate a localized error message.  For example, MismatchedToken
    exceptions are built with the expected token type.
    So, don't expect getMessage() to return anything.
    
            self.error(nvae)
        raise nvae
    
            self.node = nodes.LT(1)
        adaptor = nodes.adaptor
        payload = adaptor.getToken(self.node)
        if payload is not None:
            self.token = payload
            if payload.line <= 0:
                # imaginary node; no line/pos info; scan backwards
                i = -1
                priorNode = nodes.LT(i)
                while priorNode is not None:
                    priorPayload = adaptor.getToken(priorNode)
                    if priorPayload is not None and priorPayload.line > 0:
                        # we found the most recent real line / pos info
                        self.line = priorPayload.line
                        self.charPositionInLine = priorPayload.charPositionInLine
                        self.approximateLineInfo = True
                        break
    
        >>> Point = namedtuple('Point', 'x y')
    >>> Point.__doc__                   # docstring for the new class
    'Point(x, y)'
    >>> p = Point(11, y=22)             # instantiate with positional args or keywords
    >>> p[0] + p[1]                     # indexable like a plain tuple
    33
    >>> x, y = p                        # unpack like a regular tuple
    >>> x, y
    (11, 22)
    >>> p.x + p.y                       # fields also accessable by name
    33
    >>> d = p._asdict()                 # convert to a dictionary
    >>> d['x']
    11
    >>> Point(**d)                      # convert from a dictionary
    Point(x=11, y=22)
    >>> p._replace(x=100)               # _replace() is like str.replace() but targets named fields
    Point(x=100, y=22)
    
    
def ExtractKeywordsFromGroup_KeywordMiddle_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo contained bar',
                   'zoo goo'
                 ] ) ),
               contains_inanyorder( 'foo', 'contained', 'bar', 'zoo', 'goo' ) )
    
        raise RuntimeError( 'Path in 'g:ycm_server_python_interpreter' option '
                        'does not point to a valid Python 2.7 or 3.4+.' )
    
      for path in not_python_paths:
    yield EndsWithPython_Bad, path

    
      if 'COVERAGE' in os.environ:
    parsed_args.coverage = ( os.environ[ 'COVERAGE' ] == 'true' )
    
    
def SendEventNotificationAsync( event_name,
                                buffer_number = None,
                                extra_data = None ):
  event = EventNotification( event_name, buffer_number, extra_data )
  event.Start()
