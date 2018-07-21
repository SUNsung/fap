
def FormatDebugInfoResponse_ExtraConfFoundButNotLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found but not loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    
def AdjustCandidateInsertionText( candidates ):
  '''This function adjusts the candidate insertion text to take into account the
  text that's currently in front of the cursor.
    
    import os
import subprocess
import os.path as p
import sys
    
        if not done:
      self._result = None
    else:
      self._result = FakeResponse( response, exception )
    
    
  def Extra_Info_No_Doc_String_test( self ):
    self._Check( 0, {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'extra_data': {
      },
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0',
    } )