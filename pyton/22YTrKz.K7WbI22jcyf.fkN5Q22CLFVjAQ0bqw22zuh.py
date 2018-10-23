
        
            def score(self):
        total_value = 0
        for card in self.cards:
            total_value += card.value
        return total_value
    
    
class User(object):
    
        def take_spot(self, spot):
        self.spots_taken.append(spot)
    
    
if __name__ == '__main__':
    RemoveDuplicateUrls.run()

    
        def bfs(self, source, dest):
        if source is None:
            return False
        queue = deque()
        queue.append(source)
        source.visit_state = State.visited
        while queue:
            node = queue.popleft()
            print(node)
            if dest is node:
                return True
            for adjacent_node in node.adj_nodes.values():
                if adjacent_node.visit_state == State.unvisited:
                    queue.append(adjacent_node)
                    adjacent_node.visit_state = State.visited
        return False
    
    print(__name__)

    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
    
init_zshrc = u'''echo '
export SHELL=/usr/bin/zsh
export HISTFILE=~/.zsh_history
echo > $HISTFILE
export SAVEHIST=100
export HISTSIZE=100
eval $(thefuck --alias {})
setopt INC_APPEND_HISTORY
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.zshrc'''
    
    
@pytest.mark.parametrize('before, after', [
    ('brew install sshfs',
     'brew cask install osxfuse && brew install sshfs')])
def test_get_new_command(before, after):
    command = Command(before, output)
    assert get_new_command(command) == after

    
        # Used only when requested with --check-status:
    ERROR_HTTP_3XX = 3
    ERROR_HTTP_4XX = 4
    ERROR_HTTP_5XX = 5
    
        @property
    def content_type(self):
        '''Return the message content type.'''
        ct = self._orig.headers.get('Content-Type', '')
        if not isinstance(ct, str):
            ct = ct.decode('utf8')
        return ct
    
    
class DigestAuthPlugin(BuiltinAuthPlugin):
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    import pytest
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
        def test_CRLF_ugly_response(self, httpbin):
        r = http('--pretty=none', 'GET', httpbin.url + '/get')
        self._validate_crlf(r)
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
    Linkfix - a companion to sphinx's linkcheck builder.
    
    # Apply monkey patches to fix issues in external libraries
from . import _monkeypatches
del _monkeypatches
    
        if settings is None:
        settings = get_project_settings()
        # set EDITOR from environment if available
        try:
            editor = os.environ['EDITOR']
        except KeyError: pass
        else:
            settings['EDITOR'] = editor
    check_deprecated_settings(settings)
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--spider', dest='spider',
            help='use this spider')
        parser.add_option('--headers', dest='headers', action='store_true', \
            help='print response HTTP headers instead of body')
        parser.add_option('--no-redirect', dest='no_redirect', action='store_true', \
            default=False, help='do not handle HTTP 3xx status codes and print response as-is')
    
                if depth < opts.depth:
                for req in requests:
                    req.meta['_depth'] = depth + 1
                    req.meta['_callback'] = req.callback
                    req.callback = callback
                return requests
    
            # kept for old-style HTTP/1.0 downloader context twisted calls,
        # e.g. connectSSL()
        def getContext(self, hostname=None, port=None):
            return self.getCertificateOptions().getContext()
    
    import logging
from twisted.internet import defer
import six
from scrapy.exceptions import NotSupported, NotConfigured
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.misc import load_object
from scrapy.utils.python import without_none_values
from scrapy import signals
    
        doctest.testmod()

    
        @staticmethod
    def _static_method_1():
        print('executed method 1!')
    
    
@coroutine
def coroutine3(target):
    while True:
        request = yield
        if 20 < request <= 30:
            print('request {} handled in coroutine 3'.format(request))
        else:
            target.send(request)
    
        def rename(self, src, dest):
        print(u'renaming %s to %s' % (src, dest))
        os.rename(src, dest)
    
        def prepareReporting(self):
        rvalue = self._db.insert()
        if rvalue == -1:
            self._tc.setProblem(1)
            self._reporter.prepare()
    
    *TL;DR80
Provides the ability to restore an object to its previous state.
'''
    
    
def main():
    message_center = Provider()
    
    
class OrSpecification(CompositeSpecification):
    _one = Specification()
    _other = Specification()
    
    
class StrategyExample:
    def __init__(self, func=None):
        self.name = 'Strategy Example 0'
        if func is not None:
            self.execute = types.MethodType(func, self)
    
    ### OUTPUT ###
# generic_visit A
# visit_B B
# visit_B C

    
        def now(self):
        current_time_is_always_midnight = '24:01'
        return current_time_is_always_midnight

    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
    
class Blackboard(object):
    def __init__(self):
        self.experts = []
        self.common_state = {
            'problems': 0,
            'suggestions': 0,
            'contributions': [],
            'progress': 0,  # percentage, if 100 -> task is finished
        }
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  def Start( self ):
    self._results = self._omni_completer.ComputeCandidates( self.request_data )
    
      for diagnostic_range in diagnostic[ 'ranges' ]:
    patterns.append( vimsupport.GetDiagnosticMatchPattern(
      diagnostic_range[ 'start' ][ 'line_num' ],
      diagnostic_range[ 'start' ][ 'column_num' ],
      diagnostic_range[ 'end' ][ 'line_num' ],
      diagnostic_range[ 'end' ][ 'column_num' ] ) )
    
    
def _GetAllDescendentats( root_group ):
  descendants = []
  for child in root_group.children:
    descendants.append( child )
    descendants.extend( _GetAllDescendentats( child ) )
  return descendants
    
      request_data = {
    'start_column': start_column
  }
  request = OmniCompletionRequest( omni_completer, request_data )
  request.Start()
    
      _assert_rejects( f, { 'text' : 'This is an unimportant taco',
                        'kind' : 'WARNING' } )
  _assert_accepts( f, { 'text' : 'This taco will be shown',
                        'kind' : 'ERROR' } )
    
    
# This file provides an UnsafeThreadPoolExecutor, which operates exactly like
# the upstream Python version of ThreadPoolExecutor with one exception: it
# doesn't wait for worker threads to finish before shutting down the Python
# interpreter.
#
# This is dangerous for many workloads, but fine for some (like when threads
# only send network requests). The YCM workload is one of those workloads where
# it's safe (the aforementioned network requests case).