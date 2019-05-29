
        
        html_theme = 'flask'
html_theme_options = {'index_sidebar_logo': False}
html_context = {
    'project_links': [
        ProjectLink('Donate to Pallets', 'https://palletsprojects.com/donate'),
        ProjectLink('Flask Website', 'https://palletsprojects.com/p/flask/'),
        ProjectLink('PyPI releases', 'https://pypi.org/project/Flask/'),
        ProjectLink('Source Code', 'https://github.com/pallets/flask/'),
        ProjectLink('Issue Tracker', 'https://github.com/pallets/flask/issues/'),
    ]
}
html_sidebars = {
    'index': ['project.html', 'localtoc.html', 'versions.html', 'searchbox.html'],
    '**': ['localtoc.html', 'relations.html', 'versions.html', 'searchbox.html'],
}
singlehtml_sidebars = {'index': ['project.html', 'versions.html', 'localtoc.html']}
html_static_path = ['_static']
html_favicon = '_static/flask-icon.png'
html_logo = '_static/flask-logo-sidebar.png'
html_title = 'Flask Documentation ({})'.format(version)
html_show_sourcelink = False
html_domain_indices = False
    
        def dispatch_request(self):
        '''Subclasses have to override this method to implement the
        actual view function code.  This method is called with all
        the arguments from the URL rule.
        '''
        raise NotImplementedError()
    
    
def test_explicit_head(app, client):
    class Index(flask.views.MethodView):
        def get(self):
            return 'GET'
    
    from .app import Flask, Request, Response
from .config import Config
from .helpers import (
    url_for,
    flash,
    send_file,
    send_from_directory,
    get_flashed_messages,
    get_template_attribute,
    make_response,
    safe_join,
    stream_with_context,
)
from .globals import (
    current_app,
    g,
    request,
    session,
    _request_ctx_stack,
    _app_ctx_stack,
)
from .ctx import (
    has_request_context,
    has_app_context,
    after_this_request,
    copy_current_request_context,
)
from .blueprints import Blueprint
from .templating import render_template, render_template_string
    
            # No redirect was found. Return the response.
        return response

    
        def label_tag(self, contents=None, attrs=None, label_suffix=None):
        '''
        Wrap the given contents in a <label>, if the field has an ID attribute.
        contents should be mark_safe'd to avoid HTML escaping. If contents
        aren't given, use the field's HTML-escaped label.
    
        By default, it represents the actual environment.
    All of the attributes can be overwritten though, which
    is used by the test suite to simulate various scenarios.
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
def test_missing_auth(httpbin):
    r = http(
        '--auth-type=basic',
        'GET',
        httpbin + '/basic-auth/user/password',
        error_exit_ok=True
    )
    assert HTTP_OK not in r
    assert '--auth required' in r.stderr

    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
    
def test_unicode_json_item_verbose(httpbin):
    r = http('--verbose', '--json',
             'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
        DEFAULTS = {
        'default_options': []
    }
    
            # host:port => host_port
        hostname = hostname.replace(':', '_')
        path = os.path.join(config_dir,
                            SESSIONS_DIR_NAME,
                            hostname,
                            session_name + '.json')
    
        def unsaved_files(self):
        '''Lists files that have modified Augeas DOM but the changes have not
        been written to the filesystem yet, used by `self.save()` and
        ApacheConfigurator to check the file state.
    
        @certbot_util.patch_get_utility()
    def test_successful_choice(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 3)
        self.assertEqual(self.vhosts[3], self._call(self.vhosts))
    
    
Credentials
-----------
    
    Use of this plugin requires a configuration file containing DigitalOcean API
credentials, obtained from your DigitalOcean account's `Applications & API
Tokens page <https://cloud.digitalocean.com/settings/api/tokens>`_.
    
      Args:
    clean_lines: A CleansedLines instance containing the file.
    nesting_state: A NestingState instance which maintains information about
                   the current stack of nested blocks being parsed.
    expr: The expression to check.
  Returns:
    True, if token looks like a type.
  '''
  # Keep only the last token in the expression
  last_word = Match(r'^.*(\b\S+)$', expr)
  if last_word:
    token = last_word.group(1)
  else:
    token = expr
    
    from ycm.client.base_request import BaseRequest, BuildRequestData
from ycm.vimsupport import PostVimMessage
    
    
class ShutdownRequest( BaseRequest ):
  def __init__( self ):
    super( ShutdownRequest, self ).__init__()
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithoutHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'address': None,
    'port': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )
    
    
def KeywordsFromSyntaxListOutput_StatementAndTypeGroups_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             links to Statement
bargroup xxx zoo goo
             links to Type''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )