
        
        
if __name__ == '__main__':
    cli()

    
        # set up the templating system
    config['pylons.app_globals'].mako_lookup = TemplateLookup(
        directories=paths['templates'],
        error_handler=handle_mako_error,
        module_directory=module_directory,
        input_encoding='utf-8',
        default_filters=['conditional_websafe'],
        filesystem_checks=getattr(g, 'reload_templates', False),
        imports=[
            'from r2.lib.filters import websafe, unsafe, conditional_websafe',
            'from pylons import request',
            'from pylons import tmpl_context as c',
            'from pylons import app_globals as g',
            'from pylons.i18n import _, ungettext',
        ],
        modulename_callable=mako_module_path,
    )
    
            '''
        try:
            return getattr(stacked_proxy, key)
        except TypeError:
            return default
    
        def register_hooks(self):
        if self._hooks_registered:
            return
    
        @validate(buttontype = VInt('t', 1, 5))
    def GET_button_embed(self, buttontype):
        if not buttontype:
            abort(404)
    
    
class GoogleTagManagerController(MinimalController):
    def pre(self):
        if request.host != g.media_domain:
            # don't serve up untrusted content except on our
            # specifically untrusted domain
            self.abort404()