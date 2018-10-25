
        
        
DIRECTORY_URL = 'https://acme-staging.api.letsencrypt.org/directory'
BITS = 2048  # minimum for Boulder
DOMAIN = 'example1.com'  # example.com is ignored by Boulder
    
            with mock.patch('certbot.util.get_os_info') as mock_info:
            for distro in entrypoint.OVERRIDE_CLASSES.keys():
                mock_info.return_value = (distro, 'whatever')
                self.assertEqual(entrypoint.get_configurator(),
                                 entrypoint.OVERRIDE_CLASSES[distro])
    
          # We always go for the first diagnostic on the line because diagnostics
      # are sorted by errors in priority and Vim can only display one sign by
      # line.
      name = 'YcmError' if _DiagnosticIsError( diags[ 0 ] ) else 'YcmWarning'
      sign = vimsupport.CreateSign( line, name, self._bufnr )
    
    SYNTAX_ARGUMENT_REGEX = re.compile(
  r'^\w+=.*$' )
    
    
  def No_Insertion_Text_test( self ):
    self._Check( 0, {
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
      'extra_data': {
        'doc_string':    'DOC STRING',
      },
    }, {
      'word'     : '',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO\nDOC STRING',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0'
    } )

    
      def ServerResponse( *args ):
    return {
      'completions': [ {
        'insertion_text': 'insertion_text',
        'menu_text': 'menu_text',
        'extra_menu_info': 'extra_menu_info',
        'detailed_info': 'detailed_info',
        'kind': 'kind',
        'extra_data': {
           'doc_string': 'doc_string'
        }
      } ],
      'completion_start_column': 3,
      'errors': [ {
        'exception': {
           'TYPE': 'Exception'
        },
        'message': 'message',
        'traceback': 'traceback'
      } ]
    }
    
    
def FilterToCompletedCompletions_ShortTextDoesntRaise_test():
  completions = [ BuildCompletion( insertion_text = 'AAA' ) ]
  result = _FilterToMatchingCompletions( CompleteItemIs( 'A' ), completions )
  eq_( list( result ), [] )