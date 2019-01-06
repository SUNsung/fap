
        
        
@bp.route('/logout')
def logout():
    '''Clear the current session, including the stored user id.'''
    session.clear()
    return redirect(url_for('index'))

    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
        Defines all the global objects that are proxies to the current
    active context.
    
        @property
    def blueprint(self):
        '''The name of the current blueprint'''
        if self.url_rule and '.' in self.url_rule.endpoint:
            return self.url_rule.endpoint.rsplit('.', 1)[0]
    
        with open(filename) as f:
        contents = re.sub(
            r'^(\s*%s\s*=\s*')(.+?)(')' % pattern,
            inject_version, f.read(),
            flags=re.DOTALL | re.MULTILINE
        )
    
        assert not match(command)
    
    
class RedirectFallbackMiddleware(MiddlewareMixin):
    # Defined as class-level attributes to be subclassing-friendly.
    response_gone_class = HttpResponseGone
    response_redirect_class = HttpResponsePermanentRedirect
    
        if section is not None:
        if section not in sitemaps:
            raise Http404('No sitemap available for section: %r' % section)
        maps = [sitemaps[section]]
    else:
        maps = sitemaps.values()
    page = request.GET.get('p', 1)
    
        @cached_property
    def routers(self):
        if self._routers is None:
            self._routers = settings.DATABASE_ROUTERS
        routers = []
        for r in self._routers:
            if isinstance(r, str):
                router = import_string(r)()
            else:
                router = r
            routers.append(router)
        return routers
    
        def get(self):
        if len(self.config.GAE_APPIDS):
            if len(self.working_appid_list) == 0:
                time_to_reset = 600 - (time.time() - self.last_reset_time)
                if time_to_reset > 0:
                    self.logger.warn('all appid out of quota, wait %d seconds to reset', time_to_reset)
                    time.sleep(time_to_reset)
                    return None
                else:
                    self.logger.warn('reset appid')
                    self.reset_appid()
    
    current_path = os.path.dirname(os.path.abspath(__file__))
root_path = os.path.abspath(os.path.join(current_path, os.pardir, os.pardir, os.pardir))
data_path = os.path.abspath(os.path.join(root_path, os.pardir, os.pardir, 'data', 'gae_proxy'))
if not os.path.isdir(data_path):
    data_path = current_path
    
    
@section Exceptions
    
                        s = snext
                    input.consume()
                    continue
    
        def release(self, marker=None):
        # no resources to release
        pass
    
    
        #Parsing the arguments
    parser = argparse.ArgumentParser()
    parser.add_argument('dir_path', help = 'Path to tldr 'pages' directory')
    parser.add_argument('-c', choices=['solarized-light', 'solarized-dark'], help='Color scheme of the PDF')
    args = parser.parse_args()
    
    loc = args.dir_path
    if args.c == 'solarized-light' or args.c == 'solarized-dark':
        colorscheme = args.c
        
    main(loc, colorscheme)

    
        return result