
        
        
def get_db():
    '''Connect to the application's configured database. The connection
    is unique for each request and will be reused if this is called
    again.
    '''
    if 'db' not in g:
        g.db = sqlite3.connect(
            current_app.config['DATABASE'], detect_types=sqlite3.PARSE_DECLTYPES
        )
        g.db.row_factory = sqlite3.Row
    
        monkeypatch.setattr(werkzeug.serving, 'run_simple', run_simple_mock)
    app.run()
    assert rv['result'] == 'running...'
    
            @app.route('/dict')
        def return_dict():
            return flask.jsonify(d)
    
    
  def ShouldUseNowInner( self, request_data ):
    if request_data[ 'force_semantic' ]:
      return True
    disabled_filetypes = self.user_options[
      'filetype_specific_completion_to_disable' ]
    if not vimsupport.CurrentFiletypesEnabled( disabled_filetypes ):
      return False
    return super( OmniCompleter, self ).ShouldUseNowInner( request_data )
    
    
  def _HandleGotoResponse( self, modifiers ):
    if isinstance( self._response, list ):
      vimsupport.SetQuickFixList(
        [ _BuildQfListItem( x ) for x in self._response ] )
      vimsupport.OpenQuickFixList( focus = True, autoclose = True )
    else:
      vimsupport.JumpToLocation( self._response[ 'filepath' ],
                                 self._response[ 'line_num' ],
                                 self._response[ 'column_num' ],
                                 modifiers,
                                 self._buffer_command )
    
    
class DiagnosticInterface( object ):
  def __init__( self, bufnr, user_options ):
    self._bufnr = bufnr
    self._user_options = user_options
    self._diagnostics = []
    self._diag_filter = DiagnosticFilter.CreateFromOptions( user_options )
    # Line and column numbers are 1-based
    self._line_to_diags = defaultdict( list )
    self._previous_diag_line_number = -1
    self._diag_message_needs_clearing = False
    
    
def SendEventNotificationAsync( event_name,
                                buffer_number = None,
                                extra_data = None ):
  event = EventNotification( event_name, buffer_number, extra_data )
  event.Start()

    
    
class MessagesPoll( BaseRequest ):
  def __init__( self ):
    super( MessagesPoll, self ).__init__()
    self._request_data = BuildRequestData()
    self._response_future = None
    
      # Ignore 'syntax match' lines (see ':h syn-match').
  if line.startswith( 'match ' ):
    return []
    
    
def FormatDebugInfoResponse_NoExtraConf_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'No extra configuration file found\n'
    )
  )
    
    
def HandlePollResponse_MultipleDiagnostics_test():
  diagnostics_handler = ExtendedMock()
  messages = [
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER1' ] },
    { 'filepath': 'bar', 'diagnostics': [ 'PLACEHOLDER2' ] },
    { 'filepath': 'baz', 'diagnostics': [ 'PLACEHOLDER3' ] },
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER4' ] },
  ]
  assert_that( _HandlePollResponse( messages, diagnostics_handler ),
               equal_to( True ) )
  diagnostics_handler.UpdateWithNewDiagnosticsForFile.assert_has_exact_calls( [
    call( 'foo', [ 'PLACEHOLDER1' ] ),
    call( 'bar', [ 'PLACEHOLDER2' ] ),
    call( 'baz', [ 'PLACEHOLDER3' ] ),
    call( 'foo', [ 'PLACEHOLDER4' ] )
  ] )
    
      _assert_rejects( f, 'This is a Taco' )
  _assert_rejects( f, 'This is a Burrito' )
    
    
def KeywordsFromSyntaxListOutput_ContainedArgAllowed_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
phpFunctions   xxx contained gzclose yaz_syntax html_entity_decode fbsql_read_blob png2wbmp mssql_init cpdf_set_title gztell fbsql_insert_id empty cpdf_restore mysql_field_type closelog swftext ldap_search curl_errno gmp_div_r mssql_data_seek getmyinode printer_draw_pie mcve_initconn ncurses_getmaxyx defined
                   contained replace_child has_attributes specified insertdocument assign node_name hwstat addshape get_attribute_node html_dump_mem userlist
                   links to Function''' ), # noqa
              has_items( 'gzclose', 'userlist', 'ldap_search' ) )