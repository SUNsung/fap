
        
        lazy_extractors_filename = sys.argv[1]
if os.path.exists(lazy_extractors_filename):
    os.remove(lazy_extractors_filename)
    
    
def _is_empty(d):
    return not bool(os.listdir(d))
    
    import unittest
    
        def test_call(self):
        jsi = JSInterpreter('''
        function x() { return 2; }
        function y(a) { return x() + a; }
        function z() { return y(3); }
        ''')
        self.assertEqual(jsi.call_function('z'), 5)
    
    
class TestThePlatformSubtitles(BaseTestSubtitles):
    # from http://www.3playmedia.com/services-features/tools/integrations/theplatform/
    # (see http://theplatform.com/about/partners/type/subtitles-closed-captioning/)
    url = 'theplatform:JFUjUE1_ehvq'
    IE = ThePlatformIE
    
    
class TestUnicodeLiterals(unittest.TestCase):
    def test_all_files(self):
        for dirpath, dirnames, filenames in os.walk(rootDir):
            for ignore_dir in IGNORED_DIRS:
                if ignore_dir in dirnames:
                    # If we remove the directory from dirnames os.walk won't
                    # recurse into it
                    dirnames.remove(ignore_dir)
            for basename in filenames:
                if not basename.endswith('.py'):
                    continue
                if basename in IGNORED_FILES:
                    continue
    
    logger = logging.getLogger(__name__)
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = ['sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode']
    
      # Ignore 'nextgroup=' argument in first position and the arguments
  # 'skipwhite', 'skipnl', and 'skipempty' that immediately come after.
  nextgroup_at_start = False
  if words[ 0 ].startswith( 'nextgroup=' ):
    nextgroup_at_start = True
    words = words[ 1: ]
    
          # We set up a fake response.
      with patch( 'ycm.client.base_request._JsonFromFuture',
                  side_effect = response_method ):
        yield
    
        exception = RuntimeError( 'Check client handles exception' )
    with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseException( exception ) ):
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( True, None, exception ) )
    
    
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
    
    
# -- Options for HTML output ---------------------------------------------------
    
    
def main():
    parse_command_line()
    
            return remaining
    
        def add_handler(
        self, fd: Union[int, _Selectable], handler: Callable[..., None], events: int
    ) -> None:
        fd, fileobj = self.split_fd(fd)
        if fd in self.handlers:
            raise ValueError('fd %s added twice' % fd)
        self.handlers[fd] = (fileobj, handler)
        if events & IOLoop.READ:
            self.asyncio_loop.add_reader(fd, self._handle_events, fd, IOLoop.READ)
            self.readers.add(fd)
        if events & IOLoop.WRITE:
            self.asyncio_loop.add_writer(fd, self._handle_events, fd, IOLoop.WRITE)
            self.writers.add(fd)
    
        def generate(self, writer: '_CodeWriter') -> None:
        assert writer.loader is not None
        included = writer.loader.load(self.name, self.template_name)
        with writer.include(included, self.line):
            included.file.body.generate(writer)
    
        def load(self, loader):
        loader.add_option(
            'stickycookie', Optional[str], None,
            'Set sticky cookie filter. Matched against requests.'
        )
    
        def websocket_start(self, f):
        if ctx.options.stream_websockets:
            f.stream = True
            ctx.log.info('Streaming WebSocket messages between {client} and {server}'.format(
                client=human.format_address(f.client_conn.address),
                server=human.format_address(f.server_conn.address))
            )

    
        def call(self, path: str, *args: typing.Sequence[typing.Any]) -> typing.Any:
        '''
            Call a command with native arguments. May raise CommandError.
        '''
        if path not in self.commands:
            raise exceptions.CommandError('Unknown command: %s' % path)
        return self.commands[path].func(*args)
    
    		page.addToken(0x05, 'DisplayName')
		page.addToken(0x06, 'Phone')
		page.addToken(0x07, 'Office')
		page.addToken(0x08, 'Title')
		page.addToken(0x09, 'Company')
		page.addToken(0x0A, 'Alias')
		page.addToken(0x0B, 'FirstName')
		page.addToken(0x0C, 'LastName')
		page.addToken(0x0D, 'HomePhone')
		page.addToken(0x0E, 'MobilePhone')
		page.addToken(0x0F, 'EmailAddress')
		page.addToken(0x10, 'Picture')
		page.addToken(0x11, 'Status')
		page.addToken(0x12, 'Data')
		self.codePages.append(page)
		# endregion
    
    class BiDi: