
        
            return app
    
            self.assertTrue(self.vhost1.same_server(self.vhost2))
        self.assertTrue(no_name1.same_server(no_name2))
    
    # If true, SmartyPants will be used to convert quotes and dashes to
# typographically correct entities.
#html_use_smartypants = True
    
    
@zope.interface.implementer(interfaces.IAuthenticator)
@zope.interface.provider(interfaces.IPluginFactory)
class Authenticator(common.Plugin):
    '''Example Authenticator.'''
    
    print 'PLUGIN_I18N_PATHS := ' + ','.join(os.path.relpath(plugin.path)
                                         for plugin in plugins
                                         if plugin.needs_translation)
    
    if __name__ == '__main__':
    main()

    
    def get_api_subtype():
    if is_api() and c.render_style.startswith('api-'):
        return c.render_style[4:]
    
    api('reltableitem', RelTableItemJsonTemplate)
api('bannedtableitem', BannedTableItemJsonTemplate)
api('mutedtableitem', MutedTableItemJsonTemplate)
api('invitedmodtableitem', InvitedModTableItemJsonTemplate)
api('friendtableitem', FriendTableItemJsonTemplate)
    
    from pylons import request
from pylons import tmpl_context as c
from pylons import app_globals as g