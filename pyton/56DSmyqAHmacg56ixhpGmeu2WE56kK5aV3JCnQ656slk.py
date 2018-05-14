
        
        
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
    from httpie.plugins.base import AuthPlugin
    
      # Add discrete features of the predicted parse tree so far, like in Parsey
  # McParseface.
  parser.add_fixed_feature(name='labels', embedding_dim=16,
                           fml=' '.join([
                               'stack.child(1).label',
                               'stack.child(1).sibling(-1).label',
                               'stack.child(-1).label',
                               'stack.child(-1).sibling(1).label',
                               'stack(1).child(1).label',
                               'stack(1).child(1).sibling(-1).label',
                               'stack(1).child(-1).label',
                               'stack(1).child(-1).sibling(1).label',
                               'stack.child(2).label',
                               'stack.child(-2).label',
                               'stack(1).child(2).label',
                               'stack(1).child(-2).label']))
    
    cc_library(
    name = 'mst_solver',
    hdrs = ['mst_solver.h'],
    deps = [
        ':disjoint_set_forest',
        '//syntaxnet:base',
        '@org_tensorflow//tensorflow/core:lib',
    ],
)
    
      def __init__(self):
    self.spec = spec_pb2.MasterSpec()
    self.hyperparams = spec_pb2.GridPoint()
    self.lookup_component = {
        'previous': MockComponent(self, spec_pb2.ComponentSpec())
    }
    
            # reset stats on high iter-request times caused by client restarts
        if delta > 3: # seconds
            self._reset_stats()
            return ''
    
        def _genspider(self, module, name, domain, template_name, template_file):
        '''Generate the spider module, based on the given template'''
        tvars = {
            'project_name': self.settings.get('BOT_NAME'),
            'ProjectName': string_camelcase(self.settings.get('BOT_NAME')),
            'module': module,
            'name': name,
            'domain': domain,
            'classname': '%sSpider' % ''.join(s.capitalize() \
                for s in module.split('_'))
        }
        if self.settings.get('NEWSPIDER_MODULE'):
            spiders_module = import_module(self.settings['NEWSPIDER_MODULE'])
            spiders_dir = abspath(dirname(spiders_module.__file__))
        else:
            spiders_module = None
            spiders_dir = '.'
        spider_file = '%s.py' % join(spiders_dir, module)
        shutil.copyfile(template_file, spider_file)
        render_templatefile(spider_file, **tvars)
        print('Created spider %r using template %r ' % (name, \
            template_name), end=('' if spiders_module else '\n'))
        if spiders_module:
            print('in module:\n  %s.%s' % (spiders_module.__name__, module))
    
        def post_process(self, output):
        occurrences = 0
        for x in output:
            if isinstance(x, self.obj_type):
                occurrences += 1
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
    # Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr'
#html_search_language = 'en'
    
        if headers:
        response.headers = headers
    
    
class AskTest(unittest.TestCase):
    '''Test the ask method.'''
    def setUp(self):
        logging.disable(logging.CRITICAL)
    
    # Documents to append as an appendix to all manuals.
#latex_appendices = []
    
    
  def IsAllowed( self, diagnostic ):
    # NOTE: a diagnostic IsAllowed() ONLY if NO filters match it
    for filterMatches in self._filters:
      if filterMatches( diagnostic ):
        return False
    
    from hamcrest import assert_that, equal_to
from ycm.diagnostic_filter import DiagnosticFilter
    
    
def KeywordsFromSyntaxListOutput_JunkIgnored_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
--- Syntax items ---
foogroup xxx foo bar
             zoo goo
             links to Statement
Spell        cluster=NONE
NoSpell      cluster=NONE''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
    
def _EndsWithPython( path ):
  '''Check if given path ends with a python 2.7 or 3.4+ name.'''
  return path and PYTHON_BINARY_REGEX.search( path ) is not None
    
    import os
import subprocess
import os.path as p
import sys
    
    def get_api_subtype():
    if is_api() and c.render_style.startswith('api-'):
        return c.render_style[4:]
    
    # class specific overrides
api('link',          LinkJsonTemplate)
api('promotedlink',  PromotedLinkJsonTemplate)
api('message',       MessageJsonTemplate)
api('subreddit',     SubredditJsonTemplate)
api('labeledmulti',  LabeledMultiJsonTemplate)
api('reddit',        RedditJsonTemplate)
api('panestack',     PanestackJsonTemplate)
api('htmlpanestack', NullJsonTemplate)
api('listing',       ListingJsonTemplate)
api('searchlisting', SearchListingJsonTemplate)
api('userlisting',   UserListingJsonTemplate)
api('usertableitem', UserTableItemJsonTemplate)
api('account',       AccountJsonTemplate)
    
        @require_oauth2_scope('mysubreddits')
    @validate(
        VUser(),
        friend_rel=VFriendOfMine('username'),
    )
    @api_doc(api_section.users, uri='/api/v1/me/friends/{username}')
    def GET_friends(self, friend_rel):
        '''Get information about a specific 'friend', such as notes.'''
        rel_view = FriendTableItem(friend_rel)
        return self.api_wrapper(FriendTableItemJsonTemplate().data(rel_view))