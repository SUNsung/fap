
        
            def reducer(self, key, values):
        '''Sum values for each key.
    
        def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
    
class Root(Resource):
    
        default_settings = {
        'LOG_LEVEL': 'INFO',
        'LOGSTATS_INTERVAL': 1,
        'CLOSESPIDER_TIMEOUT': 10,
    }
    
            cookiejarkey = request.meta.get('cookiejar')
        jar = self.jars[cookiejarkey]
        cookies = self._get_request_cookies(jar, request)
        for cookie in cookies:
            jar.set_cookie_if_ok(cookie, request)
    
        def __init__(self, stats):
        self.stats = stats
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    import json
import re
    
    #----------------------------------------------------------------------
def makeMimi(upid):
    '''From http://cdn37.atwikiimg.com/sitescript/pub/dksitescript/FC2.site.js
    Also com.hps.util.fc2.FC2EncrptUtil.makeMimiLocal
    L110'''
    strSeed = 'gGddgPfeaf_gzyr'
    prehash = upid + '_' + strSeed
    return md5(prehash.encode('utf-8')).hexdigest()
    
    __all__ = ['giphy_download']
    
    def ifeng_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
# old pattern /uuid.shtml
# now it could be #uuid
    id = r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', url)
    if id:
        return ifeng_download_by_id(id, None, output_dir = output_dir, merge = merge, info_only = info_only)
    
            the output mask will be <mask_type>.mask
        channels: 1, 3 or 4:
                    1 - Returns a single channel mask
                    3 - Returns a 3 channel mask
                    4 - Returns the original image with the mask in the alpha channel '''
    
            mask = BlurMask(self.config['type'],
                        mask,
                        self.config['radius'],
                        self.config['passes']).blurred
        logger.debug('Built box mask. Shape: %s', mask.shape)
        return mask
    
    logger = logging.getLogger(__name__)  # pylint: disable=invalid-name
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
            if event is None:
            logger.debug('Launched Detector')
            return
    
        c = Controller(blackboard)
    contributions = c.run_loop()
    
    Request receiver in simple form keeps a reference to a single successor.
As a variation some receivers may be capable of sending requests out
in several directions, forming a `tree of responsibility`.
    
    Request receiver in simple form keeps a reference to a single successor.
As a variation some receivers may be capable of sending requests out
in several directions, forming a `tree of responsibility`.
    
    
class NumObj(object):
    def __init__(self, value):
        self.value = value
    
        >>> Order(1000, discount_strategy=on_sale_discount)
    <Price: 1000, price after discount: 730.0>
    '''
    
    from __future__ import unicode_literals
from __future__ import print_function
    
    
def main():
    '''
    >>> Jhon = Person('Jhon', 'Coder')
    
        >>> print(objects[0].original_dict())
    {'name': 'Dog'}
    
        graphic.add(graphic1)
    graphic.add(graphic2)
    
        # Vim may not be able to convert the 'errors' entry to its internal format
    # so we remove it from the response.
    errors = response.pop( 'errors', [] )
    for e in errors:
      exception = MakeServerException( e )
      _logger.error( exception )
      DisplayServerException( exception, truncate_message = True )
    
    OMNIFUNC_RETURNED_BAD_VALUE = 'Omnifunc returned bad value to YCM!'
OMNIFUNC_NOT_LIST = ( 'Omnifunc did not return a list or a dict with a 'words' '
                     ' list when expected.' )
    
    
def tearDownPackage():
  warnings.resetwarnings()
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def _FormatYcmdDebugInfo( ycmd ):
  python = ycmd[ 'python' ]
  clang = ycmd[ 'clang' ]
  message = ( 'Server Python interpreter: {0}\n'
              'Server Python version: {1}\n'
              'Server has Clang support compiled in: {2}\n'
              'Clang version: {3}\n'.format( python[ 'executable' ],
                                             python[ 'version' ],
                                             clang[ 'has_support' ],
                                             clang[ 'version' ] ) )
  extra_conf = ycmd[ 'extra_conf' ]
  extra_conf_path = extra_conf[ 'path' ]
  if not extra_conf_path:
    message += 'No extra configuration file found\n'
  elif not extra_conf[ 'is_loaded' ]:
    message += ( 'Extra configuration file found but not loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  else:
    message += ( 'Extra configuration file found and loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  return message
    
    
  def Response( self ):
    if self._cached_response:
      return self._cached_response
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      AddToGroupMap( 'Function', identifier_group )
    
    
def FormatDebugInfoResponse_Completer_ServerNotRunningWithNoLogfiles_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'is_running': False,
    'logfiles': []
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name not running\n'
      '  Server name executable: /path/to/executable\n'
      '  No logfiles available\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )

    
      _assert_accepts( f, { 'text' : 'This is an IMPORTANT taco',
                        'kind' : 'WARNING' } )
  _assert_rejects( f, { 'text' : 'This taco will NOT be shown',
                        'kind' : 'ERROR' } )
    
        # Parse and validate the field names.  Validation serves two purposes,
    # generating informative error messages and preventing template injection attacks.
    if isinstance(field_names, basestring):
        field_names = field_names.replace(',', ' ').split() # names separated by whitespace and/or commas
    field_names = tuple(map(str, field_names))
    for name in (typename,) + field_names:
        if not all(c.isalnum() or c=='_' for c in name):
            raise ValueError('Type names and field names can only contain alphanumeric characters and underscores: %r' % name)
        if _iskeyword(name):
            raise ValueError('Type names and field names cannot be a keyword: %r' % name)
        if name[0].isdigit():
            raise ValueError('Type names and field names cannot start with a number: %r' % name)
    seen_names = set()
    for name in field_names:
        if name.startswith('_'):
            raise ValueError('Field names cannot start with an underscore: %r' % name)
        if name in seen_names:
            raise ValueError('Encountered duplicate field name: %r' % name)
        seen_names.add(name)