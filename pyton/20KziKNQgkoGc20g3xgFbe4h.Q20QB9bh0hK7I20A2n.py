
        
                def get_auth(self, username=None, password=None):
            assert self.raw_auth is None
            assert username is None
            assert password is None
            return basic_auth()
    
            '''
        assert with_headers or with_body
        self.msg = msg
        self.with_headers = with_headers
        self.with_body = with_body
        self.on_body_chunk_downloaded = on_body_chunk_downloaded
    
    UNICODE = FILE_CONTENT

    
      1. Read, validate and process the input (args, `stdin`).
  2. Create and send a request.
  3. Stream, and possibly process and format, the parts
     of the request-response exchange selected by output options.
  4. Simultaneously write to `stdout`
  5. Exit.
    
    import requests.auth
    
    output_options.add_argument(
    '--continue', '-c',
    dest='download_resume',
    action='store_true',
    default=False,
    help='''
    Resume an interrupted download. Note that the --output option needs to be
    specified as well.
    
        def format_headers(self, headers):
        return pygments.highlight(headers, self.http_lexer, self.formatter).strip()
    
        def test_cert_pem(self, httpbin_secure):
        r = http(httpbin_secure + '/get',
                 '--cert', CLIENT_PEM)
        assert HTTP_OK in r
    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
        '''
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
    
def is_code(line, indent_depth = 4):
    '''returns the indent depth, 0 means not code in markup'''
    if line.startswith(' ' * indent_depth):
        return len(line) - len(line.lstrip(' '))
    return 0
    
      if file_extension in GetHeaderExtensions():
    CheckForHeaderGuard(filename, clean_lines, error)
    
    
@click.command()
@click.argument('catalog_file', type=click.Path())
def cli(catalog_file):
    # Read the old ones back.  Once we are in, we will never go.
    with open(catalog_file) as f:
        rv = json.load(f)['supported_locales']
    
                    errpage = pages.InterstitialPage(
                    _('suspended'),
                    content=pages.InTimeoutInterstitial(
                        timeout_days_remaining=timeout_days_remaining,
                    ),
                )
                request.environ['usable_error_content'] = errpage.render()
    
    
class GoogleTagManagerController(MinimalController):
    def pre(self):
        if request.host != g.media_domain:
            # don't serve up untrusted content except on our
            # specifically untrusted domain
            self.abort404()