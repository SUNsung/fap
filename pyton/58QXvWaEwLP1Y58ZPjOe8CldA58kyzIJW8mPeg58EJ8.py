
        
        # If false, no index is generated.
#html_use_index = True
    
        def _prime_executor(self):
        # Make sure that the executor is ready to do work before running the
        # tests. This should reduce the probability of timeouts in the tests.
        futures = [self.executor.submit(time.sleep, 0.1)
                   for _ in range(self.worker_count)]
    
    
def _ListOf( config_entry ):
  if isinstance( config_entry, list ):
    return config_entry
    
    
def FormatDebugInfoResponse_NoResponse_test():
  assert_that(
    FormatDebugInfoResponse( None ),
    equal_to( 'Server errored, no debug info from server\n' )
  )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def OverlapLength_SameStrings_test():
  eq_( 6, base.OverlapLength( 'foobar', 'foobar' ) )
    
      python_interpreter = vim.eval( 'g:ycm_server_python_interpreter' )
  if python_interpreter:
    python_interpreter = utils.FindExecutable( python_interpreter )
    if python_interpreter:
      return python_interpreter
    
    
def EndsWithPython_BadPaths_test():
  not_python_paths = [
    None,
    '',
    '/opt/local/bin/vim',
    r'C:\Program Files\Vim\vim74\gvim.exe',
    '/usr/bin/python2.5',
    '/home/user/.pyenv/shims/python3.2',
  ]
    
    from r2.lib.translation import I18N_PATH
from r2.lib.plugin import PluginLoader
from r2.lib import js
    
        @require_oauth2_scope('creddits')
    @validate(
        VUser(),
        user=VAccountByName('username'),
        months=VInt('months', min=1, max=36),
        timeout=VNotInTimeout(),
    )
    @api_doc(
        api_section.gold,
        uri='/api/v1/gold/give/{username}',
    )
    def POST_give(self, user, months, timeout):
        self._gift_using_creddits(
            recipient=user,
            months=months,
            proxying_for=request.POST.get('proxying_for'),
        )

    
        @require_oauth2_scope('identity')
    @validate(
        VUser(),
    )
    @api_doc(
        section=api_section.account,
        uri='/api/v1/me/trophies',
    )
    def GET_trophies(self):
        '''Return a list of trophies for the current user.'''
        return self.api_wrapper(get_usertrophies(c.oauth_user))
    
    class AwardsController(RedditController):