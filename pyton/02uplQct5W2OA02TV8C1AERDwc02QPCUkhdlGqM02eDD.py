
        
                if error is not None:
            flash(error)
        else:
            db = get_db()
            db.execute(
                'INSERT INTO post (title, body, author_id)'
                ' VALUES (?, ?, ?)',
                (title, body, g.user['id'])
            )
            db.commit()
            return redirect(url_for('blog.index'))
    
            .. versionadded:: 0.11
        '''
        self.record_once(lambda s: s.app._register_error_handler(
            self.name, code_or_exception, f))

    
        if args and kwargs:
        raise TypeError('jsonify() behavior undefined when passed both args and kwargs')
    elif len(args) == 1:  # single args are passed directly to dumps()
        data = args[0]
    else:
        data = args or kwargs
    
        app.session_interface.serializer.register(TagOrderedDict, index=0)
    
    
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

    
        def _get_source_fast(self, environment, template):
        for srcobj, loader in self._iter_loaders(template):
            try:
                return loader.get_source(environment, template)
            except TemplateNotFound:
                continue
        raise TemplateNotFound(template)
    
    This module handles import compatibility issues between Python 2 and
Python 3.
'''
    
        if implementation == 'CPython':
        implementation_version = platform.python_version()
    elif implementation == 'PyPy':
        implementation_version = '%s.%s.%s' % (sys.pypy_version_info.major,
                                               sys.pypy_version_info.minor,
                                               sys.pypy_version_info.micro)
        if sys.pypy_version_info.releaselevel != 'final':
            implementation_version = ''.join([
                implementation_version, sys.pypy_version_info.releaselevel
            ])
    elif implementation == 'Jython':
        implementation_version = platform.python_version()  # Complete Guess
    elif implementation == 'IronPython':
        implementation_version = platform.python_version()  # Complete Guess
    else:
        implementation_version = 'Unknown'
    
    import pytest
from requests.compat import urljoin
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
    
class TestLookupDict:
    
        def test_server_finishes_when_no_connections(self):
        '''the server thread exits even if there are no connections'''
        server = Server.basic_response_server()
        with server:
            pass
    
        # Check urllib3 for compatibility.
    major, minor, patch = urllib3_version  # noqa: F811
    major, minor, patch = int(major), int(minor), int(patch)
    # urllib3 >= 1.21.1, <= 1.23
    assert major == 1
    assert minor >= 21
    assert minor <= 23
    
            self.method = method
        self.url = url
        self.headers = headers
        self.files = files
        self.data = data
        self.json = json
        self.params = params
        self.auth = auth
        self.cookies = cookies
    
        replace_chars = ' \'''
    
        def short_desc(self):
        '''
        A short description of the command
        '''
        return ''
    
    
class TextTestResult(_TextTestResult):
    def printSummary(self, start, stop):
        write = self.stream.write
        writeln = self.stream.writeln
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        def _find_template(self, template):
        template_file = join(self.templates_dir, '%s.tmpl' % template)
        if exists(template_file):
            return template_file
        print('Unable to find template: %s\n' % template)
        print('Use 'scrapy genspider --list' to see all available templates.')
    
                raise ContractFail('Returned %s %s, expected %s' % \
                (occurrences, self.obj_name, expected))
    
    
  def Done( self ):
    return bool( self._response_future ) and self._response_future.done()
    
    
  def Start( self ):
    self._results = self._omni_completer.ComputeCandidates( self.request_data )
    
    
def EndsWithPython_Good( path ):
  ok_( _EndsWithPython( path ),
       'Path {0} does not end with a Python name.'.format( path ) )
    
    
def CompleteItemIs( word, abbr = None, menu = None,
                    info = None, kind = None, **kwargs ):
  item = {
    'word': ToBytes( word ),
    'abbr': ToBytes( abbr ),
    'menu': ToBytes( menu ),
    'info': ToBytes( info ),
    'kind': ToBytes( kind ),
  }
  item.update( **kwargs )
  return item
    
    
def KeywordsFromSyntaxListOutput_JunkIgnored_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
--- Syntax items ---
foogroup xxx foo bar
             zoo goo
             links to Statement
Spell        cluster=NONE
NoSpell      cluster=NONE''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
        try:
      result = self.fn( *self.args, **self.kwargs )
    except BaseException:
      e = sys.exc_info()[ 1 ]
      self.future.set_exception( e )
    else:
      self.future.set_result( result )