
        
        
  def Start( self ):
    self._keepalive_thread.start()
    
    
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
    
    
@patch( 'ycm.client.messages_request.PostVimMessage',
        new_callable = ExtendedMock )
def HandlePollResponse_MultipleMessages_test( post_vim_message ):
  assert_that( _HandlePollResponse( [ { 'message': 'this is a message' },
                                      { 'message': 'this is another one' } ] ,
                                    None ),
               equal_to( True ) )
    
    
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
    
    from concurrent.futures import _base
    
    # If nonempty, this is the file name suffix for HTML files (e.g. '.xhtml').
#html_file_suffix = ''
    
    from concurrent.futures import ThreadPoolExecutor, ProcessPoolExecutor
    
        def test_repr(self):
        self.assertRegexpMatches(repr(PENDING_FUTURE),
                                 '<Future at 0x[0-9a-f]+ state=pending>')
        self.assertRegexpMatches(repr(RUNNING_FUTURE),
                                 '<Future at 0x[0-9a-f]+ state=running>')
        self.assertRegexpMatches(repr(CANCELLED_FUTURE),
                                 '<Future at 0x[0-9a-f]+ state=cancelled>')
        self.assertRegexpMatches(repr(CANCELLED_AND_NOTIFIED_FUTURE),
                                 '<Future at 0x[0-9a-f]+ state=cancelled>')
        self.assertRegexpMatches(
                repr(EXCEPTION_FUTURE),
                '<Future at 0x[0-9a-f]+ state=finished raised IOError>')
        self.assertRegexpMatches(
                repr(SUCCESSFUL_FUTURE),
                '<Future at 0x[0-9a-f]+ state=finished returned int>')