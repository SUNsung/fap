
        
        # The master toctree document.
master_doc = 'index'
    
        def get_all_names_answer(self):
        '''Returns the set of domain names that the plugin should find'''
        if self._all_names:
            return self._all_names
        else:
            raise errors.Error('No configuration file loaded')
    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#html_use_opensearch = ''
    
        @mock.patch('certbot.display.enhancements.util')
    def test_cancel(self, mock_util):
        mock_util().menu.return_value = (display_util.CANCEL, 1)
        self.assertFalse(self._call())
    
    print 'JS_OUTPUTS := ' + ' '.join(outputs)
print 'DEFS_SUCCESS := 1'

    
            def mako_module_path(filename, uri):
            filename = filename.lstrip('/').replace('/', '-')
            path = os.path.join(module_directory, filename + '.py')
            return os.path.abspath(path)
    else:
        # disable caching templates since we don't know where they should go.
        module_directory = mako_module_path = None
    
        @require_oauth2_scope('read')
    @validate(
        user=VAccountByName('username'),
    )
    @api_doc(
        section=api_section.users,
        uri='/api/v1/user/{username}/trophies',
    )
    def GET_usertrophies(self, user):
        '''Return a list of trophies for the a given user.'''
        return self.api_wrapper(get_usertrophies(user))
    
    from reddit_base import RedditController, UnloggedUser
from r2.lib.pages import (ButtonLite, ButtonDemoPanel, WidgetDemoPanel,
                          BoringPage)
from r2.lib.pages.things import wrap_links
from r2.models import *
from r2.lib.validator import *
from pylons import request, response
from pylons import tmpl_context as c
from pylons.i18n import _
    
            return HelpPage(_('help'),
                        content = Embed(content=output),
                        show_sidebar = None).render()