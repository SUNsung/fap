
        
        import re
import sys
    
        if test_config is None:
        # load the instance config, if it exists, when not testing
        app.config.from_pyfile('config.py', silent=True)
    else:
        # load the test config if passed in
        app.config.update(test_config)
    
        def fake_init_db():
        Recorder.called = True
    
            # indicator if the context was preserved.  Next time another context
        # is pushed the preserved context is popped.
        self.preserved = False
    
            return session.modified or (
            session.permanent and app.config['SESSION_REFRESH_EACH_REQUEST']
        )
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
            content = response.read()
        if self.config.check_ip_content not in content:
            self.logger.warn('app check content:%s', content)
            return False
    
    
max_timeout = 5
    
    
class SniManager(object):
    plus = ['-', '', '.']
    end = ['com', 'net', 'ml', 'org', 'us']
    
    A Lexer emits Token objects which are usually buffered by a TokenStream. A
Parser can build a Tree, if the output=AST option has been set in the grammar.
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
                try:
                self.mTokens()
                
                if self._state.token is None:
                    self.emit()
                    
                elif self._state.token == SKIP_TOKEN:
                    continue
    
            if stop is None:
            stop = len(self.tokens) - 1
        elif not isinstance(stop, int):
            stop = stop.index
        
        if stop >= len(self.tokens):
            stop = len(self.tokens) - 1
    
    # Create the base text message.
msg = EmailMessage()
msg['Subject'] = 'Ayons asperges pour le déjeuner'
msg['From'] = Address('Pepé Le Pew', 'pepe', 'example.com')
msg['To'] = (Address('Penelope Pussycat', 'penelope', 'example.com'),
             Address('Fabrette Pussycat', 'fabrette', 'example.com'))
msg.set_content('''\
Salut!
    
      def NewCandidateInsertionText( to_insert, text_after_cursor ):
    overlap_len = OverlapLength( to_insert, text_after_cursor )
    if overlap_len:
      return to_insert[ :-overlap_len ]
    return to_insert
    
    
  def Start( self ):
    request_data = BuildRequestData( self._buffer_number )
    if self._extra_data:
      request_data.update( self._extra_data )
    request_data[ 'event_name' ] = self._event_name
    
    
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
    
    
@YouCompleteMeInstance( { 'g:ycm_open_loclist_on_ycm_diags': 1 } )
@patch( 'ycm.youcompleteme.YouCompleteMe.FiletypeCompleterExistsForFiletype',
        return_value = True )
@patch( 'ycm.vimsupport.PostVimMessage', new_callable = ExtendedMock )
@patch( 'ycm.vimsupport.SetLocationListForWindow', new_callable = ExtendedMock )
@patch( 'ycm.vimsupport.OpenLocationList', new_callable = ExtendedMock )
def YouCompleteMe_ShowDiagnostics_DiagnosticsFound_OpenLocationList_test(
  ycm,
  open_location_list,
  set_location_list_for_window,
  post_vim_message,
  *args ):