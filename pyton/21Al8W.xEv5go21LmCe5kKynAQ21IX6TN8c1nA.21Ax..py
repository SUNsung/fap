
        
        else:
    text_type = unicode
    string_types = (str, unicode)
    integer_types = (int, long)
    
        def from_envvar(self, variable_name, silent=False):
        '''Loads a configuration from an environment variable pointing to
        a configuration file.  This is basically just a shortcut with nicer
        error messages for this line of code::
    
        recorded = []
    
      def PrintErrorCounts(self):
    '''Print a summary of errors by category, and the total.'''
    for category, count in sorted(iteritems(self.errors_by_category)):
      self.PrintInfo('Category \'%s\' errors found: %d\n' %
                       (category, count))
    if self.error_count > 0:
      self.PrintInfo('Total errors found: %d\n' % self.error_count)
    
        '''
    
    # Add any paths that contain custom themes here, relative to this directory.
#html_theme_path = []
    
    from hamcrest import assert_that, contains, has_entries
from mock import patch
    
    
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

    
    
def ConvertVimDataToCompletionData( vim_data ):
  # see :h complete-items for a description of the dictionary fields
  completion_data = {}
    
      # As a last resort, we search python in the PATH. We prefer Python 2 over 3
  # for the sake of backwards compatibility with ycm_extra_conf.py files out
  # there; few people wrote theirs to work on py3.
  # So we check 'python2' before 'python' because on some distributions (Arch
  # Linux for example), python refers to python3.
  python_interpreter = utils.PathToFirstExistingExecutable( [ 'python2',
                                                              'python',
                                                              'python3' ] )
  if python_interpreter:
    return python_interpreter