
        
        def shorten_title(title):
    m1 = re.search('[[0-9]*]', title)
    m2 = re.search(''.*'', title)
    if m1:
        title = m1.group(0)
    if m2:
        title = ' '.join((title, m2.group(0)))   
    return title[:50] + ' [...]'    
    
    from __future__ import with_statement
import atexit
import multiprocessing
import threading
import weakref
import sys
    
    
def KeywordsFromSyntaxListOutput_Basic_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             zoo goo
             links to Statement''' ),
              contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
    
def setUpPackage():
  # We treat warnings as errors in our tests because warnings raised inside Vim
  # will interrupt user workflow with a traceback and we don't want that.
  warnings.filterwarnings( 'error' )
  # We ignore warnings from nose as we are not interested in them.
  warnings.filterwarnings( 'ignore', module = 'nose' )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        # when mako loads a previously compiled template file from its cache, it
    # doesn't check that the original template path matches the current path.
    # in the event that a new plugin defines a template overriding a reddit
    # template, unless the mtime newer, mako doesn't update the compiled
    # template. as a workaround, this makes mako store compiled templates with
    # the original path in the filename, forcing it to update with the path.
    if 'cache_dir' in app_conf:
        module_directory = os.path.join(app_conf['cache_dir'], 'templates')
    
    def api_type(subtype = ''):
    return 'api-' + subtype if subtype else 'api'
    
        FRIEND_JSON_SPEC = VValidatedJSON.PartialObject({
        'name': VAccountByName('name'),
        'note': VLength('note', 300),
    })
    FRIEND_JSON_VALIDATOR = VValidatedJSON('json', spec=FRIEND_JSON_SPEC,
                                           body=True)
    @require_oauth2_scope('subscribe')
    @validate(
        VUser(),
        friend=VAccountByName('username'),
        notes_json=FRIEND_JSON_VALIDATOR,
    )
    @api_doc(api_section.users, json_model=FRIEND_JSON_VALIDATOR,
             uri='/api/v1/me/friends/{username}')
    def PUT_friends(self, friend, notes_json):
        '''Create or update a 'friend' relationship.
    
        @validate(buttonimage = VInt('i', 0, 14),
              title = nop('title'),
              url = VSanitizedUrl('url'),
              newwindow = VBoolean('newwindow', default = False),
              styled = VBoolean('styled', default=True))
    def GET_button_lite(self, buttonimage, title, url, styled, newwindow):
        c.user = UnloggedUser([c.lang])
        c.user_is_loggedin = False
        c.render_style = 'js'