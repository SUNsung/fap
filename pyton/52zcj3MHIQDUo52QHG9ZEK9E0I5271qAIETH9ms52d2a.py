
        
        
def cut_module_meta(app, what, name, obj, options, lines):
    '''Remove metadata from autodoc output.'''
    if what != 'module':
        return
    
    
@bp.before_app_request
def load_logged_in_user():
    '''If a user id is stored in the session, load the user object from
    the database into ``g.user``.'''
    user_id = session.get('user_id')
    
    
@pytest.fixture
def client(app):
    '''A test client for the app.'''
    return app.test_client()
    
    
def test_init_db_command(runner, monkeypatch):
    class Recorder(object):
        called = False
    
            Otherwise works as the :meth:`~flask.Flask.errorhandler` decorator
        of the :class:`~flask.Flask` object.
        '''
        def decorator(f):
            self.record_once(lambda s: s.app._register_error_handler(
                self.name, code_or_exception, f))
            return f
        return decorator
    
        Either you can fill the config from a config file::
    
        def __init__(self, request):
        exc = request.routing_exception
        buf = ['A request was sent to this URL (%s) but a redirect was '
               'issued automatically by the routing system to '%s'.'
               % (request.url, exc.new_url)]
    
    
def main():
    import os
    import re
    import shutil
    import sys
    dests = sys.argv[1:] or ['.']
    filename = re.sub('\.pyc$', '.py', __file__)
    
    
@pytest.mark.parametrize('script, output, help_text, result', [
    ('apt-get isntall vim', invalid_operation('isntall'),
     apt_get_help, 'apt-get install vim'),
    ('apt saerch vim', invalid_operation('saerch'),
     apt_help, 'apt search vim'),
])
def test_get_new_command(set_help, output, script, help_text, result):
    set_help(help_text)
    assert get_new_command(Command(script, output))[0] == result

    
    describe-table                           | get-item
list-tables                              | put-item
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_get_new_command(brew_no_available_formula):
    assert get_new_command(Command('brew install elsticsearch',
                                   brew_no_available_formula))\
        == 'brew install elasticsearch'
    
    
@pytest.mark.parametrize('command', [
    Command('cargo buid', no_such_subcommand_old),
    Command('cargo buils', no_such_subcommand)])
def test_match(command):
    assert match(command)
    
    
def get_guests():
    # Loop through vzhosts
    for h in vzhosts:
        # SSH to vzhost and get the list of guests in json
        pipe = Popen(['ssh', h, 'vzlist', '-j'], stdout=PIPE, universal_newlines=True)
    
        def get_host(self, hostname):
        '''
        Read info about a specific host or VM from cache or VMware API.
        '''
        inv = self._get_cache(hostname, None)
        if inv is not None:
            return inv
    
        # print('username: %s keyname: %s' % (username, keyname))
    
    
def CheckCall( args, **kwargs ):
  try:
    subprocess.check_call( args, **kwargs )
  except subprocess.CalledProcessError as error:
    sys.exit( error.returncode )
    
    
def _JsonFromFuture( future ):
  response = future.result()
  _ValidateResponseObject( response )
  if response.status_code == BaseRequest.Requests().codes.server_error:
    raise MakeServerException( response.json() )
    
    
def FormatDebugInfoResponse( response ):
  if not response:
    return 'Server errored, no debug info from server\n'
  message = _FormatYcmdDebugInfo( response )
  completer = response[ 'completer' ]
  if completer:
    message += _FormatCompleterDebugInfo( completer )
  return message
    
        return self._cached_response if self._cached_response else []
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from hamcrest import assert_that, equal_to
from ycm.diagnostic_filter import DiagnosticFilter
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseDone( [] ) ) as mock_future:
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( True, response ) )
    
    
def ExtractKeywordsFromGroup_Commas_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo, bar,',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )