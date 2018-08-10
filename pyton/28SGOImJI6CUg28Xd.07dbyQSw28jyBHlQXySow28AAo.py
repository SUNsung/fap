
        
                self.assertEqual(parsed, parsed_new)
        self.assertEqual(parsed_new, [
            ['#', ' Use bar.conf when it's a full moon!'],
            ['include', 'foo.conf'],
            ['#', ' Kilroy was here'],
            ['check_status'],
            [['server'],
             [['#', ''],
              ['#', ' Don't forget to open up your firewall!'],
              ['#', ''],
              ['listen', '1234'],
              ['#', ' listen 80;']]],
        ])
    
        def has_more_configs(self):
        '''Returns true if there are more configs to test'''
        return bool(self._configs)
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_success(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        mock_probe_sni.return_value = cert
        self.assertTrue(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
    
# -- Options for manual page output ---------------------------------------
    
    
class RedirectTest(unittest.TestCase):
    '''Test the redirect_by_default method.'''
    @classmethod
    def _call(cls):
        from certbot.display.enhancements import redirect_by_default
        return redirect_by_default()
    
    from concurrent.futures import _base
    
    
def _GetRequiredNamespaceImport( completion ):
  if ( 'extra_data' not in completion
       or 'required_namespace_import' not in completion[ 'extra_data' ] ):
    return None
  return completion[ 'extra_data' ][ 'required_namespace_import' ]
    
    
  def _HandleGotoResponse( self, modifiers ):
    if isinstance( self._response, list ):
      vimsupport.SetQuickFixList(
        [ _BuildQfListItem( x ) for x in self._response ] )
      vimsupport.OpenQuickFixList( focus = True, autoclose = True )
    else:
      vimsupport.JumpToLocation( self._response[ 'filepath' ],
                                 self._response[ 'line_num' ],
                                 self._response[ 'column_num' ],
                                 modifiers )
    
    
def CurrentLineAndColumn():
  '''Returns the 0-based current line and 0-based current column.'''
  # See the comment in CurrentColumn about the calculation for the line and
  # column number
  line, column = vim.current.window.cursor
  line -= 1
  return line, column
    
      return FilterLevel