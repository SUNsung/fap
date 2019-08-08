
        
        PY2 = sys.version_info[0] == 2
    
    
def get_top_states(t_state_v, K=4):
    return sorted(t_state_v, key=t_state_v.__getitem__, reverse=True)[:K]
    
    
if len(args) < 1:
    print(USAGE)
    sys.exit(1)
    
    if opt.withWeight is None:
    withWeight = False
else:
    if int(opt.withWeight) is 1:
        withWeight = True
    else:
        withWeight = False
    
    import jieba
    
    
  def ShouldUseNow( self, request_data ):
    self._omnifunc = utils.ToUnicode( vim.eval( '&omnifunc' ) )
    if not self._omnifunc:
      return False
    if self.ShouldUseCache():
      return super( OmniCompleter, self ).ShouldUseNow( request_data )
    return self.ShouldUseNowInner( request_data )
    
        return _MasterDiagnosticFilter( compiled_by_type )
    
          BaseRequest().GetDataFromHandler( 'healthy', display_message = False )

    
    
GENERIC_RESPONSE = {
  'clang': {
    'has_support': True,
    'version': 'Clang version'
  },
  'completer': {
    'items': [
      {
        'key': 'key',
        'value': 'value'
      }
    ],
    'name': 'Completer name',
    'servers': [
      {
        'address': '127.0.0.1',
        'executable': '/path/to/executable',
        'extras': [
          {
            'key': 'key',
            'value': 'value'
          }
        ],
        'is_running': True,
        'logfiles': [
          '/path/to/stdout/logfile',
          '/path/to/stderr/logfile'
        ],
        'name': 'Server name',
        'pid': 12345,
        'port': 1234
      }
    ]
  },
  'extra_conf': {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  },
  'python': {
    'executable': '/path/to/python/interpreter',
    'version': 'Python version'
  }
}
    
      with CurrentWorkingDirectory( unicode_dir ):
    with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
      with MockCompletionRequest( ServerResponse ):
        ycm.SendCompletionRequest()
        ok_( ycm.CompletionRequestReady() )
        assert_that(
          ycm.GetCompletionResponse(),
          has_entries( {
            'completions': empty(),
            'completion_start_column': 1
          } )
        )
    
    
def KeywordsFromSyntaxListOutput_JavaSyntax_test():
  expected_keywords = (
    'code', 'text', 'cols', 'datetime', 'disabled', 'shape', 'codetype', 'alt',
    'compact', 'style', 'valuetype', 'short', 'finally', 'continue', 'extends',
    'valign', 'bordercolor', 'do', 'return', 'rel', 'rules', 'void',
    'nohref', 'abbr', 'background', 'scrolling', 'instanceof', 'name',
    'summary', 'try', 'default', 'noshade', 'coords', 'dir', 'frame', 'usemap',
    'ismap', 'static', 'hspace', 'vlink', 'for', 'selected', 'rev', 'vspace',
    'content', 'method', 'version', 'volatile', 'above', 'new', 'charoff',
    'public', 'alink', 'enum', 'codebase', 'if', 'noresize', 'interface',
    'checked', 'byte', 'super', 'throw', 'src', 'language', 'package',
    'standby', 'script', 'longdesc', 'maxlength', 'cellpadding', 'throws',
    'tabindex', 'color', 'colspan', 'accesskey', 'float', 'while', 'private',
    'height', 'boolean', 'wrap', 'prompt', 'nowrap', 'size', 'rows', 'span',
    'clip', 'bgcolor', 'top', 'long', 'start', 'scope', 'scheme', 'type',
    'final', 'lang', 'visibility', 'else', 'assert', 'transient', 'link',
    'catch', 'true', 'serializable', 'target', 'lowsrc', 'this', 'double',
    'align', 'value', 'cite', 'headers', 'below', 'protected', 'declare',
    'classid', 'defer', 'false', 'synchronized', 'int', 'abstract', 'accept',
    'hreflang', 'char', 'border', 'id', 'native', 'rowspan', 'charset',
    'archive', 'strictfp', 'readonly', 'axis', 'cellspacing', 'profile',
    'multiple', 'object', 'action', 'pagex', 'pagey', 'marginheight', 'data',
    'class', 'frameborder', 'enctype', 'implements', 'break', 'gutter', 'url',
    'clear', 'face', 'switch', 'marginwidth', 'width', 'left' )
    
        def shutdown(self, wait=True):
        with self._shutdown_lock:
            self._shutdown_thread = True
        if self._queue_management_thread:
            # Wake up queue management thread
            self._result_queue.put(None)
            if wait:
                self._queue_management_thread.join()
        # To reduce the risk of openning too many files, remove references to
        # objects that use file descriptors.
        self._queue_management_thread = None
        self._call_queue = None
        self._result_queue = None
        self._processes = None
    shutdown.__doc__ = _base.Executor.shutdown.__doc__