
        
        
class RedirectFallbackMiddleware(MiddlewareMixin):
    # Defined as class-level attributes to be subclassing-friendly.
    response_gone_class = HttpResponseGone
    response_redirect_class = HttpResponsePermanentRedirect
    
        def __init__(self, session_key=None):
        self._session_key = session_key
        self.accessed = False
        self.modified = False
        self.serializer = import_string(settings.SESSION_SERIALIZER)
    
        def delete(self, session_key=None):
        '''
        To delete, clear the session key and the underlying data structure
        and set the modified flag so that the cookie is set on the client for
        the current request.
        '''
        self._session_key = ''
        self._session_cache = {}
        self.modified = True
    
        objects = BaseSessionManager()
    
    def _get_commands_from_entry_points(inproject, group='scrapy.commands'):
    cmds = {}
    for entry_point in pkg_resources.iter_entry_points(group):
        obj = entry_point.load()
        if inspect.isclass(obj):
            cmds[entry_point.name] = obj()
        else:
            raise Exception('Invalid entry point %s' % entry_point.name)
    return cmds
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def short_desc(self):
        return 'Edit spider'
    
        requires_project = False
    
    See documentation in docs/topics/shell.rst
'''
from threading import Thread
    
        poll_again = _HandlePollResponse( response, diagnostics_handler )
    if poll_again:
      self._SendRequest()
      return True
    
      def FilterRegex( diagnostic ):
    return pattern.search( diagnostic[ 'text' ] ) is not None
    
    
def LastEnteredCharIsIdentifierChar_Unicode_test():
  with MockCurrentFiletypes():
    # CurrentColumn returns a byte offset and character ø is 2 bytes length.
    with MockCurrentColumnAndLineContents( 5, 'føo(' ):
      ok_( not base.LastEnteredCharIsIdentifierChar() )
    
    
  def Just_Doc_String_test( self ):
    self._Check( 'not_an_int', {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'extra_data': {
        'doc_string':    'DOC STRING',
      },
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DOC STRING',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': 'not_an_int',
    } )
    
    
def BuildOmnicompletionRequest( results, start_column = 1 ):
  omni_completer = MagicMock()
  omni_completer.ComputeCandidates = MagicMock( return_value = results )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def GetVariableValue_CompleteItemIs( word, abbr = None, menu = None,
                                     info = None, kind = None, **kwargs ):
  def Result( variable ):
    if variable == 'v:completed_item':
      return CompleteItemIs( word, abbr, menu, info, kind, **kwargs )
    return DEFAULT
  return MagicMock( side_effect = Result )
    
    
def KeywordsFromSyntaxListOutput_StatementAndTypeGroups_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             links to Statement
bargroup xxx zoo goo
             links to Type''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
        assert_that(
      test_utils.VIM_MATCHES_FOR_WINDOW,
      has_entries( {
        1: contains(
          VimMatch( 'YcmWarningSection', '\%3l\%5c\_.\{-}\%3l\%7c' ),
          VimMatch( 'YcmWarningSection', '\%3l\%3c\_.\{-}\%3l\%9c' )
        )
      } )
    )
    
      def run( self ):
    if not self.future.set_running_or_notify_cancel():
      return
    
            # Locate the key for this kid
        key = None
        for key_dict in self.jwt_keyset['keys']:
            if key_dict['kid'] == kid:
                key = key_dict
                break
        if not key:
            raise ValueError(
                'Unable to locate kid ({}) in keyset'.format(kid))
    
        cognito = _cognito(cloud)
    # Workaround for bug in Warrant. PR with fix:
    # https://github.com/capless/warrant/pull/82
    cognito.add_base_attributes()
    try:
        cognito.register(email, password)
    except ClientError as err:
        raise _map_aws_exception(err)
    
    import homeassistant.helpers.config_validation as cv
    
        return True
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        filter_named = [result.name for result in self.last_results if
                        result.mac == device]
    
            try:
            data = [
                ('user', self._username),
                (self._type, self._password),
            ]
            res = requests.post(self._loginurl, data=data, timeout=10)
        except requests.exceptions.Timeout:
            _LOGGER.error(
                'Connection to the router timed out at URL %s', self._url)
            return False
        if res.status_code != 200:
            _LOGGER.error(
                'Connection failed with http code %s', res.status_code)
            return False
        try:
            self._userid = res.cookies['userid']
            return True
        except KeyError:
            _LOGGER.error('Failed to log in to router')
            return False