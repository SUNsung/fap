
        
            Validates that the username is not already taken. Hashes the
    password for security.
    '''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
    
    
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
    
        .. versionadded:: 0.9
       The `_anchor` and `_method` parameters were added.
    
    from twisted import version as _txv
twisted_version = (_txv.major, _txv.minor, _txv.micro)
    
            if opts.logfile:
            self.settings.set('LOG_ENABLED', True, priority='cmdline')
            self.settings.set('LOG_FILE', opts.logfile, priority='cmdline')
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.utils.template import render_templatefile, string_camelcase
from scrapy.exceptions import UsageError
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
        def crawl(self, request, spider):
        assert spider in self.open_spiders, \
            'Spider %r not opened when crawling: %s' % (spider.name, request)
        self.schedule(request, spider)
        self.slot.nextcall.schedule()
    
        def _is_tar(self, response):
        archive = BytesIO(response.body)
        try:
            tar_file = tarfile.open(name=mktemp(), fileobj=archive)
        except tarfile.ReadError:
            return
    
        DOWNLOAD_EXCEPTIONS = (defer.TimeoutError, TimeoutError, DNSLookupError,
                           ConnectionRefusedError, ConnectionDone, ConnectError,
                           ConnectionLost, TCPTimedOutError, ResponseFailed,
                           IOError)
    
        def process_response(self, request, response, spider):
        self.stats.inc_value('downloader/response_count', spider=spider)
        self.stats.inc_value('downloader/response_status_count/%s' % response.status, spider=spider)
        reslen = len(response_httprepr(response))
        self.stats.inc_value('downloader/response_bytes', reslen, spider=spider)
        return response
    
    
  def _HandleFixitResponse( self ):
    if not len( self._response[ 'fixits' ] ):
      vimsupport.PostVimMessage( 'No fixits found for current line',
                                 warning = False )
    else:
      try:
        fixit_index = 0
    
    
def YouCompleteMeInstance( custom_options = {} ):
  '''Defines a decorator function for tests that passes a unique YouCompleteMe
  instance as a parameter. This instance is initialized with the default options
  `DEFAULT_CLIENT_OPTIONS`. Use the optional parameter |custom_options| to give
  additional options and/or override the already existing ones.
    
    
class DebugInfoRequest( BaseRequest ):
  def __init__( self, extra_data = None ):
    super( DebugInfoRequest, self ).__init__()
    self._extra_data = extra_data
    self._response = None
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
@patch( 'ycm.client.messages_request.PostVimMessage',
        new_callable = ExtendedMock )
def HandlePollResponse_SingleMessage_test( post_vim_message ):
  assert_that( _HandlePollResponse( [ { 'message': 'this is a message' } ] ,
                                    None ),
               equal_to( True ) )
    
    
def _assert_accept_equals( filter, text_or_obj, expected ):
  if not isinstance( text_or_obj, dict ):
    text_or_obj = { 'text': text_or_obj }
    
    
def ExtractKeywordsFromGroup_KeywordAssign_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'nextgroup=zoo skipwhite foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
        def add_done_callback(self, fn):
        '''Attaches a callable that will be called when the future finishes.